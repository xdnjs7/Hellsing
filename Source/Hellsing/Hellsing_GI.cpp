#include "Hellsing_GI.h"

UHellsing_GI::UHellsing_GI()
{
    // MercenaryManager ��ü ����
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
            // ��Ƽ�� ��� �߰�
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

TArray<AMercenary*> UHellsing_GI::GetPartyMembers() const
{
    UE_LOG(LogTemp, Warning, TEXT("Number of Party Members: %d"), PartyMembers.Num());

    // ��Ƽ ��� �迭 ��ȯ
    return PartyMembers;
}

bool UHellsing_GI::RemoveFromParty(AMercenary* Mercenary)
{
    // ��Ƽ���� ��� ����
    return PartyMembers.Remove(Mercenary) > 0;
}