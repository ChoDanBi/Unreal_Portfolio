// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
//#include "GameFramework/CharacterMovementComponent.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	MaxHp = 100.f;
	AttackPower = 10.f;
	AttackRange = 100.f;
	DefensePower = 5.f;
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	Hp = MaxHp;
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	UCharacterMovementComponent* MovementComp = GetCharacterMovement();
	if (IsValid(MovementComp))
	{
		FVector Velocity = MovementComp->Velocity;
		float GroundSpeed = Velocity.Size2D();
		ShouldMove = GroundSpeed >= 1.0;
	}
	*/
	FVector Velocity = GetVelocity();
	ShouldMove = Velocity.Size2D() > 3.f;
}