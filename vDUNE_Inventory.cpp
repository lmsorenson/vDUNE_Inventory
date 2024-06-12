// Copyright Epic Games, Inc. All Rights Reserved.

#include "vDUNE_Inventory.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE( FvDuneInventory, vDuneInventory );
 
void FvDuneInventory::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("*** vDUNE INVENTORY MODULE STARTUP ***"));
}

void FvDuneInventory::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("*** vDUNE INVENTORY MODULE SHUTDOWN ***"));
}
