#include "Mercenary.h"

AMercenary::AMercenary()
{
	PrimaryActorTick.bCanEverTick = true;

	stats.Attack = 10;
	stats.Defense = 10;
	stats.Health = 100;
	stats.MaxHealth = 100;
	stats.Speed = 10;
	stats.Level = 1;


	
}

void AMercenary::BeginPlay()
{
	Super::BeginPlay();

}

void AMercenary::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMercenary::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack"));
}

void AMercenary::MerTakeDamage(int damage)
{
	stats.Health -= damage;
}

bool AMercenary::IsInUse() const
{
	return bInUse;
}

void AMercenary::SetInUse(bool bUse)
{
	bInUse = bUse;
}