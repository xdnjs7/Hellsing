#include "MercenaryManager.h"

// 생성자에서 풀을 초기화
UMercenaryManager::UMercenaryManager()
{
    // 'GetWorld()' 함수를 호출하여 현재 게임 월드에 대한 참조를 가져옴.
    // 이 월드는 게임의 모든 액터와 오브젝트가 존재하는 환경이어야 함.
    UWorld* World = GetWorld();

    // 월드가 유효한지 확인. 월드가 유효하지 않다면, 이후의 코드는 실행되지 않음.
    if (World)
    {
        // 액터를 스폰(생성)할 때 필요한 파라미터를 설정.
        FActorSpawnParameters SpawnParams;

        // 스폰될 액터의 'Owner'를 설정. 여기서는 월드의 첫 번째 플레이어 컨트롤러를 소유자로 설정.
        // 'Owner'는 액터의 '생명주기'를 관리하며, 액터의 네트워크 동기화에 영향을 미친다.
        SpawnParams.Owner = World->GetFirstPlayerController();

        // 스폰될 액터의 'Instigator'를 설정. 여기서는 첫 번째 플레이어 컨트롤러의 폰(캐릭터)를 설치자로 설정.
        // 'Instigator'는 액터가 다른 액터에게 피해를 입힐 때, 그 피해의 원인이 된 액터를 참조함.
        SpawnParams.Instigator = World->GetFirstPlayerController()->GetPawn();

        // Mercenaries 배열의 크기만큼 반복하여 Mercenary 객체를 생성하고 풀에 추가.
        for (int32 i = 0; i < Mercenaries.Num(); ++i)
        {
            // 'SpawnActor' 함수를 호출하여 Mercenary 객체를 생성.
            // 이 함수는 지정된 클래스의 새 인스턴스를 월드에 스폰.
            // 여기서는 Mercenary 클래스의 인스턴스를 스폰하며, 스폰 위치와 회전은 각각 FVector::ZeroVector와 FRotator::ZeroRotator로 설정.
            AMercenary* NewMercenary = World->SpawnActor<AMercenary>(AMercenary::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

            // 생성된 Mercenary 객체를 MercenaryPool 배열에 추가.
            MercenaryPool.Add(NewMercenary);
        }
    }
}

// Mercenary 객체를 풀에 추가하는 함수
void UMercenaryManager::AddMercenaryToPool(AMercenary* Mercenary)
{
    // Mercenary가 유효하고 Mercenaries 배열에 없는 경우에만 추가
    if (Mercenary && !Mercenaries.Contains(Mercenary))
    {
        Mercenaries.Add(Mercenary);
    }
}

// 인덱스에 해당하는 Mercenary를 반환하는 함수
AMercenary* UMercenaryManager::GetMercenaryFromPool(int32 Index)
{
    // Mercenaries 배열이 유효한지 확인
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary가 유효한지 확인
        if (Mercenaries[Index])
        {
            // 인덱스에 해당하는 Mercenary를 반환
            return Mercenaries[Index];
        }
    }
    // 유효한 Mercenary가 없으면 nullptr을 반환
    return nullptr;
}

// 사용 가능한 블루프린트 객체를 풀에서 가져오는 함수
AMercenary* UMercenaryManager::GetFromPool()
{
    // 사용 가능한 블루프린트 객체가 있는지 확인하고 반환
    for (AMercenary* Mercenary : MercenaryPool)
    {
        // 객체가 사용 중인지 확인
        if (!Mercenary->IsInUse())
        {
            // 객체를 사용 중으로 설정하고 반환
            Mercenary->SetInUse(true);
            return Mercenary;
        }
    }
    // 사용 가능한 블루프린트 객체가 없으면 nullptr을 반환
    return nullptr;
}