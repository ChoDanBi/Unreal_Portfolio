// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "MyPortfolio/Animations/BaseAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Animation/AnimInstance.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	MaxHp = 100.f;
	AttackPower = 10.f;
	AttackRange = 100.f;
	DefensePower = 5.f;

	AttackHitBox = nullptr;
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	BaseAnimInstance = GetMesh()->GetAnimInstance();

	CurrentHp = MaxHp;
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//쓸지 몰라서 냅두는 중
}

float ABaseCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHp -= Damage;
	UE_LOG(LogTemp, Warning, TEXT("CurrentHp: %f"), CurrentHp);
	//구현해야 함
	return CurrentHp;
}
