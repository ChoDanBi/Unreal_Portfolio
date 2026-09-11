#pragma once

#include "CoreMinimal.h"
#include "Controllers/BasePlayerController.h"
#include "PlayerAnimalController.generated.h"


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TObjectPtr<UInputAction> ZoomAction;

public:
	void Attack(const FInputActionValue& Value);

	// Sprint and StopSprint functions for handling sprint input
	void SprintStart(const FInputActionValue& Value);
	void SprintStop(const FInputActionValue& Value);

	// GuardStart and GuardStop functions for handling guard input
	void GuardStart(const FInputActionValue& Value);
	void GuardStop(const FInputActionValue& Value);

	// ZoomIn and ZoomOut functions for handling zoom input
	void ZoomIn(const FInputActionValue& Value);
	void ZoomOut(const FInputActionValue& Value);
};
