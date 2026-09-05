// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseAnimInstance.generated.h"


UCLASS()
class MYPORTFOLIO_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UBaseAnimInstance();

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class ABaseCharacter> Character;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCharacterMovementComponent> CharacterMovement;

protected:
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float GroundSpeed;
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bShouldMove;
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsFalling;

protected:	//¸ùÅ¸ÁÖ
	UPROPERTY(Category = "Character Montage", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TMap<FName, TObjectPtr<UAnimMontage>> MontageMap;
public:
	UFUNCTION(BlueprintPure, Category = "Character Montage")
	UAnimMontage* GetMontage(FName _MontageName) const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Montage")
	FName MontageKey;
public:
	UFUNCTION(BlueprintCallable, Category = "Character Montage")
	void SetMontageKey(const FName _KeyName) { MontageKey = _KeyName; }
	UFUNCTION(BlueprintCallable, Category = "Character Montage")
	const FName GetMontageKey() const { return MontageKey; }


public:
	UFUNCTION(Category = "Character Montage Function", BlueprintCallable)
	bool PlayMontageByName(FName _MontageName);

	UFUNCTION(Category = "Character Montage Function", BlueprintCallable)
	bool PlayCurrentMontage() { return PlayMontageByName(MontageKey); }

	UFUNCTION(Category = "Character Montage Function", BlueprintCallable)
	void StopMontageByName(FName _MontageName);
	
	UFUNCTION(Category = "Character Montage Function", BlueprintCallable)
	void StopAllMontage();
};
