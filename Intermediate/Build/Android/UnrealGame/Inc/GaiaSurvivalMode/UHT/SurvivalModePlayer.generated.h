// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SurvivalModePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USurvivalModeComponent;
class UUserWidget;
#ifdef GAIASURVIVALMODE_SurvivalModePlayer_generated_h
#error "SurvivalModePlayer.generated.h already included, missing '#pragma once' in SurvivalModePlayer.h"
#endif
#define GAIASURVIVALMODE_SurvivalModePlayer_generated_h

#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_SPARSE_DATA
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_RPC_WRAPPERS \
	virtual bool HideUI_Implementation(USurvivalModeComponent* Component) { return false; }; \
	virtual bool ShowUI_Implementation(USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget) { return false; }; \
	virtual bool GameEnded_Implementation(USurvivalModeComponent* Component, FText const& Reason) { return false; }; \
	virtual bool GameStarted_Implementation(USurvivalModeComponent* Component) { return false; }; \
	virtual bool RoundEnded_Implementation(USurvivalModeComponent* Component, bool bIsBossRound) { return false; }; \
	virtual bool RoundStarted_Implementation(USurvivalModeComponent* Component, bool bIsBossRound) { return false; }; \
 \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execGameEnded); \
	DECLARE_FUNCTION(execGameStarted); \
	DECLARE_FUNCTION(execRoundEnded); \
	DECLARE_FUNCTION(execRoundStarted);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool HideUI_Implementation(USurvivalModeComponent* Component) { return false; }; \
	virtual bool ShowUI_Implementation(USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget) { return false; }; \
	virtual bool GameEnded_Implementation(USurvivalModeComponent* Component, FText const& Reason) { return false; }; \
	virtual bool GameStarted_Implementation(USurvivalModeComponent* Component) { return false; }; \
	virtual bool RoundEnded_Implementation(USurvivalModeComponent* Component, bool bIsBossRound) { return false; }; \
	virtual bool RoundStarted_Implementation(USurvivalModeComponent* Component, bool bIsBossRound) { return false; }; \
 \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execShowUI); \
	DECLARE_FUNCTION(execGameEnded); \
	DECLARE_FUNCTION(execGameStarted); \
	DECLARE_FUNCTION(execRoundEnded); \
	DECLARE_FUNCTION(execRoundStarted);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_ACCESSORS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_CALLBACK_WRAPPERS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAIASURVIVALMODE_API USurvivalModePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivalModePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAIASURVIVALMODE_API, USurvivalModePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalModePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAIASURVIVALMODE_API USurvivalModePlayer(USurvivalModePlayer&&); \
	GAIASURVIVALMODE_API USurvivalModePlayer(const USurvivalModePlayer&); \
public: \
	GAIASURVIVALMODE_API virtual ~USurvivalModePlayer();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAIASURVIVALMODE_API USurvivalModePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAIASURVIVALMODE_API USurvivalModePlayer(USurvivalModePlayer&&); \
	GAIASURVIVALMODE_API USurvivalModePlayer(const USurvivalModePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAIASURVIVALMODE_API, USurvivalModePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalModePlayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivalModePlayer) \
	GAIASURVIVALMODE_API virtual ~USurvivalModePlayer();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSurvivalModePlayer(); \
	friend struct Z_Construct_UClass_USurvivalModePlayer_Statics; \
public: \
	DECLARE_CLASS(USurvivalModePlayer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), GAIASURVIVALMODE_API) \
	DECLARE_SERIALIZER(USurvivalModePlayer)


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_GENERATED_UINTERFACE_BODY() \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_GENERATED_UINTERFACE_BODY() \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISurvivalModePlayer() {} \
public: \
	typedef USurvivalModePlayer UClassType; \
	typedef ISurvivalModePlayer ThisClass; \
	static bool Execute_GameEnded(UObject* O, USurvivalModeComponent* Component, FText const& Reason); \
	static bool Execute_GameStarted(UObject* O, USurvivalModeComponent* Component); \
	static bool Execute_HideUI(UObject* O, USurvivalModeComponent* Component); \
	static bool Execute_RoundEnded(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound); \
	static bool Execute_RoundStarted(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound); \
	static bool Execute_ShowUI(UObject* O, USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ISurvivalModePlayer() {} \
public: \
	typedef USurvivalModePlayer UClassType; \
	typedef ISurvivalModePlayer ThisClass; \
	static bool Execute_GameEnded(UObject* O, USurvivalModeComponent* Component, FText const& Reason); \
	static bool Execute_GameStarted(UObject* O, USurvivalModeComponent* Component); \
	static bool Execute_HideUI(UObject* O, USurvivalModeComponent* Component); \
	static bool Execute_RoundEnded(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound); \
	static bool Execute_RoundStarted(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound); \
	static bool Execute_ShowUI(UObject* O, USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_13_PROLOG
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_RPC_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAIASURVIVALMODE_API UClass* StaticClass<class USurvivalModePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
