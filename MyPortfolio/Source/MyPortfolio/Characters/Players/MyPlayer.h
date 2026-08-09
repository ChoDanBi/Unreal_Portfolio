#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/CombatCharacter.h"
#include "MyPlayer.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;

class UPlayerAnimInstance;

class UPlayerAttackComponent;
class UPlayerGuardComponent;


UENUM(BlueprintType)
enum class ECharacterActionState : uint8
{
	Default UMETA(DisplayName = "Default"),
	Guard   UMETA(DisplayName = "Guard"),
	Attack  UMETA(DisplayName = "Attack"),
};

UCLASS()
class MYPORTFOLIO_API AMyPlayer : public ACombatCharacter
{
	GENERATED_BODY()

public:
	AMyPlayer();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;


protected://MeshComponent
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Sword;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Shield;

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> Camera;



protected:	//Action상태 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Action")
	ECharacterActionState CurrentActionState;
public:
	UFUNCTION(BlueprintPure, Category = "Action")
	ECharacterActionState GetActionState() const { return CurrentActionState; }
	void SetActionState(ECharacterActionState _NewActionState) { CurrentActionState = _NewActionState; };


	/*
	아래는 컴포넌트들을 블루프린트와 C++에 접근할 수 있도록 Getter 함수를 제공
	*/

protected:	//애니메이션 제어
	TObjectPtr<UPlayerAnimInstance> AnimInstance;


protected:	//가드 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Guard")
	TObjectPtr<UPlayerGuardComponent> GuardComponent;
public:
	UFUNCTION(BlueprintPure, Category = "Guard")
	UPlayerGuardComponent* GetGuardComponent() const { return GuardComponent; }
};
