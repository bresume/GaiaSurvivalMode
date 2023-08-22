// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SurvivalModeSpawnPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
struct FSurvivalSpawnPoint;
struct FTimerHandle;
#ifdef GAIASURVIVALMODE_SurvivalModeSpawnPoint_generated_h
#error "SurvivalModeSpawnPoint.generated.h already included, missing '#pragma once' in SurvivalModeSpawnPoint.h"
#endif
#define GAIASURVIVALMODE_SurvivalModeSpawnPoint_generated_h

#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_SPARSE_DATA
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_RPC_WRAPPERS \
	virtual bool Server_HandleSpawnActor_Validate(TSubclassOf<AActor>  , FTransform , AActor* , APawn* ); \
	virtual void Server_HandleSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator); \
	virtual bool Server_OnSetSpawnPoint_Validate(FSurvivalSpawnPoint ); \
	virtual void Server_OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point); \
	virtual void HandleResetCooldown_Implementation(); \
	virtual void HandleSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator); \
	virtual void OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point); \
 \
	DECLARE_FUNCTION(execGetResetHandle); \
	DECLARE_FUNCTION(execGetCurrentSpawnedActor); \
	DECLARE_FUNCTION(execServer_HandleSpawnActor); \
	DECLARE_FUNCTION(execServer_OnSetSpawnPoint); \
	DECLARE_FUNCTION(execHandleResetCooldown); \
	DECLARE_FUNCTION(execHandleSpawnActor); \
	DECLARE_FUNCTION(execOnSetSpawnPoint);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_HandleSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator); \
	virtual void Server_OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point); \
	virtual void HandleResetCooldown_Implementation(); \
	virtual void HandleSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator); \
	virtual void OnSetSpawnPoint_Implementation(FSurvivalSpawnPoint Point); \
 \
	DECLARE_FUNCTION(execGetResetHandle); \
	DECLARE_FUNCTION(execGetCurrentSpawnedActor); \
	DECLARE_FUNCTION(execServer_HandleSpawnActor); \
	DECLARE_FUNCTION(execServer_OnSetSpawnPoint); \
	DECLARE_FUNCTION(execHandleResetCooldown); \
	DECLARE_FUNCTION(execHandleSpawnActor); \
	DECLARE_FUNCTION(execOnSetSpawnPoint);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_ACCESSORS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_CALLBACK_WRAPPERS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalModeSpawnPoint(); \
	friend struct Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASurvivalModeSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalModeSpawnPoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASurvivalModeSpawnPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSpawnedActor=NETFIELD_REP_START, \
		ResetHandle, \
		SpawnPoint, \
		bIsBusy, \
		NETFIELD_REP_END=bIsBusy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalModeSpawnPoint(); \
	friend struct Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASurvivalModeSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalModeSpawnPoint) \
	virtual UObject* _getUObject() const override { return const_cast<ASurvivalModeSpawnPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSpawnedActor=NETFIELD_REP_START, \
		ResetHandle, \
		SpawnPoint, \
		bIsBusy, \
		NETFIELD_REP_END=bIsBusy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalModeSpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalModeSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalModeSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalModeSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalModeSpawnPoint(ASurvivalModeSpawnPoint&&); \
	NO_API ASurvivalModeSpawnPoint(const ASurvivalModeSpawnPoint&); \
public: \
	NO_API virtual ~ASurvivalModeSpawnPoint();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalModeSpawnPoint(ASurvivalModeSpawnPoint&&); \
	NO_API ASurvivalModeSpawnPoint(const ASurvivalModeSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalModeSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalModeSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalModeSpawnPoint) \
	NO_API virtual ~ASurvivalModeSpawnPoint();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_20_PROLOG
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_RPC_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_INCLASS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_INCLASS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAIASURVIVALMODE_API UClass* StaticClass<class ASurvivalModeSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
