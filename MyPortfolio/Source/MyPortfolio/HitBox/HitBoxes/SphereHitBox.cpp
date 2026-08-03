// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereHitBox.h"
#include "DrawDebugHelpers.h"

ASphereHitBox::ASphereHitBox()
{
	HitCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	HitCollision->SetupAttachment(RootComponent);

	SphereCollision = Cast<USphereComponent>(HitCollision);
}

void ASphereHitBox::DebugHitBox()
{
    if(!IsValid(SphereCollision)) return;

    DrawDebugSphere(
        GetWorld(),
        SphereCollision->GetComponentLocation(),
        SphereCollision->GetScaledSphereRadius(),
        16,
        FColor::Green,
        false,
        2.0f
    );
}
