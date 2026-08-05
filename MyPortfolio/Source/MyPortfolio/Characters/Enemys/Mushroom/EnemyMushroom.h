// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/Enemys/BaseEnemy.h"
#include "EnemyMushroom.generated.h"

class UStaticMeshComponent;
class UMushroomAnimInstance;

UCLASS()
class MYPORTFOLIO_API AEnemyMushroom : public ABaseEnemy
{
	GENERATED_BODY()
	
public:
	AEnemyMushroom();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:	//애니메이션 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UMushroomAnimInstance> AnimInstance;
public:
	UFUNCTION(BlueprintPure, Category = "Animation")
	UMushroomAnimInstance* GetAnimInstance() const { return AnimInstance; }
};
