#include "CommonComponents/GuardComponent.h"
#include "GameFramework/Actor.h"


UGuardComponent::UGuardComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UGuardComponent::IsGuardingSuccess(AActor* DamageCauser) const
{
	if (!DamageCauser) return false;

	AActor* OwnerActor = GetOwner();
	if (!OwnerActor) return false;

	// 전방위(360도) 방어 세팅인 경우 무조건 성공
	if (GuardAngle >= 360.0f) return true;

	// 1. 내 수평 전방 벡터 (Z=0 평탄화)
	FVector MyForward = OwnerActor->GetActorForwardVector();
	MyForward.Z = 0.0f;
	MyForward.Normalize();

	// 2. 공격자 방향 수평 벡터 (Z=0 평탄화)
	FVector ToAttacker = DamageCauser->GetActorLocation() - OwnerActor->GetActorLocation();
	ToAttacker.Z = 0.0f;
	ToAttacker.Normalize();

	// 3. 내적 계산 (-1.0 ~ 1.0)
	const float DotResult = FVector::DotProduct(MyForward, ToAttacker);

	// 4. 입력된 각도(GuardAngle)의 절반 각도에 해당하는 Cosine 임계값 구하기
	// 예: GuardAngle이 120도 -> HalfAngle 60도 -> FMath::Cos(60도) = 0.5f
	const float HalfAngleRad = FMath::DegreesToRadians(GuardAngle * 0.5f);
	const float GuardThreshold = FMath::Cos(HalfAngleRad);

	// 내적 결과가 임계값 이상이면 가드 성공 범위 안쪽
	return DotResult >= GuardThreshold;
}



