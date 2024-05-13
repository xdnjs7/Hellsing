// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGM.h"

// Sets default values
ABattleGM::ABattleGM()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerControllerClass = ABattleController::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn> Player(TEXT("/Game/BattleRoom/BattleManager.BattleManager"));
	if (Player.Class != NULL)
	{
		DefaultPawnClass = Player.Class;
	}

}