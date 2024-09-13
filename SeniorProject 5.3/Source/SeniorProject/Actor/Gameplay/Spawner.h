// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "SeniorProject/Interface/GameRuleInterface.h"
#include "Spawner.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMinionSpawnSignature);


class UBoxComponent;

UCLASS()
class SENIORPROJECT_API ASpawner : public AActor, public IGameRuleInterface
{
	GENERATED_BODY()
	
public:	

	ASpawner();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	FORCEINLINE virtual FGameplayTag GetLineTag_Implementation() const override {return LineTag;}
	FORCEINLINE virtual FGameplayTag GetTeamName_Implementation() const override {return TeamName;}

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	FORCEINLINE bool GetIsSpawnSuperMinion() const { return bSpawnSuperMinion; }

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	FORCEINLINE void SetIsSpawnSuperMinion(const bool IsSpawnSuperMinion) { bSpawnSuperMinion = IsSpawnSuperMinion; }

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	FORCEINLINE bool GetIsSpawnSiegeMinion() const { return bSpawnSiegeMinion; }

	UFUNCTION(BlueprintCallable, Category = "Spawn")
	FORCEINLINE void SetIsSpawnSiegeMinion(const bool IsSpawnSiegeMinion) { bSpawnSiegeMinion = IsSpawnSiegeMinion; }
	
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<USkeletalMeshComponent> Mesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Box")
	TObjectPtr<UBoxComponent> BoxComponent;
	
	
	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnMinionSpawnSignature OnMinionSpawn;
	
	
protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag TeamName;

	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag LineTag;

	UPROPERTY(EditDefaultsOnly, Replicated ,Category = "Spawn")
	bool bSpawnSuperMinion = false;

	UPROPERTY(EditDefaultsOnly,Replicated, Category = "Spawn")
	bool bSpawnSiegeMinion = false;
	
};