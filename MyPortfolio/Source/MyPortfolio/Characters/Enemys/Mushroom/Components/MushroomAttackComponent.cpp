// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Enemys/Mushroom/Components/MushroomAttackComponent.h"
#include "MushroomAttackComponent.h"

#include "Characters/Enemys/Mushroom/EnemyMushroom.h"

#include "Components/CapsuleComponent.h"


UMushroomAttackComponent::UMushroomAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	DefaultHitBox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Attack HitBox"));
	
	HitBox = Cast<UCapsuleComponent>(DefaultHitBox);
	HitBox->SetRelativeLocationAndRotation(FVector(50.0f, 0.0f, -40.0f), FRotator(-90.0f, 0.0f, 0.0f));
	HitBox->SetCapsuleHalfHeight(50.0f);
	HitBox->SetCapsuleRadius(40.0f);
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

	DebugHitBox(DeltaTime, FColor::Red);
}

void UMushroomAttackComponent::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Mushroom Attack!"));
}