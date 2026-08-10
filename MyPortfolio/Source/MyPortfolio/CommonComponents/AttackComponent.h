// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AttackComponent.generated.h"

class ACombatCharacter;
class UShapeComponent;
class UPrimitiveComponent;
struct FHitResult;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UAttackComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UAttackComponent();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//컴포넌트 소유주
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
	TObjectPtr<ACombatCharacter> CompOwner;
public:
	UFUNCTION(BlueprintPure, Category = "Owner")
	ACombatCharacter* GetCompOwner() const { return CompOwner; }


	//공격 히트박스
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HitBox")
	TObjectPtr<UShapeComponent> DefaultHitBox;
public:
	UFUNCTION(BlueprintPure, Category = "HitBox")
	UShapeComponent* GetAttackHitBox() const { return DefaultHitBox; }


//공격이름들
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TArray<FName> AttackNames;
	bool bIsAttacking;
	int CurrentAttackIndex;
protected:
	const FName GetCurrentAttackName() const { return AttackNames[CurrentAttackIndex]; }
	const FName SetNextAttackIndex();

//공격함수
public:
	UFUNCTION(BlueprintCallable, Category = "HitBox")
	virtual void Attack() {};		//공격 함수
	virtual void CancelAttack();	//공격 중 종료
	virtual void EndAttack() {};	//공격 종료 시 호출
	void SetEndAttackDelegate(UAnimMontage* Montage, bool bInterrupted) { EndAttack(); }


protected:
	//공격 히트박스 충돌 이벤트 처리
	UFUNCTION()
	virtual void OnAttackHitBoxOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

protected:	//디버깅
	void DebugHitBox(float Duration, FColor Color);
};
