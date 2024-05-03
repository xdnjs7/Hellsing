#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Mercenary.h"
#include "MercenaryManager.h"
#include "Hellsing_GI.generated.h"

UCLASS()
class HELLSING_API UHellsing_GI : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UHellsing_GI();

    TArray<AMercenary*> PartyMembers; // ��Ƽ ��� �迭

    UPROPERTY()
    UMercenaryManager* MercenaryManager; // MercenaryManager ��ü

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool AddToParty(AMercenary* Mercenary); // ��Ƽ�� ��� �߰� �Լ�

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool RemoveFromParty(AMercenary* Mercenary); // ��Ƽ���� ��� ���� �Լ�

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    UMercenaryManager* GetMercenaryManager() const; // MercenaryManager �������� �Լ�

    UFUNCTION(BlueprintPure, Category = "Party")
    TArray<AMercenary*> GetPartyMembers() const; // ��Ƽ ��� �������� �Լ�
};
