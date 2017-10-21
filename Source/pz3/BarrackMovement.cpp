// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackMovement.h"


// Sets default values for this component's properties
UBarrackMovement::UBarrackMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	SetRandomVector();
}


// Called when the game starts
void UBarrackMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBarrackMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	if (Parent)
	{
		Parent->SetActorLocation(Parent->GetActorLocation() + FVector(x, y, 1));
	}

	// ...
}

void UBarrackMovement::SetRandomVector()
{
	x = FMath::FRandRange(-10, 10);
	y = FMath::FRandRange(-10, 10);

	if (x == 0 && y == 0)
	{
		SetRandomVector();
	}
}

