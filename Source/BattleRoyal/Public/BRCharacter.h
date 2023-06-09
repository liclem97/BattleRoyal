// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleRoyal.h"
#include "GameFramework/Character.h"
#include "BRItemDataTable.h"
#include "BRCharacter.generated.h"

class ABRWeapon;
class UCameraComponent;
class USpringArmComponent;
class UUserWidget;
class UBRHealthComponent;
class USkeletalMeshComponent;
class UWidgetComponent;
class ABRPickupActor;
class UAnimMontage;

#define GETENUMSTRING(etype, evalue) ((FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetEnumName((int32)evalue) : FString("Invalid - are you sure enum uses UENUM() macro?"))

UCLASS()
class BATTLEROYAL_API ABRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABRCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

	void SetCharacterDeath(bool NewDeath);

	UBRHealthComponent *GetHealthComponent() const { return HealthComp; }

	void SetDiving(bool NewDive);

	void SetHasWeapon(bool NewHasWeapon);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void AimingWeapon();

	void EquipRifle();

	void BeginZoom();

	void EndZoom();

	void StartFire();

	void StopFire();

	void InteractionFunc();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHealthChanged(UBRHealthComponent *OwningHealthComp, float Health, float HealthDelta, const class UDamageType *DamageType, class AController *InstigatedBy, AActor *DamageCauser);

	ABRPickupActor *FindItemAroundMe();

	UFUNCTION(Server, unreliable, WithValidation)
	void MoveForward_Req(float ServerMoveForwardValue);

	UFUNCTION(Server, unreliable, WithValidation)
	void MoveRight_Req(float ServerMoveRightValue);

	UFUNCTION(Server, unreliable, WithValidation)
	void WaistPitch_Req(float ServerWaistPitch);

	UFUNCTION(Server, reliable, WithValidation)
	void TryToPickItem_Req(ABRPickupActor *TargetItem);

	UFUNCTION()
	void OnRep_LoadUpperItem();

	UFUNCTION()
	void OnRep_LoadLowerItem();

	UFUNCTION()
	void OnRep_LoadHelmetItem();

	UFUNCTION()
	void OnRep_LoadShoesItem();

	UFUNCTION(BlueprintImplementableEvent)
	void LoadUpperItem();

	UFUNCTION(BlueprintImplementableEvent)
	void LoadLowerItem();

	UFUNCTION(BlueprintImplementableEvent)
	void LoadHelmetItem();

	UFUNCTION(BlueprintImplementableEvent)
	void LoadShoesItem();

	UFUNCTION(Server, reliable, WithValidation)
	void Aiming_Req(bool bNewAiming);

	UFUNCTION(Server, unreliable, WithValidation)
	void FireAnimation_Req();

	void FireAnimation();

	UFUNCTION(NetMulticast, reliable)
	void FireAnimation_Multicast();

	UFUNCTION()
	void OnRep_Death();

	void WaistPitchFunc();

	void ShowItemWidgetFunc();

	UFUNCTION()
	void OnRep_Diving();

	UFUNCTION()
	void OnRep_Gliding();

	UFUNCTION(Server, unreliable, WithValidation)
	void WantToGlide();

	UFUNCTION(Server, reliable, WithValidation)
	void WantToWalk_Req();

	UFUNCTION(Server, reliable, WithValidation)
	void ServerDivingFunc();

	void DivingFunc();

	UFUNCTION(Server, reliable, WithValidation)
	void ServerGlidingFunc();

	void GlidingFunc();

	UFUNCTION(Server, reliable, WithValidation)
	void ServerResetToWalk();

	void ResetToWalk();

	UFUNCTION(Server, Reliable, WithValidation)
	void RifleEquip_Req(bool bNewRifleEquipped);

	//서버에서 총을 스폰함
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSpawnWeapon();

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerWeaponEquip();

	// 다른 클라이언트와 내 클라이언트의 총기 위치를 동기화
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void MulticastWeaponEquip();

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Character")
	bool bHasWeapon;

	bool bWantsToZoom;

	float DefaultFOV;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character")
	float MoveForwardValue;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character")
	float MoveRightValue;

	float Pre_MoveForwardValue;

	float Pre_MoveRightValue;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character")
	float WaistPitch;

	float Pre_WaistPitch;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character")
	bool bRifleEquipped;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character")
	bool bAiming;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UUserWidget> CrosshairWidgetClass;

	UPROPERTY()
	class UUserWidget *CrosshairWidget;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ZoomedFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.1, ClampMax = 100))
	float ZoomInterpSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent *CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent *SpringArmComp;

	UPROPERTY(VisibleInstanceOnly, Category = "Player")
	FName WeaponBackSocketName;

	UPROPERTY(VisibleInstanceOnly, Category = "Player")
	FName WeaponRightSocketName;

	UPROPERTY(VisibleInstanceOnly, Category = "Player")
	FName ParachuteSocketName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBRHealthComponent *HealthComp;

	UPROPERTY(ReplicatedUsing = OnRep_Death, BlueprintReadOnly, Category = "Player")
	bool bDied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	USkeletalMeshComponent *Helmet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	USkeletalMeshComponent *Upper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	USkeletalMeshComponent *Lower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	USkeletalMeshComponent *Shoes;

	UPROPERTY(EditAnywhere, Category = "Data Table")
	UDataTable *ItemDataTable;

	int32 ItemClassID_Character;

	UPROPERTY(EditAnywhere, Category = "UI")
	UWidgetComponent *InteractionWidget;

	UPROPERTY(ReplicatedUsing = OnRep_LoadUpperItem, BlueprintReadOnly)
	int32 UpperItemClassID;

	UPROPERTY(ReplicatedUsing = OnRep_LoadLowerItem, BlueprintReadOnly)
	int32 LowerItemClassID;

	UPROPERTY(ReplicatedUsing = OnRep_LoadHelmetItem, BlueprintReadOnly)
	int32 HelmetItemClassID;

	UPROPERTY(ReplicatedUsing = OnRep_LoadShoesItem, BlueprintReadOnly)
	int32 ShoesItemClassID;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 WeaponItemClassID;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage *FireMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage *DeathMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage *FlyingMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage *GlidingMontage;

	FTimerHandle TimerHandle_FireMontage;

	FTimerHandle TimerHandle_WaistPitch;

	FTimerHandle TimerHandle_ItemWidget;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AActor> ParachuteClass;

	AActor *BP_Parachute;

	UPROPERTY(ReplicatedUsing = OnRep_Gliding, BlueprintReadOnly)
	bool bGliding;

	UPROPERTY(ReplicatedUsing = OnRep_Diving, BlueprintReadOnly)
	bool bDiving;

	float TargetLocalPitch;

	float TargetLocalRoll;

	float CurrentLocalPitch;

	float CurrentLocalRoll;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
	class UParticleSystemComponent *Cloud;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sound")
	class UAudioComponent *Audio;

	// FindItemAroundMe
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	TEnumAsByte<EObjectTypeQuery> WorldDynamic;
	TArray<AActor *> ignoreActors;
	TArray<AActor *> outActors;
	float ItemSearchRadius;
	UClass *PickupClass;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<ABRWeapon> BRWeapon;

	UPROPERTY(Replicated, BlueprintReadWrite)
	ABRWeapon *MyWeapon;

public:
};
