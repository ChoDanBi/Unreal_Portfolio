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

UAnimMontage* UBaseAnimInstance::GetMontage(FName _MontageName) const
{
	if(const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
		return *Montage;
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Find Montage!"));
		return nullptr;
	}
}

float UBaseAnimInstance::PlayMontageByName(FName _MontageName)
{
	if (const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
	{
		float PlayResult = Montage_Play(*Montage);
		return PlayResult;
	}
	UE_LOG(LogTemp, Warning, TEXT("ERROR : Montage Not Found!"));
	return 0.f;
}

float UBaseAnimInstance::PlayMontageByName(FName _MontageName, FOnMontageEnded EndDelegate)
{
	if (const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
	{
		float PlayResult = Montage_Play(*Montage);
		Montage_SetEndDelegate(EndDelegate, *Montage);
		return PlayResult;
	}
	UE_LOG(LogTemp, Warning, TEXT("ERROR : Montage Not Found!"));
	return 0.f;
}

void UBaseAnimInstance::StopMontageByName(FName _MontageName)
{
	if (const TObjectPtr<UAnimMontage>* Montage = MontageMap.Find(_MontageName))
	{
		Montage_Stop(0.2f, *Montage);
	}
}

void UBaseAnimInstance::StopAllMontage()
{
	Montage_Stop(0.0f);
}
