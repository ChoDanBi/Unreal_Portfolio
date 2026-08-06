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
	//�ʱⰪ Status
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Status")
	float SearchDistance;
public:
	// Getter functions for the character's status
	UFUNCTION(BlueprintPure, Category = "Status")
	float GetSearchDistance() const { return SearchDistance; }
};
