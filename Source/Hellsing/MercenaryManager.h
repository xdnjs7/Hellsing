#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mercenary.h"
#include "MercenaryManager.generated.h"

UCLASS(BlueprintType)
class HELLSING_API UMercenaryManager : public UObject
{
	GENERATED_BODY()
	
public:

    UMercenaryManager(); // ������

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    void AddMercenaryToPool(AMercenary* Mercenary); // Mercenary ��ü�� �߰��ϴ� �Լ�

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetMercenaryFromPool(int32 Index); // �ε����� �ش��ϴ� Mercenary ��ȯ �Լ�

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetFromPool(); // Ǯ���� Mercenary ��ü�� �������� �Լ�

private:
    TArray<AMercenary*> Mercenaries; // Mercenary ��ü �迭
    TArray<AMercenary*> MercenaryPool; // Ǯ���� ���� Mercenary ��ü �迭
};
