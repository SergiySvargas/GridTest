#include "Unit.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUnit_MoveStepTowardsPos_UT, "_Tests.Unit", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)
bool FUnit_MoveStepTowardsPos_UT::RunTest(const FString& Parameters)
{
	auto* unit = NewObject<UUnit>();
	FIntVector2 targetPos(10, 10);
	bool moved = false;
	
	unit->Position = FIntVector2(0, 0);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(4, 4));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(5, 5));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(5, 5));

	unit->Position = FIntVector2(10, 0);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(10, 4));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(10, 5));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(10, 5));

	unit->Position = FIntVector2(0, 10);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(4, 10));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(5, 10));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(5, 10));

	unit->Position = FIntVector2(0, 3);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(4, 5));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(5, 5));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(5, 5));

	unit->Position = FIntVector2(20, 20);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(16, 16));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(15, 15));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(15, 15));

	unit->Position = FIntVector2(0, 20);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(4, 16));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(5, 15));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(5, 15));

	unit->Position = FIntVector2(20, 0);
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(16, 4));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == true);
	check(unit->Position == FIntVector2(15, 5));
	moved = unit->MoveStepTowardsPos(targetPos);
	check(moved == false);
	check(unit->Position == FIntVector2(15, 5));

	return true;
}