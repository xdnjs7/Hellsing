#include "MercenaryManager.h"

AMercenary* UMercenaryManager::GetMercenary(int32 Index)
{
    if (Mercenaries.IsValidIndex(Index))
    {
        return Mercenaries[Index];
    }
    return nullptr;
}