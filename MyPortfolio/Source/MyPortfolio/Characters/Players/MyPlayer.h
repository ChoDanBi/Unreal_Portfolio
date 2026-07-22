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

private://MeshComponent
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Sword;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Shield;
private: 
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

public:
	AMyPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
