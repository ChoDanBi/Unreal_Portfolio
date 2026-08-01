// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Controllers/BasePlayerController.h"
#include "PlayerAnimalController.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API APlayerAnimalController : public ABasePlayerController
{
	GENERATED_BODY()

public:
	APlayerAnimalController();

public:	// Setup input bindings for the player controller
	virtual void SetupInputComponent() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TObjectPtr<UInputAction> GuardAction;

public:
	void Sprint(const FInputActionValue& Value);
	void Attack(const FInputActionValue& Value);
	void GuardStart(const FInputActionValue& Value);
	void GuardStop(const FInputActionValue& Value);
};
