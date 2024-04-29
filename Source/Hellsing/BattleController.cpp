// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleController.h"

ABattleController::ABattleController()
{
	bIsPlayerTurn = false;
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