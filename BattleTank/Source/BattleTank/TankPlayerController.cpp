// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ATank* tank = GetControlledTank();
	if (!tank) 
	{
		UE_LOG(LogTemp, Error, TEXT("Controller error"));
		return;
	}
	FString name = tank->GetName();
	UE_LOG(LogTemp, Warning, TEXT("I get a controller on %s"), *name);
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


