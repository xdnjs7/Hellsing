// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnitStats.generated.h"
/**
 * 
 */
struct HELLSING_API UnitStats
{
public:

	UnitStats();
	~UnitStats();
};

USTRUCT(Atomic,BlueprintType)
struct FUniStats
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Speed;
};