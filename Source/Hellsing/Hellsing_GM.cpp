#include "Hellsing_GM.h"

AHellsing_GM::AHellsing_GM()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerControllerClass = AHellsing_PC::StaticClass();

	//static ConstructorHelpers::FClassFinder<APawn> Player(TEXT("/Game/BattleRoom/TP1.TP1_C"));
	//if (Player.Class != NULL)
	//{
	//	DefaultPawnClass = Player.Class;
	//}

	DefaultPawnClass = nullptr;
}