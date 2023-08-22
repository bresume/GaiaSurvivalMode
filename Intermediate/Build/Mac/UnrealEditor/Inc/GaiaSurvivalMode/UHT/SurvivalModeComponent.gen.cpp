// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/SurvivalModeComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalActorSpawner.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeDetails.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeSpawner.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalModeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalModeComponent();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalModeComponent_NoRegister();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalActorSpawner();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeDetails();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeSpawner();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics
	{
		struct _Script_GaiaSurvivalMode_eventRoundStart_Parms
		{
			USurvivalModeComponent* Component;
			bool bBossRound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bBossRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBossRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventRoundStart_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_bBossRound_SetBit(void* Obj)
	{
		((_Script_GaiaSurvivalMode_eventRoundStart_Parms*)Obj)->bBossRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_bBossRound = { "bBossRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_GaiaSurvivalMode_eventRoundStart_Parms), &Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_bBossRound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::NewProp_bBossRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GaiaSurvivalMode, nullptr, "RoundStart__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::_Script_GaiaSurvivalMode_eventRoundStart_Parms), Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoundStart_DelegateWrapper(const FMulticastScriptDelegate& RoundStart, USurvivalModeComponent* Component, bool bBossRound)
{
	struct _Script_GaiaSurvivalMode_eventRoundStart_Parms
	{
		USurvivalModeComponent* Component;
		bool bBossRound;
	};
	_Script_GaiaSurvivalMode_eventRoundStart_Parms Parms;
	Parms.Component=Component;
	Parms.bBossRound=bBossRound ? true : false;
	RoundStart.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics
	{
		struct _Script_GaiaSurvivalMode_eventRoundEnd_Parms
		{
			USurvivalModeComponent* Component;
			bool bBossRound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bBossRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBossRound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventRoundEnd_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_bBossRound_SetBit(void* Obj)
	{
		((_Script_GaiaSurvivalMode_eventRoundEnd_Parms*)Obj)->bBossRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_bBossRound = { "bBossRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_GaiaSurvivalMode_eventRoundEnd_Parms), &Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_bBossRound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::NewProp_bBossRound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GaiaSurvivalMode, nullptr, "RoundEnd__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::_Script_GaiaSurvivalMode_eventRoundEnd_Parms), Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoundEnd_DelegateWrapper(const FMulticastScriptDelegate& RoundEnd, USurvivalModeComponent* Component, bool bBossRound)
{
	struct _Script_GaiaSurvivalMode_eventRoundEnd_Parms
	{
		USurvivalModeComponent* Component;
		bool bBossRound;
	};
	_Script_GaiaSurvivalMode_eventRoundEnd_Parms Parms;
	Parms.Component=Component;
	Parms.bBossRound=bBossRound ? true : false;
	RoundEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics
	{
		struct _Script_GaiaSurvivalMode_eventGameStart_Parms
		{
			USurvivalModeComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventGameStart_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GaiaSurvivalMode, nullptr, "GameStart__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::_Script_GaiaSurvivalMode_eventGameStart_Parms), Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameStart_DelegateWrapper(const FMulticastScriptDelegate& GameStart, USurvivalModeComponent* Component)
{
	struct _Script_GaiaSurvivalMode_eventGameStart_Parms
	{
		USurvivalModeComponent* Component;
	};
	_Script_GaiaSurvivalMode_eventGameStart_Parms Parms;
	Parms.Component=Component;
	GameStart.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics
	{
		struct _Script_GaiaSurvivalMode_eventGameEnd_Parms
		{
			USurvivalModeComponent* Component;
			FText Reason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventGameEnd_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventGameEnd_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GaiaSurvivalMode, nullptr, "GameEnd__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::_Script_GaiaSurvivalMode_eventGameEnd_Parms), Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameEnd_DelegateWrapper(const FMulticastScriptDelegate& GameEnd, USurvivalModeComponent* Component, FText const& Reason)
{
	struct _Script_GaiaSurvivalMode_eventGameEnd_Parms
	{
		USurvivalModeComponent* Component;
		FText Reason;
	};
	_Script_GaiaSurvivalMode_eventGameEnd_Parms Parms;
	Parms.Component=Component;
	Parms.Reason=Reason;
	GameEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics
	{
		struct _Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms
		{
			USurvivalModeComponent* Component;
			AActor* Actor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GaiaSurvivalMode, nullptr, "OnEnemyDestroyed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::_Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms), Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEnemyDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyDestroyed, USurvivalModeComponent* Component, AActor* Actor)
{
	struct _Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms
	{
		USurvivalModeComponent* Component;
		AActor* Actor;
	};
	_Script_GaiaSurvivalMode_eventOnEnemyDestroyed_Parms Parms;
	Parms.Component=Component;
	Parms.Actor=Actor;
	OnEnemyDestroyed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetAllPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllPlayers_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execFindSpawnersForRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSurvivalModeSpawner>*)Z_Param__Result=P_THIS->FindSpawnersForRound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execIsGameActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGameActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetSpawnHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->GetSpawnHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetRoundHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->GetRoundHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetSurvivalDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSurvivalModeDetails*)Z_Param__Result=P_THIS->GetSurvivalDetails();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetCurrentSpawner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSurvivalActorSpawner*)Z_Param__Result=P_THIS->GetCurrentSpawner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetSpawners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSurvivalModeSpawner>*)Z_Param__Result=P_THIS->GetSpawners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execGetSpawnedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execMulticast_Sound)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundBase>,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Sound_Implementation(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_EndGame)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EndGame_Validate(Z_Param_Reason))
		{
			RPC_ValidateFailed(TEXT("Server_EndGame_Validate"));
			return;
		}
		P_THIS->Server_EndGame_Implementation(Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_StartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartGame_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StartGame_Validate"));
			return;
		}
		P_THIS->Server_StartGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_EndRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EndRound_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_EndRound_Validate"));
			return;
		}
		P_THIS->Server_EndRound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_StartRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartRound_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StartRound_Validate"));
			return;
		}
		P_THIS->Server_StartRound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_SetSurvivalDetails)
	{
		P_GET_STRUCT(FSurvivalModeDetails,Z_Param_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSurvivalDetails_Validate(Z_Param_Details))
		{
			RPC_ValidateFailed(TEXT("Server_SetSurvivalDetails_Validate"));
			return;
		}
		P_THIS->Server_SetSurvivalDetails_Implementation(Z_Param_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execServer_EnemyDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EnemyDestroyed_Validate(Z_Param_Actor))
		{
			RPC_ValidateFailed(TEXT("Server_EnemyDestroyed_Validate"));
			return;
		}
		P_THIS->Server_EnemyDestroyed_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execHandleSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSpawnActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execEnemyDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnemyDestroyed_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execSetSurvivalDetails)
	{
		P_GET_STRUCT(FSurvivalModeDetails,Z_Param_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurvivalDetails_Implementation(Z_Param_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execEndGame)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame_Implementation(Z_Param_Out_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execEndRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivalModeComponent::execStartRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRound_Implementation();
		P_NATIVE_END;
	}
	struct SurvivalModeComponent_eventEndGame_Parms
	{
		FText Reason;
	};
	struct SurvivalModeComponent_eventEnemyDestroyed_Parms
	{
		AActor* Actor;
	};
	struct SurvivalModeComponent_eventFindSpawnersForRound_Parms
	{
		TArray<FSurvivalModeSpawner> ReturnValue;
	};
	struct SurvivalModeComponent_eventGetAllPlayers_Parms
	{
		TArray<AActor*> ReturnValue;
	};
	struct SurvivalModeComponent_eventMulticast_Sound_Parms
	{
		TSoftObjectPtr<USoundBase> Sound;
	};
	struct SurvivalModeComponent_eventServer_EndGame_Parms
	{
		FText Reason;
	};
	struct SurvivalModeComponent_eventServer_EnemyDestroyed_Parms
	{
		AActor* Actor;
	};
	struct SurvivalModeComponent_eventServer_SetSurvivalDetails_Parms
	{
		FSurvivalModeDetails Details;
	};
	struct SurvivalModeComponent_eventSetSurvivalDetails_Parms
	{
		FSurvivalModeDetails Details;
	};
	static FName NAME_USurvivalModeComponent_EndGame = FName(TEXT("EndGame"));
	void USurvivalModeComponent::EndGame(FText const& Reason)
	{
		SurvivalModeComponent_eventEndGame_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_EndGame),&Parms);
	}
	static FName NAME_USurvivalModeComponent_EndRound = FName(TEXT("EndRound"));
	void USurvivalModeComponent::EndRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_EndRound),NULL);
	}
	static FName NAME_USurvivalModeComponent_EnemyDestroyed = FName(TEXT("EnemyDestroyed"));
	void USurvivalModeComponent::EnemyDestroyed(AActor* Actor)
	{
		SurvivalModeComponent_eventEnemyDestroyed_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_EnemyDestroyed),&Parms);
	}
	static FName NAME_USurvivalModeComponent_FindSpawnersForRound = FName(TEXT("FindSpawnersForRound"));
	TArray<FSurvivalModeSpawner> USurvivalModeComponent::FindSpawnersForRound()
	{
		SurvivalModeComponent_eventFindSpawnersForRound_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_FindSpawnersForRound),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModeComponent_GetAllPlayers = FName(TEXT("GetAllPlayers"));
	TArray<AActor*> USurvivalModeComponent::GetAllPlayers()
	{
		SurvivalModeComponent_eventGetAllPlayers_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_GetAllPlayers),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModeComponent_HandleSpawnActor = FName(TEXT("HandleSpawnActor"));
	void USurvivalModeComponent::HandleSpawnActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_HandleSpawnActor),NULL);
	}
	static FName NAME_USurvivalModeComponent_Multicast_Sound = FName(TEXT("Multicast_Sound"));
	void USurvivalModeComponent::Multicast_Sound(TSoftObjectPtr<USoundBase> const& Sound)
	{
		SurvivalModeComponent_eventMulticast_Sound_Parms Parms;
		Parms.Sound=Sound;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Multicast_Sound),&Parms);
	}
	static FName NAME_USurvivalModeComponent_Server_EndGame = FName(TEXT("Server_EndGame"));
	void USurvivalModeComponent::Server_EndGame(FText const& Reason)
	{
		SurvivalModeComponent_eventServer_EndGame_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_EndGame),&Parms);
	}
	static FName NAME_USurvivalModeComponent_Server_EndRound = FName(TEXT("Server_EndRound"));
	void USurvivalModeComponent::Server_EndRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_EndRound),NULL);
	}
	static FName NAME_USurvivalModeComponent_Server_EnemyDestroyed = FName(TEXT("Server_EnemyDestroyed"));
	void USurvivalModeComponent::Server_EnemyDestroyed(AActor* Actor)
	{
		SurvivalModeComponent_eventServer_EnemyDestroyed_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_EnemyDestroyed),&Parms);
	}
	static FName NAME_USurvivalModeComponent_Server_SetSurvivalDetails = FName(TEXT("Server_SetSurvivalDetails"));
	void USurvivalModeComponent::Server_SetSurvivalDetails(FSurvivalModeDetails Details)
	{
		SurvivalModeComponent_eventServer_SetSurvivalDetails_Parms Parms;
		Parms.Details=Details;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_SetSurvivalDetails),&Parms);
	}
	static FName NAME_USurvivalModeComponent_Server_StartGame = FName(TEXT("Server_StartGame"));
	void USurvivalModeComponent::Server_StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_StartGame),NULL);
	}
	static FName NAME_USurvivalModeComponent_Server_StartRound = FName(TEXT("Server_StartRound"));
	void USurvivalModeComponent::Server_StartRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_Server_StartRound),NULL);
	}
	static FName NAME_USurvivalModeComponent_SetSurvivalDetails = FName(TEXT("SetSurvivalDetails"));
	void USurvivalModeComponent::SetSurvivalDetails(FSurvivalModeDetails Details)
	{
		SurvivalModeComponent_eventSetSurvivalDetails_Parms Parms;
		Parms.Details=Details;
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_SetSurvivalDetails),&Parms);
	}
	static FName NAME_USurvivalModeComponent_StartGame = FName(TEXT("StartGame"));
	void USurvivalModeComponent::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_StartGame),NULL);
	}
	static FName NAME_USurvivalModeComponent_StartRound = FName(TEXT("StartRound"));
	void USurvivalModeComponent::StartRound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivalModeComponent_StartRound),NULL);
	}
	void USurvivalModeComponent::StaticRegisterNativesUSurvivalModeComponent()
	{
		UClass* Class = USurvivalModeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndGame", &USurvivalModeComponent::execEndGame },
			{ "EndRound", &USurvivalModeComponent::execEndRound },
			{ "EnemyDestroyed", &USurvivalModeComponent::execEnemyDestroyed },
			{ "FindSpawnersForRound", &USurvivalModeComponent::execFindSpawnersForRound },
			{ "GetAllPlayers", &USurvivalModeComponent::execGetAllPlayers },
			{ "GetCurrentSpawner", &USurvivalModeComponent::execGetCurrentSpawner },
			{ "GetRoundHandle", &USurvivalModeComponent::execGetRoundHandle },
			{ "GetSpawnedActors", &USurvivalModeComponent::execGetSpawnedActors },
			{ "GetSpawners", &USurvivalModeComponent::execGetSpawners },
			{ "GetSpawnHandle", &USurvivalModeComponent::execGetSpawnHandle },
			{ "GetSurvivalDetails", &USurvivalModeComponent::execGetSurvivalDetails },
			{ "HandleSpawnActor", &USurvivalModeComponent::execHandleSpawnActor },
			{ "IsGameActive", &USurvivalModeComponent::execIsGameActive },
			{ "Multicast_Sound", &USurvivalModeComponent::execMulticast_Sound },
			{ "Server_EndGame", &USurvivalModeComponent::execServer_EndGame },
			{ "Server_EndRound", &USurvivalModeComponent::execServer_EndRound },
			{ "Server_EnemyDestroyed", &USurvivalModeComponent::execServer_EnemyDestroyed },
			{ "Server_SetSurvivalDetails", &USurvivalModeComponent::execServer_SetSurvivalDetails },
			{ "Server_StartGame", &USurvivalModeComponent::execServer_StartGame },
			{ "Server_StartRound", &USurvivalModeComponent::execServer_StartRound },
			{ "SetSurvivalDetails", &USurvivalModeComponent::execSetSurvivalDetails },
			{ "StartGame", &USurvivalModeComponent::execStartGame },
			{ "StartRound", &USurvivalModeComponent::execStartRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventEndGame_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "EndGame", nullptr, nullptr, sizeof(SurvivalModeComponent_eventEndGame_Parms), Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "EndRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_EndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_EndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventEnemyDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "EnemyDestroyed", nullptr, nullptr, sizeof(SurvivalModeComponent_eventEnemyDestroyed_Parms), Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventFindSpawnersForRound_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Find the spawners for the current round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Find the spawners for the current round." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "FindSpawnersForRound", nullptr, nullptr, sizeof(SurvivalModeComponent_eventFindSpawnersForRound_Parms), Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetAllPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Find the spawners for the current round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Find the spawners for the current round." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetAllPlayers", nullptr, nullptr, sizeof(SurvivalModeComponent_eventGetAllPlayers_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics
	{
		struct SurvivalModeComponent_eventGetCurrentSpawner_Parms
		{
			FSurvivalActorSpawner ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetCurrentSpawner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSurvivalActorSpawner, METADATA_PARAMS(nullptr, 0) }; // 313437834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetCurrentSpawner", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::SurvivalModeComponent_eventGetCurrentSpawner_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics
	{
		struct SurvivalModeComponent_eventGetRoundHandle_Parms
		{
			FTimerHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetRoundHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetRoundHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::SurvivalModeComponent_eventGetRoundHandle_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics
	{
		struct SurvivalModeComponent_eventGetSpawnedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetSpawnedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetSpawnedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::SurvivalModeComponent_eventGetSpawnedActors_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics
	{
		struct SurvivalModeComponent_eventGetSpawners_Parms
		{
			TArray<FSurvivalModeSpawner> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetSpawners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetSpawners", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::SurvivalModeComponent_eventGetSpawners_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetSpawners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetSpawners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics
	{
		struct SurvivalModeComponent_eventGetSpawnHandle_Parms
		{
			FTimerHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetSpawnHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetSpawnHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::SurvivalModeComponent_eventGetSpawnHandle_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics
	{
		struct SurvivalModeComponent_eventGetSurvivalDetails_Parms
		{
			FSurvivalModeDetails ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventGetSurvivalDetails_Parms, ReturnValue), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "GetSurvivalDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::SurvivalModeComponent_eventGetSurvivalDetails_Parms), Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * Handle actor spawning.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Handle actor spawning." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "HandleSpawnActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics
	{
		struct SurvivalModeComponent_eventIsGameActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModeComponent_eventIsGameActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModeComponent_eventIsGameActive_Parms), &Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Getters" },
		{ "Comment", "/**\n\x09 * Return the value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Return the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "IsGameActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::SurvivalModeComponent_eventIsGameActive_Parms), Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_IsGameActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_IsGameActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventMulticast_Sound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Multicast our sound.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Multicast our sound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Multicast_Sound", nullptr, nullptr, sizeof(SurvivalModeComponent_eventMulticast_Sound_Parms), Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventServer_EndGame_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * End the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "End the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_EndGame", nullptr, nullptr, sizeof(SurvivalModeComponent_eventServer_EndGame_Parms), Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * End the round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "End the round." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_EndRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventServer_EnemyDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * This function is used to remove an enemy from the SpawnedActors array.\n\x09 * This is how we determine if the round is over.\n\x09 * If your enemies are not destroyed using the Destroy() c++ method or the DestroyActor() BP method,\n\x09 * then you will need to call this function manually.\n\x09 * By default we tie into the actor's base OnDestroyed() method.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "This function is used to remove an enemy from the SpawnedActors array.\nThis is how we determine if the round is over.\nIf your enemies are not destroyed using the Destroy() c++ method or the DestroyActor() BP method,\nthen you will need to call this function manually.\nBy default we tie into the actor's base OnDestroyed() method." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_EnemyDestroyed", nullptr, nullptr, sizeof(SurvivalModeComponent_eventServer_EnemyDestroyed_Parms), Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventServer_SetSurvivalDetails_Parms, Details), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::NewProp_Details,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Set the survival details variable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Set the survival details variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_SetSurvivalDetails", nullptr, nullptr, sizeof(SurvivalModeComponent_eventServer_SetSurvivalDetails_Parms), Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Start the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Start the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Start the round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Start the round." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "Server_StartRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeComponent_eventSetSurvivalDetails_Parms, Details), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::NewProp_Details,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "SetSurvivalDetails", nullptr, nullptr, sizeof(SurvivalModeComponent_eventSetSurvivalDetails_Parms), Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Survival|Internal" },
		{ "Comment", "/**\n\x09 * BP overridable function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "BP overridable function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModeComponent, nullptr, "StartRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModeComponent_StartRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModeComponent_StartRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvivalModeComponent);
	UClass* Z_Construct_UClass_USurvivalModeComponent_NoRegister()
	{
		return USurvivalModeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivalModeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RoundStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RoundEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemyDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailsRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetailsRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSurvivalDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSurvivalDetails;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSpawner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoundHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurvivalDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurvivalDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGameActive_MetaData[];
#endif
		static void NewProp_bGameActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivalModeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivalModeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivalModeComponent_EndGame, "EndGame" }, // 433255786
		{ &Z_Construct_UFunction_USurvivalModeComponent_EndRound, "EndRound" }, // 795309814
		{ &Z_Construct_UFunction_USurvivalModeComponent_EnemyDestroyed, "EnemyDestroyed" }, // 1927320776
		{ &Z_Construct_UFunction_USurvivalModeComponent_FindSpawnersForRound, "FindSpawnersForRound" }, // 1315723683
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetAllPlayers, "GetAllPlayers" }, // 3481842722
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetCurrentSpawner, "GetCurrentSpawner" }, // 9765813
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetRoundHandle, "GetRoundHandle" }, // 2053209852
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetSpawnedActors, "GetSpawnedActors" }, // 2839739843
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetSpawners, "GetSpawners" }, // 83940881
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetSpawnHandle, "GetSpawnHandle" }, // 397272910
		{ &Z_Construct_UFunction_USurvivalModeComponent_GetSurvivalDetails, "GetSurvivalDetails" }, // 2393006460
		{ &Z_Construct_UFunction_USurvivalModeComponent_HandleSpawnActor, "HandleSpawnActor" }, // 4029087339
		{ &Z_Construct_UFunction_USurvivalModeComponent_IsGameActive, "IsGameActive" }, // 3388363820
		{ &Z_Construct_UFunction_USurvivalModeComponent_Multicast_Sound, "Multicast_Sound" }, // 11777468
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_EndGame, "Server_EndGame" }, // 1185419206
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_EndRound, "Server_EndRound" }, // 2267151994
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_EnemyDestroyed, "Server_EnemyDestroyed" }, // 3958837247
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_SetSurvivalDetails, "Server_SetSurvivalDetails" }, // 2262401661
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_StartGame, "Server_StartGame" }, // 186284029
		{ &Z_Construct_UFunction_USurvivalModeComponent_Server_StartRound, "Server_StartRound" }, // 3691931521
		{ &Z_Construct_UFunction_USurvivalModeComponent_SetSurvivalDetails, "SetSurvivalDetails" }, // 371757195
		{ &Z_Construct_UFunction_USurvivalModeComponent_StartGame, "StartGame" }, // 3792402068
		{ &Z_Construct_UFunction_USurvivalModeComponent_StartRound, "StartRound" }, // 577907183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * The component that handles all of the survival mode logic.\n * Typically set in the game state, but can also be put in a replicated actor.\n*/" },
		{ "IncludePath", "Core/SurvivalModeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "The component that handles all of the survival mode logic.\nTypically set in the game state, but can also be put in a replicated actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundStart_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Notify that a round has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Notify that a round has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundStart = { "RoundStart", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, RoundStart), Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundStart_MetaData)) }; // 395430014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundEnd_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Notify that a round has ended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Notify that a round has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundEnd = { "RoundEnd", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, RoundEnd), Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundEnd_MetaData)) }; // 2454839540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameStart_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Notify that the game has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Notify that the game has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameStart = { "GameStart", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, GameStart), Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameStart_MetaData)) }; // 2795332669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameEnd_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Notify that the game has ended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Notify that the game has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameEnd = { "GameEnd", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, GameEnd), Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameEnd_MetaData)) }; // 1383590019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_OnEnemyDestroyed_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * Notify that an enemy has been destroyed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "Notify that an enemy has been destroyed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_OnEnemyDestroyed = { "OnEnemyDestroyed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, OnEnemyDestroyed), Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_OnEnemyDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_OnEnemyDestroyed_MetaData)) }; // 3246442086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DetailsRow_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * A row used to gather the survival mode details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "A row used to gather the survival mode details." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DetailsRow = { "DetailsRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, DetailsRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DetailsRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DetailsRow_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DefaultSurvivalDetails_MetaData[] = {
		{ "Category", "Survival" },
		{ "Comment", "/**\n\x09 * The hardcoded details if the row is not valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
		{ "ToolTip", "The hardcoded details if the row is not valid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DefaultSurvivalDetails = { "DefaultSurvivalDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, DefaultSurvivalDetails), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DefaultSurvivalDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DefaultSurvivalDetails_MetaData)) }; // 2451853430
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners_MetaData)) }; // 3760272155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_CurrentSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_CurrentSpawner = { "CurrentSpawner", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, CurrentSpawner), Z_Construct_UScriptStruct_FSurvivalActorSpawner, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_CurrentSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_CurrentSpawner_MetaData)) }; // 313437834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundHandle = { "RoundHandle", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, RoundHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnHandle = { "SpawnHandle", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, SpawnHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SurvivalDetails_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SurvivalDetails = { "SurvivalDetails", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USurvivalModeComponent, SurvivalDetails), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SurvivalDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SurvivalDetails_MetaData)) }; // 2451853430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive_SetBit(void* Obj)
	{
		((USurvivalModeComponent*)Obj)->bGameActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive = { "bGameActive", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USurvivalModeComponent), &Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivalModeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_GameEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_OnEnemyDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DetailsRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_DefaultSurvivalDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_Spawners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_CurrentSpawner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_RoundHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SpawnHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_SurvivalDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivalModeComponent_Statics::NewProp_bGameActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivalModeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivalModeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvivalModeComponent_Statics::ClassParams = {
		&USurvivalModeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivalModeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivalModeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivalModeComponent()
	{
		if (!Z_Registration_Info_UClass_USurvivalModeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvivalModeComponent.OuterSingleton, Z_Construct_UClass_USurvivalModeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USurvivalModeComponent.OuterSingleton;
	}
	template<> GAIASURVIVALMODE_API UClass* StaticClass<USurvivalModeComponent>()
	{
		return USurvivalModeComponent::StaticClass();
	}

	void USurvivalModeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SpawnedActors(TEXT("SpawnedActors"));
		static const FName Name_Spawners(TEXT("Spawners"));
		static const FName Name_CurrentSpawner(TEXT("CurrentSpawner"));
		static const FName Name_RoundHandle(TEXT("RoundHandle"));
		static const FName Name_SpawnHandle(TEXT("SpawnHandle"));
		static const FName Name_SurvivalDetails(TEXT("SurvivalDetails"));
		static const FName Name_bGameActive(TEXT("bGameActive"));

		const bool bIsValid = true
			&& Name_SpawnedActors == ClassReps[(int32)ENetFields_Private::SpawnedActors].Property->GetFName()
			&& Name_Spawners == ClassReps[(int32)ENetFields_Private::Spawners].Property->GetFName()
			&& Name_CurrentSpawner == ClassReps[(int32)ENetFields_Private::CurrentSpawner].Property->GetFName()
			&& Name_RoundHandle == ClassReps[(int32)ENetFields_Private::RoundHandle].Property->GetFName()
			&& Name_SpawnHandle == ClassReps[(int32)ENetFields_Private::SpawnHandle].Property->GetFName()
			&& Name_SurvivalDetails == ClassReps[(int32)ENetFields_Private::SurvivalDetails].Property->GetFName()
			&& Name_bGameActive == ClassReps[(int32)ENetFields_Private::bGameActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivalModeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivalModeComponent);
	USurvivalModeComponent::~USurvivalModeComponent() {}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USurvivalModeComponent, USurvivalModeComponent::StaticClass, TEXT("USurvivalModeComponent"), &Z_Registration_Info_UClass_USurvivalModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvivalModeComponent), 35863827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_1386801612(TEXT("/Script/GaiaSurvivalMode"),
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
