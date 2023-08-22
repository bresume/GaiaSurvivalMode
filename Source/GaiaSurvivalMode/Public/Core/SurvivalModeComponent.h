// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Core/FSurvivalModeDetails.h"
#include "Blueprint/UserWidget.h"

#include "Core/FSurvivalModeDetails.h"

#include "SurvivalModeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoundStart, USurvivalModeComponent*, Component, bool, bBossRound);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoundEnd, USurvivalModeComponent*, Component, bool, bBossRound);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStart, USurvivalModeComponent*, Component);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameEnd, USurvivalModeComponent*, Component, const FText&, Reason);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnemyDestroyed, USurvivalModeComponent*, Component, AActor*, Actor);

/**
 * The component that handles all of the survival mode logic.
 * Typically set in the game state, but can also be put in a replicated actor.
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class GAIASURVIVALMODE_API USurvivalModeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USurvivalModeComponent();

	/**
	 * Notify that a round has started.
	*/
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category = "Survival")
		FRoundStart RoundStart;

	/**
	 * Notify that a round has ended.
	*/
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category = "Survival")
		FRoundEnd RoundEnd;

	/**
	 * Notify that the game has started.
	*/
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category = "Survival")
		FGameStart GameStart;

	/**
	 * Notify that the game has ended.
	*/
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category = "Survival")
		FGameEnd GameEnd;

	/**
	 * Notify that an enemy has been destroyed.
	*/
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category = "Survival")
		FOnEnemyDestroyed OnEnemyDestroyed;

	/**
	 * A row used to gather the survival mode details.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Survival")
		FDataTableRowHandle DetailsRow;

	/**
	 * The hardcoded details if the row is not valid.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Survival")
		FSurvivalModeDetails DefaultSurvivalDetails;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/**
	 * BP overridable function.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void StartRound();
	virtual void StartRound_Impl(); //C++ override.

	/**
	 * BP overridable function.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void EndRound();
	virtual void EndRound_Impl(); //C++ override.

	/**
	 * BP overridable function.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void StartGame();
	virtual void StartGame_Impl(); //C++ override.

	/**
	 * BP overridable function.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void EndGame(const FText& Reason);
	virtual void EndGame_Impl(const FText& Reason); //C++ override.

	/**
	 * BP overridable function. 
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void SetSurvivalDetails(FSurvivalModeDetails Details);
	virtual void SetSurvialDetails_Impl(FSurvivalModeDetails Details);

	/**
	 * BP overridable function.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void EnemyDestroyed(AActor* Actor);
	virtual void EnemyDestroyed_Impl(AActor* Actor);

	/**
	 * Handle actor spawning.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "Survival|Internal")
		void HandleSpawnActor();
	virtual void HandleSpawnActor_Impl();

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * This function is used to remove an enemy from the SpawnedActors array.
	 * This is how we determine if the round is over.
	 * If your enemies are not destroyed using the Destroy() c++ method or the DestroyActor() BP method,
	 * then you will need to call this function manually.
	 * By default we tie into the actor's base OnDestroyed() method.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_EnemyDestroyed(AActor* Actor);
	bool Server_EnemyDestroyed_Validate(AActor* Actor);

	/**
	 * Set the survival details variable.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_SetSurvivalDetails(FSurvivalModeDetails Details);
	bool Server_SetSurvivalDetails_Validate(FSurvivalModeDetails Details);

	/**
	 * Start the round.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_StartRound();
	bool Server_StartRound_Validate();
	
	/**
	 * End the round.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_EndRound();
	bool Server_EndRound_Validate();

	/**
	 * Start the game.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_StartGame();
	bool Server_StartGame_Validate();
	
	/**
	 * End the game.
	*/
	UFUNCTION(Server,Reliable,WithValidation,BlueprintCallable,Category = "Survival")
		void Server_EndGame(const FText& Reason);
	bool Server_EndGame_Validate(const FText& Reason);

	/**
	 * Multicast our sound.
	*/
	UFUNCTION(NetMulticast,Reliable,BlueprintCallable,Category = "Survival")
		void Multicast_Sound(const TSoftObjectPtr<USoundBase>& Sound);

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		TArray<AActor*> GetSpawnedActors(){return SpawnedActors;}

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		TArray<FSurvivalModeSpawner> GetSpawners(){return Spawners;}

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		FSurvivalActorSpawner GetCurrentSpawner(){return CurrentSpawner;}

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		FSurvivalModeDetails GetSurvivalDetails(){return SurvivalDetails;}

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		FTimerHandle GetRoundHandle(){return RoundHandle;}

	/**
	 * Return the value.
	*/
	UFUNCTION(BlueprintPure,Category = "Survival|Getters")
		FTimerHandle GetSpawnHandle(){return SpawnHandle;}

	/**
	 * Find the spawners for the current round.
	*/
	UFUNCTION(BlueprintPure,BlueprintNativeEvent,Category = "Survival")
		TArray<FSurvivalModeSpawner> FindSpawnersForRound();

private:

	UPROPERTY(Replicated)
		TArray<AActor*> SpawnedActors;

	UPROPERTY(Replicated)
		TArray<FSurvivalModeSpawner> Spawners;

	UPROPERTY(Replicated)
		FSurvivalActorSpawner CurrentSpawner;

	UPROPERTY(Replicated)
		FTimerHandle RoundHandle;

	UPROPERTY(Replicated)
		FTimerHandle SpawnHandle;

	UPROPERTY(Replicated)
		FSurvivalModeDetails SurvivalDetails;	
		
};
