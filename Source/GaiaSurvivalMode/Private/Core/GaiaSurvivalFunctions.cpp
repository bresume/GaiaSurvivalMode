// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GaiaSurvivalFunctions.h"
#include "Kismet/GameplayStatics.h"
#include "Algo/RandomShuffle.h"

#include "Core/SurvivalSpawnPointLink.h"

bool UGaiaSurvivalFunctions::IsClassAllowedForSpawner(FSurvivalSpawnPoint A, UClass* Class)
{
    //Just call the function from the struct.
    return A.IsClassAllowed(Class);
}

bool UGaiaSurvivalFunctions::GetSpawnersWithTags(UObject* WorldContextObject, TArray<FName> Tags, TArray<AActor*>& OutActors)
{
    //Get all actors with the SpawnPoint interface.
    TArray<AActor*> temp;
    UGameplayStatics::GetAllActorsWithInterface(WorldContextObject, USurvivalSpawnPointLink::StaticClass(),temp);
    if(Tags.Num()<=0)
    {
        OutActors = temp;
        return OutActors.Num()>0;
    }
    for(auto& actor : temp)
    {
        //Check to see if the actor has the desired tag.
        for(auto& tag : Tags)
        {
            if(actor->Tags.Contains(tag))
            {
                //If it does, add it to the out actors.
                OutActors.Add(actor);
            }
        }
    }
    //Return true if we have an actor in the array.
    return OutActors.Num()>0;
}

bool UGaiaSurvivalFunctions::FindNextAvailableSpawner(TArray<AActor*> Actors, AActor*& Value)
{
    TArray<AActor*> arr = Actors;
    Algo::RandomShuffle(arr);
    for(auto& actor : arr)
    {
        if(actor->GetClass()->ImplementsInterface(USurvivalSpawnPointLink::StaticClass()))
        {
            if(!ISurvivalSpawnPointLink::Execute_IsBusy(actor))
            {
                Value = actor;
                return true;
            }
        }
    }
    return false;
}

int32 UGaiaSurvivalFunctions::GetCurrentRound(FSurvivalModeDetails A)
{
    //Just call the function from the struct.
    return A.GetCurrentRound();
}

bool UGaiaSurvivalFunctions::CompleteRound(FSurvivalModeDetails A)
{
    //Just call the function from the struct.
    return A.CompleteRound();
}

bool UGaiaSurvivalFunctions::IgnoreRound(FSurvivalModeSpawner A, int32 CurrentRound)
{
    return A.IgnoreRound(CurrentRound);
}

bool UGaiaSurvivalFunctions::UseRound(FSurvivalModeSpawner A, int32 CurrentRound)
{
    return A.UseRound(CurrentRound);
}

bool UGaiaSurvivalFunctions::IsBossRound(FSurvivalModeDetails A)
{
    return A.IsBossRound();
}
