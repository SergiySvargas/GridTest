#pragma once

#include "CoreMinimal.h"
#include "Unit.generated.h"

UCLASS(BlueprintType)
class GRIDTEST_API UUnit : public UObject
{
	GENERATED_BODY()

	int MovePerTimeStep = 4;
	int AttackRange = 5;
	int TimeStepsPerAttack = 10;

public:

	FIntVector2 Position;
	UPROPERTY(BlueprintReadOnly) int HitPoints = 0;

	UUnit();

	bool MoveStepTowardsPos(const FIntVector2& targetPos);
	bool TryAttack(UUnit& target);

private:
	bool MoveCoordinateByDistance(int& coordinate, const int distanceCoord);
};