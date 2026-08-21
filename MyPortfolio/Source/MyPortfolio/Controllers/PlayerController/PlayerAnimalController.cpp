// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPortfolio/Controllers/PlayerController/PlayerAnimalController.h"

#include "MyPortfolio/Characters/Players/MyPlayer.h"

#include "InputAction.h"
#include "InputActionValue.h"

#include "EnhancedInputComponent.h"	
#include "EnhancedInputSubsystems.h"

APlayerAnimalController::APlayerAnimalController()
{
	GuardAction = nullptr;
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
