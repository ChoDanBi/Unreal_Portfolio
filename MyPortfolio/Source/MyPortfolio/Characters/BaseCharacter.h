// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class MYPORTFOLIO_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<class UAnimInstance> AnimInstance;

protected:	//초기값
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float MaxHp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackRange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackPower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float DefensePower;

protected:	//현재값
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
	float Hp;

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
