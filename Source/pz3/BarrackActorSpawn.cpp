// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackActorSpawn.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
ABarrackActorSpawn::ABarrackActorSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABarrackActorSpawn::BeginPlay()
{
	//SetRandomVector();
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ABarrackActorSpawn BeginPlay"));
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ABarrackActorSpawn::SpawnActor, 3, true);
}

// Called every frame
void ABarrackActorSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void ABarrackActorSpawn::SpawnActor()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("SpawnActor ABarrackUnit"));
		World->SpawnActor<ABarrackUnit>(ABarrackUnit::StaticClass());
	}
}

/**/

