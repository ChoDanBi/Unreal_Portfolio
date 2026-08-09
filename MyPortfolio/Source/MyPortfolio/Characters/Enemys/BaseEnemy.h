// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/CombatCharacter.h"
#include "BaseEnemy.generated.h"

/**
 * 
 */
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

	

protected:
	//�ʱⰪ Status
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float SearchDistance;
public:
	// Getter functions for the character's status
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetSearchDistance() const { return SearchDistance; }

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	FVector HomeLocation;
public:
	FVector GetHomeLocation() const { return HomeLocation; }

};
