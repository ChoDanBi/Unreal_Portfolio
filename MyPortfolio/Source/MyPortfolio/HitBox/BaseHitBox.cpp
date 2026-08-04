
#include "BaseHitBox.h"
#include "Components/ShapeComponent.h"

ABaseHitBox::ABaseHitBox()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABaseHitBox::OffHitBox()
{
	HitCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseHitBox::DeactivateHitBox()
{
	HitCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}


