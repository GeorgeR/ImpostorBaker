#pragma once

#include "IImpostorBakerEditorModuleInterface.h"

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Stats/Stats.h"
#include "Stats/Stats2.h"

DECLARE_LOG_CATEGORY_EXTERN(LogImpostorBaker, VeryVerbose, All);

DECLARE_STATS_GROUP(TEXT("ImpostorBakerEditor"), STATGROUP_ImpostorBaker, STATCAT_Advanced);

class FImpostorBakerEditorModule
    : public IImpostorBakerEditorModuleInterface
{
};