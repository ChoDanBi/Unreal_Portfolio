#include "MyPortfolio/Characters/Players/Components/PlayerAttackComponent.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"

#include "Components/CapsuleComponent.h"

UPlayerAttackComponent::UPlayerAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	DefaultHitBox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Attack HitBox"));
	HitBox = Cast<UCapsuleComponent>(DefaultHitBox);
	HitBox->SetRelativeLocation(FVector(0.0f, 0.0f, 70.0f));
	HitBox->SetCapsuleHalfHeight(70.0f);
	HitBox->SetCapsuleRadius(22.0f);
}


void UPlayerAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<AMyPlayer>(CompOwner);

	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//이벤트 등록
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &UPlayerAttackComponent::OnAttackHitBoxOverlap);
}


void UPlayerAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(Player->GetActionState() == ECharacterActionState::Attack) DebugHitBox(DeltaTime, FColor::Green);
	else DebugHitBox(DeltaTime, FColor::Red);
}


void UPlayerAttackComponent::StartAttack_Implementation()
{
	//몽타주는 블루프린트에서 구현 및 실행!!
	Player->SetActionState(ECharacterActionState::Attack);
	HitBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void UPlayerAttackComponent::Attack()
{
	StartAttack();
}

void UPlayerAttackComponent::EndAttack()
{
	Player->SetActionState(ECharacterActionState::Default);
	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
