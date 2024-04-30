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

	//static ConstructorHelpers::FObjectFinder<UPaperFlipbook> IdleFinder(TEXT("/Game/Resources/PaperFlipBook/Idle"));
	//if (IdleFinder.Succeeded())
	//{
	//	IdleFlipbook = IdleFinder.Object;
	//	UE_LOG(LogTemp, Warning, TEXT("Idle Flipbook is loaded"));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Idle Flipbook is not loaded"));
	//}

	//static ConstructorHelpers::FObjectFinder<UPaperFlipbook> WalkFinder(TEXT("/Game/Resources/PaperFlipBook/Walk"));
	//if (WalkFinder.Succeeded())
	//{
	//	WalkFlipbook = WalkFinder.Object;
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Walk Animation is not loaded"));
	//}

	//static ConstructorHelpers::FObjectFinder<UPaperFlipbook> AxeFinder(TEXT("/Game/Resources/PaperFlipBook/Axe"));
	//if (AxeFinder.Succeeded())
	//{
	//	AxeFlipbook = AxeFinder.Object;
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Axe Animation is not loaded"));
	//}

}

//void AMercenary::BeginPlay()
//{
//	Super::BeginPlay();
//}

//void AMercenary::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//	if (IsMoving)
//	{
//		GetSprite()->SetFlipbook(WalkFlipbook);
//	}
//	else
//	{
//		GetSprite()->SetFlipbook(IdleFlipbook);
//	}
//}

//void AMercenary::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//	PlayerInputComponent->BindAxis("MoveForward", this, &AMercenary::MoveForward);
//	PlayerInputComponent->BindAxis("MoveRight", this, &AMercenary::MoveRight);
//
//	PlayerInputComponent->BindAction("RightClick", IE_Pressed, this, &AMercenary::OnMouseClick);
//}

//void AMercenary::MoveForward(float Value)
//{
//	if (Value != 0.0f)
//	{
//		//IsMoving = true;
//		FVector Direction = FVector(0, 1, 0);
//		AddMovementInput(Direction, Value * MoveSpeed);
//	}
//	else
//	{
//		//IsMoving = false;
//	}
//}

//void AMercenary::MoveRight(float Value)
//{
//	if (Value != 0.0f)
//	{
//		IsMoving = true;
//		FVector Direction = FVector(1, 0, 0);
//		AddMovementInput(Direction, Value * MoveSpeed);
//	}
//	else
//	{
//		IsMoving = false;
//	}
//}

//void AMercenary::OnMouseClick()
//{
//	FHitResult Hit;
//	GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);
//
//	if (Hit.GetActor() != nullptr && Hit.GetActor()->IsA(AMercenary::StaticClass()))
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mouse interaction detected."));
//	}
//	else
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mouse interaction not detected."));
//	}
//}