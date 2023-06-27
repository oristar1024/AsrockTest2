// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SnakePart.h"
#include "SnakeHead.generated.h"

UCLASS()
class ASROCKTEST2_API ASnakeHead : public ASnakePart
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeHead();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void LeftMove(float _Value);

	UFUNCTION(BlueprintCallable)
		void RightMove(float _Value);

	UFUNCTION(BlueprintCallable)
		void UpMove(float _Value);

	UFUNCTION(BlueprintCallable)
		void DownMove(float _Value);

	UFUNCTION(BlueprintCallable)
		void LeftAction();

	UFUNCTION(BlueprintCallable)
		void RightAction();

	UFUNCTION(BlueprintCallable)
		void UpAction();

	UFUNCTION(BlueprintCallable)
		void DownAction();

};
