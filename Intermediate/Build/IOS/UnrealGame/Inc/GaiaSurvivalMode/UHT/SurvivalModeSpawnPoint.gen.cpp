// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/SurvivalModeSpawnPoint.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalSpawnPoint.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalModeSpawnPoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_ASurvivalModeSpawnPoint();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_ASurvivalModeSpawnPoint_NoRegister();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalSpawnPointLink_NoRegister();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalSpawnPoint();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execGetResetHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->GetResetHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execGetCurrentSpawnedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentSpawnedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execServer_HandleSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_GET_OBJECT(APawn,Z_Param_InInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleSpawnActor_Validate(Z_Param_Class,Z_Param_Transform,Z_Param_InOwner,Z_Param_InInstigator))
		{
			RPC_ValidateFailed(TEXT("Server_HandleSpawnActor_Validate"));
			return;
		}
		P_THIS->Server_HandleSpawnActor_Implementation(Z_Param_Class,Z_Param_Transform,Z_Param_InOwner,Z_Param_InInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execServer_OnSetSpawnPoint)
	{
		P_GET_STRUCT(FSurvivalSpawnPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnSetSpawnPoint_Validate(Z_Param_Point))
		{
			RPC_ValidateFailed(TEXT("Server_OnSetSpawnPoint_Validate"));
			return;
		}
		P_THIS->Server_OnSetSpawnPoint_Implementation(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execHandleResetCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResetCooldown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execHandleSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_GET_OBJECT(APawn,Z_Param_InInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSpawnActor_Implementation(Z_Param_Class,Z_Param_Transform,Z_Param_InOwner,Z_Param_InInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivalModeSpawnPoint::execOnSetSpawnPoint)
	{
		P_GET_STRUCT(FSurvivalSpawnPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetSpawnPoint_Implementation(Z_Param_Point);
		P_NATIVE_END;
	}
	struct SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms
	{
		TSubclassOf<AActor>  Class;
		FTransform Transform;
		AActor* InOwner;
		APawn* InInstigator;
	};
	struct SurvivalModeSpawnPoint_eventOnSetSpawnPoint_Parms
	{
		FSurvivalSpawnPoint Point;
	};
	struct SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms
	{
		TSubclassOf<AActor>  Class;
		FTransform Transform;
		AActor* InOwner;
		APawn* InInstigator;
	};
	struct SurvivalModeSpawnPoint_eventServer_OnSetSpawnPoint_Parms
	{
		FSurvivalSpawnPoint Point;
	};
	static FName NAME_ASurvivalModeSpawnPoint_HandleResetCooldown = FName(TEXT("HandleResetCooldown"));
	void ASurvivalModeSpawnPoint::HandleResetCooldown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalModeSpawnPoint_HandleResetCooldown),NULL);
	}
	static FName NAME_ASurvivalModeSpawnPoint_HandleSpawnActor = FName(TEXT("HandleSpawnActor"));
	void ASurvivalModeSpawnPoint::HandleSpawnActor(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator)
	{
		SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms Parms;
		Parms.Class=Class;
		Parms.Transform=Transform;
		Parms.InOwner=InOwner;
		Parms.InInstigator=InInstigator;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalModeSpawnPoint_HandleSpawnActor),&Parms);
	}
	static FName NAME_ASurvivalModeSpawnPoint_OnSetSpawnPoint = FName(TEXT("OnSetSpawnPoint"));
	void ASurvivalModeSpawnPoint::OnSetSpawnPoint(FSurvivalSpawnPoint Point)
	{
		SurvivalModeSpawnPoint_eventOnSetSpawnPoint_Parms Parms;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalModeSpawnPoint_OnSetSpawnPoint),&Parms);
	}
	static FName NAME_ASurvivalModeSpawnPoint_Server_HandleSpawnActor = FName(TEXT("Server_HandleSpawnActor"));
	void ASurvivalModeSpawnPoint::Server_HandleSpawnActor(TSubclassOf<AActor>  Class, FTransform Transform, AActor* InOwner, APawn* InInstigator)
	{
		SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms Parms;
		Parms.Class=Class;
		Parms.Transform=Transform;
		Parms.InOwner=InOwner;
		Parms.InInstigator=InInstigator;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalModeSpawnPoint_Server_HandleSpawnActor),&Parms);
	}
	static FName NAME_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint = FName(TEXT("Server_OnSetSpawnPoint"));
	void ASurvivalModeSpawnPoint::Server_OnSetSpawnPoint(FSurvivalSpawnPoint Point)
	{
		SurvivalModeSpawnPoint_eventServer_OnSetSpawnPoint_Parms Parms;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint),&Parms);
	}
	void ASurvivalModeSpawnPoint::StaticRegisterNativesASurvivalModeSpawnPoint()
	{
		UClass* Class = ASurvivalModeSpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSpawnedActor", &ASurvivalModeSpawnPoint::execGetCurrentSpawnedActor },
			{ "GetResetHandle", &ASurvivalModeSpawnPoint::execGetResetHandle },
			{ "HandleResetCooldown", &ASurvivalModeSpawnPoint::execHandleResetCooldown },
			{ "HandleSpawnActor", &ASurvivalModeSpawnPoint::execHandleSpawnActor },
			{ "OnSetSpawnPoint", &ASurvivalModeSpawnPoint::execOnSetSpawnPoint },
			{ "Server_HandleSpawnActor", &ASurvivalModeSpawnPoint::execServer_HandleSpawnActor },
			{ "Server_OnSetSpawnPoint", &ASurvivalModeSpawnPoint::execServer_OnSetSpawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics
	{
		struct SurvivalModeSpawnPoint_eventGetCurrentSpawnedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventGetCurrentSpawnedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint|Getters" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "GetCurrentSpawnedActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::SurvivalModeSpawnPoint_eventGetCurrentSpawnedActor_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics
	{
		struct SurvivalModeSpawnPoint_eventGetResetHandle_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventGetResetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint|Getters" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "GetResetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::SurvivalModeSpawnPoint_eventGetResetHandle_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "/**\n\x09 * BP overridable function for resetting bIsBusy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "BP overridable function for resetting bIsBusy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "HandleResetCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms, InInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_InOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::NewProp_InInstigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "/**\n\x09 * BP overridable function for spawning the actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "BP overridable function for spawning the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "HandleSpawnActor", nullptr, nullptr, sizeof(SurvivalModeSpawnPoint_eventHandleSpawnActor_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventOnSetSpawnPoint_Parms, Point), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(nullptr, 0) }; // 3481119757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "/**\n\x09 * BP overridable function for setting the spawn poin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "BP overridable function for setting the spawn poin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "OnSetSpawnPoint", nullptr, nullptr, sizeof(SurvivalModeSpawnPoint_eventOnSetSpawnPoint_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms, InInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_InOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::NewProp_InInstigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "//Spawn the actor on the server\n" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "Spawn the actor on the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "Server_HandleSpawnActor", nullptr, nullptr, sizeof(SurvivalModeSpawnPoint_eventServer_HandleSpawnActor_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalModeSpawnPoint_eventServer_OnSetSpawnPoint_Parms, Point), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(nullptr, 0) }; // 3481119757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "//Set the spawn point on the server.\n" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "Set the spawn point on the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalModeSpawnPoint, nullptr, "Server_OnSetSpawnPoint", nullptr, nullptr, sizeof(SurvivalModeSpawnPoint_eventServer_OnSetSpawnPoint_Parms), Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalModeSpawnPoint);
	UClass* Z_Construct_UClass_ASurvivalModeSpawnPoint_NoRegister()
	{
		return ASurvivalModeSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPointRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPointRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSpawnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResetHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBusy_MetaData[];
#endif
		static void NewProp_bIsBusy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBusy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetCurrentSpawnedActor, "GetCurrentSpawnedActor" }, // 1186734370
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_GetResetHandle, "GetResetHandle" }, // 1913793816
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleResetCooldown, "HandleResetCooldown" }, // 3672759977
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_HandleSpawnActor, "HandleSpawnActor" }, // 3693208467
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_OnSetSpawnPoint, "OnSetSpawnPoint" }, // 2356249971
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_HandleSpawnActor, "Server_HandleSpawnActor" }, // 3444514189
		{ &Z_Construct_UFunction_ASurvivalModeSpawnPoint_Server_OnSetSpawnPoint, "Server_OnSetSpawnPoint" }, // 2054744054
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is a default class for the spawn point, but you can create your own.\n * Just make sure that your new actor implements ISpawnPoint.\n*/" },
		{ "IncludePath", "Core/SurvivalModeSpawnPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "This is a default class for the spawn point, but you can create your own.\nJust make sure that your new actor implements ISpawnPoint." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPointRow_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "/**\n\x09 * If this data table row handle is valid, we use this to load the spawn point.\n\x09 * Otherwise we use the DefaultSpawnPoint property.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "If this data table row handle is valid, we use this to load the spawn point.\nOtherwise we use the DefaultSpawnPoint property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPointRow = { "SpawnPointRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, SpawnPointRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPointRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPointRow_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_DefaultSpawnPoint_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "Comment", "/**\n\x09 * Used if SpawnPointRow is not valid.\n\x09 * Otherise this is ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "Used if SpawnPointRow is not valid.\nOtherise this is ignored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_DefaultSpawnPoint = { "DefaultSpawnPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, DefaultSpawnPoint), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_DefaultSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_DefaultSpawnPoint_MetaData)) }; // 3481119757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "SurvivalModeSpawnPoint" },
		{ "Comment", "/**\n\x09 * The capsule component to use for collision detection.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "The capsule component to use for collision detection." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Arrow_MetaData[] = {
		{ "Category", "SurvivalModeSpawnPoint" },
		{ "Comment", "/**\n\x09 * The arrow component to use for spawning the actor.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
		{ "ToolTip", "The arrow component to use for spawning the actor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_CurrentSpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_CurrentSpawnedActor = { "CurrentSpawnedActor", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, CurrentSpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_CurrentSpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_CurrentSpawnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_ResetHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_ResetHandle = { "ResetHandle", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, ResetHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_ResetHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_ResetHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASurvivalModeSpawnPoint, SpawnPoint), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPoint_MetaData)) }; // 3481119757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalModeSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy_SetBit(void* Obj)
	{
		((ASurvivalModeSpawnPoint*)Obj)->bIsBusy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy = { "bIsBusy", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASurvivalModeSpawnPoint), &Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPointRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_DefaultSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_Arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_CurrentSpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_ResetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_SpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::NewProp_bIsBusy,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USurvivalSpawnPointLink_NoRegister, (int32)VTABLE_OFFSET(ASurvivalModeSpawnPoint, ISurvivalSpawnPointLink), false },  // 1681724837
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalModeSpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::ClassParams = {
		&ASurvivalModeSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalModeSpawnPoint()
	{
		if (!Z_Registration_Info_UClass_ASurvivalModeSpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalModeSpawnPoint.OuterSingleton, Z_Construct_UClass_ASurvivalModeSpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalModeSpawnPoint.OuterSingleton;
	}
	template<> GAIASURVIVALMODE_API UClass* StaticClass<ASurvivalModeSpawnPoint>()
	{
		return ASurvivalModeSpawnPoint::StaticClass();
	}

	void ASurvivalModeSpawnPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentSpawnedActor(TEXT("CurrentSpawnedActor"));
		static const FName Name_ResetHandle(TEXT("ResetHandle"));
		static const FName Name_SpawnPoint(TEXT("SpawnPoint"));
		static const FName Name_bIsBusy(TEXT("bIsBusy"));

		const bool bIsValid = true
			&& Name_CurrentSpawnedActor == ClassReps[(int32)ENetFields_Private::CurrentSpawnedActor].Property->GetFName()
			&& Name_ResetHandle == ClassReps[(int32)ENetFields_Private::ResetHandle].Property->GetFName()
			&& Name_SpawnPoint == ClassReps[(int32)ENetFields_Private::SpawnPoint].Property->GetFName()
			&& Name_bIsBusy == ClassReps[(int32)ENetFields_Private::bIsBusy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASurvivalModeSpawnPoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalModeSpawnPoint);
	ASurvivalModeSpawnPoint::~ASurvivalModeSpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalModeSpawnPoint, ASurvivalModeSpawnPoint::StaticClass, TEXT("ASurvivalModeSpawnPoint"), &Z_Registration_Info_UClass_ASurvivalModeSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalModeSpawnPoint), 1389815868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_839350683(TEXT("/Script/GaiaSurvivalMode"),
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalModeSpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
