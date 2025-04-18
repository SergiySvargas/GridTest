#include "Unit.h"

UUnit::UUnit()
{
	InitHealth();
}

bool UUnit::TryAttack(UUnit& target)
{
	if (IsWithinAttackRange(target))
	{
		target.HitPoints -= 1;
		return true;
	}

	return false;
}

bool UUnit::TryIfReadyToAttack(UUnit& target)
{
	if (HitPoints <= 0 || target.HitPoints <= 0)
	{
		return false;
	}

	if (IsWithinAttackRange(target))
	{
		if (CurrentAttackStep == TimeStepsPerAttack)
		{
			CurrentAttackStep = 1;
			return true;
		}
		else
		{
			CurrentAttackStep += 1;
			return false;
		}
	}
	return false;
}

void UUnit::InitHealth()
{
	static const int MIN_HP = 2;
	static const int MAX_HP = 5;

	HitPoints = MIN_HP + std::rand() % (MAX_HP - MIN_HP);
}

bool UUnit::TryMoveTowardsPos(const FIntVector2& targetPos)
{
	const auto distance = targetPos - Position;

	bool movedX = MoveCoordinateByDistance(Position.X, distance.X);
	bool movedY = MoveCoordinateByDistance(Position.Y, distance.Y);

	return movedX || movedY;
}

bool UUnit::MoveCoordinateByDistance(int& coordinate, const int distanceCoord)
{
	const int absDist = abs(distanceCoord);
	if ( absDist > AttackRange)
	{
		int sign = distanceCoord / absDist;
		coordinate += std::min(MovePerTimeStep, absDist - AttackRange) * sign;
		return true;
	}
	return false;
}

bool UUnit::IsWithinAttackRange(const UUnit& target) const
{
	const auto distance = target.Position - Position;
	return abs(distance.X) <= AttackRange && abs(distance.Y) <= AttackRange;
}