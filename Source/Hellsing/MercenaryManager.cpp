#include "MercenaryManager.h"

AMercenary* UMercenaryManager::GetMercenary(int32 Index)
{
    // Mercenaries 배열이 유효한지 확인
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary가 유효한지 확인
        if (Mercenaries[Index])
        {
            return Mercenaries[Index];
        }
    }
    return nullptr;
}