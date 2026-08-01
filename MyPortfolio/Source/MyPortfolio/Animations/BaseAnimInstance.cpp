// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAnimInstance.h"
#include "MyPortfolio/Characters/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UBaseAnimInstance::UBaseAnimInstance()
{
}

void UBaseAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Character = Cast<ABaseCharacter>(TryGetPawnOwner());
	if (Character)
	{
		CharacterMovement = Character->GetCharacterMovement();
	}
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (!Character || !CharacterMovement) { return; }

	GroundSpeed = CharacterMovement->Velocity.Size2D();
	bShouldMove = GroundSpeed > 0.1f;
	bIsFalling = CharacterMovement->IsFalling();
}

void UBaseAnimInstance::PlayMontage(FName _MontageName)
{
	if (const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
	{
		Montage_Play(*Montage);
	}
}

void UBaseAnimInstance::StopMontage(FName _MontageName)
{
	if (const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
	{
		//Montage_Stop(*Montage);
	}
}
