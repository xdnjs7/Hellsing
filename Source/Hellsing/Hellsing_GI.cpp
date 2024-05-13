#include "Hellsing_GI.h"

UHellsing_GI::UHellsing_GI()
{
    // MercenaryManager 객체 생성
    MercenaryManager = NewObject<UMercenaryManager>();
}

UMercenaryManager* UHellsing_GI::GetMercenaryManager() const
{
    return MercenaryManager;
}

bool UHellsing_GI::AddToParty(AMercenary* Mercenary)
{
    // 파티 멤버가 4명 미만인지 확인
    if (PartyMembers.Num() < 4)
    {
        // Mercenary가 유효한지 확인
        if (Mercenary)
        {
            // 파티에 멤버 추가
            PartyMembers.Add(Mercenary);
            return true;
        }
        else
        {
            // Mercenary가 유효하지 않음
            return false;
        }
    }
    else
    {
        // 파티 멤버가 4명 이상이면 추가하지 않음
        return false;
    }
    return false;
}

TArray<AMercenary*> UHellsing_GI::GetPartyMembers() const
{
    UE_LOG(LogTemp, Warning, TEXT("Number of Party Members: %d"), PartyMembers.Num());

    // 파티 멤버 배열 반환
    return PartyMembers;
}

bool UHellsing_GI::RemoveFromParty(AMercenary* Mercenary)
{
    // 파티에서 멤버 제거
    return PartyMembers.Remove(Mercenary) > 0;
}