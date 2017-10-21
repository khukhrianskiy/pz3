// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BarrackActorSpawn.h"
#include "BarrackGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PZ3_API ABarrackGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	void BeginPlay() override;
	
};
