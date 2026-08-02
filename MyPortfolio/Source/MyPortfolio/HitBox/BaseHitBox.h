// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseHitBox.generated.h"

UCLASS()
class MYPORTFOLIO_API ABaseHitBox : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseHitBox();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UShapeComponent> HitCollision;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class APawn> OwnerActor;

public:
	UFUNCTION(BlueprintCallable)
	void DebugBox(class UBoxComponent* BoxCollision);
	UFUNCTION(BlueprintCallable)
	void DebugCapsule(class UCapsuleComponent* CapsuleCollision);
	UFUNCTION(BlueprintCallable)
	void DebugSphere(class USphereComponent* SphereCollision);

public:
	void ActivateHitBox();
	void DeactivateHitBox();
};
