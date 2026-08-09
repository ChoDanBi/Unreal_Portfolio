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

	/*
protected:
	//공격력
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float AttackPower;
	//공격 범위
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float AttackRange;
	//공격 쿨타임
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float AttackCoolTime;
	//공격 쿨타임 타이머
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	float AttackCoolTimeTimer;
	//공격 중인지 여부
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	bool bIsAttacking;
	*/

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

public:
	virtual void Attack();

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
