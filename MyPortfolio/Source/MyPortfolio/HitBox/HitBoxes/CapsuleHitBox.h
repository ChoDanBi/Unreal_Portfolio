// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/HitBox/BaseHitBox.h"
#include "Components/CapsuleComponent.h"
#include "CapsuleHitBox.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API ACapsuleHitBox : public ABaseHitBox
{
	GENERATED_BODY()
	
public:
	ACapsuleHitBox();

public:	//HitCollision
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCapsuleComponent> CapsuleCollision;

public:	//µð¹ö±ë
	virtual void DebugHitBox() override;
};
