// Copyright Epic Games, Inc. All Rights Reserved.

#include "AeroDriveSimulatorGameMode.h"
#include "AeroDriveSimulatorPlayerController.h"

AAeroDriveSimulatorGameMode::AAeroDriveSimulatorGameMode()
{
	PlayerControllerClass = AAeroDriveSimulatorPlayerController::StaticClass();
}
