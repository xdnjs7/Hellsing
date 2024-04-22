// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "UnitStats.h"
#include "Unit.generated.h"

/**
 * 
 */
UCLASS()
class HELLSING_API AUnit : public APaperCharacter
{
	GENERATED_BODY()
public:
	UnitStats stats;
};
