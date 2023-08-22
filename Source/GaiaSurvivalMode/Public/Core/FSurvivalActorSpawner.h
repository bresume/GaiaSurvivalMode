// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FSurvivalActorSpawner.generated.h"

/**
 * Holds info for spawning an actor.
 */
USTRUCT(BlueprintType,Blueprintable)
struct GAIASURVIVALMODE_API FSurvivalActorSpawner : public FTableRowBase
{

	GENERATED_BODY()

	UPROPERTY()
		int32 SpawnedActors;

public:

	/**
	 * Name for JSON serialization and identification.
	 * This cannot be "None" as this is how the 
	 * spawn system checks to see if the spawner is valid.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FName Name;

	/**
	 * The class to spawn.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftClassPtr<AActor> Class;

	/**
	 * The number of times the actor is spawned.
	 * For loop takes num to spawn -1 so it should be > 0.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 NumToSpawn;

	/**
	 * The time it takes between each spawn.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float SpawnDelayTime;

	//Override the == operator.
	FORCEINLINE bool operator == (const FSurvivalActorSpawner& A) const 
	{
		return Name == A.Name && Class == A.Class && NumToSpawn == A.NumToSpawn && SpawnDelayTime == A.SpawnDelayTime;
	}

	//Increment the number of spawned actors.
	virtual bool OnSpawnActor()
	{
		SpawnedActors++;
		return SpawnedActors>=NumToSpawn;
	}

	virtual int32 GetSpawnedActorNum()
	{
		return SpawnedActors;
	}

	FSurvivalActorSpawner()
	{
		Name = NAME_None;
		Class = nullptr;
		NumToSpawn = 1;
	}
	
	FSurvivalActorSpawner(FName InName, TSoftClassPtr<AActor> InClass, int32 InNumToSpawn)
	{
		Name = InName;
		Class = InClass;
		NumToSpawn = InNumToSpawn;
	}
};
