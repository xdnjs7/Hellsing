// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
struct HELLSING_API UnitStats
{
public:
	FString Name;
	int Level;
	int Health;
	int MaxHealth;
	int Attack;
	int Defense;
	int Speed;

	UnitStats();
	~UnitStats();
};
