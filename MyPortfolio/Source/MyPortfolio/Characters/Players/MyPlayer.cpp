// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "MyPortfolio/Animations/PlayerAnim/PlayerAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "Camera/CameraComponent.h"

#include "Components/StaticMeshComponent.h"

AMyPlayer::AMyPlayer()
{
	//Tick 설정 : 현재는 쓰지 않음
	PrimaryActorTick.bCanEverTick = false;
	
	//MeshComponent 설정
	//몸
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("/Game/RPGHeroSquad/Mesh/Character/SK_DogPolyart.SK_DogPolyart"));
	if (SM.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -90.0), FRotator(0.0, -90.0, 0.0));
	}
	//검
	Sword = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sword"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SwordMesh(TEXT("/Game/RPGHeroSquad/Mesh/Weapon/SM_AnimalHero_Sword01_Polyart.SM_AnimalHero_Sword01_Polyart"));
	if (SwordMesh.Succeeded())
	{
		Sword->SetStaticMesh(SwordMesh.Object);
		Sword->SetupAttachment(GetMesh(), TEXT("WeaponSocket"));
		Sword->SetRelativeLocationAndRotation(FVector(0.0, 0.0, 0.0), FRotator(0.0, 0.0, -90.0));
	}
	//방패
	Shield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShieldMesh(TEXT("/Game/RPGHeroSquad/Mesh/Weapon/SM_AnimalHero_Shield01_Polyart.SM_AnimalHero_Shield01_Polyart"));
	if (ShieldMesh.Succeeded())
	{
		Shield->SetStaticMesh(ShieldMesh.Object);
		Shield->SetupAttachment(GetMesh(), TEXT("ShieldSocket"));
		Shield->SetRelativeLocationAndRotation(FVector(-0.52, 0.0, 0.0), FRotator(90.0, 90.0, 180.0));
	}

	//캐릭터 설정
	GetCharacterMovement()->bOrientRotationToMovement = true;

	//스프링암
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	//카메라를 스프링암에 붙이기
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	//스프링암 설정
	SpringArm->TargetArmLength = 400.f;
	SpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 9.0f), FRotator(-25.0f, 0.0f, 0.0f));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->SocketOffset = FVector(0.0f, 120.0f, 0.0f);
	

	//애니메이션
	static ConstructorHelpers::FClassFinder<UPlayerAnimInstance> AI(TEXT("/Script/Engine.AnimBlueprint'/Game/Animations/ABP_Player.ABP_Player_C'"));
	if (AI.Succeeded()) GetMesh()->SetAnimInstanceClass(AI.Class);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentActionState = ECharacterActionState::Default;
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayer::Attack()
{
	UPlayerAnimInstance* PlayerAnimInstance = Cast<UPlayerAnimInstance>(AnimInstance);
	if (!PlayerAnimInstance) return;
	
	//몽타주 실행
	//PlayerAnimInstance->PlayAttackMontage();
	//히트박스 활성화

}
