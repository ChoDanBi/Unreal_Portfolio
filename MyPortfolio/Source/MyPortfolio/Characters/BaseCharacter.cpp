// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "MyPortfolio/Animations/BaseAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimInstance.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	MaxHp = 100.f;
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	BaseAnimInstance = GetMesh()->GetAnimInstance();
	CurrentHp = MaxHp;
}

float ABaseCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (!CanTakeDamage()) return CurrentHp;

	CurrentHp -= Damage;
	UE_LOG(LogTemp, Warning, TEXT("CurrentHp: %f"), CurrentHp);

	//구현해야 함
	return CurrentHp;
}
