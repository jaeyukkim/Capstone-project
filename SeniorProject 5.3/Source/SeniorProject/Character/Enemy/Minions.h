// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/Character/CharacterBase.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKey.h"
#include "Minions.generated.h"



enum class EBlackboardNotificationResult : uint8;
namespace FBlackboard
{
	struct FKey;
}

class AAIControllerBase;
class UBehaviorTree;
class UWidgetComponent;
class AWayPoint;
class UNavModifierComponent;

UCLASS(abstract, Blueprintable)

class SENIORPROJECT_API AMinions : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinions();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float LifeSpanTime = 5.f;
	virtual void Die_Implementation() override;
	
	FORCEINLINE virtual int32 GetPlayerLevel_Implementation() override {return Level;};
	
	/* Enemy Interface */
	virtual void SetLineTag_Implementation(FGameplayTag NewLineTag) override {LineTag = NewLineTag;}
	virtual AActor* GetCombatTarget_Implementation() const override;
	virtual void SetTargetPlayer_Implementation(AActor* Target) override;
	virtual void SetCurrentWayPoint_Implementation(AActor* InCurrentWayPoint) override;
	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Combat")
	TObjectPtr<AActor> CombatTarget;
	/* end Enemy Interface */


	/* GameplayInterface */
	virtual FGameplayTag GetTeamName_Implementation() const override {return TeamName;}
	virtual FGameplayTag GetLineTag_Implementation() const override {return LineTag;}
	/* end GameplayInterface */

	
	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag TeamName;
	UPROPERTY(EditAnywhere, Category = "GameRule")
	FGameplayTag LineTag;

	UPROPERTY()
	TObjectPtr<AAIControllerBase> AIControllerBase;
	UPROPERTY(EditAnywhere, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;
protected:
	virtual void SetDefaultSetting() {};
	virtual void InitAbilityActorInfo() override;
	virtual void InitializeDefaultAttributes() const override;
	virtual void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount) override;
	void BindCallbackTargetCharacter();
	virtual EBlackboardNotificationResult OnBlackboardTargetChanged(const UBlackboardComponent& BlackboardComp, FBlackboard::FKey KeyID);
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defalut Character Setting")
	int32 Level = 1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="HealthBar")
	TObjectPtr<UWidgetComponent> HealthBarWidget;
	UPROPERTY()
	TObjectPtr<UNavModifierComponent> DetourAreaComponent;
	
	
	UFUNCTION()
	void Stunned(const FGameplayTag CallbackTag, int32 NewCount);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float MinionEnforceTime = 60.f;
	
};
