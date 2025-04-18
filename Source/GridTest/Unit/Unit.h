#pragma once

#include "CoreMinimal.h"
#include "Unit.generated.h"

UCLASS(BlueprintType)
class GRIDTEST_API UUnit : public UObject
{
	GENERATED_BODY()

	int MovePerTimeStep = 4;
	int AttackRange = 5;
	int TimeStepsPerAttack = 3;

	int CurrentAttackStep = TimeStepsPerAttack;

public:

	FIntVector2 Position;
	UPROPERTY(BlueprintReadOnly) int HitPoints = 0;

	UUnit();

	bool TryMoveTowardsPos(const FIntVector2& targetPos);
	bool TryAttack(UUnit& target);
	bool TryIfReadyToAttack(UUnit& target);

private:
	void InitHealth();
	bool MoveCoordinateByDistance(int& coordinate, const int distanceCoord);
	bool IsWithinAttackRange(const UUnit& target) const;
};