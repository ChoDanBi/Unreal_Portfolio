#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "CombatCharacter.generated.h"

/**
 * 모든 전투 가능한 캐릭터의 기본 클래스.
 * 공격, 방어, 공격 범위 등 전투 관련 기능을 제공합니다.
 * Player, Enemy, 전투 가능한 NPC는 이 클래스를 상속받습니다.
 */


class UShapeComponent;
class UAttackComponent;

UCLASS()
class MYPORTFOLIO_API ACombatCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	ACombatCharacter();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:
	//초기값 Status
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackRange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackPower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float DefensePower;
public:
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetAttackRange() const { return AttackRange; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetAttackPower() const { return AttackPower; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetDefensePower() const { return DefensePower; }


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	TObjectPtr<UAttackComponent> CombatAttackComponent;
public:
	UFUNCTION(BlueprintPure, Category = "Attack")
	UAttackComponent* GetCombatAttackComponent() const { return CombatAttackComponent; }

public:
	virtual void Attack();
};
