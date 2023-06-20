// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SnakeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ASROCKTEST2_API ASnakeGameMode : public AGameMode
{
	GENERATED_BODY()

	// �̰� ���ؼ� �˷��ټ��� �ִ�.
	// ������ Ÿ���� ��ȯ�Ҽ� �ְ� ���� �ڷ�����
	// TSubclassOf �Դϴ�.
	// TSubclassOf<AActor> CreateWallType;

	UFUNCTION(BlueprintCallable)
	void CreateOutWall(int _X, int _Y, TSubclassOf<AActor> _WallType);

	void BeginPlay() override;
	
};
