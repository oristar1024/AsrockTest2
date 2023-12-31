// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakePart.generated.h"

UCLASS()
class ASROCKTEST2_API ASnakePart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakePart();

	class ASnakeGameMode* GetSnakeGameMode();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Follow();

	ASnakePart* dist = nullptr;
	FVector prevPos;
	FVector curPos;


};
