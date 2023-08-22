// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SurvivalModeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USoundBase;
class USurvivalModeComponent;
struct FSurvivalActorSpawner;
struct FSurvivalModeDetails;
struct FSurvivalModeSpawner;
struct FTimerHandle;
#ifdef GAIASURVIVALMODE_SurvivalModeComponent_generated_h
#error "SurvivalModeComponent.generated.h already included, missing '#pragma once' in SurvivalModeComponent.h"
#endif
#define GAIASURVIVALMODE_SurvivalModeComponent_generated_h

#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_15_DELEGATE \
GAIASURVIVALMODE_API void FRoundStart_DelegateWrapper(const FMulticastScriptDelegate& RoundStart, USurvivalModeComponent* Component, bool bBossRound);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_16_DELEGATE \
GAIASURVIVALMODE_API void FRoundEnd_DelegateWrapper(const FMulticastScriptDelegate& RoundEnd, USurvivalModeComponent* Component, bool bBossRound);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_17_DELEGATE \
GAIASURVIVALMODE_API void FGameStart_DelegateWrapper(const FMulticastScriptDelegate& GameStart, USurvivalModeComponent* Component);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_18_DELEGATE \
GAIASURVIVALMODE_API void FGameEnd_DelegateWrapper(const FMulticastScriptDelegate& GameEnd, USurvivalModeComponent* Component, FText const& Reason);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_19_DELEGATE \
GAIASURVIVALMODE_API void FOnEnemyDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyDestroyed, USurvivalModeComponent* Component, AActor* Actor);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_SPARSE_DATA
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_RPC_WRAPPERS \
	virtual TArray<AActor*> GetAllPlayers_Implementation(); \
	virtual TArray<FSurvivalModeSpawner> FindSpawnersForRound_Implementation(); \
	virtual void Multicast_Sound_Implementation(TSoftObjectPtr<USoundBase> const& Sound); \
	virtual bool Server_EndGame_Validate(FText const& ); \
	virtual void Server_EndGame_Implementation(FText const& Reason); \
	virtual bool Server_StartGame_Validate(); \
	virtual void Server_StartGame_Implementation(); \
	virtual bool Server_EndRound_Validate(); \
	virtual void Server_EndRound_Implementation(); \
	virtual bool Server_StartRound_Validate(); \
	virtual void Server_StartRound_Implementation(); \
	virtual bool Server_SetSurvivalDetails_Validate(FSurvivalModeDetails ); \
	virtual void Server_SetSurvivalDetails_Implementation(FSurvivalModeDetails Details); \
	virtual bool Server_EnemyDestroyed_Validate(AActor* ); \
	virtual void Server_EnemyDestroyed_Implementation(AActor* Actor); \
	virtual void HandleSpawnActor_Implementation(); \
	virtual void EnemyDestroyed_Implementation(AActor* Actor); \
	virtual void SetSurvivalDetails_Implementation(FSurvivalModeDetails Details); \
	virtual void EndGame_Implementation(FText const& Reason); \
	virtual void StartGame_Implementation(); \
	virtual void EndRound_Implementation(); \
	virtual void StartRound_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAllPlayers); \
	DECLARE_FUNCTION(execFindSpawnersForRound); \
	DECLARE_FUNCTION(execIsGameActive); \
	DECLARE_FUNCTION(execGetSpawnHandle); \
	DECLARE_FUNCTION(execGetRoundHandle); \
	DECLARE_FUNCTION(execGetSurvivalDetails); \
	DECLARE_FUNCTION(execGetCurrentSpawner); \
	DECLARE_FUNCTION(execGetSpawners); \
	DECLARE_FUNCTION(execGetSpawnedActors); \
	DECLARE_FUNCTION(execMulticast_Sound); \
	DECLARE_FUNCTION(execServer_EndGame); \
	DECLARE_FUNCTION(execServer_StartGame); \
	DECLARE_FUNCTION(execServer_EndRound); \
	DECLARE_FUNCTION(execServer_StartRound); \
	DECLARE_FUNCTION(execServer_SetSurvivalDetails); \
	DECLARE_FUNCTION(execServer_EnemyDestroyed); \
	DECLARE_FUNCTION(execHandleSpawnActor); \
	DECLARE_FUNCTION(execEnemyDestroyed); \
	DECLARE_FUNCTION(execSetSurvivalDetails); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execEndRound); \
	DECLARE_FUNCTION(execStartRound);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<AActor*> GetAllPlayers_Implementation(); \
	virtual TArray<FSurvivalModeSpawner> FindSpawnersForRound_Implementation(); \
	virtual void Multicast_Sound_Implementation(TSoftObjectPtr<USoundBase> const& Sound); \
	virtual void Server_EndGame_Implementation(FText const& Reason); \
	virtual void Server_StartGame_Implementation(); \
	virtual void Server_EndRound_Implementation(); \
	virtual void Server_StartRound_Implementation(); \
	virtual void Server_SetSurvivalDetails_Implementation(FSurvivalModeDetails Details); \
	virtual void Server_EnemyDestroyed_Implementation(AActor* Actor); \
	virtual void HandleSpawnActor_Implementation(); \
	virtual void EnemyDestroyed_Implementation(AActor* Actor); \
	virtual void SetSurvivalDetails_Implementation(FSurvivalModeDetails Details); \
	virtual void EndGame_Implementation(FText const& Reason); \
	virtual void StartGame_Implementation(); \
	virtual void EndRound_Implementation(); \
	virtual void StartRound_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAllPlayers); \
	DECLARE_FUNCTION(execFindSpawnersForRound); \
	DECLARE_FUNCTION(execIsGameActive); \
	DECLARE_FUNCTION(execGetSpawnHandle); \
	DECLARE_FUNCTION(execGetRoundHandle); \
	DECLARE_FUNCTION(execGetSurvivalDetails); \
	DECLARE_FUNCTION(execGetCurrentSpawner); \
	DECLARE_FUNCTION(execGetSpawners); \
	DECLARE_FUNCTION(execGetSpawnedActors); \
	DECLARE_FUNCTION(execMulticast_Sound); \
	DECLARE_FUNCTION(execServer_EndGame); \
	DECLARE_FUNCTION(execServer_StartGame); \
	DECLARE_FUNCTION(execServer_EndRound); \
	DECLARE_FUNCTION(execServer_StartRound); \
	DECLARE_FUNCTION(execServer_SetSurvivalDetails); \
	DECLARE_FUNCTION(execServer_EnemyDestroyed); \
	DECLARE_FUNCTION(execHandleSpawnActor); \
	DECLARE_FUNCTION(execEnemyDestroyed); \
	DECLARE_FUNCTION(execSetSurvivalDetails); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execEndRound); \
	DECLARE_FUNCTION(execStartRound);


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_ACCESSORS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_CALLBACK_WRAPPERS
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivalModeComponent(); \
	friend struct Z_Construct_UClass_USurvivalModeComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivalModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(USurvivalModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedActors=NETFIELD_REP_START, \
		Spawners, \
		CurrentSpawner, \
		RoundHandle, \
		SpawnHandle, \
		SurvivalDetails, \
		bGameActive, \
		NETFIELD_REP_END=bGameActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivalModeComponent(); \
	friend struct Z_Construct_UClass_USurvivalModeComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivalModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaiaSurvivalMode"), NO_API) \
	DECLARE_SERIALIZER(USurvivalModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedActors=NETFIELD_REP_START, \
		Spawners, \
		CurrentSpawner, \
		RoundHandle, \
		SpawnHandle, \
		SurvivalDetails, \
		bGameActive, \
		NETFIELD_REP_END=bGameActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivalModeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivalModeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivalModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalModeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivalModeComponent(USurvivalModeComponent&&); \
	NO_API USurvivalModeComponent(const USurvivalModeComponent&); \
public: \
	NO_API virtual ~USurvivalModeComponent();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivalModeComponent(USurvivalModeComponent&&); \
	NO_API USurvivalModeComponent(const USurvivalModeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivalModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivalModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivalModeComponent) \
	NO_API virtual ~USurvivalModeComponent();


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_25_PROLOG
#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_RPC_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_INCLASS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_SPARSE_DATA \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_ACCESSORS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_CALLBACK_WRAPPERS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAIASURVIVALMODE_API UClass* StaticClass<class USurvivalModeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
