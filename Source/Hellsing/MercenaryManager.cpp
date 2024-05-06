#include "MercenaryManager.h"

AMercenary* UMercenaryManager::GetMercenary(int32 Index)
{
    // Mercenaries 배열이 유효한지 확인
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary가 유효한지 확인
        if (Mercenaries[Index])
        {
            // 인덱스에 해당하는 Mercenary 반환
            return Mercenaries[Index];
        }
    }
    return nullptr;
}