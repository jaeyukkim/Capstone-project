// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyCharacter.h"
#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/PlayerBase/MyAnimInstance.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"

#include "SeniorProject/UI/HUD/DefaultHUD.h"

#include "AbilitySystemComponent.h"
#include "EngineUtils.h"

#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Data/LevelUpInfo.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/Actor/PlayerStart/TeamPlayerStart.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
	Tags.Add(TEXT("Player"));
	
	PrimaryActorTick.bCanEverTick = true;
	
	
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	SpringArm->TargetArmLength = 320.0f;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 115.0f));
	SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = true;
	SpringArm->SetIsReplicated(true);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));\
	Camera->SetupAttachment(SpringArm);

	LevelUpParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("LevelUpParticleComponent");
	LevelUpParticleComponent->SetupAttachment(GetRootComponent());
	LevelUpParticleComponent->bAutoActivate = false;

	HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBarWidget->SetupAttachment(GetRootComponent());
	HealthBarWidget->SetWidgetSpace(EWidgetSpace::World);
	HealthBarWidget->SetDrawSize(FVector2D(250.0f, 50.0f));
	HealthBarWidget->SetCullDistance(4500.f);
	

	
	ThisActor = nullptr;
	LastActor = nullptr;
	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Character"));
}


void AMyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyCharacter, OwnedItems);
}

void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Ability Info ���� �ʱ�ȭ
	InitAbilityActorInfo();
	AddCharacterAbility();
	UBlueprintFunctionLibraryBase::GiveStartupAbilities(this, AbilitySystemComponent, CharacterClass);
	
}

void AMyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Ability Info Ŭ���̾�Ʈ �ʱ�ȭ
	InitAbilityActorInfo();
	
}




void AMyCharacter::BroadcastInitialValues()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	checkf(PlayerStateBase, TEXT("MyPlayerState Class uninitialized"));

	const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet);
	checkf(AS, TEXT("AttibuteSet Class uninitialized"));

	
	OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	OnHealthChanged.Broadcast(AS->GetHealth());
		
	OnMaxManaChanged.Broadcast(AS->GetMaxMana());
	OnManaChanged.Broadcast(AS->GetMana());
	OnLevelChanged.Broadcast(PlayerStateBase->GetPlayerLevel());
	PlayerStateBase->BroadcastPlayerStat();
	HealthBarWidget->UpdateWidget();
	
}

void AMyCharacter::ClientSwitchCameraToAnotherCharacter_Implementation()
{
	if(PlayerController == nullptr) return;

	for (TActorIterator<AMyCharacter> It(GetWorld()); It; ++It)
	{
		AMyCharacter* OtherCharacter = *It;
		PlayerController->bAutoManageActiveCameraTarget = false;
		// 본인이나 사망한 캐릭터는 무시하고 다른 캐릭터를 찾음
		if (OtherCharacter != this)
		{
			// 다른 캐릭터를 소유하는 방식이 아니라 카메라만 해당 캐릭터로 이동
			SpectatorCharacter = OtherCharacter;
			OtherCharacter->SpringArm->bEnableCameraLag = true;
			OtherCharacter->SpringArm->bEnableCameraRotationLag = true;
			OtherCharacter->SpringArm->TargetArmLength = 600.f;
			PlayerController->SetViewTargetWithBlend(OtherCharacter, 1.5f, EViewTargetBlendFunction::VTBlend_EaseInOut, 2.f);
			break;
		}
	}
}

void AMyCharacter::InitAbilityActorInfo()
{
	
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	checkf(PlayerStateBase, TEXT("MyPlayerState Class uninitialized"));
	PlayerStateBase->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerStateBase, this);
	Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent())->AbilityActorInfoSet();
	 
	AbilitySystemComponent = PlayerStateBase->GetAbilitySystemComponent();
	AttributeSet = PlayerStateBase->GetAttributeSet();
	OnAscRegistered.Broadcast(AbilitySystemComponent);
	
	AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTagsBase::Get().Debuff_Type_Stun,
		EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AMyCharacter::Stunned);
	
	checkf(AttributeSet, TEXT("PlayerStateBase Class uninitialized"));

	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		if (ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD()))
		{
			DefaultHUD->InitOverlay(MyPlayerController, PlayerStateBase, AbilitySystemComponent, AttributeSet);
		}
	}
	
	InitializeDefaultAttributes();
	GetWorld()->GetTimerManager().SetTimer(InitPlayerHealthBarHandle, this, &AMyCharacter::InitializeHealthBarWidget, 5.f, false);
	GetMesh()->SetSimulatePhysics(false);
}

void AMyCharacter::InitializeHealthBarWidget()
{
	if (UOverlayWidget* OverlayUserWidget = Cast<UOverlayWidget>(HealthBarWidget->GetUserWidgetObject()))
	{
		OverlayUserWidget->SetWidgetController(this);
		if(IsLocallyControlled())
			HealthBarWidget->SetHiddenInGame(true);
	}

	if (const UAttributeSetBase* AS = Cast<UAttributeSetBase>(AttributeSet))
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetManaAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaChanged.Broadcast(Data.NewValue);
				HealthBarWidget->UpdateWidget();
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxManaAttribute()).AddLambda(
			[this, AS](const FOnAttributeChangeData& Data)
			{
				OnMaxManaChanged.Broadcast(AS->GetMaxMana());
				HealthBarWidget->UpdateWidget();
			}
		);

		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
				HealthBarWidget->UpdateWidget();
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMaxHealthAttribute()).AddLambda(
			[this, AS](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
				HealthBarWidget->UpdateWidget();
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AS->GetMovementSpeedAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				if(HasAuthority())
				{
					GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
					MulticastSetMaxWalkSpeed(Data.NewValue);
				}
			}
		);
		
		BroadcastInitialValues();
		GetWorldTimerManager().ClearTimer(InitPlayerHealthBarHandle);


	}

	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		PlayerStateBase->OnLevelChangedDelegate.AddLambda([this](int32 Level)
		{
			OnLevelChanged.Broadcast(Level);
		});
		
		
	}
	

}

void AMyCharacter::MulticastReSpawn_Implementation()
{
	GetWorldTimerManager().ClearTimer(InitReSpawnHandle);
	bDead = false;
	GetCapsuleComponent()->SetCollisionObjectType(ECC_Character);
	HealthBarWidget->SetVisibility(true);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	GetCapsuleComponent()->SetEnableGravity(true);
	
	if(IsLocallyControlled())
	{
		if(AMyPlayerController* MyPlayerController =  Cast<AMyPlayerController>(GetController()))
		{
			ServerSetSpawnPoint();
			EnableInput(MyPlayerController);
			PlayerController->SetViewTargetWithBlend(this, 1.5f, EViewTargetBlendFunction::VTBlend_EaseInOut, 2.f);
		}
	}
}



void AMyCharacter::ServerSetSpawnPoint_Implementation()
{
	if(!HasAuthority()) return;
	
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();

	if (PlayerStateBase == nullptr) return;

	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();

	if (HasAuthority() && PlayerStateBase->GetTeamName() != TagsBase.GameRule_TeamName_NONE)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, ATeamPlayerStart::StaticClass(), PlayerStarts);
		TArray<ATeamPlayerStart*> TeamPlayerStarts;

		for (auto Start : PlayerStarts)
		{
			ATeamPlayerStart* TeamStart = Cast<ATeamPlayerStart>(Start);
			if (TeamStart && TeamStart->TeamName == PlayerStateBase->GetTeamName())
			{
				TeamPlayerStarts.Add(TeamStart);
			}
		}
		if (TeamPlayerStarts.Num() > 0)
		{
			ATeamPlayerStart* ChosenPlayerStart = TeamPlayerStarts[FMath::RandRange(0, TeamPlayerStarts.Num() - 1)];
			SetActorLocationAndRotation(
				ChosenPlayerStart->GetActorLocation(),
				ChosenPlayerStart->GetActorRotation());
		}
	}
}


void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();


	PlayerController = Cast<AMyPlayerController>(GetController());
	if (PlayerController != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		
		if(Subsystem)
			Subsystem->AddMappingContext(PlayerContext, 0);
	}
	
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsLocallyControlled())
	{
		AimTrace();
	}
	

}
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::Jump);
	EnhancedInputComponent->BindAction(ShowAdditionalAttribute, ETriggerEvent::Triggered, this, &AMyCharacter::ShowAdditionalAttributeMenu);



}

void AMyCharacter::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector FowardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	
	AddMovementInput(FowardDirection, InputAxisVector.Y);
	AddMovementInput(RightDirection, InputAxisVector.X);
	

}

void AMyCharacter::Look(const FInputActionValue& InputActionValue)
{

	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();


	AddControllerPitchInput(InputAxisVector.Y);
	AddControllerYawInput(InputAxisVector.X);

	FRotator Rotator = SpringArm->GetComponentRotation();
	ServerSetCameraRotation(Rotator.Pitch, Rotator.Yaw, Rotator.Roll);

}

void AMyCharacter::ShowAdditionalAttributeMenu(const FInputActionValue& InputActionValue)
{
	bool bIsPressed = InputActionValue.Get<bool>();
	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD());
		UOverlayWidgetController* OverlayWidgetController = DefaultHUD->GetOverlayWidgetController(FWidgetControllerParams());

		if (bIsPressed)
		{
			// C 키가 눌렸을 때
			OverlayWidgetController->OnAdditionalAttributeMenu.Broadcast(true);
		}
		else
		{
			// C 키가 떼어졌을 때
			OverlayWidgetController->OnAdditionalAttributeMenu.Broadcast(false);

		}
	}

	
}


void AMyCharacter::GetAimHitResult(float AbilityDistance, FHitResult& HitResult)
{

	if(!IsValid(PlayerController)) return;
	
	FVector CameraLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentLocation();
	FVector TraceEndLocation = PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentRotation().Vector()*AbilityDistance;
		
	TraceEndLocation += CameraLocation;


	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, TraceEndLocation,
	ECC_RangeTrace);
		
	if (!bHit)
	{
		FVector DownwardTraceEnd = TraceEndLocation + FVector(0.0f, 0.0f, -10000.0f); // 수직 아래로 추가 트레이스
		bool bFloorHit = GetWorld()->LineTraceSingleByChannel(HitResult, TraceEndLocation, DownwardTraceEnd, ECC_RangeTrace);

	}


}

void AMyCharacter::Die_Implementation()
{

	ClientSwitchCameraToAnotherCharacter();
	
	
	MulticastPlayerDie();

	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	if(PlayerStateBase != nullptr)
	{
		float DeadTime = PlayerStateBase->GetPlayerLevel() * 1.5 + 10;
		GetWorld()->GetTimerManager().SetTimer(InitPlayerHealthBarHandle, this, &AMyCharacter::MulticastReSpawn, DeadTime, false);
	}
	

	Super::Die_Implementation();
}

void AMyCharacter::MulticastPlayerDie_Implementation()
{
	
	HealthBarWidget->SetVisibility(false);
		
	if(IsLocallyControlled())
	{
		if(AMyPlayerController* MyPlayerController =  Cast<AMyPlayerController>(GetController()))
		{
			DisableInput(MyPlayerController);
		}
	}
}


FGameplayTag AMyCharacter::GetTeamName_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	
	if(PlayerStateBase == nullptr) return FGameplayTagsBase::Get().GameRule_TeamName_NONE;

	
	return PlayerStateBase->GetTeamName();
	
}

void AMyCharacter::AddToXP_Implementation(int32 InXP)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToXP(InXP);
}

void AMyCharacter::LevelUp_Implementation()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	MulticastLevelUpParticles();

	
	
}

void AMyCharacter::AddToItem_Implementation(const FItemInformation& InOwnedItem)
{
	OwnedItems.Add(InOwnedItem);

}

bool AMyCharacter::DeleteItem_Implementation(FGameplayTag ItemInputTag)
{
	// 배열에서 해당 태그를 가진 아이템을 모두 삭제
	int32 RemovedCount = OwnedItems.RemoveAll([&](const FItemInformation& Info)
	{
		return Info.InputTag.MatchesTag(ItemInputTag);
	});

	// 삭제된 항목이 있으면 true 반환
	return RemovedCount > 0;
}

void AMyCharacter::SortingItem_Implementation()
{
	if(APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>())
	{
		UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(PlayerStateBase->GetAbilitySystemComponent());

		for(FItemInformation& OwnedItem : OwnedItems)
		{
			FGameplayTag PrevInputTag = OwnedItem.InputTag;
			FGameplayTag NextInputTag = GetEmptyItemSlot_Implementation();

			OwnedItem.InputTag = NextInputTag;
			ASCBase->ChangeGrantedTagToEffect(PrevInputTag, NextInputTag, OwnedItem.ItemEffect);
		}
		
	}
}

FGameplayTag AMyCharacter::GetEmptyItemSlot_Implementation()
{
	
	// 게임플레이 태그 데이터베이스 가져오기
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
    
	// OwnedItems 배열에서 사용 중인 InputTag들을 수집합니다.
	TSet<FGameplayTag> UsedTags;
	for (const FItemInformation& Item : OwnedItems)
	{
		if (Item.InputTag.IsValid())
		{
			UsedTags.Add(Item.InputTag);
		}
	}

	// 사용되지 않은 태그를 찾아 반환합니다.
	for (const FGameplayTag& InputTag : GameplayTags.ItemInputTags)
	{
		if (!UsedTags.Contains(InputTag))
		{
			return InputTag; // 사용되지 않은 첫 번째 태그 반환
		}
	}

	// 사용 가능한 태그가 없을 경우 NONE 태그 반환
	return GameplayTags.Input_NONE;
}

TArray<FItemInformation> AMyCharacter::GetAllItem_Implementation()
{
	return OwnedItems;
}


void AMyCharacter::MulticastLevelUpParticles_Implementation() const
{
	if(IsValid(LevelUpParticleComponent))
		LevelUpParticleComponent->Activate(true);
	
}


int32 AMyCharacter::GetXP_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetXP();
}

int32 AMyCharacter::GetGold_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetGold();
}

int32 AMyCharacter::FindLevelForXP_Implementation(int32 InXP) const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->LevelUpInfo->FindLevelForXP(InXP);
}


void AMyCharacter::AddToPlayerLevel_Implementation(int32 InPlayerLevel)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToLevel(InPlayerLevel);

	if(HasAuthority())
	{
		for(int i = 0 ; i<InPlayerLevel ; i++)
		{
			ApplyEffectToSelf(LevelUpReward, 1.f);
		}
	}
	
	
}


void AMyCharacter::AddToSpellPoints_Implementation(int32 InSpellPoints)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToSpellPoints(InSpellPoints);
}

void AMyCharacter::AddToGold_Implementation(int32 InGold)
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	PlayerStateBase->AddToGold(InGold);
}

int32 AMyCharacter::GetSpellPoints_Implementation() const
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetSpellPoints();
}


int32 AMyCharacter::GetPlayerLevel_Implementation()
{
	APlayerStateBase* PlayerStateBase = GetPlayerState<APlayerStateBase>();
	check(PlayerStateBase);
	return PlayerStateBase->GetPlayerLevel();


}

void AMyCharacter::GetLevelUpReward()
{
	ApplyEffectToSelf(LevelUpReward, 1.f);
}


void AMyCharacter::Stunned(const FGameplayTag CallbackTag, int32 NewCount)
{
	if(AMyPlayerController* MyPlayerController =  Cast<AMyPlayerController>(GetController()))
	{
		if(NewCount > 0)
		{
			DisableInput(MyPlayerController);
			bIsStunned = true;
		}
		else
		{
			EnableInput(MyPlayerController);
			bIsStunned = false;
		}
	}
	
}


void AMyCharacter::AimTrace()
{
	FHitResult HitResult;


	FVector CameraLocation = Camera->GetComponentLocation();
	FVector CameraForwardVector = Camera->GetComponentRotation().Vector();
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraLocation, CameraLocation + CameraForwardVector * 2000,
		 ECollisionChannel::ECC_GameTraceChannel2);
	

	/* 아무것도 감지되지 않았을 때 초기화 */
	if (!HitResult.bBlockingHit)
	{
		if(LastActor != nullptr)
		{
			LastActor->UnHighlightActor();
			LastActor = nullptr;
		}
		if(ThisActor != nullptr)
		{
			ThisActor->UnHighlightActor();
			ThisActor = nullptr;
		}
	};

	
	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();

	

	if (LastActor == nullptr)
	{
		/* Case A : 현재 감지 된 캐릭터가 자신이 아니라 적일때 HighLight */
		if (ThisActor != nullptr && ThisActor != this && !UBlueprintFunctionLibraryBase::IsFriends(this,Cast<AActor>(ThisActor.GetObject())))
		{
			ThisActor->HighlightActor();
		}
		else
		{
			/* Case B : 현재 감지 된 캐릭터, 이전에 감지했던 캐릭터가 없을 때 아무것도 하지 않음 */
		}
	}
	else // LastActor is valid
	{
		if (ThisActor == nullptr)
		{
			/* Case C : 이전에 감지 된 캐릭터가 있고 지금 감지중인 캐릭터가 없을 때 */
			LastActor->UnHighlightActor();
		}
		else 
		{
			if (LastActor != ThisActor)
			{
				/* Case D : 이전에 감지 된 캐릭터가 있고 현재 감지 대상이 바뀌었을때 이전 대상 UnHighlightActor 현재 대상은 적일 경우에만 HighLight */
				LastActor->UnHighlightActor();
				
				if(ThisActor != this && !UBlueprintFunctionLibraryBase::IsFriends(this,Cast<AActor>(ThisActor.GetObject())))
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E :
			}
		}
	}

}
void AMyCharacter::ServerSetCameraRotation_Implementation(float Pitch, float Yaw, float Roll)
{
	MulticastSetCameraRotation(Pitch, Yaw, Roll);
}

void AMyCharacter::MulticastSetCameraRotation_Implementation(float Pitch, float Yaw, float Roll)
{
	FRotator CamaraRotator =FRotator(Pitch, Yaw, Roll);
	SpringArm->SetWorldRotation(CamaraRotator);
}