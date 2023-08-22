// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/SurvivalModePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalModePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalModeComponent_NoRegister();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalModePlayer();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalModePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References
	DEFINE_FUNCTION(ISurvivalModePlayer::execHideUI)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HideUI_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalModePlayer::execShowUI)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UUserWidget> ,Z_Param_Out_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowUI_Implementation(Z_Param_Component,Z_Param_Out_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalModePlayer::execGameEnded)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GameEnded_Implementation(Z_Param_Component,Z_Param_Out_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalModePlayer::execGameStarted)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GameStarted_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalModePlayer::execRoundEnded)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bIsBossRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RoundEnded_Implementation(Z_Param_Component,Z_Param_bIsBossRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalModePlayer::execRoundStarted)
	{
		P_GET_OBJECT(USurvivalModeComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bIsBossRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RoundStarted_Implementation(Z_Param_Component,Z_Param_bIsBossRound);
		P_NATIVE_END;
	}
	struct SurvivalModePlayer_eventGameEnded_Parms
	{
		USurvivalModeComponent* Component;
		FText Reason;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventGameEnded_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalModePlayer_eventGameStarted_Parms
	{
		USurvivalModeComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventGameStarted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalModePlayer_eventHideUI_Parms
	{
		USurvivalModeComponent* Component;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventHideUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalModePlayer_eventRoundEnded_Parms
	{
		USurvivalModeComponent* Component;
		bool bIsBossRound;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventRoundEnded_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalModePlayer_eventRoundStarted_Parms
	{
		USurvivalModeComponent* Component;
		bool bIsBossRound;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventRoundStarted_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalModePlayer_eventShowUI_Parms
	{
		USurvivalModeComponent* Component;
		TSoftClassPtr<UUserWidget>  Widget;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalModePlayer_eventShowUI_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool ISurvivalModePlayer::GameEnded(USurvivalModeComponent* Component, FText const& Reason)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GameEnded instead.");
		SurvivalModePlayer_eventGameEnded_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalModePlayer::GameStarted(USurvivalModeComponent* Component)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GameStarted instead.");
		SurvivalModePlayer_eventGameStarted_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalModePlayer::HideUI(USurvivalModeComponent* Component)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideUI instead.");
		SurvivalModePlayer_eventHideUI_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalModePlayer::RoundEnded(USurvivalModeComponent* Component, bool bIsBossRound)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RoundEnded instead.");
		SurvivalModePlayer_eventRoundEnded_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalModePlayer::RoundStarted(USurvivalModeComponent* Component, bool bIsBossRound)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RoundStarted instead.");
		SurvivalModePlayer_eventRoundStarted_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalModePlayer::ShowUI(USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowUI instead.");
		SurvivalModePlayer_eventShowUI_Parms Parms;
		return Parms.ReturnValue;
	}
	void USurvivalModePlayer::StaticRegisterNativesUSurvivalModePlayer()
	{
		UClass* Class = USurvivalModePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameEnded", &ISurvivalModePlayer::execGameEnded },
			{ "GameStarted", &ISurvivalModePlayer::execGameStarted },
			{ "HideUI", &ISurvivalModePlayer::execHideUI },
			{ "RoundEnded", &ISurvivalModePlayer::execRoundEnded },
			{ "RoundStarted", &ISurvivalModePlayer::execRoundStarted },
			{ "ShowUI", &ISurvivalModePlayer::execShowUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventGameEnded_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventGameEnded_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Reason_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventGameEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventGameEnded_Parms), &Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Notify that the game has ended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Notify that the game has ended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "GameEnded", nullptr, nullptr, sizeof(SurvivalModePlayer_eventGameEnded_Parms), Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_GameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_GameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventGameStarted_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventGameStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventGameStarted_Parms), &Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Notify that the game has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Notify that the game has started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "GameStarted", nullptr, nullptr, sizeof(SurvivalModePlayer_eventGameStarted_Parms), Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_GameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_GameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventHideUI_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventHideUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventHideUI_Parms), &Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Hide the survival HUD.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Hide the survival HUD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "HideUI", nullptr, nullptr, sizeof(SurvivalModePlayer_eventHideUI_Parms), Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_HideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_HideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bIsBossRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBossRound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventRoundEnded_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_bIsBossRound_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventRoundEnded_Parms*)Obj)->bIsBossRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_bIsBossRound = { "bIsBossRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventRoundEnded_Parms), &Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_bIsBossRound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventRoundEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventRoundEnded_Parms), &Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_bIsBossRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Notify that the round has ended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Notify that the round has ended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "RoundEnded", nullptr, nullptr, sizeof(SurvivalModePlayer_eventRoundEnded_Parms), Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_RoundEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_RoundEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bIsBossRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBossRound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventRoundStarted_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_bIsBossRound_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventRoundStarted_Parms*)Obj)->bIsBossRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_bIsBossRound = { "bIsBossRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventRoundStarted_Parms), &Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_bIsBossRound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventRoundStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventRoundStarted_Parms), &Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_bIsBossRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Notify that the round has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Notify that the round has started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "RoundStarted", nullptr, nullptr, sizeof(SurvivalModePlayer_eventRoundStarted_Parms), Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_RoundStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_RoundStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventShowUI_Parms, Component), Z_Construct_UClass_USurvivalModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Widget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModePlayer_eventShowUI_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalModePlayer_eventShowUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalModePlayer_eventShowUI_Parms), &Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Show the survival HUD.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
		{ "ToolTip", "Show the survival HUD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalModePlayer, nullptr, "ShowUI", nullptr, nullptr, sizeof(SurvivalModePlayer_eventShowUI_Parms), Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalModePlayer_ShowUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalModePlayer_ShowUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvivalModePlayer);
	UClass* Z_Construct_UClass_USurvivalModePlayer_NoRegister()
	{
		return USurvivalModePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USurvivalModePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivalModePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivalModePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivalModePlayer_GameEnded, "GameEnded" }, // 1598440825
		{ &Z_Construct_UFunction_USurvivalModePlayer_GameStarted, "GameStarted" }, // 1210131414
		{ &Z_Construct_UFunction_USurvivalModePlayer_HideUI, "HideUI" }, // 4196165742
		{ &Z_Construct_UFunction_USurvivalModePlayer_RoundEnded, "RoundEnded" }, // 2972639785
		{ &Z_Construct_UFunction_USurvivalModePlayer_RoundStarted, "RoundStarted" }, // 4198764696
		{ &Z_Construct_UFunction_USurvivalModePlayer_ShowUI, "ShowUI" }, // 3871704459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalModePlayer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivalModePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISurvivalModePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvivalModePlayer_Statics::ClassParams = {
		&USurvivalModePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivalModePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalModePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivalModePlayer()
	{
		if (!Z_Registration_Info_UClass_USurvivalModePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvivalModePlayer.OuterSingleton, Z_Construct_UClass_USurvivalModePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USurvivalModePlayer.OuterSingleton;
	}
	template<> GAIASURVIVALMODE_API UClass* StaticClass<USurvivalModePlayer>()
	{
		return USurvivalModePlayer::StaticClass();
	}
	USurvivalModePlayer::USurvivalModePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivalModePlayer);
	USurvivalModePlayer::~USurvivalModePlayer() {}
	static FName NAME_USurvivalModePlayer_GameEnded = FName(TEXT("GameEnded"));
	bool ISurvivalModePlayer::Execute_GameEnded(UObject* O, USurvivalModeComponent* Component, FText const& Reason)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventGameEnded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_GameEnded);
		if (Func)
		{
			Parms.Component=Component;
			Parms.Reason=Reason;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->GameEnded_Implementation(Component,Reason);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModePlayer_GameStarted = FName(TEXT("GameStarted"));
	bool ISurvivalModePlayer::Execute_GameStarted(UObject* O, USurvivalModeComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventGameStarted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_GameStarted);
		if (Func)
		{
			Parms.Component=Component;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->GameStarted_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModePlayer_HideUI = FName(TEXT("HideUI"));
	bool ISurvivalModePlayer::Execute_HideUI(UObject* O, USurvivalModeComponent* Component)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventHideUI_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_HideUI);
		if (Func)
		{
			Parms.Component=Component;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->HideUI_Implementation(Component);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModePlayer_RoundEnded = FName(TEXT("RoundEnded"));
	bool ISurvivalModePlayer::Execute_RoundEnded(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventRoundEnded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_RoundEnded);
		if (Func)
		{
			Parms.Component=Component;
			Parms.bIsBossRound=bIsBossRound;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->RoundEnded_Implementation(Component,bIsBossRound);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModePlayer_RoundStarted = FName(TEXT("RoundStarted"));
	bool ISurvivalModePlayer::Execute_RoundStarted(UObject* O, USurvivalModeComponent* Component, bool bIsBossRound)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventRoundStarted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_RoundStarted);
		if (Func)
		{
			Parms.Component=Component;
			Parms.bIsBossRound=bIsBossRound;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->RoundStarted_Implementation(Component,bIsBossRound);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalModePlayer_ShowUI = FName(TEXT("ShowUI"));
	bool ISurvivalModePlayer::Execute_ShowUI(UObject* O, USurvivalModeComponent* Component, TSoftClassPtr<UUserWidget>  const& Widget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalModePlayer::StaticClass()));
		SurvivalModePlayer_eventShowUI_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalModePlayer_ShowUI);
		if (Func)
		{
			Parms.Component=Component;
			Parms.Widget=Widget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalModePlayer*)(O->GetNativeInterfaceAddress(USurvivalModePlayer::StaticClass())))
		{
			Parms.ReturnValue = I->ShowUI_Implementation(Component,Widget);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USurvivalModePlayer, USurvivalModePlayer::StaticClass, TEXT("USurvivalModePlayer"), &Z_Registration_Info_UClass_USurvivalModePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvivalModePlayer), 2163447660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_3465500641(TEXT("/Script/GaiaSurvivalMode"),
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
