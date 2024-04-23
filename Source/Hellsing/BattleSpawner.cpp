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

	// 이 액터의 위치를 가져옵니다.
	FVector MyLocation = GetActorLocation();

	// 파티를 왼쪽에 배치합니다.
	for (AMercenary* Mercenary : Party)
	{
		// Mercenary를 월드에 스폰합니다.
		AMercenary* SpawnedMercenary = GetWorld()->SpawnActor<AMercenary>(Mercenary->GetClass(), MyLocation, FRotator::ZeroRotator);

		// Mercenary의 위치를 왼쪽으로 이동합니다.
		MyLocation.X -= 100;
	}

	// 몬스터를 오른쪽에 배치합니다.
	for (AMonster* Monster : Monsters)
	{
		// Monster를 월드에 스폰합니다.
		AMonster* SpawnedMonster = GetWorld()->SpawnActor<AMonster>(Monster->GetClass(), MyLocation, FRotator::ZeroRotator);

		// Monster의 위치를 오른쪽으로 이동합니다.
		MyLocation.X += 100;
	}
	
}

// Called every frame
void ABattleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

