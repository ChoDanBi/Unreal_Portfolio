#include "AttackComponent.h"

#include "Characters/CombatCharacter.h"
#include "Animations/BaseAnimInstance.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/HitResult.h"

UAttackComponent::UAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	CompOwner = nullptr;
	DefaultHitBox = nullptr;

	bIsAttacking = false;
	CurrentAttackIndex = 0;
}

void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	CompOwner = Cast<ACombatCharacter>(GetOwner());

	//HitBox와 이벤트 자동 연결
	if (DefaultHitBox)
	{
		DefaultHitBox->OnComponentBeginOverlap.AddDynamic(this,&UAttackComponent::OnAttackHitBoxOverlap);
	}
}

void UAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAttackComponent::CancelAttack()
{
	CompOwner->GetBaseAnimInstance()->StopAllMontage();
}

bool UAttackComponent::Attack_Implementation()
{
	//공격 중이면 안 때림
	if (bIsAttacking) return false;

	bIsAttacking = true;

	if (!HitActors.IsEmpty()) HitActors.Empty();
	DefaultHitBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	OnAttackStarted.Broadcast();

	return true;
}

void UAttackComponent::EndAttack()
{
	//히트박스 끄기
	DefaultHitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HitActors.Empty();

	bIsAttacking = false;
}

const FName UAttackComponent::SetNextAttackIndex()
{
	CurrentAttackIndex = CurrentAttackIndex + 1 < AttackNames.Num() ? CurrentAttackIndex + 1 : 0;
	return AttackNames[CurrentAttackIndex];
}

void UAttackComponent::OnAttackHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CompOwner || !OtherActor) return;

	// 자기 자신 때리는 거 방지
	if (OtherActor == CompOwner) return;

	// 같은 공격에 이미 맞은 적이라면
	if (HitActors.Find(OtherActor)) return;

	HitActors.Add(OtherActor);
	
	UGameplayStatics::ApplyDamage(
		OtherActor,
		CompOwner->GetAttackPower(),
		CompOwner->GetController(),
		CompOwner,
		UDamageType::StaticClass()
	);
}


void UAttackComponent::DebugHitBox(float Duration, FColor Color)
{
	auto Box = Cast<UBoxComponent>(DefaultHitBox);
	if (Box)
	{
		DrawDebugBox(
			GetWorld(),
			Box->GetComponentLocation(),
			Box->GetScaledBoxExtent(),
			Box->GetComponentQuat(),
			Color,
			false,
			Duration
		);
		return;
	}

	auto Sphere = Cast<USphereComponent>(DefaultHitBox);
	if (Sphere)
	{
		DrawDebugSphere(
			GetWorld(),
			Sphere->GetComponentLocation(),
			Sphere->GetScaledSphereRadius(),
			16,
			Color,
			false,
			Duration
		);
		return;
	}

	auto Capsule = Cast<UCapsuleComponent>(DefaultHitBox);
	if (Capsule)
	{
		DrawDebugCapsule(
			GetWorld(),
			Capsule->GetComponentLocation(),
			Capsule->GetScaledCapsuleHalfHeight(),
			Capsule->GetScaledCapsuleRadius(),
			Capsule->GetComponentQuat(),
			Color,
			false,
			Duration
		);
	}
}