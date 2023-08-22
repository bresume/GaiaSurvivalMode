// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"

#include "Core/SurvivalSpawnPointLink.h"
#include "Core/FSurvivalSpawnPoint.h"

#include "SurvivalModeSpawnPoint.generated.h"

/**
 * This is a default class for the spawn point, but you can create your own.
 * Just make sure that your new actor implements ISpawnPoint.
*/
UCLASS(BlueprintType,Blueprintable)
class GAIASURVIVALMODE_API ASurvivalModeSpawnPoint : public AActor, public ISurvivalSpawnPointLink
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASurvivalModeSpawnPoint();

	/**
	 * If this data table row handle is valid, we use this to load the spawn point.
	 * Otherwise we use the DefaultSpawnPoint property.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "SpawnPoint")
		FDataTableRowHandle SpawnPointRow;

	/**
	 * Used if SpawnPointRow is not valid.
	 * Otherise this is ignored.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "SpawnPoint")
		FSurvivalSpawnPoint DefaultSpawnPoint;

	/**
	 * The capsule component to use for collision detection.
	*/
	UPROPERTY(VisibleAnywhere)
		UCapsuleComponent* Capsule;

	/**
	 * The arrow component to use for spawning the actor.
	*/
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* Arrow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/**
	 * BP overridable function for setting the spawn poin.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SpawnPoint")
		void OnSetSpawnPoint(FSurvivalSpawnPoint Point);
	virtual void OnSetSpawnPoint_Impl(FSurvivalSpawnPoint Point); //C++ overridable function.

	/**
	 * BP overridable function for spawning the actor.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SpawnPoint")
		void HandleSpawnActor(TSubclassOf<AActor> Class, 
		FTransform Transform, AActor* InOwner, APawn* InInstigator);
	virtual void HandleSpawnActor_Impl(TSubclassOf<AActor> Class, 
		FTransform Transform, AActor* InOwner, APawn* InInstigator); //C++ overridable function.

	/**
	 * BP overridable function for resetting bIsBusy.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SpawnPoint")
		void HandleResetCooldown();
	virtual void HandleResetCooldown_Impl(); //C++ overridable function.

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Setup replicated props.
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Set the spawn point on the server.
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "SpawnPoint")
		void Server_OnSetSpawnPoint(FSurvivalSpawnPoint Point);
	bool Server_OnSetSpawnPoint_Validate(FSurvivalSpawnPoint Point);

	//Spawn the actor on the server
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "SpawnPoint")
		void Server_HandleSpawnActor(TSubclassOf<AActor> Class, 
		FTransform Transform, AActor* InOwner, APawn* InInstigator);
	bool Server_HandleSpawnActor_Validate(TSubclassOf<AActor> Class, 
		FTransform Transform, AActor* InOwner, APawn* InInstigator);

	UFUNCTION(BlueprintPure,Category = "SpawnPoint|Getters")
		AActor* GetCurrentSpawnedActor();

	UFUNCTION(BlueprintPure,Category = "SpawnPoint|Getters")
		FTimerHandle GetResetHandle(){return ResetHandle;}

	//Override interface functions.
	virtual FSurvivalSpawnPoint GetSurvivalSpawnPoint_Implementation() override;

	virtual bool SetSurvivalSpawnPoint_Implementation(FSurvivalSpawnPoint Point) override;
	
	virtual bool IsBusy_Implementation() override;
	
	virtual AActor* RequestSpawnActor_Implementation(TSubclassOf<AActor> Class, 
		FTransform Transform, AActor* Owner = nullptr, APawn* Instigator = nullptr) override;

private:

	UPROPERTY(Replicated)
		AActor* CurrentSpawnedActor;

	UPROPERTY(Replicated)
		FTimerHandle ResetHandle;

	UPROPERTY(Replicated)
		FSurvivalSpawnPoint SpawnPoint;

	UPROPERTY(Replicated)
		bool bIsBusy;

};
