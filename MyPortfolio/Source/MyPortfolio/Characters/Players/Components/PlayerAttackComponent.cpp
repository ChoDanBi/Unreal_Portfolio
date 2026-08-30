#include "MyPortfolio/Characters/Players/Components/PlayerAttackComponent.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"
#include "Animations/BaseAnimInstance.h"

#include "Components/CapsuleComponent.h"

UPlayerAttackComponent::UPlayerAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	DefaultHitBox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Attack HitBox"));
	HitBox = Cast<UCapsuleComponent>(DefaultHitBox);
	HitBox->SetRelativeLocation(FVector(0.0f, 0.0f, 70.0f));
	HitBox->SetCapsuleHalfHeight(70.0f);
	HitBox->SetCapsuleRadius(22.0f);

	AttackNames = { TEXT("Attack1"), TEXT("Attack2") };
}


void UPlayerAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<AMyPlayer>(CompOwner);

	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void UPlayerAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bIsAttacking) DebugHitBox(DeltaTime, FColor::Green);
	else DebugHitBox(DeltaTime, FColor::Red);
}


bool UPlayerAttackComponent::Attack_Implementation()
{
	if (!UAttackComponent::Attack_Implementation()) return false;

	//몽타주는 블루프린트에서 실행

	Player->SetActionState(ECharacterActionState::Attack);
	return true;
}

void UPlayerAttackComponent::EndAttack()
{
	if (!CompOwner || !HitBox) { return; }

	UAttackComponent::EndAttack();

	Player->SetActionState(ECharacterActionState::Default);
	SetNextAttackIndex();
}