#include "Unit.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUnit_TryAttack_UT, "_Tests.Unit", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)
bool FUnit_TryAttack_UT::RunTest(const FString& Parameters)
{
	auto* attacker = NewObject<UUnit>();
	auto* target = NewObject<UUnit>();
	
	attacker->Position = FIntVector2(10, 10);
	bool attacked = false;
	
	target->HitPoints = 5;
	target->Position = FIntVector2(0, 0);
	attacked = attacker->TryAttack(*target);
	check(attacked == false);
	check(target->HitPoints == 5);

	target->HitPoints = 5;
	target->Position = FIntVector2(6, 6);
	attacked = attacker->TryAttack(*target);
	check(attacked == true);
	check(target->HitPoints == 4);

	target->HitPoints = 5;
	target->Position = FIntVector2(0, 6);
	attacked = attacker->TryAttack(*target);
	check(attacked == false);
	check(target->HitPoints == 5);

	target->HitPoints = 5;
	target->Position = FIntVector2(6, 0);
	attacked = attacker->TryAttack(*target);
	check(attacked == false);
	check(target->HitPoints == 5);

	target->HitPoints = 5;
	target->Position = FIntVector2(6, 20);
	attacked = attacker->TryAttack(*target);
	check(attacked == false);
	check(target->HitPoints == 5);

	target->HitPoints = 5;
	target->Position = FIntVector2(20, 6);
	attacked = attacker->TryAttack(*target);
	check(attacked == false);
	check(target->HitPoints == 5);

	target->HitPoints = 0;
	target->Position = FIntVector2(6, 6);
	attacked = attacker->TryAttack(*target);
	check(attacked == true);

	attacker->HitPoints = 0;
	target->HitPoints = 5;
	target->Position = FIntVector2(6, 6);
	attacked = attacker->TryAttack(*target);
	check(attacked == true);

	return true;
}