// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FSurvivalSpawnPoint.generated.h"

/**
 * The struct that holds all of the spawn point details.
 */
USTRUCT(BlueprintType,Blueprintable)
struct GAIASURVIVALMODE_API FSurvivalSpawnPoint : public FTableRowBase
{

	GENERATED_BODY()

public:

	/**
	 * Name for JSON serialization and identification.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FName Name;

	/**
	 * The priority for the spawner. 
	 * If <=-1 the priority is ignored.
	 * Priorities are managed from lowest to highest.
	 * I.E. 0 has a higher priority than 1.
	 * Higher priority spawners are preferred first, 
	 * but will be ignored for lower priority spawners if they are "busy".
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 Priority;

	/**
	 * The time it takes to cooldown after spawning.
	 * If <= 0 there will be no cooldown time.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float CooldownTime;

	/**
	 * Determines if a class if allowed to be spawned by the spawner.
	 * If there are no elements in the array, then it can be ignored.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<TSoftClassPtr<AActor>> AllowedClasses;

	/**
	 * Determines if a class with a tag is allowed to be spawned by the spawner.
	 * If there are no elements in the array, then it can be ignored.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FName> AllowedTags;

	/**
	 * The tags to give to the spawner for lookups and filtering.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FName> SpawnerTags;

	/**
	 * The filters to use when checking for an overlapping actor.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<TSoftClassPtr<AActor>> OverlapFilters;

	/**
	 * By default, this is used when the SurvivalModeSpawnPoint is the spawn point for the system.
	 * If true, we will take the Transform property in RequestSpawnActor and use that instead of the build in transform for the spawn point.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		bool bAllowTransformOverride;

	//Check to see if we allow the current class.
	virtual bool IsClassAllowed(UClass* Class);

	//Overload the == operator.
	FORCEINLINE bool operator == (const FSurvivalSpawnPoint& A) const 
	{
		return Name == A.Name && Priority == A.Priority && CooldownTime == A.CooldownTime && bAllowTransformOverride == A.bAllowTransformOverride;
	}

	FSurvivalSpawnPoint()
	{
		Name = NAME_None;
		Priority = 0;
		CooldownTime = -1.f; 
		AllowedClasses.Empty();
		AllowedTags.Empty();
		SpawnerTags.Empty();
		OverlapFilters.Empty();
		bAllowTransformOverride = false;
	}

	FSurvivalSpawnPoint(FName InName,		
		int32 InPriority,
		float InCooldownTime,
		TArray<TSoftClassPtr<AActor>> InAllowedClasses,
		TArray<FName> InAllowedTags,
		TArray<FName> InSpawnerTags,
		TArray<TSoftClassPtr<AActor>> InOverlapFilters,
		bool InAllowTransformOverride
	)
	{
		Name = InName;
		Priority = InPriority;
		CooldownTime = InCooldownTime;
		AllowedClasses = InAllowedClasses;
		AllowedTags = InAllowedTags;
		SpawnerTags = InSpawnerTags;
		OverlapFilters = InOverlapFilters;
		bAllowTransformOverride = InAllowTransformOverride;
	}

};
