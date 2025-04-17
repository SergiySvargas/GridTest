#include "Utility.h"

FVector2D UBPFL_Utility::GetUnitPosition(UUnit* unit)
{
	return FVector2D(unit->Position.X, unit->Position.Y);
}
