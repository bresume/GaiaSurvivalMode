// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SurvivalModeSpawnPoint.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASurvivalModeSpawnPoint::ASurvivalModeSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetupAttachment(GetRootComponent());
	Capsule->SetCapsuleHalfHeight(98.f);
	Capsule->SetCapsuleRadius(44.f);
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnArrow"));
	Arrow->SetupAttachment(Capsule);
	Arrow->SetRelativeLocation(FVector(0.f,0.f,44.f));
}

// Called when the game starts or when spawned
void ASurvivalModeSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	if(SpawnPointRow.DataTable && SpawnPointRow.RowName != NAME_None)
	{
		Server_OnSetSpawnPoint(*SpawnPointRow.DataTable->FindRow<FSurvivalSpawnPoint>(SpawnPointRow.RowName,""));
	}
	else
	{
		Server_OnSetSpawnPoint(DefaultSpawnPoint);
	}
}

// Called every frame
void ASurvivalModeSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASurvivalModeSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(ASurvivalModeSpawnPoint,CurrentSpawnedActor);
	DOREPLIFETIME(ASurvivalModeSpawnPoint, ResetHandle);
	DOREPLIFETIME(ASurvivalModeSpawnPoint, SpawnPoint);
	DOREPLIFETIME(ASurvivalModeSpawnPoint, bIsBusy);
}

void ASurvivalModeSpawnPoint::OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point)
{
	//Call the C++ overridable function.
	OnSetSpawnPoint_Impl(Point);
}

void ASurvivalModeSpawnPoint::OnSetSpawnPoint_Impl(FSurvivalSpawnPoint Point)
{
	//Set the spawn point.
	SpawnPoint = Point;
}

void ASurvivalModeSpawnPoint::Server_OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point)
{
	//Call the BP overridable function.
	OnSetSpawnPoint(Point);
}

bool ASurvivalModeSpawnPoint::Server_OnSetSpawnPoint_Validate(FSurvivalSpawnPoint Point){return true;}

FSurvivalSpawnPoint ASurvivalModeSpawnPoint::GetSurvivalSpawnPoint_Implementation()
{
	//Return the value.
	return SpawnPoint;
}

bool ASurvivalModeSpawnPoint::SetSurvivalSpawnPoint_Implementation(FSurvivalSpawnPoint Point)
{
	//Set the spawn point on the server.
	Server_OnSetSpawnPoint(Point);
	return true;
}
	
bool ASurvivalModeSpawnPoint::IsBusy_Implementation()
{
	//Check to see if we have an overlapping actor.
	TArray<AActor*> actors;
	for(auto& filter : SpawnPoint.OverlapFilters)
	{
		Capsule->GetOverlappingActors(actors,filter.LoadSynchronous());
		if(actors.Num()>0)
		{
			return true;
		}
	}
	//If we don't return the spawn point.
	return bIsBusy;
}

AActor* ASurvivalModeSpawnPoint::RequestSpawnActor_Implementation(TSubclassOf<AActor> Class, 
	FTransform Transform, AActor* Owner, APawn* Instigator)
{
	//Do nothing if we are busy.
	if(IsBusy())
	{
		return nullptr;
	}
	//Spawn the actor on the server.
	Server_HandleSpawnActor(Class,Transform,Owner,Instigator);
	return CurrentSpawnedActor;
}

void ASurvivalModeSpawnPoint::Server_HandleSpawnActor_Implementation(TSubclassOf<AActor> Class, 
	FTransform Transform, AActor* Owner, APawn* Instigator)
{
	//Call BP overridable function.
	HandleSpawnActor(Class,Transform,Owner,Instigator);
}

bool ASurvivalModeSpawnPoint::Server_HandleSpawnActor_Validate(TSubclassOf<AActor> Class, 
	FTransform Transform, AActor* Owner, APawn* Instigator)
{
	return !IsBusy() && Class && SpawnPoint.IsClassAllowed(Class);
}

AActor* ASurvivalModeSpawnPoint::GetCurrentSpawnedActor()
{
	return CurrentSpawnedActor;
}

void ASurvivalModeSpawnPoint::HandleSpawnActor_Implementation(TSubclassOf<AActor> Class, 
	FTransform Transform, AActor* Owner, APawn* Instigator)
{
	//Call c++ overridable function.
	HandleSpawnActor_Impl(Class,Transform,Owner,Instigator);
}
	
void ASurvivalModeSpawnPoint::HandleSpawnActor_Impl(TSubclassOf<AActor> Class, 
	FTransform Transform, AActor* Owner, APawn* Instigator)
{
	//If we aren't busy, have a valid class and the class is allowed...
	if(!IsBusy() && Class && SpawnPoint.IsClassAllowed(Class))
	{
		//Spawn the actor.
		FActorSpawnParameters params;
		params.Owner = Owner;
		params.Instigator = Instigator;
		CurrentSpawnedActor = GetWorld()->SpawnActor<AActor>(Class,params);
		CurrentSpawnedActor->SetActorTransform(SpawnPoint.bAllowTransformOverride ? Transform : Arrow->GetComponentTransform());
		if(SpawnPoint.CooldownTime > 0)
		{
			GetWorld()->GetTimerManager().SetTimer(ResetHandle,this,&USurvivalModeSpawnPoint::HandleResetCooldown,SpawnPoint.CooldownTime,false);
			bIsBusy = true;
		}
	}
}

void ASurvivalModeSpawnPoint::HandleResetCooldown()
{
	HandleResetCooldown_Impl();
}

void ASurvivalModeSpawnPoint::HandleResetCooldown_Impl()
{
	bIsBusy = false;
}
