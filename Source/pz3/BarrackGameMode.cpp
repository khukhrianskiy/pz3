// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackGameMode.h"


void ABarrackGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* const World = GetWorld();
	if (World)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Set ABarrackActorSpawn "));
		World->SpawnActor<ABarrackActorSpawn>(ABarrackActorSpawn::StaticClass());
	}
}



