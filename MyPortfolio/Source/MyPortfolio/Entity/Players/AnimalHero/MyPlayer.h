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

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeed = 900.0f;
public:
	void SetSprint(bool bSprint);


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
public:
	UFUNCTION(BlueprintPure)
	USpringArmComponent* GetSpringArm() { return SpringArm; }
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetCamera() { return Camera; }


protected:	//Action상태 제어
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Action")
	ECharacterActionState CurrentActionState;
public:
	UFUNCTION(BlueprintPure, Category = "Action")
	ECharacterActionState GetActionState() const { return CurrentActionState; }
	void SetActionState(ECharacterActionState _NewActionState) { CurrentActionState = _NewActionState; };


protected:	//애니메이션 제어
	TObjectPtr<UPlayerAnimInstance> AnimInstance;


protected:	//가드 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Guard")
	TObjectPtr<UPlayerGuardComponent> GuardComponent;
public:
	UFUNCTION(BlueprintPure, Category = "Guard")
	UPlayerGuardComponent* GetGuardComponent() const { return GuardComponent; }
};
