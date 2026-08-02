
#include "BaseHitBox.h"

#include "GameFramework/Pawn.h"

#include "Components/ShapeComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"

ABaseHitBox::ABaseHitBox()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABaseHitBox::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseHitBox::DebugBox(UBoxComponent* BoxCollision)
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

void ABaseHitBox::DebugCapsule(UCapsuleComponent* CapsuleCollision)
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

void ABaseHitBox::DebugSphere(USphereComponent* SphereCollision)
{
    if (!IsValid(SphereCollision)) return;

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

void ABaseHitBox::ActivateHitBox()
{
	//SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseHitBox::DeactivateHitBox()
{
	//SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}


