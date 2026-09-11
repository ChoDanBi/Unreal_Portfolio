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
	//속도
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	float GroundSpeed;

	//움직임 여부 확인
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bShouldMove;
	
	//떨어지는 중인지 확인
	UPROPERTY(Category = "Character Movement", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsFalling;

	//몽타주 리스트
	UPROPERTY(Category = "Character Montage", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TMap<FName, TObjectPtr<UAnimMontage>> MontageMap;

	//몽타주 Key
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Montage")
	FName MontageKey;


public:	//Getter
	//몽타주 가져오기
	UFUNCTION(BlueprintPure, Category = "Character Montage")
	UAnimMontage* GetMontage(FName _MontageName) const;

	//현 몽타주 Key 가져오기
	UFUNCTION(BlueprintCallable, Category = "Character Montage")
	const FName GetMontageKey() const { return MontageKey; }


public:	//Setter
	//몽타주 Key 설정
	UFUNCTION(BlueprintCallable, Category = "Character Montage")
	void SetMontageKey(const FName _KeyName) { MontageKey = _KeyName; }


public:	//Montage Control
	//몽타주 재생
	UFUNCTION(BlueprintCallable, Category = "Character Montage Function")
	bool PlayMontageByKey() { return PlayMontageByName(MontageKey); }

	//현재 설정된 몽타주 Key에 해당하는 몽타주 재생
	UFUNCTION(BlueprintCallable, Category = "Character Montage Function")
	bool PlayMontageByName(FName _MontageName);

	//몽타주 정지
	UFUNCTION(BlueprintCallable, Category = "Character Montage Function")
	void StopMontageByName(FName _MontageName);
	
	//모든 몽타주 정지
	UFUNCTION(BlueprintCallable, Category = "Character Montage Function")
	void StopAllMontage(float BlendOutTime) { Montage_Stop(BlendOutTime); }
};
