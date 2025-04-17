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

	static const int MIN_HP = 2;
	static const int MAX_HP = 5;

	FIntVector2 Position;
	UPROPERTY(BlueprintReadOnly) int HitPoints = 0;

	UUnit();
	bool MoveStepTowardsPos(const FIntVector2& targetPos);

private:
	bool MoveCoordinateByDistance(int& coordinate, const int distanceCoord);
};