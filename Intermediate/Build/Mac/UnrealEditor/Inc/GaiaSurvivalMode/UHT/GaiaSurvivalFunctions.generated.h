// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/GaiaSurvivalFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FSurvivalModeDetails;
struct FSurvivalModeSpawner;
struct FSurvivalSpawnPoint;
#ifdef GAIASURVIVALMODE_GaiaSurvivalFunctions_generated_h
#error "GaiaSurvivalFunctions.generated.h already included, missing '#pragma once' in GaiaSurvivalFunctions.h"
#endif
#define GAIASURVIVALMODE_GaiaSurvivalFunctions_generated_h

#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_SPARSE_DATA
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBossRound); \
	DECLARE_FUNCTION(execUseRound); \
	DECLARE_FUNCTION(execIgnoreRound); \
	DECLARE_FUNCTION(execCompleteRound); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execFindNextAvailableSpawner); \
	DECLARE_FUNCTION(execGetSpawnersWithTags); \
	DECLARE_FUNCTION(execIsClassAllowedForSpawner);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBossRound); \
	DECLARE_FUNCTION(execUseRound); \
	DECLARE_FUNCTION(execIgnoreRound); \
	DECLARE_FUNCTION(execCompleteRound); \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execFindNextAvailableSpawner); \
	DECLARE_FUNCTION(execGetSpawnersWithTags); \
	DECLARE_FUNCTION(execIsClassAllowedForSpawner);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_ACCESSORS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaiaSurvivalFunctions(); \
	friend struct Z_Construct_UClass_UGaiaSurvivalFunctions_Statics; \
public: \
	DECLARE_CLASS(UGaiaSurvivalFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(UGaiaSurvivalFunctions)


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGaiaSurvivalFunctions(); \
	friend struct Z_Construct_UClass_UGaiaSurvivalFunctions_Statics; \
public: \
	DECLARE_CLASS(UGaiaSurvivalFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(UGaiaSurvivalFunctions)


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGaiaSurvivalFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGaiaSurvivalFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaiaSurvivalFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaiaSurvivalFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGaiaSurvivalFunctions(UGaiaSurvivalFunctions&&); \
	NO_API UGaiaSurvivalFunctions(const UGaiaSurvivalFunctions&); \
public: \
	NO_API virtual ~UGaiaSurvivalFunctions();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGaiaSurvivalFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGaiaSurvivalFunctions(UGaiaSurvivalFunctions&&); \
	NO_API UGaiaSurvivalFunctions(const UGaiaSurvivalFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaiaSurvivalFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaiaSurvivalFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGaiaSurvivalFunctions) \
	NO_API virtual ~UGaiaSurvivalFunctions();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_17_PROLOG
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_RPC_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_INCLASS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_INCLASS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAIASURVIVALMODE_API UClass* StaticClass<class UGaiaSurvivalFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
