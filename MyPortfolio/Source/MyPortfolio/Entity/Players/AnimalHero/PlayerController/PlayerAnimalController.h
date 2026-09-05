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
	void Sprint(const FInputActionValue& Value);
	void StopSprint(const FInputActionValue& Value);
	void Attack(const FInputActionValue& Value);
	void GuardStart(const FInputActionValue& Value);
	void GuardStop(const FInputActionValue& Value);
	void ZoomIn(const FInputActionValue& Value);
	void ZoomOut(const FInputActionValue& Value);
};
