// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SurvivalModeComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"

#include "Core/GaiaSurvivalFunctions.h"
#include "Core/SurvivalSpawnPointLink.h"

// Sets default values for this component's properties
USurvivalModeComponent::USurvivalModeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void USurvivalModeComponent::BeginPlay()
{
	Super::BeginPlay();
	//Set the details from the table row if valid, or from the default settings.
	if(DetailsRow.DataTable && Details.RowName != NAME_None)
	{
		Server_SetSurvivalDetails()
	}
	else
	{
		Server_SetSurvivalDetails(DefaultSurvivalDetails);
	}
}


// Called every frame
void USurvivalModeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USurvivalModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(USurvivalModeComponent, SpawnedActors);
	DOREPLIFETIME(USurvivalModeComponent, Spawners);
	DOREPLIFETIME(USurvivalModeComponent, CurrentSpawner);
	DOREPLIFETIME(USurvivalModeComponent, RoundHandle);
	DOREPLIFETIME(USurvivalModeComponent, SpawnHandle);
	DOREPLIFETIME(USurvivalModeComponent, SurvivalDetails);
}

void USurvivalModeComponent::StartRound()
{
	StartRound_Impl();
}

void USurvivalModeComponent::StartRound_Impl()
{
	//If no spawner is found, then retry our spawns.
	HandleSpawnActor();
	Multicast_Sound(SurvivalDetails.RoundStartSound);
	RoundStart.Broadcast(this,SurvivalDetails.IsBossRound());
}

void USurvivalModeComponent::EndRound()
{
	EndRound_Impl();
}

void USurvivalModeComponent::EndRound_Impl()
{
	//Complete the round.
	if(SurvivalDetails.CompleteRound())
	{
		//If we have ended the game (i.e. reaching the max round) then call the function.
		Server_EndGame(SurvivalDetails.EndGameText);
	}
	//Otherwise, play the end round sound and start the next round.
	Multicast_Sound(SurvivalDetails.RoundEndSound);
	RoundEnd.Broadcast(this,SurvivalDetails.IsBossRound());
	Spawners = FindSpawnersForRound();
	GetWorld()->GetTimerManager().SetTimer(RoundHandle,this,&USurvivalModeComponent::Server_StartRound,SurvivalDetails.TimeBetweenRounds,false);
}

void USurvivalModeComponent::StartGame()
{
	StartGame_Impl();
}

void USurvivalModeComponent::StartGame_Impl()
{
	//Set the timer to start the first round, "complete" the round to go from round 0 to round 1 and find the spawners for round 1.
	GetWorld()->GetTimerManager().SetTimer(RoundHandle,this,&USurvivalModeComponent::Server_StartRound,SurvivalDetails.TimeBetweenRounds,false);
	SurvivalDetails.CompleteRound();
	Spawners = FindSpawnersForRound();
	GameStarted.Broadcast(this);
	Multicast_Sound(SurvivalDetails.GameStartSound);
}

void USurvivalModeComponent::EndGame(const FText& Reason)
{
	EndGame_Impl();
}

void USurvivalModeComponent::EndGame_Impl(const FText& Reason)
{
	GameEnded.Broadcast(this,Reason);
	Multicast_Sound(SurvivalDetails.GameEndSound);
}

void USurvivalModeComponent::SetSurvivalDetails(FSurvivalModeDetails Details)
{
	SetSurvivalDetails_Impl(Details);
}

void USurvivalModeComponent::SetSurvialDetails_Impl(FSurvivalModeDetails Details)
{
	SurvivalDetails = Details;
}

void USurvivalModeComponent::EnemyDestroyed(AActor* Actor)
{
	EnemyDestroyed_Impl(Actor);
}

void USurvivalModeComponent::EnemyDestroyed_Impl(AActor* Actor)
{
	//Remove the actor then determine if the round is over.
	SpawnedActors.Remove(Actor);
	OnEnemyDestroyed.Broadcast(this,Actor);
	if(SpawnedActors.Num()<=0)
	{
		Server_EndRound();
	}
}

void USurvivalModeComponent::HandleSpawnActor()
{
	HandleSpawnActor_Impl();
}

void USurvivalModeComponent::HandleSpawnActor_Impl()
{
	//If we don't have anymore spawners, do nothing and break the loop.
	if(Spawners.Num()<=0)
	{
		return;
	}
	//If our spawner is not valid, set it.
	if(CurrentSpawner.Name == NAME_None)
	{
		//If we have reached the end of our ActorsToSpawn, clear the spawner and start a new loop.
		if(Spawners[0].ActorsToSpawn.Num<=0)
		{
			Spawners.RemoveAt(0);
			GetWorld()->GetTimerManager().SetTimer(SpawnHandle,this,&USurvivalModeComponent::HandleSpawnActor,CurrentSpawner.SpawnDelayTime,false);
			CurrentSpawner.Name = NAME_None;
			return;
		}
		//Else set our spawner.
		CurrentSpawner = Spawners[0].ActorsToSpawn[0];
	}
	//Request that we spawn the actor. If no spawners are available, retry the function.
	TArray<AActor*> actors;
	AActor* actor;
	//IF we fail to find the spawn points, try again.
	if(!UGaiaSurvivalFunctions::GetSpawnersWithTags(this,SurvivalDetails.SpawnerTags,actors))
	{
		UE_LOG(LogTemp,Error,TEXT("Failed to find actors with the ISurvivalSpawnPointLink interface and the input tags."));
		GetWorld()->GetTimerManager().SetTimer(SpawnHandle,this,&USurvivalModeComponent::HandleSpawnActor,CurrentSpawner.SpawnDelayTime,false);
		return;
	}
	if(!UGaiaSurvivalFunctions::FindNextAvailableSpawner(actors,actor))
	{
		GetWorld()->GetTimerManager().SetTimer(SpawnHandle,this,&USurvivalModeComponent::HandleSpawnActor,CurrentSpawner.SpawnDelayTime,false);
		UE_LOG(LogTemp,Warning,TEXT("Failed to find an available spawner. Retrying..."));
		return;
	}
	//If the actor is a nullptr for whatever reason, try again.
	if(!ISurvivalSpawnPointLink::Execute_RequestSpawnActor(Spawners[0].ActorsToSpawn[0].Class.LoadSynchrnous(),FTransform(),nullptr,nullptr))
	{
		GetWorld()->GetTimerManager().SetTimer(SpawnHandle,this,&USurvivalModeComponent::HandleSpawnActor,CurrentSpawner.SpawnDelayTime,false);
		UE_LOG(LogTemp,Warning,TEXT("Failed to spawn the actor. Retrying..."));
		return;
	}
	//If we have reached out max spawns for this spawner, clear the spawner and restart the function.
	if(CurrentSpawner.OnSpawnActor())
	{
		CurrentSpawner.Name = NAME_None;
		Spawners[0].ActorsToSpawn.RemoveAt(0);
		GetWorld()->GetTimerManager().SetTimer(SpawnHandle,this,&USurvivalModeComponent::HandleSpawnActor,CurrentSpawner.SpawnDelayTime,false);
	}
}

void USurvivalModeComponent::Server_EnemyDestroyed(AActor* Actor)
{
	//Make sure the actor is actually in the array, then run the function.
	if(!SpawnedActors.Contains(Actor))
	{
		return;
	}
	EnemyDestroyed(Actor);
}

bool USurvivalModeComponent::Server_EnemyDestroyed_Validate(AActor* Actor)
{
	return SpawnedActors.Contains(Actor);
}

void USurvivalModeComponent::Server_SetSurvivalDetails(FSurvivalModeDetails Details)
{
	SetSurvivalDetails(Details);
}

bool USurvivalModeComponent::Server_SetSurvivalDetails_Validate(FSurvivalModeDetails Details){return true;}

void USurvivalModeComponent::Server_StartRound()
{
	StartRound();
}

void USurvivalModeComponent::Server_StartRound_Validate()
{
	return true;
}

void USurvivalModeComponent::Server_EndRound()
{
	EndRound();
}

void USurvivalModeComponent::Server_EndRound_Validate()
{
	return true;
}

void USurvivalModeComponent::Multicast_Sound(TSoftObjectPtr<USoundBase> Sound)
{
	UGameplayStatics::PlaySound2D(this,Sound.LoadSynchronous(),1.f,1.f,0.f);
}

void USurvivalModeComponent::Server_StartGame()
{
	StartGame();
}

void USurvivalModeComponent::Server_StartGame_Validate()
{
	return true;
}

void USurvivalModeComponent::Server_EndGame(const FText& Reason)
{
	EndGame(Reason);
}

void USurvivalModeComponent::Server_EndGame_Validate(const FText& Reason)
{
	return true;
}

TArray<FSurvivalModeSpawner> FindSpawnersForRound()
{
	//Iterate through our default and boss spawners, call the built in function and add the valid spawners to the array.
	TArray<FSurvivalModeSpawner> spawners;
	for(auto& spawner : SurvivalDetails.DefaultSpawners)
	{
		if(spawner.ValidForRound(SurvivalDetails.GetCurrentRound()))
		{
			spawners.Add(spawner);
		}
	}
	for(auto& spawner2 : SurvivalDetails.BossSpawners)
	{
		if(spawner.ValidForRound(SurvivalDetails.GetCurrentRound()))
		{
			spawners.Add(spawner);
		}
	}
	return spawners;
}
