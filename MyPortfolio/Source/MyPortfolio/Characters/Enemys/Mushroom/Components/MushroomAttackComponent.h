// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonComponents/AttackComponent.h"
#include "MushroomAttackComponent.generated.h"

class AEnemyMushroom;
class UCapsuleComponent;

UCLASS()
class MYPORTFOLIO_API UMushroomAttackComponent : public UAttackComponent
{
	GENERATED_BODY()
	
public:
	UMushroomAttackComponent();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	//소유자 캐릭터
	TObjectPtr<AEnemyMushroom> Mushroom;

protected:
	//공격 히트박스
	TObjectPtr<UCapsuleComponent> HitBox;

public:
	virtual void Attack() override;
};
