#pragma once

#include "CoreMinimal.h"
#include "MyPortfolio/Characters/CombatCharacter.h"
#include "MyPlayer.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;

class UPlayerAnimInstance;

class UPlayerAttackComponent;
class UGuardComponent;
class UPlayerHookingComponent;


UENUM(BlueprintType)
enum class ECharacterActionState : uint8
{
	Default UMETA(DisplayName = "Default"),
	Guard   UMETA(DisplayName = "Guard"),
	Attack  UMETA(DisplayName = "Attack"),
	Zoom  UMETA(DisplayName = "Zoom"),
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

public:
	virtual float TakeDamage(float Damage,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeed = 900.0f;

	//Action상태 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Action")
	ECharacterActionState CurrentActionState;


protected:	//Instance
	
	//Animation 제어
	TObjectPtr<UPlayerAnimInstance> AnimInstance;


protected:	//Component

	//MeshComponent
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Sword;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Shield;

	//Spring Arm
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;

	//Camera
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> Camera;

	//가드 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Guard")
	TObjectPtr<UGuardComponent> GuardComponent;

	//후킹 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hook")
	TObjectPtr<UPlayerHookingComponent> HookingComponent;


public:	//Getter

	//스프링암 컴포넌트 Getter
	UFUNCTION(BlueprintPure)
	USpringArmComponent* GetSpringArm() { return SpringArm; }

	//카메라 컴포넌트 Getter
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetCamera() { return Camera; }

	//가드 컴포넌트 Getter
	UFUNCTION(BlueprintPure, Category = "Guard")
	UGuardComponent* GetGuardComponent() const { return GuardComponent; }

	//Action 상태 Getter
	UFUNCTION(BlueprintPure, Category = "Action")
	ECharacterActionState GetActionState() const { return CurrentActionState; }


public: //Setter

	//Action 상태 설정
	void SetActionState(ECharacterActionState _NewActionState) { CurrentActionState = _NewActionState; };


public:	//Playercontroller에서 호출되는 함수

	//달리는 상태 설정
	void SetSprint(bool bSprint);

	//줌 & 후킹 상태 설정
	void SetZoom(bool bZoom);

	//가드 상태 설정
	void SetGuard(bool bGuard);
};
