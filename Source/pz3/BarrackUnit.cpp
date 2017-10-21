// Fill out your copyright notice in the Description page of Project Settings.

#include "BarrackUnit.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
ABarrackUnit::ABarrackUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("BarrackUnit constructor"));
	BarrackMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));

	Movement = CreateDefaultSubobject<UBarrackMovement>(TEXT("BarrackMovement"));
	AddOwnedComponent(Movement);

	if (SphereMesh.Object)
	{
		BarrackMesh->SetStaticMesh(SphereMesh.Object);
	}
	RootComponent = BarrackMesh;

}

// Called when the game starts or when spawned
void ABarrackUnit::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BarrackUnit BeginPlay"));
	Super::BeginPlay();

}

// Called every frame
void ABarrackUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//


