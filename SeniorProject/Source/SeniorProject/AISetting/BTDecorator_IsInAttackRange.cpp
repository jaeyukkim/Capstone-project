// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AISetting/BTDecorator_IsInAttackRange.h"
#include "KwangAiController.h"
#include "SeniorProject/AIMinions/MinionAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange()
{
	NodeName = TEXT("CanAttack");
	AttackRange = 250.0f;
}

//감지된 플레이어가 있을 때 공격범위 안에 들어오는지 리턴하는 함수
bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;


	if (ControllingPawn->ActorHasTag(TEXT("MyCharacterClass")))
	{

		auto Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AKwangAiController::TargetKey));
		if (Target == nullptr)
			return false;

		if (bResult != NULL)
		{
			bResult = (Target->GetDistanceTo(ControllingPawn) <= AttackRange);
			return bResult;
		}

	}
	


	if (ControllingPawn->ActorHasTag(TEXT("KallariClass")))
	{

		auto Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AKwangAiController::TargetKey));
		if (Target == nullptr)
			return false;

		if (bResult != NULL)
		{
			bResult = (Target->GetDistanceTo(ControllingPawn) <= AttackRange);
			return bResult;
		}

	}


	else if(ControllingPawn->ActorHasTag(TEXT("MinionClass")))
	{
		auto Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMinionAIController::TargetKey));
		if (Target == nullptr)
			return false;

		if (bResult != NULL)
		{
			bResult = (Target->GetDistanceTo(ControllingPawn) <= AttackRange);
			return bResult;
		}

	}


	

	return false;
}
