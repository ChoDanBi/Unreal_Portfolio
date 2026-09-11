#include "MyPlayer.h"

#include "Entity/Players/AnimalHero/AnimInstance/PlayerAnimInstance.h"
#include "Entity/Players/AnimalHero/Components/PlayerAttackComponent.h"
#include "Entity/Players/AnimalHero/Components/PlayerGuardComponent.h"
#include "Entity/Players/AnimalHero/Components/PlayerHookingComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "Camera/CameraComponent.h"

#include "Components/StaticMeshComponent.h"

#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"

AMyPlayer::AMyPlayer()
{
	//Tick 설정 : 현재는 쓰지 않음
	PrimaryActorTick.bCanEverTick = false;
	
	//캐릭터 설정
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

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
		Sword->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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
	SpringArm->CameraLagSpeed = 10.0f;
	
	//공격 컴포넌트 설정
	CombatAttackComponent = CreateDefaultSubobject<UPlayerAttackComponent>(TEXT("AttackComponent"));
	CombatAttackComponent->SetupAttachment(Sword);
	CombatAttackComponent->GetAttackHitBox()->SetupAttachment(Sword);

	//가드 컴포넌트 설정
	GuardComponent = CreateDefaultSubobject<UPlayerGuardComponent>(TEXT("GuardComponent"));
	GuardComponent->SetupAttachment(Shield);

	//훅킹 컴포넌트 설정
	HookingComponent = CreateDefaultSubobject<UPlayerHookingComponent>(TEXT("HookingComponent"));
	HookingComponent->SetupAttachment(RootComponent);

	//애니메이션
	static ConstructorHelpers::FClassFinder<UPlayerAnimInstance> AI(TEXT("/Script/Engine.AnimBlueprint'/Game/BluePrints/Animations/ABP_Player.ABP_Player_C'"));
	if (AI.Succeeded()) GetMesh()->SetAnimInstanceClass(AI.Class);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentActionState = ECharacterActionState::Default;
	AnimInstance = Cast<UPlayerAnimInstance>(BaseAnimInstance);
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AMyPlayer::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	switch (CurrentActionState)
	{
	//case ECharacterActionState::Default:
	//	break;
	case ECharacterActionState::Guard:
		//가드 성공 시 데미지 무효화
		if (GuardComponent->IsGuardingSuccesd(this, DamageCauser))return CurrentHp;
		break;

	case ECharacterActionState::Attack:
		break;

	case ECharacterActionState::Zoom:
		break;
	}

	//default 상태에서만 데미지 받음
	ABaseCharacter::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	return CurrentHp;
}

void AMyPlayer::SetSprint(bool bSprint)
{
	GetCharacterMovement()->MaxWalkSpeed = bSprint ? SprintSpeed : WalkSpeed;
}

void AMyPlayer::SetZoom(bool bZoom)
{
	if(bZoom)
	{
		SpringArm->TargetArmLength = 100.f;
		SpringArm->SocketOffset = FVector(0.0f, 120.0f, 30.0f);
		CurrentActionState = ECharacterActionState::Zoom;
		HookingComponent->SetComponentTickEnabled(true);
	}
	else
	{
		SpringArm->TargetArmLength = 400.f;
		SpringArm->SocketOffset = FVector(0.0f, 0.0f, 9.0f);
		CurrentActionState = ECharacterActionState::Default;
		HookingComponent->SetComponentTickEnabled(false);
	}
}

void AMyPlayer::SetGuard(bool bGuard)
{
	if(bGuard)
	{
		CurrentActionState = ECharacterActionState::Guard;
	}
	else
	{
		CurrentActionState = ECharacterActionState::Default;
	}
}
