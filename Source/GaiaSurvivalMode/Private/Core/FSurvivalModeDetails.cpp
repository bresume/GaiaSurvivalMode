// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FSurvivalModeDetails.h"

bool FSurvivalModeDetails::CompleteRound()
{
    //Increment the round.
    CurrentRound++;
    if(bInfiniteRounds)
    {
        //If infinite rounds, don't consider the game over.
        return false;
    }
    //Game is over if we have gone over the max round.
    return CurrentRound > MaxRounds;
}

bool FSurvivalModeDetails::IsBossRound()
{
    //If the hardcoded boss rounds contains the current round we automatically set a boss round.
    bool boss = BossRounds.Contains(GetCurrentRound());
    if(boss)
    {
        return true;
    }
    //If we don't check the boss round every x round then we return false.
    if(BossRoundEveryXRound <= 0)
    {
        return false;
    }
    //Otherwise see if the current round is a multiple of the variable value.
    return GetCurrentRound() % BossRoundEveryXRound == 0;
}

