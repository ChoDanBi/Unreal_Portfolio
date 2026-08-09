// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "AIController.h"

ABaseEnemy::ABaseEnemy()
{
	// Set default values for the enemy's status
	SearchDistance = 500.0f;
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	HomeLocation = GetActorLocation();
}

void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
