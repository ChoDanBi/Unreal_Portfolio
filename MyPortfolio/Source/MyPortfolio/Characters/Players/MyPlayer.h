// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/BaseCharacter.h"
#include "MyPlayer.generated.h"


enum class ECharacterActionState : uint8
{
	Default,
	Guard,
	Attack,
};

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

private://MeshComponent
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UStaticMeshComponent> Sword;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UStaticMeshComponent> Shield;

private: 
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class USpringArmComponent> SpringArm;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCameraComponent> Camera;

private:
	ECharacterActionState CurrentActionState;
public:
	ECharacterActionState GetActionState() const { return CurrentActionState; }
	void SetActionState(ECharacterActionState _NewActionState) { CurrentActionState = _NewActionState; }


public:
	void Attack();
};
