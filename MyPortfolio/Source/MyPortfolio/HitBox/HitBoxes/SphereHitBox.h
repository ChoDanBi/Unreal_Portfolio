// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/HitBox/BaseHitBox.h"
#include "Components/SphereComponent.h"
#include "SphereHitBox.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API ASphereHitBox : public ABaseHitBox
{
	GENERATED_BODY()
	
public:
	ASphereHitBox();

public:	//HitCollision
	UPROPERTY(EditAnywhere)
	TObjectPtr<USphereComponent> SphereCollision;

public:	//µð¹ö±ë
	virtual void DebugHitBox() override;;
};
