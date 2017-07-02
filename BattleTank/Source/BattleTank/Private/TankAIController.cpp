// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	ATank* tank = GetTankController();
	if (!tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("We have a problem"));
	}
	FString name = tank->GetName();
	UE_LOG(LogTemp, Warning, TEXT("control %s"), *name);
}

ATank* ATankAIController::GetTankController() const
{
	return Cast<ATank>(GetPawn());
}


