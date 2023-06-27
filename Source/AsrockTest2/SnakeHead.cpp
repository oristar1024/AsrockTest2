// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeHead.h"
#include "SnakeGameMode.h"

// Sets default values
ASnakeHead::ASnakeHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnakeHead::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASnakeHead::LeftMove(float _Value)
{
	if (0 == _Value)
	{
		return;
	}

	AddActorLocalOffset(FVector::LeftVector);
}


void ASnakeHead::RightMove(float _Value)
{
	if (0 == _Value)
	{
		return;
	}

	AddActorLocalOffset(FVector::RightVector);
}
void ASnakeHead::UpMove(float _Value)
{
	if (0 == _Value)
	{
		return;
	}
	AddActorLocalOffset(FVector::UpVector);
}
void ASnakeHead::DownMove(float _Value)
{
	if (0 == _Value)
	{
		return;
	}
	AddActorLocalOffset(FVector::DownVector);
}

void ASnakeHead::LeftAction()
{
	FVector MovePos = FVector::LeftVector * 100.0f;

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation() + MovePos, "Wall"))
	{
		return;
	}

	AddActorLocalOffset(FVector::LeftVector * 100.0f);
	GetSnakeGameMode()->SetPos(GetActorLocation());
	// 여기에 Body가 있는지 확인해야 한다.
	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "Body"))
	{
		AActor* Body = GetSnakeGameMode()->GetPart(GetActorLocation(), "Body");
		Body->Destroy();
		GetSnakeGameMode()->CurBodyReset();
		GetSnakeGameMode()->AddBody();
	}

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "myBody"))
	{
		UE_LOG(LogTemp, Error, TEXT("Error GameOver"), __FUNCTION__, __LINE__);
	}

}
void ASnakeHead::RightAction()
{
	FVector MovePos = FVector::RightVector * 100.0f;

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation() + MovePos, "Wall"))
	{
		return;
	}

	AddActorLocalOffset(FVector::RightVector * 100.0f);
	GetSnakeGameMode()->SetPos(GetActorLocation());
	// 여기에 Body가 있는지 확인해야 한다.
	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "Body"))
	{
		AActor* Body = GetSnakeGameMode()->GetPart(GetActorLocation(), "Body");
		Body->Destroy();
		GetSnakeGameMode()->CurBodyReset();
		GetSnakeGameMode()->AddBody();
	}

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "myBody"))
	{
		UE_LOG(LogTemp, Error, TEXT("Error GameOver"), __FUNCTION__, __LINE__);
	}
}
void ASnakeHead::UpAction()
{
	FVector MovePos = FVector::UpVector * 100.0f;

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation() + MovePos, "Wall"))
	{
		return;
	}


	AddActorLocalOffset(FVector::UpVector * 100.0f);
	GetSnakeGameMode()->SetPos(GetActorLocation());
	// 여기에 Body가 있는지 확인해야 한다.
	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "Body"))
	{
		AActor* Body = GetSnakeGameMode()->GetPart(GetActorLocation(), "Body");
		Body->Destroy();
		GetSnakeGameMode()->CurBodyReset();
		GetSnakeGameMode()->AddBody();
	}

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "myBody"))
	{
		UE_LOG(LogTemp, Error, TEXT("Error GameOver"), __FUNCTION__, __LINE__);
	}

}
void ASnakeHead::DownAction()
{
	FVector MovePos = FVector::DownVector * 100.0f;

	if (true == GetSnakeGameMode()->IsPart(GetActorLocation() + MovePos, "Wall"))
	{
		return;
	}

	// 이동을 하고 나서
	AddActorLocalOffset(FVector::DownVector * 100.0f);
	GetSnakeGameMode()->SetPos(GetActorLocation());
	// 여기에 Body가 있는지 확인해야 한다.
	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "Body"))
	{
		AActor* Body = GetSnakeGameMode()->GetPart(GetActorLocation(), "Body");
		Body->Destroy();
		GetSnakeGameMode()->CurBodyReset();
		GetSnakeGameMode()->AddBody();
	}
	if (true == GetSnakeGameMode()->IsPart(GetActorLocation(), "myBody"))
	{
		UE_LOG(LogTemp, Error, TEXT("Error GameOver"), __FUNCTION__, __LINE__);
	}
}
