#include "RedDragon.h"

#include "Entity/Bosses/RedDragon/AnimInstance/RedDragonAnim.h"
#include "Entity/Bosses/RedDragon/Components/RedDragonAttackManagerComp.h"

#include "Components/CapsuleComponent.h"

ARedDragon::ARedDragon()
{
	MaxHp = 500.0f;
	AttackPower = 15.0f;
	AttackRange = 300.0f;
	DefensePower = 3.0f;

	//MeshComponent 설정
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("/Game/Resources/FourEvilDragonsHP/Meshes/DragonTheUsurper/DragonTheUsurperSK_AddSocket.DragonTheUsurperSK_AddSocket"));
	if (SM.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -90.0), FRotator(0.0, -90.0, 0.0));
	}

	//애니메이션
	static ConstructorHelpers::FClassFinder<URedDragonAnim> AI(TEXT("/Script/Engine.AnimBlueprint'/Game/BluePrints/Characters/Enemys/RedDragon/Animation/ABP_RedDragon.ABP_RedDragon_C'"));
	if (AI.Succeeded()) GetMesh()->SetAnimInstanceClass(AI.Class);
	else
	{
		// 경로를 못 찾았을 때 로그를 띄워두면 디버깅이 엄청 편해집니다!
		UE_LOG(LogTemp, Error, TEXT("RedDragon AnimInstance Load Failed!"));
	}

	//공격 받는 히트박스
	//머리
	HeadHitbox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Head Hitbox"));
	HeadHitbox->SetupAttachment(GetMesh(), TEXT("HeadSocket"));
	HeadHitbox->SetRelativeLocation(FVector(0.0,10.0,60.0));
	HeadHitbox->SetCapsuleHalfHeight(200.0f);
	HeadHitbox->SetCapsuleRadius(80.0f);

	//몸통
	BodyHitbox = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Body Hitbox"));
	BodyHitbox->SetupAttachment(GetMesh(), TEXT("BodySocket"));
	BodyHitbox->SetRelativeLocationAndRotation(FVector(-60.0, -108.0, 0.0), FRotator(90.0, -10.0, 0.0));
	BodyHitbox->SetCapsuleHalfHeight(500.0f);
	BodyHitbox->SetCapsuleRadius(200.0f);

	CombatAttackComponent = CreateDefaultSubobject<URedDragonAttackManagerComp>(TEXT("AttackComponent"));
}

void ARedDragon::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = Cast<URedDragonAnim>(BaseAnimInstance);
}

void ARedDragon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
