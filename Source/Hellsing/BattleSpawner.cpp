// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleSpawner.h"

// Sets default values
ABattleSpawner::ABattleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BattleUnits.Append(Monsters);
	BattleUnits.Append(Party);
	BattleUnits.Sort([](const AUnit& A, const AUnit& B) {
		return A.stats.Speed > B.stats.Speed;
		});
}

// Called when the game starts or when spawned
void ABattleSpawner::BeginPlay()
{
	Super::BeginPlay();

	// �� ������ ��ġ�� �����ɴϴ�.
	FVector MyLocation = GetActorLocation();

	// ��Ƽ�� ���ʿ� ��ġ�մϴ�.
	for (AMercenary* Mercenary : Party)
	{
		// Mercenary�� ���忡 �����մϴ�.
		AMercenary* SpawnedMercenary = GetWorld()->SpawnActor<AMercenary>(Mercenary->GetClass(), MyLocation, FRotator::ZeroRotator);

		// Mercenary�� ��ġ�� �������� �̵��մϴ�.
		MyLocation.X -= 100;
	}

	// ���͸� �����ʿ� ��ġ�մϴ�.
	for (AMonster* Monster : Monsters)
	{
		// Monster�� ���忡 �����մϴ�.
		AMonster* SpawnedMonster = GetWorld()->SpawnActor<AMonster>(Monster->GetClass(), MyLocation, FRotator::ZeroRotator);

		// Monster�� ��ġ�� ���������� �̵��մϴ�.
		MyLocation.X += 100;
	}
	
}

// Called every frame
void ABattleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

