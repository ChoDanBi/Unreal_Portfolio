// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"
#include "PlayerAttack.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API APlayerAttack : public AMyPlayer
{
	GENERATED_BODY()
	
public:
	APlayerAttack();

private:
	/*
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UBoxComponent> SwordCollision;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UBoxComponent> ShieldCollision;
	*/
};
