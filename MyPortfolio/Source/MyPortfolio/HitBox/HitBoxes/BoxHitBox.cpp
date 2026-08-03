// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxHitBox.h"
#include "DrawDebugHelpers.h"

ABoxHitBox::ABoxHitBox()
{
    HitCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    HitCollision->SetupAttachment(RootComponent);

    BoxCollision = Cast<UBoxComponent>(HitCollision);
}

void ABoxHitBox::DebugHitBox()
{
    if (!IsValid(BoxCollision)) return;

    DrawDebugBox(
        GetWorld(),
        BoxCollision->GetComponentLocation(),
        BoxCollision->GetScaledBoxExtent(),
        BoxCollision->GetComponentQuat(),
        FColor::Green,
        false,
        2.0f
    );
}
