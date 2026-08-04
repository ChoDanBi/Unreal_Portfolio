#include "MyPortfolio/Characters/Players/Components/PlayerGuardComponent.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"

#include "Components/BoxComponent.h"

UPlayerGuardComponent::UPlayerGuardComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UPlayerGuardComponent::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<AMyPlayer>(GetOwner());

	HitBox = Player->GetGuardHitBox();
    HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


// Called every frame
void UPlayerGuardComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (IsValid(HitBox))
    {
        DrawDebugBox(
            GetWorld(),
            HitBox->GetComponentLocation(),
            HitBox->GetScaledBoxExtent(),
            HitBox->GetComponentQuat(),
            FColor::Blue,
            false,
            DeltaTime
        );
    }
}

