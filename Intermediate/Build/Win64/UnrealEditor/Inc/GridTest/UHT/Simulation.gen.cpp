// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridTest/Simulation/Simulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRIDTEST_API UClass* Z_Construct_UClass_USimulation();
GRIDTEST_API UClass* Z_Construct_UClass_USimulation_NoRegister();
GRIDTEST_API UClass* Z_Construct_UClass_UUnit_NoRegister();
UPackage* Z_Construct_UPackage__Script_GridTest();
// End Cross Module References

// Begin Class USimulation Function GetUnit
struct Z_Construct_UFunction_USimulation_GetUnit_Statics
{
	struct Simulation_eventGetUnit_Parms
	{
		int32 idx;
		UUnit* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Simulation/Simulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_idx;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimulation_GetUnit_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Simulation_eventGetUnit_Parms, idx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulation_GetUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Simulation_eventGetUnit_Parms, ReturnValue), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulation_GetUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulation_GetUnit_Statics::NewProp_idx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulation_GetUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulation_GetUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulation_GetUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulation, nullptr, "GetUnit", nullptr, nullptr, Z_Construct_UFunction_USimulation_GetUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimulation_GetUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimulation_GetUnit_Statics::Simulation_eventGetUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulation_GetUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulation_GetUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimulation_GetUnit_Statics::Simulation_eventGetUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulation_GetUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulation_GetUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulation::execGetUnit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_idx);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUnit**)Z_Param__Result=P_THIS->GetUnit(Z_Param_idx);
	P_NATIVE_END;
}
// End Class USimulation Function GetUnit

// Begin Class USimulation Function Init
struct Z_Construct_UFunction_USimulation_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Simulation/Simulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulation_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulation, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulation_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulation_Init_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimulation_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulation_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulation::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// End Class USimulation Function Init

// Begin Class USimulation Function SimulationTick
struct Z_Construct_UFunction_USimulation_SimulationTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Simulation/Simulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulation_SimulationTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimulation, nullptr, "SimulationTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulation_SimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulation_SimulationTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimulation_SimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulation_SimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulation::execSimulationTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulationTick();
	P_NATIVE_END;
}
// End Class USimulation Function SimulationTick

// Begin Class USimulation
void USimulation::StaticRegisterNativesUSimulation()
{
	UClass* Class = USimulation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUnit", &USimulation::execGetUnit },
		{ "Init", &USimulation::execInit },
		{ "SimulationTick", &USimulation::execSimulationTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimulation);
UClass* Z_Construct_UClass_USimulation_NoRegister()
{
	return USimulation::StaticClass();
}
struct Z_Construct_UClass_USimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Simulation/Simulation.h" },
		{ "ModuleRelativePath", "Simulation/Simulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "ModuleRelativePath", "Simulation/Simulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Units;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimulation_GetUnit, "GetUnit" }, // 2389007551
		{ &Z_Construct_UFunction_USimulation_Init, "Init" }, // 571588357
		{ &Z_Construct_UFunction_USimulation_SimulationTick, "SimulationTick" }, // 3566696337
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimulation_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Units, USimulation), STRUCT_OFFSET(USimulation, Units), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulation_Statics::NewProp_Units,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GridTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimulation_Statics::ClassParams = {
	&USimulation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimulation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimulation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_USimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimulation()
{
	if (!Z_Registration_Info_UClass_USimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimulation.OuterSingleton, Z_Construct_UClass_USimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimulation.OuterSingleton;
}
template<> GRIDTEST_API UClass* StaticClass<USimulation>()
{
	return USimulation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimulation);
USimulation::~USimulation() {}
// End Class USimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimulation, USimulation::StaticClass, TEXT("USimulation"), &Z_Registration_Info_UClass_USimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulation), 2973856738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_1075340993(TEXT("/Script/GridTest"),
	Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
