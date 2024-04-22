// Fill out your copyright notice in the Description page of Project Settings.


#include "Hellsing_GM.h"

AHellsing_GM::AHellsing_GM()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerControllerClass = AHellsing_PC::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn> Player(TEXT("/Game/Mercenary/BP_Player.BP_Player_C"));
	if (Player.Class != NULL)
	{
		DefaultPawnClass = Player.Class;
	}
}