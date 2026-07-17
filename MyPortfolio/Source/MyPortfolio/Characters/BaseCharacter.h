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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float MaxHp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackRange;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float AttackPower;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float DefensePower;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Status")
	float Hp;

private:
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float GroundSpeed;
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool ShouldMove;
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool IsFalling;

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void UpdateAnimationData();

};
