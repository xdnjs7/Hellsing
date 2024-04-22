// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Hellsing_PC.generated.h"

/**
 * 
 */
UCLASS()
class HELLSING_API AHellsing_PC : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHellsing_PC();

	virtual void BeginPlay() override;

public:

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> TitleUIClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> MainUIClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> TownUIClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> ExploreUIClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> SaveSlotUIClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	//TSubclassOf<class UUserWidget> OptionsUIClass;
};
