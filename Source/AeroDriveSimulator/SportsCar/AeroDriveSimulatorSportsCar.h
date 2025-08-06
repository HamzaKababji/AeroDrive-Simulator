// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AeroDriveSimulatorPawn.h"
#include "AeroDriveSimulatorSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AAeroDriveSimulatorSportsCar : public AAeroDriveSimulatorPawn
{
	GENERATED_BODY()
	
public:

	AAeroDriveSimulatorSportsCar();
};
