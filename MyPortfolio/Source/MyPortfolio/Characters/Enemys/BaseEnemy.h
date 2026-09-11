#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/CombatCharacter.h"
#include "BaseEnemy.generated.h"

class UUI_ShowDamage;

UCLASS()
class MYPORTFOLIO_API ABaseEnemy : public ACombatCharacter
{
	GENERATED_BODY()
	
public:
	ABaseEnemy();
protected:
	virtual void BeginPlay() override;

protected:	
	//인식 범위
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float SearchDistance = 500.0f;

	//스폰 위치
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	FVector HomeLocation;

	//받은 데미지 표시 위젯
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUI_ShowDamage> DamageWidgetClass;

public:
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetSearchDistance() const { return SearchDistance; }

	UFUNCTION(BlueprintPure, Category = "AI")
	FVector GetHomeLocation() const { return HomeLocation; }

public:

	//데미지를 받음
	virtual float TakeDamage(float Damage, 
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;
};
