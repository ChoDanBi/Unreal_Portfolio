// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UBaseAnimInstance;

UCLASS()
class MYPORTFOLIO_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();
protected:
	virtual void BeginPlay() override;

protected:
	//HP
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float MaxHp = 100.0f;

	//현재 HP
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
	float CurrentHp;

	//타겟팅 가능 여부
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Setting")
	bool bCanBeTargeted = true;

	//데미지 받을 수 있는 가능 여부
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Setting")
	bool bCanTakeDamage = true;

	//애니메이션
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Instance")
	TObjectPtr<UBaseAnimInstance> BaseAnimInstance;

public:	//Getter

	UFUNCTION(BlueprintPure, Category = "Status")
	float GetMaxHp() const { return MaxHp; }

	UFUNCTION(BlueprintPure, Category = "Status")
	float GetCurrentHp() const { return CurrentHp; }

	UFUNCTION(BlueprintPure, Category = "Target Setting")
	bool GetCanBeTargeted() const { return bCanBeTargeted; }

	UFUNCTION(BlueprintPure, Category = "Target Setting")
	bool GetCanTakeDamage() const { return bCanTakeDamage; }

	UFUNCTION(BlueprintPure, Category = "Animation Instance")
	UBaseAnimInstance* GetBaseAnimInstance() const { return BaseAnimInstance; }


public:
	/*
	Damage : 들어온 데미지
	DamageEvent : 어떤 형태의 데미지인지 추가 정보
	EventInstigator : 데미지를 준 컨트롤러, 범인
	DamageCauser : 데미지를 준 Actor, 흉기	, 총알 등

	ApplyDamage = 데미지를 가한다.
	TakeDamage = 데미지를 받는다.
	*/
	virtual float TakeDamage(float Damage,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;
};
