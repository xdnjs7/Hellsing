#pragma once

#include "CoreMinimal.h"
#include "Unit.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Monster.generated.h"

UCLASS()
class HELLSING_API AMonster : public AUnit
{
	GENERATED_BODY()

public:
	AMonster();
	

	UFUNCTION(BlueprintCallable)
	void MobTakeDamage(int damage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AttackAction();

};
