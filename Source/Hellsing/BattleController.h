// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Monster.h"
#include "Mercenary.h"
#include "BattleController.generated.h"

/**
 * 
 */
UCLASS()
class HELLSING_API ABattleController : public APlayerController
{
	GENERATED_BODY()

public:
	int ActionPoints;
	bool bIsPlayerTurn;

public:
	ABattleController();

	UFUNCTION(BlueprintCallable, Category = "Battle")
	void SetActionPoints(int Points);

	UFUNCTION(BlueprintCallable, Category = "Battle")
	int GetActionPoints();

	UFUNCTION(BlueprintCallable, Category = "Battle")
	void TestFunction();

	UFUNCTION(BlueprintCallable, Category = "Battle")
	AMonster* GetTargetMonster();

};
