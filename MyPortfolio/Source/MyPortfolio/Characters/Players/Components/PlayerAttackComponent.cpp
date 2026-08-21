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


void UPlayerAttackComponent::Attack()
{
	//공격 중이면 안 때림
	if (bIsAttacking) return;
	bIsAttacking = true;

	//몽타주는 블루프린트에서 구현 및 실행!!
	HitBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	//몽타주가 끝나면 EndAttack()이 자동으로 실행됨
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UAttackComponent::SetEndAttackDelegate);

	CompOwner->GetBaseAnimInstance()->PlayMontageByName(GetCurrentAttackName(), EndDelegate);

	Player->SetActionState(ECharacterActionState::Attack);
}

void UPlayerAttackComponent::EndAttack()
{
	if (!CompOwner || !HitBox) { return; }

	UAttackComponent::EndAttack();

	Player->SetActionState(ECharacterActionState::Default);
	bIsAttacking = false;
	SetNextAttackIndex();
}