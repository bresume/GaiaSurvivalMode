// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Core/FSurvivalSpawnPoint.h"
#include "Core/FSurvivalModeDetails.h"
#include "Core/FSurvivalModeSpawner.h"

#include "GaiaSurvivalFunctions.generated.h"

/**
 * Functions for the Gaia Survival Game Mode.
 */
UCLASS()
class GAIASURVIVALMODE_API UGaiaSurvivalFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/**
	 * Determines if the spawn point allows spawn. 
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (CompactNodeTitle = "ClassAllowed"))
		static bool IsClassAllowedForSpawner(FSurvivalSpawnPoint A, UClass* Class);

	/**
	 * Get the spawners that implement ISurvivalSpawnPointLink and have the desired tags (typically gathered from FSurvivalSpawnPoint).
	 * Returns false if no actors were found. 
	 * If Tags.Num<=0 then we grab all of the spawners.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))
		static bool GetSpawnersWithTags(UObject* WorldContextObject,TArray<FName> Tags, TArray<AActor*>& OutActors);

	/**
	 * Find a spawner from the list of spawners.
	 * Remember to make sure the spawner implements ISurvivalSpawnPointLink.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))
		static bool FindNextAvailableSpawner(TArray<AActor*> Actors, AActor*& Value);

	/**
	 * Get the current round from the details.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (CompactNodeTitle = "Round"))
		static int32 GetCurrentRound(FSurvivalModeDetails A);

	/**
	 * Complete the round in the details.
	 * Returns true if the game is over.
	 * This is handled internally, but it is exposed to BP if you want your own custom functionality.
	 * See USurvivalModeComponent for more details.
	 * NOTE: You will need to override the functions in the SurvivalModeComponent to incorporate your custom functions.
	 * 	If you do not do this, you will duplicate the function.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))
		static bool CompleteRound(FSurvivalModeDetails A);

	/**
	 * Determines if the spawner ignores the round.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))
		static bool IgnoreRound(FSurvivalModeSpawner A, int32 CurrentRound);

	/**
	 * Determines if the spawner will use the round.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))
		static bool UseRound(FSurvivalModeSpawner A, int32 CurrentRound);

	/**
	 * Determines if the spawner spawns during a boss round.
	*/
	UFUNCTION(BlueprintPure,Category = "SurvivalMode", meta = (WorldContext = "WorldContextObject"))		
		static bool IsBossRound(FSurvivalModeDetails A);

};
