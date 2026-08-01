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
		//가드 처리
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Started, this, &APlayerAnimalController::GuardStart);
		EnhancedInputComponent->BindAction(GuardAction, ETriggerEvent::Completed, this, &APlayerAnimalController::GuardStop);
	}
}

void APlayerAnimalController::Sprint(const FInputActionValue& Value)
{

}

void APlayerAnimalController::Attack(const FInputActionValue& Value)
{
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
