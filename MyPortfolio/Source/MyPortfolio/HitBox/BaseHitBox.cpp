
#include "BaseHitBox.h"
#include "Components/ShapeComponent.h"

ABaseHitBox::ABaseHitBox()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABaseHitBox::ActivateHitBox()
{
	//SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseHitBox::DeactivateHitBox()
{
	//SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}


