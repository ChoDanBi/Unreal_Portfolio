// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UBaseAnimInstance;

USTRUCT(BlueprintType)
struct FTargetSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanBeTargeted = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanTakeDamage = true;
};

UCLASS()
class MYPORTFOLIO_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();
protected:
	virtual void BeginPlay() override;


	//초기값 Status
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float MaxHp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
	float CurrentHp;
public:
	// Getter functions for the character's status
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetMaxHp() const { return MaxHp; }
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetCurrentHp() const { return CurrentHp; }


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Setting")
	FTargetSettings TargetSettings;
public:
	UFUNCTION(BlueprintPure, Category = "Target Setting")
	const FTargetSettings& GetTargetSettings() const { return TargetSettings; }
	UFUNCTION(BlueprintPure, Category = "Target Setting")
	bool CanBeTargeted() const { return TargetSettings.bCanBeTargeted; }
	UFUNCTION(BlueprintPure, Category = "Target Setting")
	bool CanTakeDamage() const { return TargetSettings.bCanTakeDamage; }


protected:	//애니메이션
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Instance")
	TObjectPtr<UBaseAnimInstance> BaseAnimInstance;
public:
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
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
