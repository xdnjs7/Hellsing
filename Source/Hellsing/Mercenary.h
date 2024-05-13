#pragma once

#include "CoreMinimal.h"
#include "Unit.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Mercenary.generated.h"

UCLASS()
class HELLSING_API AMercenary : public AUnit
{
	GENERATED_BODY()

public:
	AMercenary();

	bool IsInUse() const { return bInUse; } // ��������� ���� ��ȯ �Լ�
	void SetInUse(bool bUse) { bInUse = bUse; } // ��������� ���� ���� �Լ�

private:

	bool bInUse = false; // ��������� ����

	//virtual void BeginPlay() override;

//public:
	//virtual void Tick(float DeltaTime) override;
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Animations")
	//UPaperFlipbook* IdleFlipbook;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	//UPaperFlipbook* WalkFlipbook;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	//UPaperFlipbook* AxeFlipbook;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterMovement")
	//bool IsMoving = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterMovement")
	//float MoveSpeed = 10.0f;

	//UFUNCTION()
	//void MoveForward(float Value);

	//UFUNCTION()
	//void MoveRight(float Value);

	//UFUNCTION()
	//void OnMouseClick();

};
