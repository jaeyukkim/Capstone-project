// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "CoreGameState.generated.h"


UENUM(BlueprintType)
enum class EGameProcess : uint8
{
	CharacterSelectSession UMETA(DisplayName = "CharacterSelectSession"),
	GameStartSession UMETA(DisplayName = "GameStartSession"),
	GameEndSession UMETA(DisplayName = "GameEndSession")
};


USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_BODY()

	FPlayerInfo(){}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerController> PC = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerStateBase> PS = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName = FString();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag PlayerTeamName = FGameplayTag();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTexture> CharacterImg = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMyCharacter> SelectedCharacter = nullptr;
	
	bool operator==(const FPlayerInfo& Other) const
	{
		return PC == Other.PC &&
			   PS == Other.PS &&
			   PlayerName == Other.PlayerName &&
			   PlayerTeamName == Other.PlayerTeamName &&
			   CharacterImg == Other.CharacterImg;
	}
	
};

class ATurret;
class APlayerStateBase;
class AMyPlayerController;

DECLARE_MULTICAST_DELEGATE_OneParam(FPlayerCharacterChangedDelegate, const FPlayerInfo&);
DECLARE_MULTICAST_DELEGATE_OneParam(FPlayerTeamInitializedDelegate, const FGameplayTag&);
DECLARE_MULTICAST_DELEGATE(FPlayerReadyCompletedDelegate);

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ACoreGameState : public AGameState
{
	GENERATED_BODY()

public:
	ACoreGameState();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	

	FPlayerTeamInitializedDelegate PlayerTeamInitializedDelegate;
	FPlayerCharacterChangedDelegate PlayerCharacterChangedDelegate;
	FPlayerCharacterChangedDelegate NewPlayerEntrancedDelegate;
	FPlayerCharacterChangedDelegate PlayerReadyCompletedDelegate;
	FPlayerReadyCompletedDelegate AllPlayerReadyCompletedDelegate;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastNewPlayerEntranced();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayerCharacterChanged(APlayerState* InPS, TSubclassOf<AMyCharacter> SelectedCharacter, UTexture* CharacterImg);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayerReady(APlayerState* InPS);
	UFUNCTION(Server, Reliable)
	void ServerPlayerReady(APlayerState* ReadyUser);
	UFUNCTION(BlueprintCallable)
	TMap<TSubclassOf<AMyCharacter>, FGameplayTag> GetSelectedPlayerClass(FGameplayTag TeamName);
	
	void AddPlayerInfo(FPlayerInfo& Info);
	bool SetPlayerTeam(APlayerStateBase* PS);
	
	

	
	UFUNCTION()
	void UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag, bool bIsDestroy);
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag);
	UFUNCTION()
	bool IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const;
	
	
	UPROPERTY(Replicated)
	TArray<FPlayerInfo> PlayerInfos;
	UPROPERTY(Replicated)
	TArray<TObjectPtr<APlayerState>> ReadyUsers;
	UPROPERTY(Replicated)
	TArray<TObjectPtr<APlayerStateBase>> RedTeam;
	UPROPERTY(Replicated)
	TArray<TObjectPtr<APlayerStateBase>> BlueTeam;


	
	/*
	 * 타워 상태를 저장하는 비트마스크
	 * 초기화는 모두 파괴되어있는 상태
	 */
	UPROPERTY(Replicated)
	uint16 BlueTeamTurretStates = 0;
	UPROPERTY(Replicated)
	uint16 RedTeamTurretStates = 0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EGameProcess GameProcess = EGameProcess::CharacterSelectSession;
};

