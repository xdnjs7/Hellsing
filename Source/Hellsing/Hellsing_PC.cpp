#include "Hellsing_PC.h"

AHellsing_PC::AHellsing_PC()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Title(TEXT("/Game/UI/WB_Title.WB_Title_C"));
	if (WB_Title.Succeeded())
	{
		TitleUIClass = WB_Title.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_Title class"));
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Main(TEXT("/Game/UI/WB_Main.WB_Main_C"));
	if (WB_Main.Succeeded())
	{
		MainUIClass = WB_Main.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_Main class"))
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Town(TEXT("/Game/UI/WB_Town.WB_Town_C"));
	if (WB_Town.Succeeded())
	{
		TownUIClass = WB_Town.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_Town class"));
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Explore(TEXT("/Game/UI/WB_Explore.WB_Explore_C"));
	if (WB_Explore.Succeeded())
	{
		ExploreUIClass = WB_Explore.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_Explore class"));
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_SaveSlot(TEXT("/Game/UI/WB_SaveSlot.WB_SaveSlot_C"));
	if (WB_SaveSlot.Succeeded())
	{
		SaveSlotUIClass = WB_SaveSlot.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_SaveSlot class"));
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Options(TEXT("/Game/UI/WB_Options.WB_Options_C"));
	if (WB_Options.Succeeded())
	{
		OptionsUIClass = WB_Options.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find WB_Options class"));
	}

	 //------------------------------ UI持失切 ------------------------------
}

void AHellsing_PC::BeginPlay()
{
	Super::BeginPlay();

	FString CurrentMapName = FPaths::GetBaseFilename(GetWorld()->GetMapName(), false);

	FString MapNameWithoutPrefix = CurrentMapName.Replace(TEXT("UEDPIE_0_"), TEXT(""));

	if (MapNameWithoutPrefix.Equals("Title", ESearchCase::IgnoreCase))
	{
		if (TitleUIClass)
		{
			UUserWidget* TitleUIObject = CreateWidget<UUserWidget>(this, TitleUIClass);
			if (TitleUIObject)
			{
				TitleUIObject->AddToViewport();
				TitleUIObject->SetVisibility(ESlateVisibility::Visible);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create Title UI"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Title UI class is not set"));
		}
	}
	else if (MapNameWithoutPrefix.Equals("Main", ESearchCase::IgnoreCase))
	{
		if (MainUIClass)
		{
			UUserWidget* MainUIObject = CreateWidget<UUserWidget>(this, MainUIClass);
			if (MainUIObject)
			{
				MainUIObject->AddToViewport();
				MainUIObject->SetVisibility(ESlateVisibility::Visible);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create Main UI"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Main UI class is not set"));
		}
	}
	else if (MapNameWithoutPrefix.Equals("Town", ESearchCase::IgnoreCase))
	{
		if (TownUIClass)
		{
			UUserWidget* TownUIObject = CreateWidget<UUserWidget>(this, TownUIClass);
			if (TownUIObject)
			{
				TownUIObject->AddToViewport();
				TownUIObject->SetVisibility(ESlateVisibility::Visible);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create Town UI"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Town UI class is not set"));
		}
	}
	else if (MapNameWithoutPrefix.Equals("Explore", ESearchCase::IgnoreCase))
	{
		if (ExploreUIClass)
		{
			UUserWidget* ExploreUIObject = CreateWidget<UUserWidget>(this, ExploreUIClass);
			if (ExploreUIObject)
			{
				ExploreUIObject->AddToViewport();
				ExploreUIObject->SetVisibility(ESlateVisibility::Visible);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create Explore UI"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Explore UI class is not set"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Unknown map name: %s"), *CurrentMapName);
	}

	 //------------------------------ UI持失切 ------------------------------

	SetShowMouseCursor(true);
	
	bEnableClickEvents = true;
}

void AHellsing_PC::SetupInputComponent()
{
	Super::SetupInputComponent();
}