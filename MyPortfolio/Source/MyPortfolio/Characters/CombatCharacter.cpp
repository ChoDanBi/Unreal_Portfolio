// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCharacter.h"
#include "Components/CapsuleComponent.h"

ACombatCharacter::ACombatCharacter()
{
	AttackPower = 10.f;
	AttackRange = 300.f;
	DefensePower = 5.f;

	AttackHitBox = nullptr;
}

void ACombatCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACombatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
