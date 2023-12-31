// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AISetting/BTTask_Attack.h"
#include "KwangAiController.h"
#include "SeniorProject/AIMinions/Minions.h"
#include "SeniorProject/AIMinions/MinionAIController.h"
#include "SeniorProject/Player/MyCharacter.h"
#include "SeniorProject/Player/Kallari.h"


UBTTask_Attack::UBTTask_Attack()
{
	bNotifyTick = true;
	IsAttacking = false;
}

// 공격 범위 안에 들어올 시 각각 클래스에 대해 공격을 진행함
EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	
	
	auto Monster = OwnerComp.GetAIOwner()->GetPawn();


	if (Monster->ActorHasTag(TEXT("MyCharacterClass")))
	{
		auto MyCharacter = Cast<AMyCharacter>(OwnerComp.GetAIOwner()->GetPawn());
		if (MyCharacter == nullptr) return EBTNodeResult::Failed;

		MyCharacter->Attack();
		IsAttacking = true;
		MyCharacter->OnAttackEnd.AddLambda([this]()	-> void { IsAttacking = false; });
	}
	


	else if (Monster->ActorHasTag(TEXT("KallariClass")))
	{
		auto kallari = Cast<AKallari>(OwnerComp.GetAIOwner()->GetPawn());
		if (kallari == nullptr) return EBTNodeResult::Failed;

		kallari->Attack();
		IsAttacking = true;
		kallari->OnAttackEnd.AddLambda([this]()	-> void { IsAttacking = false; });
	}



	else if (Monster->ActorHasTag(TEXT("MinionClass")))
	{
		auto Minion = Cast<AMinions>(OwnerComp.GetAIOwner()->GetPawn());
		if (Minion == nullptr) return EBTNodeResult::Failed;

		Minion->Attack();
		IsAttacking = true;
		Minion->OnAttackEnd.AddLambda([this]()	-> void { IsAttacking = false; });
	}


	
	

	return EBTNodeResult::InProgress;
}

void UBTTask_Attack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (!IsAttacking)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
	
}
