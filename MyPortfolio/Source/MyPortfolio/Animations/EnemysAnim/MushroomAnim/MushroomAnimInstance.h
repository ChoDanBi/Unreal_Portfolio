// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Animations/BaseAnimInstance.h"
#include "MushroomAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API UMushroomAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()
	
public:
	UMushroomAnimInstance();

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
