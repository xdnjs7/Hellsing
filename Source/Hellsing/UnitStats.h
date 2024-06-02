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

USTRUCT(BlueprintType)
struct FUniStats
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive; // 현재 보유 여부
};