// Fill out your copyright notice in the Description page of Project Settings.

#include "BRAirplane.h"
#include "BRGameModeBase.h"
#include "components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ABRAirplane::ABRAirplane()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyComp"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BODY(TEXT("StaticMesh'/Game/Vehicles/C-130/Meshes/SM_C_130.SM_C_130'"));
	if (SM_BODY.Succeeded())
	{
		BodyComp->SetStaticMesh(SM_BODY.Object);
	}
	BodyComp->SetRelativeLocationAndRotation(FVector(-700.0f, 0.0f, -200.0f), FRotator(0.0f, 90.0f, 0.0f));
	BodyComp->SetCollisionProfileName("NoCollision");
	BodyComp->SetupAttachment(RootComponent);

	P1Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("P1Comp"));
	P2Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("P2Comp"));
	P3Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("P3Comp"));
	P4Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("P4Comp"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Propellar(TEXT("StaticMesh'/Game/Vehicles/C-130/Meshes/SM_C_130_Propellar.SM_C_130_Propellar'"));
	if (SM_Propellar.Succeeded())
	{
		P1Comp->SetStaticMesh(SM_Propellar.Object);
		P2Comp->SetStaticMesh(SM_Propellar.Object);
		P3Comp->SetStaticMesh(SM_Propellar.Object);
		P4Comp->SetStaticMesh(SM_Propellar.Object);
	}

	P1Comp->SetupAttachment(BodyComp);
	P2Comp->SetupAttachment(BodyComp);
	P3Comp->SetupAttachment(BodyComp);
	P4Comp->SetupAttachment(BodyComp);

	P1Comp->SetRelativeLocation(FVector(516.0f, 238.0f, 373.0f));
	P2Comp->SetRelativeLocation(FVector(1022.0f, 238.0f, 403.0f));
	P3Comp->SetRelativeLocation(FVector(-504.5f, 238.0f, 373.0f));
	P4Comp->SetRelativeLocation(FVector(-1012.0f, 238.0f, 403.0f));

	P1Comp->SetCollisionProfileName("NoCollision");
	P2Comp->SetCollisionProfileName("NoCollision");
	P3Comp->SetCollisionProfileName("NoCollision");
	P4Comp->SetCollisionProfileName("NoCollision");

	PlaneSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	static ConstructorHelpers::FObjectFinder<USoundCue> PlaneSoundCue(TEXT("SoundCue'/Game/Vehicles/C-130/Sounds/C130_Lockheed_Hercules_NOISE__Cue.C130_Lockheed_Hercules_NOISE__Cue'"));
	if (PlaneSoundCue.Succeeded())
	{
		PlaneSound->SetSound(PlaneSoundCue.Object);
		PlaneSound->bOverrideAttenuation = true;
	}

	bStarted = false;
	bAlwaysRelevant = true;
	Tags.Add("C130");
}

// Called when the game starts or when spawned
void ABRAirplane::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

// Called every frame
void ABRAirplane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 서버에서 실행.
	if (HasAuthority())
	{
		if (bStarted)
		{	
			// 액터 전방으로 계속 전진.
			AddMovementInput(GetActorForwardVector());
			FVector DistanceVector = StartLocation - GetActorLocation();
			if (UKismetMathLibrary::VSize(DistanceVector) > 700000.0f) // 액터가 7KM 이상 이동 시.
			{
				ABRGameModeBase *GM = Cast<ABRGameModeBase>(GetWorld()->GetAuthGameMode());
				if (GM)
				{
					GM->AllDive(); // 비행기에 탑승 하고 있는 플레이어 전원 다이브.

					// 5초 후 비행기 멈춤.
					GetWorld()->GetTimerManager().SetTimer(TimerHandle_Delay, this, &ABRAirplane::EndAirplane, 5.0f, false);
				}
			}
		}
	}
	else
	{	
		// 프로펠러 회전.
		float NewPitch = DeltaTime * -720.0f;
		FRotator DeltaRotation = UKismetMathLibrary::MakeRotator(0.0f, NewPitch, 0.0f);
		P1Comp->AddLocalRotation(DeltaRotation);
		P2Comp->AddLocalRotation(DeltaRotation);
		P3Comp->AddLocalRotation(DeltaRotation);
		P4Comp->AddLocalRotation(DeltaRotation);
	}
}

void ABRAirplane::EndAirplane()
{
	bStarted = false;
	SetActorTickEnabled(false);
}