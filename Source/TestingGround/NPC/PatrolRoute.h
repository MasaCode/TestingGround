// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUND_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPatrolRoute();

	TArray<AActor*>& GetPatrolPoints();
	//TArray<AActor*> GetPatrolPoints() const;

protected:
	UPROPERTY(EditAnywhere, Category = PatrolRoute)
		TArray<AActor*> PatrolPoints;
	
};
