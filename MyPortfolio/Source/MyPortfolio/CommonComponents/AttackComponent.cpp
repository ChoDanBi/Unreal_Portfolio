#include "AttackComponent.h"

#include "Characters/CombatCharacter.h"

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
}

void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	CompOwner = Cast<ACombatCharacter>(GetOwner());
}


void UAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAttackComponent::Attack()
{

}

void UAttackComponent::OnAttackHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CompOwner || !OtherActor) return;

	// 자기 자신 때리는 거 방지
	if (OtherActor == CompOwner) return;

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