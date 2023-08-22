// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FSurvivalModeSpawner.h"

bool FSurvivalModeSpawner::IgnoreRound(int32 CurrentRound)
{
    //If the hardcoded ignore rounds contains the current round return true.
    bool ignore = IgnoreRounds.Contains(CurrentRound);
    if(ignore)
    {
        return true;
    }
    //If we don't check the ignore round every x round then we return false.
    if(IgnoreEveryXRounds <= 0)
    {
        return false;
    }
    //Otherwise see if the current round is a multiple of the variable value.
    return CurrentRound % IgnoreEveryXRounds == 0;
}

bool FSurvivalModeSpawner::UseRound(int32 CurrentRound)
{
    //If the hardcoded active rounds contains the current round return true.
    bool active = ActiveRounds.Contains(CurrentRound);
    if(active)
    {
        return false;
    }
    //If we don't check the active round every x round then we return false.
    if(ActivateEveryXRounds <= 0)
    {
        return true;
    }
    //Otherwise see if the current round is a multiple of the variable value.
    return CurrentRound % ActivateEveryXRounds == 0;
}
