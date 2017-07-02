// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../BattleTank/Public/Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	ATank* GetTankController() const;
	
	virtual void BeginPlay() override;
};
