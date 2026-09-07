#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HookPoint.generated.h"

class USphereComponent;

UCLASS()
class MYPORTFOLIO_API AHookPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AHookPoint();
protected:
	virtual void BeginPlay() override;

	// 충돌체
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> Collision;

	// 후킹 가능한지 확인
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hook|State")
	bool bCanBeHooked;
public:
	UFUNCTION(BlueprintPure, Category = "Hook")
	bool CanBeHooked() const { return bCanBeHooked; }

};
