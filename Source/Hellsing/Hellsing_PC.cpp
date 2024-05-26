#include "Hellsing_PC.h"

AHellsing_PC::AHellsing_PC()
{
	
}

void AHellsing_PC::BeginPlay()
{
	Super::BeginPlay();

	SetShowMouseCursor(true);
	
	bEnableClickEvents = true;
}

void AHellsing_PC::SetupInputComponent()
{
	Super::SetupInputComponent();
}