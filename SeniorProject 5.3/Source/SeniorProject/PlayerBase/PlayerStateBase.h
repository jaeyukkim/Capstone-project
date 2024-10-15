// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "PlayerStateBase.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class ULevelUpInfo;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerStatChanged, int32 /*StatValue*/)
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API APlayerStateBase : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:

	APlayerStateBase();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet()	const { return AttributeSet; }

	UFUNCTION()
	void BroadcastPlayerStat() const;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<ULevelUpInfo> LevelUpInfo;

	
	FOnPlayerStatChanged OnXPChangedDelegate;
	FOnPlayerStatChanged OnLevelChangedDelegate;
	FOnPlayerStatChanged OnGoldChangedDelegate;
	FOnPlayerStatChanged OnSpellPointsChangedDelegate;
	
	FORCEINLINE int32 GetPlayerLevel() const {return Level;};
	FORCEINLINE int32 GetXP() const { return XP; }
	FORCEINLINE int32 GetGold() const { return Gold; }
	FORCEINLINE int32 GetSpellPoints() const { return SpellPoints; }
	
	void AddToXP(int32 InXP);
	void AddToLevel(int32 InLevel);
	void AddToGold(int32 InGold);
	void AddToSpellPoints(int32 InPoints);
	
	void SetXP(int32 InXP);
	void SetLevel(int32 InLevel);
	void SetGold(int32 InGold);
	void SetSpellPoints(int32 InPoints);

	FORCEINLINE const FGameplayTag& GetTeamName() {return TeamName;}
	FORCEINLINE void SetTeamName(const FGameplayTag& InTeamName) {TeamName = InTeamName;}
	
	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite)
	TSubclassOf<AMyCharacter> PlayerCharacterClass;

	
//	virtual void Die() override;

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Level ,Category="Defalut Character Setting")
	int32 Level = 1;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_XP)
	int32 XP = 1;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_SpellPoints)
	int32 SpellPoints = 1;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_Gold)
	int32 Gold = 5000;
	
	UFUNCTION()
	void OnRep_Level(int32 OldLevel);
	
	UFUNCTION()
	void OnRep_XP(int32 OldXP);

	UFUNCTION()
	void OnRep_Gold(int32 OldSpellPoints);
	
	UFUNCTION()
	void OnRep_SpellPoints(int32 OldSpellPoints);

	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag TeamName;
	
};
