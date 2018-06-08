// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning actor
	AActor* Owner = GetOwner();

	/*
	FString Owner = GetOwner()->GetName();
	FString OwnerRotation = GetOwner()->GetTransform().GetRotation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s has rotated to %s"), *Owner, *OwnerRotation)
	*/

	// Create a rotator
	FRotator NewRotation = FRotator(0.f, 60.f, 0.f);
	
	// Set the door rotation
	Owner->SetActorRotation(NewRotation);

	//Rotation.RotateVector(FVector(1, 0, 0));
	//UE_LOG(LogTemp, Warning, TEXT("%s has rotated to %s"), *Owner->GetName(), *Rotation.ToString())
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

