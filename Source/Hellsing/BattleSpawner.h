// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Monster.h"
#include "Mercenary.h"
#include "BattleSpawner.generated.h"

UCLASS()
class HELLSING_API ABattleSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABattleSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
	TArray<AMonster*> Monsters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
	TArray<AMercenary*> Party;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
	TArray<AUnit*> BattleUnits;


};
