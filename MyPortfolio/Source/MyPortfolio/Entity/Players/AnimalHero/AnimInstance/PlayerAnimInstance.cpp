#include "PlayerAnimInstance.h"
#include "Entity/Players/AnimalHero/MyPlayer.h"

UPlayerAnimInstance::UPlayerAnimInstance()
{
	bIsGuarding = false;
}

void UPlayerAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	UpdateIsGuarding();
}

void UPlayerAnimInstance::UpdateIsGuarding()
{
	if (!Character) return;

	AMyPlayer* pCharacter = Cast<AMyPlayer>(Character);
	if (!pCharacter) return;
	
	bIsGuarding = pCharacter->GetActionState() == ECharacterActionState::Guard;
	//if(bIsGuarding) UE_LOG(LogTemp, Log, TEXT("Guarding!!"));
}
