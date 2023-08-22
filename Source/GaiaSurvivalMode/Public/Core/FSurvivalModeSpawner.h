// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "Core/FSurvivalActorSpawner.h"

#include "FSurvivalModeSpawner.generated.h"

/**
 * The spawner details that are linked to each round.
 */
USTRUCT(BlueprintType,Blueprintable)
struct GAIASURVIVALMODE_API FSurvivalModeSpawner : public FTableRowBase
{

	GENERATED_BODY()

public:

	/**
	 * Name for JSON serialization and identification.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FName Name;

	/**
	 * Actors to spawn.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FSurvivalActorSpawner> ActorsToSpawn;

	/**
	 * Specific rounds for this spawner to ignore.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<int32> IgnoreRounds;

	/**
	 * Ignore the round every x rounds.
	 * I.E. if the value == 5 we won't use this spawner every 5 rounds.
	 * If it's <=0 then the value is ignored and this won't be used 
	 * unless the IgnoreRounds property has a matching round.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 IgnoreEveryXRounds;

	/**
	 * Specific rounds for this spawner to be activated.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<int32> ActiveRounds;

	/**
	 * Active on the round every x rounds.
	 * I.E. if the value == 5 we will use this spawner every 5 rounds.
	 * If it's <=0 then the value is ignored
	 * unless the ActiveRounds property has a matching round.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 ActivateEveryXRounds;

	//Check if the current round should be ignored.
	virtual bool IgnoreRound(int32 CurrentRound);

	//Check if the current round should be used.
	virtual bool UseRound(int32 CurrentRound);

	//Check to see if this spawner can be used this round.
	virtual bool ValidForRound(int32 CurrentRound){return !IgnoreRound(CurrentRound) && UseRound(CurrentRound);}

	//Overload the == operator.
	FORCEINLINE bool operator == (const FSurvivalModeSpawner& A) const 
	{
		return Name == A.Name && IgnoreEveryXRounds == A.IgnoreEveryXRounds && ActivateEveryXRounds == A.ActivateEveryXRounds;
	}

	FSurvivalModeSpawner()
	{
		Name = NAME_None;
		ActorsToSpawn.Empty();
		IgnoreRounds.Empty();
		IgnoreEveryXRounds = 0;
		ActiveRounds.Empty();
		ActivateEveryXRounds = 0;
	}
	
	FSurvivalModeSpawner(FName InName,		
		TArray<FSurvivalActorSpawner> InActorsToSpawn,
		TArray<int32> InIgnoreRounds,
		int32 InIgnoreEveryXRounds,
		TArray<int32> InActiveRounds,
		int32 InActivateEveryXRounds
	)
	{
		Name = InName;
		ActorsToSpawn = InActorsToSpawn;
		IgnoreRounds = InIgnoreRounds;
		IgnoreEveryXRounds = InIgnoreEveryXRounds;
		ActiveRounds = InActiveRounds;
		ActivateEveryXRounds = InActivateEveryXRounds;
	}
};
