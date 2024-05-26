#include "MercenaryManager.h"

// �����ڿ��� Ǯ�� �ʱ�ȭ
UMercenaryManager::UMercenaryManager()
{
    // 'GetWorld()' �Լ��� ȣ���Ͽ� ���� ���� ���忡 ���� ������ ������.
    // �� ����� ������ ��� ���Ϳ� ������Ʈ�� �����ϴ� ȯ���̾�� ��.
    UWorld* World = GetWorld();

    // ���尡 ��ȿ���� Ȯ��. ���尡 ��ȿ���� �ʴٸ�, ������ �ڵ�� ������� ����.
    if (World)
    {
        // ���͸� ����(����)�� �� �ʿ��� �Ķ���͸� ����.
        FActorSpawnParameters SpawnParams;

        // ������ ������ 'Owner'�� ����. ���⼭�� ������ ù ��° �÷��̾� ��Ʈ�ѷ��� �����ڷ� ����.
        // 'Owner'�� ������ '�����ֱ�'�� �����ϸ�, ������ ��Ʈ��ũ ����ȭ�� ������ ��ģ��.
        SpawnParams.Owner = World->GetFirstPlayerController();

        // ������ ������ 'Instigator'�� ����. ���⼭�� ù ��° �÷��̾� ��Ʈ�ѷ��� ��(ĳ����)�� ��ġ�ڷ� ����.
        // 'Instigator'�� ���Ͱ� �ٸ� ���Ϳ��� ���ظ� ���� ��, �� ������ ������ �� ���͸� ������.
        SpawnParams.Instigator = World->GetFirstPlayerController()->GetPawn();

        // Mercenaries �迭�� ũ�⸸ŭ �ݺ��Ͽ� Mercenary ��ü�� �����ϰ� Ǯ�� �߰�.
        for (int32 i = 0; i < Mercenaries.Num(); ++i)
        {
            // 'SpawnActor' �Լ��� ȣ���Ͽ� Mercenary ��ü�� ����.
            // �� �Լ��� ������ Ŭ������ �� �ν��Ͻ��� ���忡 ����.
            // ���⼭�� Mercenary Ŭ������ �ν��Ͻ��� �����ϸ�, ���� ��ġ�� ȸ���� ���� FVector::ZeroVector�� FRotator::ZeroRotator�� ����.
            AMercenary* NewMercenary = World->SpawnActor<AMercenary>(AMercenary::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

            // ������ Mercenary ��ü�� MercenaryPool �迭�� �߰�.
            MercenaryPool.Add(NewMercenary);
        }
    }
}

// Mercenary ��ü�� Ǯ�� �߰��ϴ� �Լ�
void UMercenaryManager::AddMercenaryToPool(AMercenary* Mercenary)
{
    // Mercenary�� ��ȿ�ϰ� Mercenaries �迭�� ���� ��쿡�� �߰�
    if (Mercenary && !Mercenaries.Contains(Mercenary))
    {
        Mercenaries.Add(Mercenary);
    }
}

// �ε����� �ش��ϴ� Mercenary�� ��ȯ�ϴ� �Լ�
AMercenary* UMercenaryManager::GetMercenaryFromPool(int32 Index)
{
    // Mercenaries �迭�� ��ȿ���� Ȯ��
    if (Mercenaries.IsValidIndex(Index))
    {
        // Mercenary�� ��ȿ���� Ȯ��
        if (Mercenaries[Index])
        {
            // �ε����� �ش��ϴ� Mercenary�� ��ȯ
            return Mercenaries[Index];
        }
    }
    // ��ȿ�� Mercenary�� ������ nullptr�� ��ȯ
    return nullptr;
}

// ��� ������ �������Ʈ ��ü�� Ǯ���� �������� �Լ�
AMercenary* UMercenaryManager::GetFromPool()
{
    // ��� ������ �������Ʈ ��ü�� �ִ��� Ȯ���ϰ� ��ȯ
    for (AMercenary* Mercenary : MercenaryPool)
    {
        // ��ü�� ��� ������ Ȯ��
        if (!Mercenary->IsInUse())
        {
            // ��ü�� ��� ������ �����ϰ� ��ȯ
            Mercenary->SetInUse(true);
            return Mercenary;
        }
    }
    // ��� ������ �������Ʈ ��ü�� ������ nullptr�� ��ȯ
    return nullptr;
}