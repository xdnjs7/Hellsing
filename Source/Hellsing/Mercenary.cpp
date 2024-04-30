// Fill out your copyright notice in the Description page of Project Settings.


#include "Mercenary.h"

AMercenary::AMercenary()
{
	PrimaryActorTick.bCanEverTick = true;

	stats.Attack = 10;
	stats.Defense = 10;
	stats.Health = 100;
	stats.MaxHealth = 100;
	stats.Speed = 10;
	stats.Level = 1;


	
}

void AMercenary::BeginPlay()
{
	Super::BeginPlay();

}

void AMercenary::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

