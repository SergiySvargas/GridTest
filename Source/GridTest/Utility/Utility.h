#pragma once

#include "CoreMinimal.h"
#include "../Unit/Unit.h"
#include "Utility.generated.h"

UCLASS()
class UBPFL_Utility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure) static FVector2D GetUnitPosition(UUnit* unit);
};