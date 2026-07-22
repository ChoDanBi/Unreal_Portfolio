// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "MyPortfolio/Animations/BaseAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"

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

	UpdateAnimationData();

}

void ABaseCharacter::UpdateAnimationData()
{
	FVector Velocity = GetVelocity();
	GroundSpeed = Velocity.Size2D();

	ShouldMove = GroundSpeed > 1.f;

	IsFalling = GetCharacterMovement()->IsFalling();
}
