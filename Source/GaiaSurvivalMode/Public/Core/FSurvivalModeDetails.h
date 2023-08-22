// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "Core/FSurvivalModeSpawner.h"

#include "FSurvivalModeDetails.generated.h"

/**
 * The overall game details.
 */
USTRUCT(BlueprintType,Blueprintable)
struct GAIASURVIVALMODE_API FSurvivalModeDetails : public FTableRowBase
{

	GENERATED_BODY()

private:

	int32 CurrentRound;

public:

	/**
	 * Name for JSON serialization and identification.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FName Name;

	/**
	 * The widget to show in the HUD.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftClassPtr<UUserWidget> Widget;

	/**
	 * If true, the game doesn't stop.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		bool bInfiniteRounds;

	/**
	 * The maximum number of rounds if bInfiniteRounds == false.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 MaxRounds;

	/**
	 * Hardcoded boss rounds.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<int32> BossRounds;

	/**
	 * If greater than 0, handle a boss round every x rounds.
	 * I.E. if the value == 5 we will set a boss round every 5 rounds.
	 * If it's <=0 then the value is ignored and this won't be used 
	 * unless the BossRounds property has a matching round..
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 BossRoundEveryXRound;

	/**
	 * The spawners to use every round, even if it's a boss round.
	 * The only time we wouldn't use these spawners is if the spawner 
	 * explicitly excludes a round.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FSurvivalModeSpawner> DefaultSpawners;

	/**
	 * The spawners to use to spawn bosses.
	 * These are only used during boss rounds
	 * and they will be used in conjunction with the default spawners 
	 * if the default spawner is enabled.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FSurvivalModeSpawner> BossSpawners;

	/**
	 * The time between rounds
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float TimeBetweenRounds;

	/**
	 * The sound to play when the game starts.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftObjectPtr<USoundBase> GameStartSound;

	/**
	 * The sound to play when the game ends.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftObjectPtr<USoundBase> GameEndSound;

	/**
	 * The sound to play when a round starts.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftObjectPtr<USoundBase> RoundStartSound;

	/**
	 * The sound to play when a round ends.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TSoftObjectPtr<USoundBase> RoundEndSound;

	/**
	 * The text to display at the end of the game.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FText EndGameText;

	/**
	 * Tags used to lookup valid spawners.
	 * I.E. if this is an open world game, you might only want certain spawners in an area to fire off.
	 * This list can be empty.
	 * If it is empty, we just grab all of the actors with the ISurvialSpawnPointLink interface.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		TArray<FName> SpawnerTags;

	//Return the current round.
	virtual int32 GetCurrentRound(){return CurrentRound;}

	//Complete the current round.
	virtual bool CompleteRound();

	//Check if this is a boss round.
	virtual bool IsBossRound();

	//Overload the == operator.
	FORCEINLINE bool operator == (const FSurvivalModeDetails& A) const 
	{
		return Name == A.Name && Widget == A.Widget && bInfiniteRounds == A.bInfiniteRounds && MaxRounds == A.MaxRounds 
			&& TimeBetweenRounds == A.TimeBetweenRounds && GameStartSound == A.GameStartSound && GameEndSound == A.GameEndSound &&
			RoundStartSound == A.RoundStartSound && RoundEndSound == A.RoundEndSound;
	}

	FSurvivalModeDetails()
	{
		Name = NAME_None;
		Widget = nullptr;
		bInfiniteRounds = true;
		MaxRounds = 0;
		BossRounds.Empty();
		BossRoundEveryXRound = 0;
		DefaultSpawners.Empty();
		BossSpawners.Empty();
		TimeBetweenRounds = 15.f;
		GameStartSound = nullptr;
		GameEndSound = nullptr;
		RoundStartSound = nullptr;
		RoundEndSound = nullptr;
		EndGameText = FText::FromString("You have survived!");
		SpawnerTags.Empty();
	}

	FSurvivalModeDetails(FName InName,		
		TSoftClassPtr<UUserWidget> InWidget,
		bool InInfiniteRounds,
		int32 InMaxRounds,		
		TArray<int32> InBossRounds,
		int32 InBossRoundEveryXRound,
		TArray<FSurvivalModeSpawner> InDefaultSpawners,
		TArray<FSurvivalModeSpawner> InBossSpawners,
		float InTimeBetweenRounds,	
		TSoftObjectPtr<USoundBase> InGameStartSound,
		TSoftObjectPtr<USoundBase> InGameEndSound,
		TSoftObjectPtr<USoundBase> InRoundStartSound,
		TSoftObjectPtr<USoundBase> InRoundEndSound,
		FText InEndGameText,
		TArray<FName> InSpawnerTags
	)
	{
		Name = InName;
		Widget = InWidget;
		bInfiniteRounds = InInfiniteRounds;
		MaxRounds = InMaxRounds;
		BossRounds = InBossRounds;
		BossRoundEveryXRound = InBossRoundEveryXRound;
		DefaultSpawners = InDefaultSpawners;
		BossSpawners = InBossSpawners;
		TimeBetweenRounds = InTimeBetweenRounds;
		GameStartSound = InGameStartSound;
		GameEndSound = InGameEndSound;
		RoundStartSound = InRoundStartSound;
		RoundEndSound = InRoundEndSound;
		EndGameText = InEndGameText;
		SpawnerTags = InSpawnerTags;
	}

};
