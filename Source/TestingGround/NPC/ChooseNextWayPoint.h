// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWayPoint.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUND_API UChooseNextWayPoint : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		struct FBlackboardKeySelector IndexKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
		struct FBlackboardKeySelector WayPointKey;
	
	
};
