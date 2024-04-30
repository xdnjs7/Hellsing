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
    // ��Ƽ ����� 4�� �̸����� Ȯ��
    if (PartyMembers.Num() < 4)
    {
        // Mercenary�� ��ȿ���� Ȯ��
        if (Mercenary)
        {
            PartyMembers.Add(Mercenary);
            return true;
        }
        else
        {
			// Mercenary�� ��ȿ���� ����
			return false;
		}

    }
    else
    {
        // ��Ƽ ����� 4�� �̻��̸� �߰����� ����
        return false;
    }
    return false;
}

bool UHellsing_GI::RemoveFromParty(AMercenary* Mercenary)
{
    return PartyMembers.Remove(Mercenary) > 0;
}