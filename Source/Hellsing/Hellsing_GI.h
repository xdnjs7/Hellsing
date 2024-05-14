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
    TArray<AMercenary*> PartyMembers; // 파티 멤버 배열

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<AMonster*> MonsterMembers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AMonster* TargetMonster; // 타겟 몬스터

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool SelectMode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int ActionPoint; // 행동력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Gold=0; // 골드
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Exp=0; // 골드



    UFUNCTION(BlueprintCallable)
    void SetTargetMonster(AMonster* Monster); // 타겟 몬스터 설정 함수
    UFUNCTION(BlueprintCallable)
    void ClearTargetMonster(); // 타겟 몬스터 초기화 함수

    UFUNCTION(BlueprintCallable)
    void SetSelectMode(bool Mode); // 선택 모드 설정 함수

    UPROPERTY()
    UMercenaryManager* MercenaryManager; // MercenaryManager 객체

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Party")
    int32 LastSpawnedActorIndex = 0; // 이전에 생성된 액터의 인덱스를 저장하는 변수

    UFUNCTION(BlueprintCallable, Category = "Mercenary")
    UMercenaryManager* GetMercenaryManager() const; // MercenaryManager 가져오는 함수

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool AddToParty(AMercenary* Mercenary); // 파티에 멤버 추가 함수

    UFUNCTION(BlueprintPure, Category = "Party")
    TArray<AMercenary*> GetPartyMembers() const; // 파티 멤버 가져오는 함수

    UFUNCTION(BlueprintCallable, Category = "Party")
    bool RemoveFromParty(AMercenary* Mercenary); // 파티에서 멤버 제거 함수
};
