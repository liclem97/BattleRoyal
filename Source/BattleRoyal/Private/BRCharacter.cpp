// Fill out your copyright notice in the Description page of Project Settings.

#include "BRCharacter.h"
#include "BRWeapon.h"
#include "BRHealthComponent.h"
#include "BRPickupActor.h"
#include "BRInteractionWidget.h"
#include "BRPlayerController.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABRCharacter::ABRCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_BODY(TEXT("/Game/Characters/Female/Parts/SK_Female_Body_Head.SK_Female_Body_Head"));
	if (SK_BODY.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_BODY.Object);
	}
	GetMesh()->SetRelativeLocationAndRotation(FVector(-3.5f, 0.0f, -82.0f), FRotator(0.0f, -90.0f, 0.0f));

	static ConstructorHelpers::FClassFinder<AActor> ParaClass(TEXT("Blueprint'/Game/Characters/BP_Parachute.BP_Parachute_C'"));
	if (ParaClass.Succeeded())
	{
		ParachuteClass = ParaClass.Class;
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> CrosshairClass(TEXT("WidgetBlueprint'/Game/Characters/HUD/WidgetBP_Crosshair.WidgetBP_Crosshair_C'"));
	if (CrosshairClass.Succeeded())
	{
		CrosshairWidgetClass = CrosshairClass.Class;
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> ItemDataTableObj(TEXT("/Game/Item/ItemData"));
	if (ItemDataTableObj.Succeeded())
	{
		ItemDataTable = ItemDataTableObj.Object;
	}

	GetCapsuleComponent()->SetCapsuleHalfHeight(85.0f);
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp;"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->SetRelativeLocation(FVector(0, 0, 120));
	SpringArmComp->TargetArmLength = 400.0f;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	HealthComp = CreateDefaultSubobject<UBRHealthComponent>(TEXT("HealthComp"));

	Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
	Upper = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Upper"));
	Lower = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lower"));
	Shoes = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Shoes"));

	Helmet->SetupAttachment(GetMesh());
	Upper->SetupAttachment(GetMesh());
	Lower->SetupAttachment(GetMesh());
	Shoes->SetupAttachment(GetMesh());

	Helmet->SetMasterPoseComponent(GetMesh());
	Upper->SetMasterPoseComponent(GetMesh());
	Lower->SetMasterPoseComponent(GetMesh());
	Shoes->SetMasterPoseComponent(GetMesh());

	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget_Interaction"));
	InteractionWidget->SetupAttachment(RootComponent);
	InteractionWidget->SetWidgetClass(UBRInteractionWidget::StaticClass());
	InteractionWidget->SetRelativeLocation(FVector(0, 50.0f, 50.0f));
	InteractionWidget->SetWidgetSpace(EWidgetSpace::Screen);
	InteractionWidget->SetDrawAtDesiredSize(true);
	InteractionWidget->SetPivot(FVector2D(0.0f, 0.5f));
	InteractionWidget->SetVisibility(false);

	Cloud = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Cloud"));
	Cloud->SetupAttachment(SpringArmComp);
	static ConstructorHelpers::FObjectFinder<UParticleSystem> CloudAsset(TEXT("ParticleSystem'/Game/Vehicles/Parachute/Effects/P_Cloud.P_Cloud'"));
	if (CloudAsset.Succeeded())
	{
		Cloud->SetTemplate(CloudAsset.Object);
	}
	Cloud->bAutoActivate = false;
	Cloud->SetRelativeLocationAndRotation(FVector(1700.0f, 0.0f, 0.0f), FRotator(0.0f, 180.0f, 0.0f));

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Cloud);
	static ConstructorHelpers::FObjectFinder<USoundCue> AudioAsset(TEXT("SoundCue'/Game/Vehicles/Parachute/Effects/wind_Cue.wind_Cue'"));
	if (AudioAsset.Succeeded())
	{
		Audio->SetSound(AudioAsset.Object);
	}
	Audio->bAutoActivate = false;
	Audio->SetRelativeLocation(FVector(1480.0f, 0.0f, 0.0f));
	Audio->bOverrideAttenuation = true;

	bHasWeapon = false;
	bAiming = false;
	bRifleEquipped = false;
	bDied = false;
	bDiving = false;
	bGliding = false;

	Pre_MoveForwardValue = 0.0;
	Pre_MoveRightValue = 0.0;
	Pre_WaistPitch = 0.0;

	TargetLocalPitch = 0.0;
	TargetLocalRoll = 0.0;
	CurrentLocalPitch = 0.0;
	CurrentLocalRoll = 0.0;

	ZoomedFOV = 60.0f;
	ZoomInterpSpeed = 20.0f;
	ItemClassID_Character = 0;

	UpperItemClassID = 0;
	LowerItemClassID = 0;
	HelmetItemClassID = 0;
	ShoesItemClassID = 0;
	WeaponItemClassID = 0;

	BP_Parachute = nullptr;

	WeaponBackSocketName = "WeaponBack";
	WeaponRightSocketName = "WeaponRight";
	ParachuteSocketName = "ParachuteSocket";

	GetCharacterMovement()->JumpZVelocity = 300.0f;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	// FindItemAroundMe
	WorldDynamic = UEngineTypes::ConvertToObjectType(ECC_WorldDynamic);
	ItemSearchRadius = 200.0f;
	ObjectTypes.Add(WorldDynamic);
	PickupClass = ABRPickupActor::StaticClass();

	BRWeapon = nullptr;
	MyWeapon = nullptr;
}

// Called when the game starts or when spawned
void ABRCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (!HasAuthority() && GetController() == UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		DefaultFOV = CameraComp->FieldOfView;
		CrosshairWidget = CreateWidget<UUserWidget>(GetWorld(), CrosshairWidgetClass);
		if (!CrosshairWidget)
		{
			UE_LOG(LogTemp, Warning, TEXT("Chosshair 위젯이 설정되어있지 않음!"));
		}
	}

	GetWorldTimerManager().SetTimer(TimerHandle_WaistPitch, this, &ABRCharacter::WaistPitchFunc, 0.1f, true, 0.0f);
}

void ABRCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
	MoveForwardValue = Value;
	if (Pre_MoveForwardValue != MoveForwardValue)
	{
		MoveForward_Req(MoveForwardValue);
	}

	Pre_MoveForwardValue = MoveForwardValue;
	TargetLocalPitch = MoveForwardValue * 20.0f;
}

void ABRCharacter::MoveForward_Req_Implementation(float ServerMoveForwardValue)
{
	MoveForwardValue = ServerMoveForwardValue;
}

bool ABRCharacter::MoveForward_Req_Validate(float MoveForwardValue)
{
	return true;
}

void ABRCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
	MoveRightValue = Value;
	if (Pre_MoveRightValue != MoveRightValue)
	{
		MoveRight_Req(MoveRightValue);
	}

	Pre_MoveRightValue = MoveRightValue;
	TargetLocalRoll = MoveRightValue * 20.0f;
}

void ABRCharacter::MoveRight_Req_Implementation(float ServerMoveRightValue)
{
	MoveRightValue = ServerMoveRightValue;
}

bool ABRCharacter::MoveRight_Req_Validate(float ServerMoveRightValue)
{
	return true;
}

void ABRCharacter::WaistPitch_Req_Implementation(float ServerWaistPitch)
{
	WaistPitch = ServerWaistPitch;
}

bool ABRCharacter::WaistPitch_Req_Validate(float ServerWaistPitch)
{
	return true;
}

// 무기 조준 함수.
void ABRCharacter::AimingWeapon()
{
	if (!bRifleEquipped)
	{
		return;
	}

	if (!bAiming)
	{
		Aiming_Req(true);
		bAiming = true;
		CrosshairWidget->AddToViewport(); // 조준 시 화면에 크로스 헤어 추가.
		BeginZoom();
	}
	else
	{
		Aiming_Req(false);
		bAiming = false;
		CrosshairWidget->RemoveFromParent();
		EndZoom();
	}
}

// 무기 장착 함수.
void ABRCharacter::EquipRifle()
{
	if (bHasWeapon)
	{
		if (bRifleEquipped)
		{
			RifleEquip_Req(false);
		}
		else
		{
			RifleEquip_Req(true);
		}
		ServerWeaponEquip();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Has No Weapon"));
	}
}

void ABRCharacter::BeginZoom()
{
	bWantsToZoom = true;
}

void ABRCharacter::EndZoom()
{
	bWantsToZoom = false;
}

// 무기 발사 애니메이션 함수.
void ABRCharacter::FireAnimation_Req_Implementation()
{
	if (Role == ROLE_Authority)
	{
		FireAnimation_Multicast();
	}
}

bool ABRCharacter::FireAnimation_Req_Validate()
{
	return true;
}

void ABRCharacter::FireAnimation()
{
	if (FireMontage)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(FireMontage);
		FireAnimation_Req();
	}
}

// Death RepNotify 함수.
void ABRCharacter::OnRep_Death()
{
	if (DeathMontage)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(DeathMontage);
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCharacterMovement()->SetMovementMode(MOVE_None);
	}
}

// Dive RepNotify 함수.
void ABRCharacter::OnRep_Diving()
{
	if (bDiving)
	{
		DivingFunc();
	}
}

// GM이나 PC에서 캐릭터의 Dive 변수를 조종하기 위한 함수.
void ABRCharacter::SetDiving(bool NewDive)
{
	bDiving = NewDive;
}

// 캐릭터 다이빙 시 속도나 구름 이펙트, 사운드 등을 조종하는 함수.
void ABRCharacter::DivingFunc()
{
	if (Role < ROLE_Authority)
	{
		ServerDivingFunc();
	}
	GetMesh()->GetAnimInstance()->Montage_Play(FlyingMontage);
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->AirControl = 1.0f;
	GetCharacterMovement()->MaxWalkSpeed = 10000.0f;
	GetCharacterMovement()->GravityScale = 0.5f;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 10.0f, 0.0f);

	Cloud->Activate(true);
	Audio->Activate(true);
}

void ABRCharacter::ServerDivingFunc_Implementation()
{
	DivingFunc();
}

bool ABRCharacter::ServerDivingFunc_Validate()
{
	return true;
}

void ABRCharacter::OnRep_Gliding()
{
	if (bGliding)
	{
		GlidingFunc();
	}
}

// 캐릭터 글라이딩 시 글라이드를 스폰하고 캐릭터의 애니메이션 등을 바꾸는 함수.
void ABRCharacter::GlidingFunc()
{
	if (Role < ROLE_Authority)
	{
		ServerGlidingFunc();
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	BP_Parachute = GetWorld()->SpawnActor<AActor>(ParachuteClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	BP_Parachute->SetOwner(this);
	BP_Parachute->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, ParachuteSocketName);

	GetMesh()->GetAnimInstance()->Montage_Play(GlidingMontage);

	GetCharacterMovement()->MaxWalkSpeed = 4000.0f;
	GetCharacterMovement()->GravityScale = 0.1f;
	GetCharacterMovement()->Velocity = (GetCharacterMovement()->Velocity * 0.5);

	SpringArmComp->TargetArmLength = 700.0f;
}

void ABRCharacter::ServerGlidingFunc_Implementation()
{
	GlidingFunc();
}

bool ABRCharacter::ServerGlidingFunc_Validate()
{
	return true;
}

// 캐릭터가 글라이딩을 끝낸 후 다시 걸어다닐 때 값을 바꾸는 함수.
void ABRCharacter::ResetToWalk()
{
	if (Role < ROLE_Authority)
	{
		ServerResetToWalk();
	}
	if (BP_Parachute)
	{
		BP_Parachute->Destroy();
	}

	bUseControllerRotationYaw = true;

	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->AirControl = 0.05f;
	GetCharacterMovement()->GravityScale = 1.0f;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);

	SpringArmComp->TargetArmLength = 300.0f;

	GetMesh()->GetAnimInstance()->Montage_Stop(0, FlyingMontage);
	GetMesh()->GetAnimInstance()->Montage_Stop(0, GlidingMontage);

	TargetLocalPitch = 0.0;
	TargetLocalRoll = 0.0;
	CurrentLocalPitch = 0.0;
	CurrentLocalRoll = 0.0;
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	Audio->Deactivate();
}

void ABRCharacter::ServerResetToWalk_Implementation()
{
	ResetToWalk();
}

bool ABRCharacter::ServerResetToWalk_Validate()
{
	return true;
}

void ABRCharacter::FireAnimation_Multicast_Implementation()
{
	GetMesh()->GetAnimInstance()->Montage_Play(FireMontage);
}

// 캐릭터 총기 발사 조절 함수.
void ABRCharacter::StartFire()
{
	if (bAiming && bRifleEquipped)
	{
		if (MyWeapon)
		{
			MyWeapon->StartFire();
		}
		GetWorldTimerManager().SetTimer(TimerHandle_FireMontage, this, &ABRCharacter::FireAnimation, 0.267f, true, 0.0);
	}
}

void ABRCharacter::StopFire()
{
	if (MyWeapon)
	{
		MyWeapon->StopFire();
	}
	GetWorldTimerManager().ClearTimer(TimerHandle_FireMontage);
}

// 캐릭터 상호작용 키 함수.
void ABRCharacter::InteractionFunc()
{
	if (bDiving)
	{
		WantToGlide(); // 다이빙 중일 때 글라이드를 함.
	}
	else
	{
		// 주위에 아이템이 있는지 판별 함.
		ABRPickupActor *PickupActor = FindItemAroundMe();
		if (PickupActor)
		{
			// UE_LOG(LogTemp, Log, TEXT("InteractionFunc : Pick up Item"));
			TryToPickItem_Req(PickupActor);
			PickupActor = nullptr;
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("InteractionFunc : No Item"));
		}
	}
}

void ABRCharacter::WantToGlide_Implementation()
{
	bDiving = false;
	bGliding = true;
}

bool ABRCharacter::WantToGlide_Validate()
{
	return true;
}

// 주위에 아이템이 있는지 판별하는 함수.
ABRPickupActor *ABRCharacter::FindItemAroundMe()
{
	// 아이템 인덱스 및 거리 초기화.
	int32 ItemIndexCloset = -1;
	float ItemDistance = 99999999;

	// 자신을 기준으로 ItemSearchRadius 만큼 아이템을 찾아서 outActors에 저장함.
	UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), ItemSearchRadius, ObjectTypes, PickupClass, ignoreActors, outActors);
	if (outActors.Num() > 0)
	{
		for (int i = 0; i < outActors.Num(); i++)
		{
			ABRPickupActor *ArrayElement = Cast<ABRPickupActor>(outActors[i]);
			if (ArrayElement)
			{
				// 픽업 액터인 경우에만 처리.

				FRotator PlayerRotation = GetControlRotation();
				FVector TraceStart = SpringArmComp->GetComponentLocation();
				FVector Direction = PlayerRotation.Vector();
				FVector TraceEnd = TraceStart + (Direction * 1000);

				FCollisionQueryParams QueryParams;
				QueryParams.AddIgnoredActor(this);
				QueryParams.bTraceComplex = true;

				FHitResult HitResult;

				if (ArrayElement->SphereComp->LineTraceComponent(HitResult, TraceStart, TraceEnd, QueryParams))
				{
					// 픽업 액터와의 라인 트레이스를 수행하여 충돌 검사 수행.
					ItemIndexCloset = i;
				}
			}
		}
		if (ItemIndexCloset == -1) // 가장 가까운 픽업 액터 인덱스를 찾지 못한 경우.
		{
			for (int i = 0; i < outActors.Num(); i++)
			{
				float VectorLength = (outActors[i]->GetActorLocation() - GetActorLocation()).Size();
				if (ItemDistance > VectorLength)
				{
					ItemDistance = VectorLength;
					ItemIndexCloset = i;
				}
			}
			if (ItemIndexCloset == -1)
			{
				// 가장 가까운 픽업 액터를 찾지 못한 경우 nullptr 반환.
				return nullptr;
			}
			else
			{
				ABRPickupActor *PickupActor = Cast<ABRPickupActor>(outActors[ItemIndexCloset]);
				if (PickupActor)
				{
					return PickupActor;
				}
				else
				{
					return nullptr;
				}
			}
		}
		else
		{
			// 가장 가까운 픽업 액터를 반환.
			ABRPickupActor *PickupActor = Cast<ABRPickupActor>(outActors[ItemIndexCloset]);
			if (PickupActor)
			{
				return PickupActor;
			}
			else
			{
				return nullptr;
			}
		}
	}
	else
	{
		// 검색된 픽업 액터가 없는 경우 nullptr 반환.
		return nullptr;
	}
}

// 아이템 줍기 함수.
void ABRCharacter::TryToPickItem_Req_Implementation(ABRPickupActor *TargetItem)
{
	if (TargetItem && TargetItem->IsActorBeingDestroyed() == false) // 아이템이 유요한 경우 실행.
	{	
		// 아이템 데이터 테이블에서 행에 해당하는 아이템 row 를 찾음.
		FName ItemRowName = FName(*FString::FromInt(TargetItem->GetItemClassID()));
		FITemTableRow *ItemData = ItemDataTable->FindRow<FITemTableRow>(ItemRowName, FString(""));

		if (ItemData) // 아이템 데이터가 유요한 경우.
		{
			EItemEquipType EquipEnum = ItemData->ItemEquipType;
			int32 ItemClassID = ItemData->ItemClassID;

			switch (EquipEnum) // EquipEnum에 맞는 결과 값에 따라 실행.
			{
			case EItemEquipType::Equip_Upper:
				UpperItemClassID = ItemClassID;
				break;
			case EItemEquipType::Equip_Lower:
				LowerItemClassID = ItemClassID;
				break;
			case EItemEquipType::Equip_Helmet:
				HelmetItemClassID = ItemClassID;
				break;
			case EItemEquipType::Equip_Shoes:
				ShoesItemClassID = ItemClassID;
				break;
			case EItemEquipType::Equip_Weapon:
				WeaponItemClassID = ItemClassID;
				ServerSpawnWeapon();
				break;
			}
		}
		TargetItem->Destroy(); // 습득한 아이템 필드에서 삭제.
	}
}

bool ABRCharacter::TryToPickItem_Req_Validate(ABRPickupActor *TargetItem)
{
	return true;
}

void ABRCharacter::OnRep_LoadUpperItem()
{
	LoadUpperItem();
}

void ABRCharacter::OnRep_LoadLowerItem()
{
	LoadLowerItem();
}

void ABRCharacter::OnRep_LoadHelmetItem()
{
	LoadHelmetItem();
}

void ABRCharacter::OnRep_LoadShoesItem()
{
	LoadShoesItem();
}

void ABRCharacter::RifleEquip_Req_Implementation(bool bNewRifleEquipped)
{
	bRifleEquipped = bNewRifleEquipped;
}

bool ABRCharacter::RifleEquip_Req_Validate(bool bNewRifleEquipped)
{
	return true;
}

void ABRCharacter::Aiming_Req_Implementation(bool bNewAiming)
{
	bAiming = bNewAiming;
}

bool ABRCharacter::Aiming_Req_Validate(bool bNewAiming)
{
	return true;
}

// 캐릭터 사망 시 함수.
void ABRCharacter::SetCharacterDeath(bool NewDeath)
{
	bDied = NewDeath;
	ABRPlayerController *PC = Cast<ABRPlayerController>(GetController());
	if (PC)
	{
		PC->OnCharacterDeath();
	}
}

// 캐릭터 허리 휘어짐 함수.
void ABRCharacter::WaistPitchFunc()
{
	APlayerController *PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		WaistPitch = PC->GetControlRotation().Pitch;
		if (FMath::Abs(WaistPitch - Pre_WaistPitch) > 5)
		{
			WaistPitch_Req(WaistPitch);
			Pre_WaistPitch = WaistPitch;
		}
	}
}

// 주위에 아이템이 있을 시 해당 아이템의 이름을 화면에 표시하는 함수.
void ABRCharacter::ShowItemWidgetFunc()
{
	if (GetController() == UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		ABRPickupActor *PickupActor = FindItemAroundMe();
		UBRInteractionWidget *NewWidget = Cast<UBRInteractionWidget>(InteractionWidget->GetUserWidgetObject());
		if (PickupActor && PickupActor->IsValidLowLevel())
		{
			// 아이템 데이터에서 해당 아이템 검색.
			FName ItemRowName = FName(*FString::FromInt(PickupActor->GetItemClassID()));
			FITemTableRow *ItemData = ItemDataTable->FindRow<FITemTableRow>(ItemRowName, FString(""));

			if (NewWidget) // 위젯이 유효한 경우.
			{	
				// 아이템 이름을 변경하고 위젯을 보이게 설정.
				NewWidget->SetInteractionText(FText::FromString(ItemData->ItemName));

				InteractionWidget->SetVisibility(true);
				NewWidget->SetVisibility(ESlateVisibility::Visible);

				PickupActor = nullptr;
			}
		}
		else
		{
			if (NewWidget)
			{	
				// 아이템이 멀어진 경우 위젯을 히든 처리.
				NewWidget->SetVisibility(ESlateVisibility::Hidden);
			}
			PickupActor = nullptr;
		}
	}
}

void ABRCharacter::WantToWalk_Req_Implementation()
{
	bDiving = bGliding = false;
}

bool ABRCharacter::WantToWalk_Req_Validate()
{
	return true;
}

// Called every frame
void ABRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 카메라 줌.
	float TargetFOV = bWantsToZoom ? ZoomedFOV : DefaultFOV;
	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, ZoomInterpSpeed);
	CameraComp->SetFieldOfView(NewFOV);

	if (!HasAuthority() && GetController() == UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		// 다이빙 중이거나 글라이딩 중이면 실행.
		if (bDiving || bGliding)
		{
			FFindFloorResult Result;

			// 바닥까지 거리 계산.
			GetCharacterMovement()->ComputeFloorDist(GetActorLocation(), 30000.0f, 30000.0f, Result, 34.0f);

			// 바닥과의 거리가 200m보다 작으면.
			if (Result.FloorDist < 20000.0f)
			{
				Cloud->Deactivate();

				if (!bGliding)
				{
					// Gliding
					InteractionFunc();
				}
				// 바닥과의 거리가 5m보다 작으면.
				if (Result.FloorDist < 500.0f)
				{
					WantToWalk_Req();
					ResetToWalk();

					// 서버에 중복으로 보내지 않기 위해 미리 값을 변경함.
					bDiving = bGliding = false;
				}
			}

			CurrentLocalPitch = FMath::FInterpTo(CurrentLocalPitch, TargetLocalPitch, 0.3, 0.05);
			CurrentLocalRoll = FMath::FInterpTo(CurrentLocalRoll, TargetLocalRoll, 0.3, 0.05);

			FRotator NewRotator = FRotator(CurrentLocalRoll, -90.0f, CurrentLocalPitch);
			GetMesh()->SetRelativeRotation(NewRotator);
		}
		else
		{
			ShowItemWidgetFunc();
		}
	}
}

void ABRCharacter::ServerSpawnWeapon_Implementation()
{
	if (BRWeapon == nullptr)
	{
		FName ItemRowName = FName(*FString::FromInt(WeaponItemClassID));
		FITemTableRow *ItemData = ItemDataTable->FindRow<FITemTableRow>(ItemRowName, FString(""));

		if (ItemData)
		{
			BRWeapon = ItemData->BP_Weapon;
		}
	}

	// 이미 다른 총기가 있는 경우 기존 총기 Destroy
	if (MyWeapon)
	{
		MyWeapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
		MyWeapon->Destroy();
		MyWeapon = nullptr;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	MyWeapon = GetWorld()->SpawnActor<ABRWeapon>(BRWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (MyWeapon)
	{
		MyWeapon->SetOwner(this);

		if (bRifleEquipped) 
		{
			// 총기가 손에 있는 경우 새로운 총기를 손에 장착.
			MyWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponRightSocketName);
		}
		else
		{	
			// 총기가 등에 있거나 아예 없으면 새로운 총기를 등에 장착.
			MyWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponBackSocketName);
		}
	}

	// 무기 스폰 후 웨폰 클래스 초기화.
	BRWeapon = nullptr;
}

bool ABRCharacter::ServerSpawnWeapon_Validate()
{
	return true;
}

// 총기 습득 시 bHasWeapon을 true로 바꿈, BRWeapon에서 조종
void ABRCharacter::SetHasWeapon(bool NewHasWeapon)
{
	bHasWeapon = NewHasWeapon;
}

void ABRCharacter::ServerWeaponEquip_Implementation()
{
	MulticastWeaponEquip();
}

bool ABRCharacter::ServerWeaponEquip_Validate()
{
	return true;
}

// 캐릭터가 가진 총의 위치 동기화 함수.
void ABRCharacter::MulticastWeaponEquip_Implementation()
{
	if (MyWeapon)
	{
		if (bRifleEquipped) // 무기를 장착 중인 경우.
		{
			MyWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponRightSocketName);
		}
		else // 무기가 등에 있는 경우.
		{
			MyWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponBackSocketName);
		}
	}
}

bool ABRCharacter::MulticastWeaponEquip_Validate()
{
	return true;
}

// Called to bind functionality to input
void ABRCharacter::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABRCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABRCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ABRCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ABRCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Aiming", IE_Pressed, this, &ABRCharacter::AimingWeapon);
	PlayerInputComponent->BindAction("Aiming", IE_Released, this, &ABRCharacter::AimingWeapon);
	PlayerInputComponent->BindAction("EquipRifle", IE_Pressed, this, &ABRCharacter::EquipRifle);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ABRCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ABRCharacter::StopFire);
	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &ABRCharacter::InteractionFunc);
}

/*pawn의 시점을 카메라 위치와 동기화 함*/
FVector ABRCharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

void ABRCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABRCharacter, MoveForwardValue);
	DOREPLIFETIME(ABRCharacter, MoveRightValue);
	DOREPLIFETIME(ABRCharacter, UpperItemClassID);
	DOREPLIFETIME(ABRCharacter, LowerItemClassID);
	DOREPLIFETIME(ABRCharacter, HelmetItemClassID);
	DOREPLIFETIME(ABRCharacter, ShoesItemClassID);
	DOREPLIFETIME(ABRCharacter, WeaponItemClassID);
	DOREPLIFETIME(ABRCharacter, bAiming);
	DOREPLIFETIME(ABRCharacter, bDied);
	DOREPLIFETIME(ABRCharacter, WaistPitch);
	DOREPLIFETIME(ABRCharacter, bDiving);
	DOREPLIFETIME(ABRCharacter, bGliding);
	DOREPLIFETIME(ABRCharacter, bRifleEquipped);
	DOREPLIFETIME(ABRCharacter, MyWeapon);
}