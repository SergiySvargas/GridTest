// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridTest/Utility/Utility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtility() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GRIDTEST_API UClass* Z_Construct_UClass_UBPFL_Utility();
GRIDTEST_API UClass* Z_Construct_UClass_UBPFL_Utility_NoRegister();
GRIDTEST_API UClass* Z_Construct_UClass_UUnit_NoRegister();
UPackage* Z_Construct_UPackage__Script_GridTest();
// End Cross Module References

// Begin Class UBPFL_Utility Function GetUnitPosition
struct Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics
{
	struct BPFL_Utility_eventGetUnitPosition_Parms
	{
		UUnit* unit;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Utility/Utility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_unit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPFL_Utility_eventGetUnitPosition_Parms, unit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPFL_Utility_eventGetUnitPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::NewProp_unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL_Utility, nullptr, "GetUnitPosition", nullptr, nullptr, Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::BPFL_Utility_eventGetUnitPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::BPFL_Utility_eventGetUnitPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPFL_Utility::execGetUnitPosition)
{
	P_GET_OBJECT(UUnit,Z_Param_unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UBPFL_Utility::GetUnitPosition(Z_Param_unit);
	P_NATIVE_END;
}
// End Class UBPFL_Utility Function GetUnitPosition

// Begin Class UBPFL_Utility
void UBPFL_Utility::StaticRegisterNativesUBPFL_Utility()
{
	UClass* Class = UBPFL_Utility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUnitPosition", &UBPFL_Utility::execGetUnitPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPFL_Utility);
UClass* Z_Construct_UClass_UBPFL_Utility_NoRegister()
{
	return UBPFL_Utility::StaticClass();
}
struct Z_Construct_UClass_UBPFL_Utility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/Utility.h" },
		{ "ModuleRelativePath", "Utility/Utility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFL_Utility_GetUnitPosition, "GetUnitPosition" }, // 3204300291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFL_Utility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBPFL_Utility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GridTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPFL_Utility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPFL_Utility_Statics::ClassParams = {
	&UBPFL_Utility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPFL_Utility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPFL_Utility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPFL_Utility()
{
	if (!Z_Registration_Info_UClass_UBPFL_Utility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPFL_Utility.OuterSingleton, Z_Construct_UClass_UBPFL_Utility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPFL_Utility.OuterSingleton;
}
template<> GRIDTEST_API UClass* StaticClass<UBPFL_Utility>()
{
	return UBPFL_Utility::StaticClass();
}
UBPFL_Utility::UBPFL_Utility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFL_Utility);
UBPFL_Utility::~UBPFL_Utility() {}
// End Class UBPFL_Utility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Utility_Utility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPFL_Utility, UBPFL_Utility::StaticClass, TEXT("UBPFL_Utility"), &Z_Registration_Info_UClass_UBPFL_Utility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPFL_Utility), 3993368861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Utility_Utility_h_2365068480(TEXT("/Script/GridTest"),
	Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Utility_Utility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Utility_Utility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
