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
		//공격 처리
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &APlayerAnimalController::Attack);
		
		//스프린트
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &APlayerAnimalController::SprintStart);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &APlayerAnimalController::SprintStop);

		//가드 처리
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Started, this, &APlayerAnimalController::GuardStart);
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Completed, this, &APlayerAnimalController::GuardStop);

		//줌 인
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Started, this, &APlayerAnimalController::ZoomIn);
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Completed, this, &APlayerAnimalController::ZoomOut);
	}
}

void APlayerAnimalController::Attack(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->Attack();
}

void APlayerAnimalController::SprintStart(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetSprint(true);
}

void APlayerAnimalController::SprintStop(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetSprint(false);
}

void APlayerAnimalController::GuardStart(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetGuard(true);
}

void APlayerAnimalController::GuardStop(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetGuard(false);
}

void APlayerAnimalController::ZoomIn(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetZoom(true);
}

void APlayerAnimalController::ZoomOut(const FInputActionValue& Value)
{
	AMyPlayer* pPlayer = Cast<AMyPlayer>(ControlledPawn);
	if (pPlayer) pPlayer->SetZoom(false);
}
