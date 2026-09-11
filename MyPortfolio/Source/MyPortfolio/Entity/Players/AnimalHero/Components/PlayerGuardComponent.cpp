#include "PlayerGuardComponent.h"
#include "Entity/Players/AnimalHero/MyPlayer.h"


UPlayerGuardComponent::UPlayerGuardComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerGuardComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UPlayerGuardComponent::IsGuardingSuccesd(AActor* Player, AActor* DamageCauser) const
{
    // 공격자 정보가 없으면 실패
    if ( !Player || !DamageCauser) return false;

    // 내 전방 벡터 (수평 평면 기준 정규화)
    FVector MyForward = Player->GetActorForwardVector();
    MyForward.Z = 0.0f;
    MyForward.Normalize();

    // 공격자 방향 벡터 (수평 평면 기준 정규화)
    FVector ToAttacker = DamageCauser->GetActorLocation() - Player->GetActorLocation();
    ToAttacker.Z = 0.0f;
    ToAttacker.Normalize();

    // 내적 계산 (전방 120도 기준: cos(60도) = 0.5f)
    const float DotResult = FVector::DotProduct(MyForward, ToAttacker);
    const float GuardThreshold = 0.5f;

    return DotResult >= GuardThreshold;
}
