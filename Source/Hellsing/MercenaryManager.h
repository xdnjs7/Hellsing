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
    TArray<AMercenary*> Mercenaries; // Mercenary ��ü �迭

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetMercenary(int32 Index); // �ε����� �ش��ϴ� Mercenary ��ȯ �Լ�
};
