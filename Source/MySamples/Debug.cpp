// Fill out your copyright notice in the Description page of Project Settings.


#include "Debug.h"

#include <string>

// Sets default values
ADebug::ADebug()
{
}

// Called when the game starts or when spawned
void ADebug::BeginPlay()
{
	Super::BeginPlay();
}


void ADebug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector newLocation = FVector(GetActorLocation().X + 2, GetActorLocation().Y, GetActorLocation().Z);
	
	 newRotation = FRotator(GetActorRotation().Pitch,GetActorRotation().Yaw+deger, GetActorRotation().Roll);
	SetActorLocation(newLocation);
	SetActorRotation(newRotation);
}
