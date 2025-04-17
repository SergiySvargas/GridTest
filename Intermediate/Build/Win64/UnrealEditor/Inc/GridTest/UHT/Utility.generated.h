// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/Utility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnit;
#ifdef GRIDTEST_Utility_generated_h
#error "Utility.generated.h already included, missing '#pragma once' in Utility.h"
#endif
#define GRIDTEST_Utility_generated_h

#define FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUnitPosition);


#define FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPFL_Utility(); \
	friend struct Z_Construct_UClass_UBPFL_Utility_Statics; \
public: \
	DECLARE_CLASS(UBPFL_Utility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridTest"), NO_API) \
	DECLARE_SERIALIZER(UBPFL_Utility)


#define FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL_Utility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBPFL_Utility(UBPFL_Utility&&); \
	UBPFL_Utility(const UBPFL_Utility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL_Utility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL_Utility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL_Utility) \
	NO_API virtual ~UBPFL_Utility();


#define FID_Code_GridTest_Source_GridTest_Utility_Utility_h_7_PROLOG
#define FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_INCLASS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Utility_Utility_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDTEST_API UClass* StaticClass<class UBPFL_Utility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_GridTest_Source_GridTest_Utility_Utility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
