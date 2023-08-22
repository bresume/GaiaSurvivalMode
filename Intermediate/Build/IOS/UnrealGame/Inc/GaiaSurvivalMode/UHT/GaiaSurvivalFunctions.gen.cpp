// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/GaiaSurvivalFunctions.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeDetails.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeSpawner.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaiaSurvivalFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_UGaiaSurvivalFunctions();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_UGaiaSurvivalFunctions_NoRegister();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeDetails();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeSpawner();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalSpawnPoint();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execIsBossRound)
	{
		P_GET_STRUCT(FSurvivalModeDetails,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::IsBossRound(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execUseRound)
	{
		P_GET_STRUCT(FSurvivalModeSpawner,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::UseRound(Z_Param_A,Z_Param_CurrentRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execIgnoreRound)
	{
		P_GET_STRUCT(FSurvivalModeSpawner,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::IgnoreRound(Z_Param_A,Z_Param_CurrentRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execCompleteRound)
	{
		P_GET_STRUCT(FSurvivalModeDetails,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::CompleteRound(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execGetCurrentRound)
	{
		P_GET_STRUCT(FSurvivalModeDetails,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGaiaSurvivalFunctions::GetCurrentRound(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execFindNextAvailableSpawner)
	{
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::FindNextAvailableSpawner(Z_Param_Actors,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execGetSpawnersWithTags)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(FName,Z_Param_Tags);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::GetSpawnersWithTags(Z_Param_WorldContextObject,Z_Param_Tags,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGaiaSurvivalFunctions::execIsClassAllowedForSpawner)
	{
		P_GET_STRUCT(FSurvivalSpawnPoint,Z_Param_A);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGaiaSurvivalFunctions::IsClassAllowedForSpawner(Z_Param_A,Z_Param_Class);
		P_NATIVE_END;
	}
	void UGaiaSurvivalFunctions::StaticRegisterNativesUGaiaSurvivalFunctions()
	{
		UClass* Class = UGaiaSurvivalFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteRound", &UGaiaSurvivalFunctions::execCompleteRound },
			{ "FindNextAvailableSpawner", &UGaiaSurvivalFunctions::execFindNextAvailableSpawner },
			{ "GetCurrentRound", &UGaiaSurvivalFunctions::execGetCurrentRound },
			{ "GetSpawnersWithTags", &UGaiaSurvivalFunctions::execGetSpawnersWithTags },
			{ "IgnoreRound", &UGaiaSurvivalFunctions::execIgnoreRound },
			{ "IsBossRound", &UGaiaSurvivalFunctions::execIsBossRound },
			{ "IsClassAllowedForSpawner", &UGaiaSurvivalFunctions::execIsClassAllowedForSpawner },
			{ "UseRound", &UGaiaSurvivalFunctions::execUseRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics
	{
		struct GaiaSurvivalFunctions_eventCompleteRound_Parms
		{
			FSurvivalModeDetails A;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventCompleteRound_Parms, A), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventCompleteRound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventCompleteRound_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Complete the round in the details.\n\x09 * Returns true if the game is over.\n\x09 * This is handled internally, but it is exposed to BP if you want your own custom functionality.\n\x09 * See USurvivalModeComponent for more details.\n\x09 * NOTE: You will need to override the functions in the SurvivalModeComponent to incorporate your custom functions.\n\x09 * \x09If you do not do this, you will duplicate the function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Complete the round in the details.\nReturns true if the game is over.\nThis is handled internally, but it is exposed to BP if you want your own custom functionality.\nSee USurvivalModeComponent for more details.\nNOTE: You will need to override the functions in the SurvivalModeComponent to incorporate your custom functions.\n     If you do not do this, you will duplicate the function." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "CompleteRound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::GaiaSurvivalFunctions_eventCompleteRound_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics
	{
		struct GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms
		{
			TArray<AActor*> Actors;
			AActor* Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Find a spawner from the list of spawners.\n\x09 * Remember to make sure the spawner implements ISurvivalSpawnPointLink.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Find a spawner from the list of spawners.\nRemember to make sure the spawner implements ISurvivalSpawnPointLink." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "FindNextAvailableSpawner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::GaiaSurvivalFunctions_eventFindNextAvailableSpawner_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics
	{
		struct GaiaSurvivalFunctions_eventGetCurrentRound_Parms
		{
			FSurvivalModeDetails A;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventGetCurrentRound_Parms, A), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventGetCurrentRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Get the current round from the details.\n\x09*/" },
		{ "CompactNodeTitle", "Round" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Get the current round from the details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "GetCurrentRound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::GaiaSurvivalFunctions_eventGetCurrentRound_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics
	{
		struct GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms
		{
			UObject* WorldContextObject;
			TArray<FName> Tags;
			TArray<AActor*> OutActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_OutActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Get the spawners that implement ISurvivalSpawnPointLink and have the desired tags (typically gathered from FSurvivalSpawnPoint).\n\x09 * Returns false if no actors were found. \n\x09 * If Tags.Num<=0 then we grab all of the spawners.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Get the spawners that implement ISurvivalSpawnPointLink and have the desired tags (typically gathered from FSurvivalSpawnPoint).\nReturns false if no actors were found.\nIf Tags.Num<=0 then we grab all of the spawners." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "GetSpawnersWithTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::GaiaSurvivalFunctions_eventGetSpawnersWithTags_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics
	{
		struct GaiaSurvivalFunctions_eventIgnoreRound_Parms
		{
			FSurvivalModeSpawner A;
			int32 CurrentRound;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventIgnoreRound_Parms, A), Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventIgnoreRound_Parms, CurrentRound), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventIgnoreRound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventIgnoreRound_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_CurrentRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Determines if the spawner ignores the round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Determines if the spawner ignores the round." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "IgnoreRound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::GaiaSurvivalFunctions_eventIgnoreRound_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics
	{
		struct GaiaSurvivalFunctions_eventIsBossRound_Parms
		{
			FSurvivalModeDetails A;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventIsBossRound_Parms, A), Z_Construct_UScriptStruct_FSurvivalModeDetails, METADATA_PARAMS(nullptr, 0) }; // 2451853430
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventIsBossRound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventIsBossRound_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Determines if the spawner spawns during a boss round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Determines if the spawner spawns during a boss round." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "IsBossRound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::GaiaSurvivalFunctions_eventIsBossRound_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics
	{
		struct GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms
		{
			FSurvivalSpawnPoint A;
			UClass* Class;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms, A), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(nullptr, 0) }; // 3481119757
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Determines if the spawn point allows spawn. \n\x09*/" },
		{ "CompactNodeTitle", "ClassAllowed" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Determines if the spawn point allows spawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "IsClassAllowedForSpawner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::GaiaSurvivalFunctions_eventIsClassAllowedForSpawner_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics
	{
		struct GaiaSurvivalFunctions_eventUseRound_Parms
		{
			FSurvivalModeSpawner A;
			int32 CurrentRound;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventUseRound_Parms, A), Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GaiaSurvivalFunctions_eventUseRound_Parms, CurrentRound), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaiaSurvivalFunctions_eventUseRound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GaiaSurvivalFunctions_eventUseRound_Parms), &Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_CurrentRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalMode" },
		{ "Comment", "/**\n\x09 * Determines if the spawner will use the round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Determines if the spawner will use the round." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaiaSurvivalFunctions, nullptr, "UseRound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::GaiaSurvivalFunctions_eventUseRound_Parms), Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaiaSurvivalFunctions);
	UClass* Z_Construct_UClass_UGaiaSurvivalFunctions_NoRegister()
	{
		return UGaiaSurvivalFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGaiaSurvivalFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_CompleteRound, "CompleteRound" }, // 3100173267
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_FindNextAvailableSpawner, "FindNextAvailableSpawner" }, // 430129967
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_GetCurrentRound, "GetCurrentRound" }, // 1460489257
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_GetSpawnersWithTags, "GetSpawnersWithTags" }, // 3817467929
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_IgnoreRound, "IgnoreRound" }, // 2131913907
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_IsBossRound, "IsBossRound" }, // 115753352
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_IsClassAllowedForSpawner, "IsClassAllowedForSpawner" }, // 2477233136
		{ &Z_Construct_UFunction_UGaiaSurvivalFunctions_UseRound, "UseRound" }, // 399875101
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Functions for the Gaia Survival Game Mode.\n */" },
		{ "IncludePath", "Core/GaiaSurvivalFunctions.h" },
		{ "ModuleRelativePath", "Public/Core/GaiaSurvivalFunctions.h" },
		{ "ToolTip", "Functions for the Gaia Survival Game Mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaiaSurvivalFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::ClassParams = {
		&UGaiaSurvivalFunctions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGaiaSurvivalFunctions()
	{
		if (!Z_Registration_Info_UClass_UGaiaSurvivalFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaiaSurvivalFunctions.OuterSingleton, Z_Construct_UClass_UGaiaSurvivalFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGaiaSurvivalFunctions.OuterSingleton;
	}
	template<> GAIASURVIVALMODE_API UClass* StaticClass<UGaiaSurvivalFunctions>()
	{
		return UGaiaSurvivalFunctions::StaticClass();
	}
	UGaiaSurvivalFunctions::UGaiaSurvivalFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGaiaSurvivalFunctions);
	UGaiaSurvivalFunctions::~UGaiaSurvivalFunctions() {}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGaiaSurvivalFunctions, UGaiaSurvivalFunctions::StaticClass, TEXT("UGaiaSurvivalFunctions"), &Z_Registration_Info_UClass_UGaiaSurvivalFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaiaSurvivalFunctions), 3969835486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_486715942(TEXT("/Script/GaiaSurvivalMode"),
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_GaiaSurvivalFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
