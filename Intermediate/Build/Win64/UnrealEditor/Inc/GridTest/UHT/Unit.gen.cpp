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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
UUnit::UUnit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnit);
UUnit::~UUnit() {}
// End Class UUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnit, UUnit::StaticClass, TEXT("UUnit"), &Z_Registration_Info_UClass_UUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnit), 1062616197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_2868789765(TEXT("/Script/GridTest"),
	Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_GridTest_Source_GridTest_Unit_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
