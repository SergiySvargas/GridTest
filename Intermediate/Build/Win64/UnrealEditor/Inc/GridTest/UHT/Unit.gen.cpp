// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridTest/Unit/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRIDTEST_API UClass* Z_Construct_UClass_UUnit();
GRIDTEST_API UClass* Z_Construct_UClass_UUnit_NoRegister();
UPackage* Z_Construct_UPackage__Script_GridTest();
// End Cross Module References

// Begin Class UUnit
void UUnit::StaticRegisterNativesUUnit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnit);
UClass* Z_Construct_UClass_UUnit_NoRegister()
{
	return UUnit::StaticClass();
}
struct Z_Construct_UClass_UUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Unit/Unit.h" },
		{ "ModuleRelativePath", "Unit/Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitPoints_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Unit/Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_HitPoints = { "HitPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, HitPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitPoints_MetaData), NewProp_HitPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_HitPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GridTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnit_Statics::ClassParams = {
	&UUnit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnit()
{
	if (!Z_Registration_Info_UClass_UUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnit.OuterSingleton, Z_Construct_UClass_UUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnit.OuterSingleton;
}
template<> GRIDTEST_API UClass* StaticClass<UUnit>()
{
	return UUnit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnit);
UUnit::~UUnit() {}
// End Class UUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnit, UUnit::StaticClass, TEXT("UUnit"), &Z_Registration_Info_UClass_UUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnit), 1650052552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_2039133534(TEXT("/Script/GridTest"),
	Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
