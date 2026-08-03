// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleHitBox.h"
#include "DrawDebugHelpers.h"

ACapsuleHitBox::ACapsuleHitBox()
{
	HitCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
	HitCollision->SetupAttachment(RootComponent);

	CapsuleCollision = Cast<UCapsuleComponent>(HitCollision);
}

void ACapsuleHitBox::DebugHitBox()
{
	if (!IsValid(CapsuleCollision)) return;
	DrawDebugCapsule(
		GetWorld(),
		CapsuleCollision->GetComponentLocation(),
		CapsuleCollision->GetScaledCapsuleHalfHeight(),
		CapsuleCollision->GetScaledCapsuleRadius(),
		CapsuleCollision->GetComponentQuat(),
		FColor::Green,
		false,
		2.0f
	);

}
