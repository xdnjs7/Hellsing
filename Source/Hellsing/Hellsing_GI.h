#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Mercenary.h"
#include "MercenaryManager.h"
#include "Monster.h"
#include "Hellsing_GI.generated.h"

UCLASS()
class HELLSING_API UHellsing_GI : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UHellsing_GI();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMercenary*> PartyMembers; // ��Ƽ ��� �迭

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMonster*> MonsterMembers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMonster* TargetMonster; // Ÿ�� ����

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SelectMode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int ActionPoint; // �ൿ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Gold=0; // ���
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Exp=0; // ���



    UFUNCTION(BlueprintCallable)
    void SetTargetMonster(AMonster* Monster); // Ÿ�� ���� ���� �Լ�
    UFUNCTION(BlueprintCallable)
    void ClearTargetMonster(); // Ÿ�� ���� �ʱ�ȭ �Լ�

    UFUNCTION(BlueprintCallable)
    void SetSelectMode(bool Mode); // ���� ��� ���� �Լ�

    UPROPERTY()
    UMercenaryManager* MercenaryManager; // MercenaryManager ��ü

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Party")
    int32 LastSpawnedActorIndex = 0; // ������ ������ ������ �ε����� �����ϴ� ����

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    UMercenaryManager* GetMercenaryManager() const; // MercenaryManager �������� �Լ�

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool AddToParty(AMercenary* Mercenary); // ��Ƽ�� ��� �߰� �Լ�

    UFUNCTION(BlueprintPure, Category = "Party")
    TArray<AMercenary*> GetPartyMembers() const; // ��Ƽ ��� �������� �Լ�

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool RemoveFromParty(AMercenary* Mercenary); // ��Ƽ���� ��� ���� �Լ�
};
