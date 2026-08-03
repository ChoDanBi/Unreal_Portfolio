// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseHitBox.generated.h"

UCLASS()
class MYPORTFOLIO_API ABaseHitBox : public AActor
{
	GENERATED_BODY()
	
public:	//초기화값
	ABaseHitBox();


//히트박스를 소유하는 Actor
protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AActor> OwnerActor;
public:
	void SetOwnerActor(AActor* InOwnerActor) { OwnerActor = InOwnerActor; };


	//HitBox의 충돌체
protected:
	TObjectPtr<class UShapeComponent> HitCollision;

	//HitBox 함수들
public:
	void ActivateHitBox();
	void DeactivateHitBox();
	
	//HitBox 디버깅
public:
	UFUNCTION(BlueprintCallable)
	virtual void DebugHitBox() {};
};
