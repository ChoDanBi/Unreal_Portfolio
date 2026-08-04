#include "MyPortfolio/Characters/Players/Components/PlayerAttackComponent.h"
#include "MyPortfolio/Characters/Players/MyPlayer.h"

#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"

#include "DrawDebugHelpers.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/HitResult.h"

UPlayerAttackComponent::UPlayerAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UPlayerAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<AMyPlayer>(GetOwner());

	HitBox = Player->GetAttackHitBox();
	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//이벤트 등록
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &UPlayerAttackComponent::OnAttackHitBoxOverlap);
}


void UPlayerAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Player->GetActionState() == ECharacterActionState::Attack && IsValid(HitBox))
	{
		DrawDebugCapsule(
			GetWorld(),
			HitBox->GetComponentLocation(),
			HitBox->GetScaledCapsuleHalfHeight(),
			HitBox->GetScaledCapsuleRadius(),
			HitBox->GetComponentQuat(),
			FColor::Green,
			false,
			DeltaTime
		);
	}
}


void UPlayerAttackComponent::StartAttack_Implementation()
{
	//몽타주는 블루프린트에서 구현 및 실행!!
	Player->SetActionState(ECharacterActionState::Attack);
	HitBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void UPlayerAttackComponent::EndAttack()
{
	Player->SetActionState(ECharacterActionState::Default);
	HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UPlayerAttackComponent::OnAttackHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!Player || !OtherActor) return;

	// 자기 자신 때리는 거 방지
	if (OtherActor == Player) return;

	UGameplayStatics::ApplyDamage(
		OtherActor,
		Player->GetAttackPower(),
		Player->GetController(),
		Player,
		UDamageType::StaticClass()
	);
}
