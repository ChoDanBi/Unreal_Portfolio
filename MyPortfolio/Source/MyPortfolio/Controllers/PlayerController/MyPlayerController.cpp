// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

#include "InputMappingContext.h"

#include "InputAction.h"
#include "InputActionValue.h"

AMyPlayerController::AMyPlayerController()
	:InputMappingContext(nullptr),
	MoveAction(nullptr), JumpAction(nullptr), LookAction(nullptr), AttackAction(nullptr)
{
}
