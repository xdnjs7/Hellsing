#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Hellsing_PC.generated.h"

UCLASS()
class HELLSING_API AHellsing_PC : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHellsing_PC();
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
};
