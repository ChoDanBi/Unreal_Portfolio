// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GuardComponent.generated.h"

class AActor;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPORTFOLIO_API UGuardComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UGuardComponent();

protected:
	/**
	 * 전방 기준 총 가드 허용 각도 (단위: 도/Degree)
	 * 예: 120.0f = 정면 기준 좌우 60도 범위 (총 120도 부채꼴)
	 * 예: 180.0f = 정면 기준 좌우 90도 (전방 반원)
	 * 예: 360.0f = 전방위(360도) 완전 방어
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guard Settings", meta = (ClampMin = "0.0", ClampMax = "360.0"))
	float GuardAngle = 120.0f;

public:
	// Getter
	UFUNCTION(BlueprintCallable, Category = "Guard")
	float GetGuardAngle() const { return GuardAngle; }

	//Setter
	UFUNCTION(BlueprintCallable, Category = "Guard")
	void SetGuardAngle(float NewGuardAngle) { GuardAngle = FMath::Clamp(NewGuardAngle, 0.0f, 360.0f); }

	// Guard 성공 여부 확인
	UFUNCTION(BlueprintCallable, Category = "Guard")
	bool IsGuardingSuccess(AActor* DamageCauser) const;
};
