#include "MercenaryManager.h"

AMercenary* UMercenaryManager::GetMercenary(int32 Index)
{
    // Mercenaries �迭�� ��ȿ���� Ȯ��
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary�� ��ȿ���� Ȯ��
        if (Mercenaries[Index])
        {
            // �ε����� �ش��ϴ� Mercenary ��ȯ
            return Mercenaries[Index];
        }
    }
    return nullptr;
}

void UMercenaryManager::AddMercenary(AMercenary* Mercenary)
{
    if (Mercenary && !Mercenaries.Contains(Mercenary))
    {
        Mercenaries.Add(Mercenary);
    }
}