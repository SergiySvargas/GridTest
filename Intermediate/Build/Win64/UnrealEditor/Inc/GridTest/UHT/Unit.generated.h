// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unit/Unit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRIDTEST_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define GRIDTEST_Unit_generated_h

#define FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlueprintCompatiblePosition);


#define FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnit(); \
	friend struct Z_Construct_UClass_UUnit_Statics; \
public: \
	DECLARE_CLASS(UUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridTest"), NO_API) \
	DECLARE_SERIALIZER(UUnit)


#define FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnit(UUnit&&); \
	UUnit(const UUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnit) \
	NO_API virtual ~UUnit();


#define FID_Code_GridTest_Source_GridTest_Unit_Unit_h_8_PROLOG
#define FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_INCLASS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Unit_Unit_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDTEST_API UClass* StaticClass<class UUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_GridTest_Source_GridTest_Unit_Unit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
