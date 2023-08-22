// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Blueprint/UserWidget.h"
#include "SurvivalModePlayer.generated.h"

class USurvivalModeComponent;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USurvivalModePlayer : public UInterface
{
	GENERATED_BODY()
};

/**
 * An interface to use for the player.
 */
class GAIASURVIVALMODE_API ISurvivalModePlayer
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/**
	 * Notify that the round has started.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool RoundStarted(USurvivalModeComponent* Component, bool bIsBossRound);

	/**
	 * Notify that the round has ended.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool RoundEnded(USurvivalModeComponent* Component, bool bIsBossRound);

	/**
	 * Notify that the game has started.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool GameStarted(USurvivalModeComponent* Component);

	/**
	 * Notify that the game has ended.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool GameEnded(USurvivalModeComponent* Component, const FText& Reason);

	/**
	 * Show the survival HUD.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool ShowUI(USurvivalModeComponent* Component, const TSoftClassPtr<UUserWidget>& Widget);

	/**
	 * Hide the survival HUD.
	*/
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "Player")
		bool HideUI(USurvivalModeComponent* Component);

};
