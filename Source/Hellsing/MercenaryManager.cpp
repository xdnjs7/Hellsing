#include "MercenaryManager.h"

AMercenary* UMercenaryManager::GetMercenary(int32 Index)
{
    // Mercenaries �迭�� ��ȿ���� Ȯ��
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary�� ��ȿ���� Ȯ��
        if (Mercenaries[Index])
        {
            return Mercenaries[Index];
        }
    }
    return nullptr;
}