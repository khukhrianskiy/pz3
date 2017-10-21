// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarrackMovement.h"
#include "BarrackUnit.generated.h"

UCLASS()
class PZ3_API ABarrackUnit : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABarrackUnit();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* BarrackMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBarrackMovement* Movement;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
