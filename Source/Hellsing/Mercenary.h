#pragma once

#include "CoreMinimal.h"
#include "Unit.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/WidgetComponent.h"
#include "Mercenary.generated.h"

UCLASS()
class HELLSING_API AMercenary : public AUnit
{
	GENERATED_BODY()

public:
	AMercenary();


	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;


public:

	void Attack();

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void AttackAction();
	UFUNCTION(BlueprintCallable)
	void MerTakeDamage(int damage);
	
	bool IsInUse() const; // ��������� ���� ��ȯ �Լ�
	void SetInUse(bool bUse); // ��������� ���� ���� �Լ�

private:

	bool bInUse = false; // ��������� ����
};
