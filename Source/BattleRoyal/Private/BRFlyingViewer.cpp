// Fill out your copyright notice in the Description page of Project Settings.

#include "BRFlyingViewer.h"
#include "BRPlayerController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ABRFlyingViewer::ABRFlyingViewer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp;"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 3000.0f;
	SpringArmComp->bDoCollisionTest = false;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	static ConstructorHelpers::FClassFinder<UUserWidget> NewWidget(TEXT("WidgetBlueprint'/Game/Characters/HUD/WidgetBP_FlyingViewer.WidgetBP_FlyingViewer_C'"));
	if (NewWidget.Succeeded())
	{
		WidgetClass = NewWidget.Class;
	}

	bOnlyRelevantToOwner = true;
	bReplicateMovement = false;

	bWidgetDestroyed = false;
}

// Called when the game starts or when spawned
void ABRFlyingViewer::BeginPlay()
{
	Super::BeginPlay();

	if (WidgetClass)
	{
		Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
		Widget->AddToViewport();
		if (!HasAuthority())
		{	
			// 57초는 비행기가 약 7Km을 이동하는 시간.
			GetWorldTimerManager().SetTimer(TimerHandle_WidgetDestroy, this, &ABRFlyingViewer::DestroyWidget, 57.0f, false);
		}
	}
}

// Called every frame
void ABRFlyingViewer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABRFlyingViewer::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("LookUp", this, &ABRFlyingViewer::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ABRFlyingViewer::AddControllerYawInput);

	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &ABRFlyingViewer::InteractionFunc);
}

// 인터렉션 키 입력 시 캐릭터 다이브.
void ABRFlyingViewer::InteractionFunc()
{
	ABRPlayerController *PC = Cast<ABRPlayerController>(GetController());
	if (PC)
	{
		PC->WantToDive();
		DestroyWidget();
	}
}

void ABRFlyingViewer::DestroyWidget_Implementation()
{
	if (!bWidgetDestroyed)
	{
		Widget->RemoveFromParent();
		bWidgetDestroyed = true;
	}
}

bool ABRFlyingViewer::DestroyWidget_Validate()
{
	return true;
}
