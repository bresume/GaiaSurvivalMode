// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Core/FSurvivalSpawnPoint.h"

#include "SurvivalSpawnPointLink.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USurvivalSpawnPointLink : public UInterface
{
	GENERATED_BODY()
};

/**
 * An interface to communicate with the spawn point.
 * Used so you can create your own class if desired.
 */
class GAIASURVIVALMODE_API ISurvivalSpawnPointLink
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/**
	 * Return the spawn point details.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SurvivalSpawnPoint")
		FSurvivalSpawnPoint GetSurvivalSpawnPoint();

	/**
	 * Set the spawn point details.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SurvivalSpawnPoint")
		bool SetSurvivalSpawnPoint(FSurvivalSpawnPoint Point);

	/**
	 * Determines if the spawner is "busy", meaning that it cannot be used to spawn an actor.
	 * This can be used in many ways, but my default implementation is for using it for cooldowns 
	 * (see FSurvivalSpawnPoint.h for more info)
	 * or for overlaps, I.E. if a player or spawned actor is currently overlapping the spawner, we set it as busy.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SurvivalSpawnPoint")
		bool IsBusy();

	/**
	 * Request that an actor be spawned.
	 * Will return nullptr if the spawn fails.
	*/
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category = "SurvivalSpawnPoint")
		AActor* RequestSpawnActor(TSubclassOf<AActor> Class, FTransform Transform, AActor* Owner = nullptr, APawn* Instigator = nullptr);

};
