// Fill out your copyright notice in the Description page of Project Settings.

#include "BRElectricField.h"
#include "BRGameStateBase.h"
#include "components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABRElectricField::ABRElectricField()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Electric(TEXT("StaticMesh'/Game/EletricField/SM_EletricCylinder.SM_EletricCylinder'"));
	if (SM_Electric.Succeeded())
	{
		MeshComp->SetStaticMesh(SM_Electric.Object);
	}
}

// Called when the game starts or when spawned
void ABRElectricField::BeginPlay()
{
	Super::BeginPlay();
	GS = Cast<ABRGameStateBase>(UGameplayStatics::GetGameState(GetWorld()));
}

// Called every frame
void ABRElectricField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(GS) // 게임 스테이트에서 각 설정을 가져와 반영.
	{
		MeshComp->SetVisibility(GS->bVisibleCurrentCircle, true);
		this->SetActorLocation(GS->CurrentCirclePosition, false, nullptr, ETeleportType::TeleportPhysics);

		FVector NewScaleVector = FVector((GS->CurrentCircleRadius / 100.0f) * 2.0f, (GS->CurrentCircleRadius / 100.0f) * 2.0f, 1000.0f);
		this->SetActorScale3D(NewScaleVector);
	}
}
