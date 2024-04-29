#include "Hellsing_GI.h"

UHellsing_GI::UHellsing_GI()
{
   	MercenaryManager = NewObject<UMercenaryManager>();
}

bool UHellsing_GI::AddToParty(AMercenary* Mercenary)
{
    if (PartyMembers.Num() < 4)
    {
        PartyMembers.Add(Mercenary);
        return true;
    }
    return false;
}

bool UHellsing_GI::RemoveFromParty(AMercenary* Mercenary)
{
    return PartyMembers.Remove(Mercenary) > 0;
}