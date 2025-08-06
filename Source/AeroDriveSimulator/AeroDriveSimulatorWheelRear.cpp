// Copyright Epic Games, Inc. All Rights Reserved.

#include "AeroDriveSimulatorWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UAeroDriveSimulatorWheelRear::UAeroDriveSimulatorWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}