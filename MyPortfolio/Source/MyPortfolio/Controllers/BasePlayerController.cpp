// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPortfolio/Controllers/BasePlayerController.h"

#include "GameFramework/Character.h"

#include "InputMappingContext.h"

#include "InputAction.h"
#include "InputActionValue.h"

#include "EnhancedInputComponent.h"	
#include "EnhancedInputSubsystems.h"

ABasePlayerController::ABasePlayerController()
{
	//언리얼 에디터에서 등록
	InputMappingContext = nullptr;
	MoveAction = nullptr;
	SprintAction = nullptr;
	JumpAction = nullptr;
	LookAction = nullptr;
	AttackAction = nullptr;
}

void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();
	ControlledPawn = GetPawn();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}

void ABasePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ControlledPawn = InPawn;
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//WASD로 움직이기
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);

		//마우스 움직임으로 카메라 이동
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Look);

		//점프는 ACharacter에서 처리
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ABasePlayerController::StartJump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ABasePlayerController::StopJump);
	}
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	ControlledPawn->AddMovementInput(ForwardDirection, MovementVector.Y);
	ControlledPawn->AddMovementInput(RightDirection, MovementVector.X);
}

void ABasePlayerController::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	ControlledPawn->AddControllerYawInput(LookAxisVector.X);
	ControlledPawn->AddControllerPitchInput(LookAxisVector.Y);
}

void ABasePlayerController::StartJump(const FInputActionValue& Value)
{
	if(ACharacter* ControlledCharacter = Cast<ACharacter>(ControlledPawn))
		ControlledCharacter->Jump();
}

void ABasePlayerController::StopJump(const FInputActionValue& Value)
{
	if(ACharacter* ControlledCharacter = Cast<ACharacter>(ControlledPawn))
		ControlledCharacter->StopJumping();
}
