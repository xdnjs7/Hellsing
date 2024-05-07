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
    TArray<AMercenary*> Mercenaries; // Mercenary 객체 배열

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    void AddMercenary(AMercenary* Mercenary); // Mercenary 객체를 추가하는 함수

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetMercenary(int32 Index); // 인덱스에 해당하는 Mercenary 반환 함수
};
