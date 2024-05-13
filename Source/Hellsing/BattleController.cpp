// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleController.h"

ABattleController::ABattleController()
{
	bIsPlayerTurn = false;

	SetShowMouseCursor(true);

	bEnableClickEvents = true;
}

void ABattleController::SetActionPoints(int Points)
{
	ActionPoints = Points;
}

int ABattleController::GetActionPoints()
{
	return ActionPoints;
}

void ABattleController::TestFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("TestFunction called"));
}

AMonster* ABattleController::GetTargetMonster()
{
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);
	
		if (Hit.bBlockingHit)
		{
			AMonster* Monster = Cast<AMonster>(Hit.GetActor());
			if (Monster)
			{
				return Monster;
			}
		}

	return nullptr;
}