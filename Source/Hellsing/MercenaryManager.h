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

    UMercenaryManager(); // 생성자

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    void AddMercenaryToPool(AMercenary* Mercenary); // Mercenary 객체를 추가하는 함수

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetMercenaryFromPool(int32 Index); // 인덱스에 해당하는 Mercenary 반환 함수

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    AMercenary* GetFromPool(); // 풀에서 Mercenary 객체를 가져오는 함수

private:
    TArray<AMercenary*> Mercenaries; // Mercenary 객체 배열
    TArray<AMercenary*> MercenaryPool; // 풀링을 위한 Mercenary 객체 배열
};
