// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UCapsuleComponent;

UCLASS()
class MYPORTFOLIO_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:
	//초기값 Status
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float MaxHp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
	float CurrentHp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackRange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackPower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float DefensePower;
public:
	// Getter functions for the character's status
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetMaxHp() const { return MaxHp; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetCurrentHp() const { return CurrentHp; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetAttackRange() const { return AttackRange; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetAttackPower() const { return AttackPower; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetDefensePower() const { return DefensePower; }


protected:	//HitBox
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HitBox")
	TObjectPtr<UCapsuleComponent> AttackHitBox;
public:
	UFUNCTION(BlueprintPure, Category = "HitBox")
	UCapsuleComponent* GetAttackHitBox() const { return AttackHitBox; }


protected:
	UPROPERTY()
	TObjectPtr<class UAnimInstance> BaseAnimInstance;


public:
	/*
	Damage : 들어온 데미지
	DamageEvent : 어떤 형태의 데미지인지 추가 정보
	EventInstigator : 데미지를 준 컨트롤러, 범인
	DamageCauser : 데미지를 준 Actor, 흉기	, 총알 등

	ApplyDamage = 데미지를 가한다.
	TakeDamage = 데미지를 받는다.
	*/
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
