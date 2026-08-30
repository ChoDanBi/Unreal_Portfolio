// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Enemys/Mushroom/Components/MushroomAttackComponent.h"
#include "MushroomAttackComponent.h"

#include "Characters/Enemys/Mushroom/EnemyMushroom.h"
#include "Animations/BaseAnimInstance.h"

#include "Components/CapsuleComponent.h"


UMushroomAttackComponent::UMushroomAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	DefaultHitBox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Attack HitBox"));
	
	HitBox = Cast<UCapsuleComponent>(DefaultHitBox);
	HitBox->SetRelativeLocationAndRotation(FVector(50.0f, 0.0f, -40.0f), FRotator(-90.0f, 0.0f, 0.0f));
	HitBox->SetCapsuleHalfHeight(50.0f);
	HitBox->SetCapsuleRadius(40.0f);

	AttackNames = { TEXT("Attack1"), TEXT("Attack2"), TEXT("Attack3") };
}

void UMushroomAttackComponent::BeginPlay()
{
	Super::BeginPlay();

	Mushroom = Cast<AEnemyMushroom>(CompOwner);
	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UMushroomAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsAttacking) DebugHitBox(DeltaTime, FColor::Green);
	else DebugHitBox(DeltaTime, FColor::Red);
}

bool UMushroomAttackComponent::Attack_Implementation()
{
	if (!UAttackComponent::Attack_Implementation()) return false;
	/*
	//몽타주가 끝나면 EndAttack()이 자동으로 실행됨
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UAttackComponent::SetEndAttackDelegate);

	CompOwner->GetBaseAnimInstance()->PlayMontageByName(GetCurrentAttackName(), EndDelegate);
	*/
	return true;
}

void UMushroomAttackComponent::EndAttack()
{
	if (!CompOwner || !HitBox)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack : Can't End!"));
		return;
	}
	UAttackComponent::EndAttack();

	SetNextAttackIndex();
}
