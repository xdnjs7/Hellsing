#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "UnitStats.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Unit.generated.h"

UCLASS()
class HELLSING_API AUnit : public APaperCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FUniStats stats;
};
