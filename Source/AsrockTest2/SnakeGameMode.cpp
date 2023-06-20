// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeGameMode.h"

void ASnakeGameMode::BeginPlay()
{
	Super::BeginPlay();

	int X = 3;
	int Y = 3;

	// [][][][][]
	// []      []
	// []      []
	// []      []
	// [][][][][]


}

void ASnakeGameMode::CreateOutWall(int _X, int _Y, TSubclassOf<AActor> _WallType)
{
	// Wall::StaticClass() <= ���� ���� �����Ϸ��� ���Ͱ� ������ �˷��ݴϴ�.
// �� ���ο��� �������Ʈ wall�� �˼� �־�� �Ѵ�.
	for (size_t i = 0; i < _X + 2; i++)
	{
		FTransform Trans;

		AActor* SpawnedActor1 = GetWorld()->SpawnActor<AActor>(_WallType, Trans);
	}
}