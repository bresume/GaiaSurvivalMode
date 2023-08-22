// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SurvivalSpawnPointLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
struct FSurvivalSpawnPoint;
#ifdef GAIASURVIVALMODE_SurvivalSpawnPointLink_generated_h
#error "SurvivalSpawnPointLink.generated.h already included, missing '#pragma once' in SurvivalSpawnPointLink.h"
#endif
#define GAIASURVIVALMODE_SurvivalSpawnPointLink_generated_h

#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_SPARSE_DATA
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_RPC_WRAPPERS \
	virtual AActor* RequestSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator) { return NULL; }; \
	virtual bool IsBusy_Implementation() { return false; }; \
	virtual bool SetSurvivalSpawnPoint_Implementation(FSurvivalSpawnPoint Point) { return false; }; \
	virtual FSurvivalSpawnPoint GetSurvivalSpawnPoint_Implementation() { return FSurvivalSpawnPoint(); }; \
 \
	DECLARE_FUNCTION(execRequestSpawnActor); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execSetSurvivalSpawnPoint); \
	DECLARE_FUNCTION(execGetSurvivalSpawnPoint);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* RequestSpawnActor_Implementation(TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator) { return NULL; }; \
	virtual bool IsBusy_Implementation() { return false; }; \
	virtual bool SetSurvivalSpawnPoint_Implementation(FSurvivalSpawnPoint Point) { return false; }; \
	virtual FSurvivalSpawnPoint GetSurvivalSpawnPoint_Implementation() { return FSurvivalSpawnPoint(); }; \
 \
	DECLARE_FUNCTION(execRequestSpawnActor); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execSetSurvivalSpawnPoint); \
	DECLARE_FUNCTION(execGetSurvivalSpawnPoint);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_ACCESSORS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_CALLBACK_WRAPPERS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivalSpawnPointLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAIASURVIVALMODE_API, USurvivalSpawnPointLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalSpawnPointLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(USurvivalSpawnPointLink&&); \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(const USurvivalSpawnPointLink&); \
public: \
	GAIASURVIVALMODE_API virtual ~USurvivalSpawnPointLink();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(USurvivalSpawnPointLink&&); \
	GAIASURVIVALMODE_API USurvivalSpawnPointLink(const USurvivalSpawnPointLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAIASURVIVALMODE_API, USurvivalSpawnPointLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalSpawnPointLink); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivalSpawnPointLink) \
	GAIASURVIVALMODE_API virtual ~USurvivalSpawnPointLink();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSurvivalSpawnPointLink(); \
	friend struct Z_Construct_UClass_USurvivalSpawnPointLink_Statics; \
public: \
	DECLARE_CLASS(USurvivalSpawnPointLink, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), GAIASURVIVALMODE_API) \
	DECLARE_SERIALIZER(USurvivalSpawnPointLink)


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_GENERATED_UINTERFACE_BODY() \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_GENERATED_UINTERFACE_BODY() \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISurvivalSpawnPointLink() {} \
public: \
	typedef USurvivalSpawnPointLink UClassType; \
	typedef ISurvivalSpawnPointLink ThisClass; \
	static FSurvivalSpawnPoint Execute_GetSurvivalSpawnPoint(UObject* O); \
	static bool Execute_IsBusy(UObject* O); \
	static AActor* Execute_RequestSpawnActor(UObject* O, TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator); \
	static bool Execute_SetSurvivalSpawnPoint(UObject* O, FSurvivalSpawnPoint Point); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ISurvivalSpawnPointLink() {} \
public: \
	typedef USurvivalSpawnPointLink UClassType; \
	typedef ISurvivalSpawnPointLink ThisClass; \
	static FSurvivalSpawnPoint Execute_GetSurvivalSpawnPoint(UObject* O); \
	static bool Execute_IsBusy(UObject* O); \
	static AActor* Execute_RequestSpawnActor(UObject* O, TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator); \
	static bool Execute_SetSurvivalSpawnPoint(UObject* O, FSurvivalSpawnPoint Point); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_13_PROLOG
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_RPC_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAIASURVIVALMODE_API UClass* StaticClass<class USurvivalSpawnPointLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
