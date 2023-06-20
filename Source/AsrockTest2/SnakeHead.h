// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeHead.generated.h"

UCLASS()
class ASROCKTEST2_API ASnakeHead : public AActor
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

	// �𸮾��� �������Ʈ�� �����Ҽ� �ְ� �� �Լ��� ��Ͻ������ �մϴ�.
	// �������Ʈ�� �� c++�Լ��� �˼��ְ� �������� �Ѵ�.
	// �Լ��� ��쿡�� 

	// �� UFUNCTION �𸮾��� �ν��ϰ� ���ذ� ���̰�
	// �������� �� �Լ��� ��� ���ϰ����� () �־���� �մϴ�.




	UFUNCTION(BlueprintCallable)
		void LeftAction();

	UFUNCTION(BlueprintCallable)
		void RightAction();

	UFUNCTION(BlueprintCallable)
		void UpAction();

	UFUNCTION(BlueprintCallable)
		void DownAction();

};
