#include "Monster.h"

AMonster::AMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	stats.Health=100;

}




void AMonster::MobTakeDamage(int damage)
{
	stats.Health -= damage;
	if (stats.Health <= 0)
	{
		Destroy();
	}
}