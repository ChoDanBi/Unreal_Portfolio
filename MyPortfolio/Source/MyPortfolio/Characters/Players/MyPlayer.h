// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/BaseCharacter.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class MYPORTFOLIO_API AMyPlayer : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	AMyPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
