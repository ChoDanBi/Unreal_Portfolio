// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
