#include "RedDragonAnim.h"
#include "GameFramework/CharacterMovementComponent.h"

URedDragonAnim::URedDragonAnim()
{
}

void URedDragonAnim::NativeBeginPlay()
{
	Super::NativeBeginPlay();

}

void URedDragonAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (CharacterMovement) bIsFlying = CharacterMovement->IsFlying();
}
