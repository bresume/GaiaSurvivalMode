// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FSurvivalSpawnPoint.h"

bool FSurvivalSpawnPoint::IsClassAllowed(UClass* Class)
{
    TSoftClassPtr<AActor> check = TSoftClassPtr<AActor>(Class);
    //Get the raw class.
    bool check1 = false;
    bool check2 = false;
    if(AllowedClasses.Num()<=0)
    {
        //If we don't have a class in the allowed classes function, we consider the first check as passed.
        check1 = true;
    }
    else
    {
        //Otherwise, we convert the class to a soft class ptr and check to see if it is in the array.
        check1 = AllowedClasses.Contains(check);
        if(!check1)
        {
            //If we fail check one we fail the check.
            return false;
        }
    }
    if(AllowedTags.Num()<=0)
    {
        //If no tags are in the array we pass check 2.
        check2 = true;
    }
    else
    {
        //Otherwise check to see if the default object has the tags.
        AActor* actor = Cast<AActor>(Class->GetDefaultObject());
        for(auto& tag : actor->Tags)
        {
            if(AllowedTags.Contains(tag))
            {
                check2 = true;
                break;
            }
        }
    }
    //Return true if we pass check1 and check 2.
    return check1 && check2;
}
