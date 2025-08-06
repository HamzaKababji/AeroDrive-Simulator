// Copyright Epic Games, Inc. All Rights Reserved.

#include "AeroDriveSimulatorWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UAeroDriveSimulatorWheelFront::UAeroDriveSimulatorWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}