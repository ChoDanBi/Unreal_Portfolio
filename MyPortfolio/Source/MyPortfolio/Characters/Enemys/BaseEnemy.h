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
public:
	virtual void Tick(float DeltaTime) override;

	
	//AI Controller에서 사용
protected:	//인식 범위
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float SearchDistance;
public:
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetSearchDistance() const { return SearchDistance; }

protected:	//스폰된 장소
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	FVector HomeLocation;
public:
	FVector GetHomeLocation() const { return HomeLocation; }


public:
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

protected:	//받은 데미 표시를 위해
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUI_ShowDamage> DamageWidgetClass;
};
