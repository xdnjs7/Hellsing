#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Mercenary.h"
#include "MercenaryManager.h"
#include "Hellsing_GI.generated.h"

UCLASS()
class HELLSING_API UHellsing_GI : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UHellsing_GI();

	TArray<AMercenary*> PartyMembers;

	UPROPERTY()
	UMercenaryManager* MercenaryManager;

	UFUNCTION(BlueprintCallable, Category = "Party")
	bool AddToParty(AMercenary* Mercenary);

	UFUNCTION(BlueprintCallable, Category = "Party")
	bool RemoveFromParty(AMercenary* Mercenary);
};
