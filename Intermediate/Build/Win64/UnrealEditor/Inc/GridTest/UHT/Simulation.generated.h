// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Simulation/Simulation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnit;
#ifdef GRIDTEST_Simulation_generated_h
#error "Simulation.generated.h already included, missing '#pragma once' in Simulation.h"
#endif
#define GRIDTEST_Simulation_generated_h

#define FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSimulationTick); \
	DECLARE_FUNCTION(execGetUnit); \
	DECLARE_FUNCTION(execInit);


#define FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulation(); \
	friend struct Z_Construct_UClass_USimulation_Statics; \
public: \
	DECLARE_CLASS(USimulation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridTest"), NO_API) \
	DECLARE_SERIALIZER(USimulation)


#define FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimulation(USimulation&&); \
	USimulation(const USimulation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimulation) \
	NO_API virtual ~USimulation();


#define FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_9_PROLOG
#define FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_INCLASS_NO_PURE_DECLS \
	FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDTEST_API UClass* StaticClass<class USimulation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_GridTest_Source_GridTest_Simulation_Simulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
