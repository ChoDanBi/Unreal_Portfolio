#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PlayerGuardComponent.generated.h"

class AActor;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UPlayerGuardComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPlayerGuardComponent();
protected:
	virtual void BeginPlay() override;

public:
	// Getter
	UFUNCTION(BlueprintCallable, Category = "Guard")
	bool IsGuardingSuccesd(AActor* Player, AActor* DamageCauser) const;
};