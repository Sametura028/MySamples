// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Debug.generated.h"

UCLASS()
class MYSAMPLES_API ADebug : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADebug();
	FRotator newRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int deger=0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame

	virtual void Tick(float DeltaTime) override;
};
