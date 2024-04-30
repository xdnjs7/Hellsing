#include "Hellsing_GI.h"

UHellsing_GI::UHellsing_GI()
{
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

bool UHellsing_GI::RemoveFromParty(AMercenary* Mercenary)
{
    return PartyMembers.Remove(Mercenary) > 0;
}