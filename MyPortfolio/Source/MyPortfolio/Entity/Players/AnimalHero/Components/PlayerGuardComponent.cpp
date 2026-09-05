#include "PlayerGuardComponent.h"
#include "Entity/Players/AnimalHero/MyPlayer.h"

#include "Components/BoxComponent.h"

UPlayerGuardComponent::UPlayerGuardComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
    HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Guard HitBox"));

    //HitBox->SetupAttachment(this);

    HitBox->SetRelativeLocation(FVector(0.0f, 10.0f, 0.0f));
    HitBox->SetBoxExtent(FVector(50.0f, 10.0f, 50.0f));
}


void UPlayerGuardComponent::BeginPlay()
{
	Super::BeginPlay();
    Player = Cast<AMyPlayer>(GetOwner());

    HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


// Called every frame
void UPlayerGuardComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if(Player && Player->GetActionState() == ECharacterActionState::Guard)
        DrawDebugGuardHitBox(DeltaTime, FColor::Green);
    
    else
        DrawDebugGuardHitBox(DeltaTime, FColor::Red);

}

void UPlayerGuardComponent::DrawDebugGuardHitBox(float DeltaTime, FColor Color)
{
    if (!IsValid(HitBox)) return;

    DrawDebugBox(
        GetWorld(),
        HitBox->GetComponentLocation(),
        HitBox->GetScaledBoxExtent(),
        HitBox->GetComponentQuat(),
        Color,
        false,
        DeltaTime
    );
}