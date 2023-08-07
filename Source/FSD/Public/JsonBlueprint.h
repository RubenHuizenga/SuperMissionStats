// Copyright Ghost Ship Games

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#include "BlueprintJsonObject.h"
#include "BlueprintJsonValue.h"

class FJsonBlueprintModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
