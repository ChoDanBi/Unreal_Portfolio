#include "PlayerAnimalController.h"
#include "Entity/Players/AnimalHero/MyPlayer.h"

#include "GameFramework/SpringArmComponent.h"

#include "InputAction.h"
#include "InputActionValue.h"

#include "EnhancedInputComponent.h"	
#include "EnhancedInputSubsystems.h"

APlayerAnimalController::APlayerAnimalController()
{
	GuardAction = nullptr;
	ZoomAction = nullptr;
}

void APlayerAnimalController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//스프린트
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &APlayerAnimalController::Sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &APlayerAnimalController::StopSprint);

		//공격 처리
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &APlayerAnimalController::Attack);

		//가드 처리
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Started, this, &APlayerAnimalController::GuardStart);
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Completed, this, &APlayerAnimalController::GuardStop);

		//줌 인
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Started, this, &APlayerAnimalController::ZoomIn);
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Completed, this, &APlayerAnimalController::ZoomOut);
	}
}

void APlayerAnimalController::Sprint(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->SetSprint(true);
	}
}

void APlayerAnimalController::StopSprint(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->SetSprint(false);
	}
}

void APlayerAnimalController::Attack(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->Attack();
	}
}

void APlayerAnimalController::GuardStart(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->SetActionState(ECharacterActionState::Guard);
	}
}

void APlayerAnimalController::GuardStop(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->SetActionState(ECharacterActionState::Default);
	}
}

void APlayerAnimalController::ZoomIn(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->GetSpringArm()->TargetArmLength = 100.f;
		pPlayer->GetSpringArm()->SocketOffset = FVector(0.0f, 120.0f, 30.0f);
		pPlayer->SetActionState(ECharacterActionState::Zoom);
	}
}

void APlayerAnimalController::ZoomOut(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer)
	{
		pPlayer->GetSpringArm()->TargetArmLength = 400.f;
		pPlayer->GetSpringArm()->SocketOffset = FVector(0.0f, 0.0f, 0.0f);
		pPlayer->SetActionState(ECharacterActionState::Default);
	}
}
