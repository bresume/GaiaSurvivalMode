// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/SurvivalSpawnPointLink.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalSpawnPointLink() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalSpawnPointLink();
	GAIASURVIVALMODE_API UClass* Z_Construct_UClass_USurvivalSpawnPointLink_NoRegister();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalSpawnPoint();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References
	DEFINE_FUNCTION(ISurvivalSpawnPointLink::execRequestSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->RequestSpawnActor_Implementation(Z_Param_Class,Z_Param_Transform,Z_Param_Owner,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalSpawnPointLink::execIsBusy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBusy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalSpawnPointLink::execSetSurvivalSpawnPoint)
	{
		P_GET_STRUCT(FSurvivalSpawnPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSurvivalSpawnPoint_Implementation(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISurvivalSpawnPointLink::execGetSurvivalSpawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSurvivalSpawnPoint*)Z_Param__Result=P_THIS->GetSurvivalSpawnPoint_Implementation();
		P_NATIVE_END;
	}
	struct SurvivalSpawnPointLink_eventGetSurvivalSpawnPoint_Parms
	{
		FSurvivalSpawnPoint ReturnValue;
	};
	struct SurvivalSpawnPointLink_eventIsBusy_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalSpawnPointLink_eventIsBusy_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct SurvivalSpawnPointLink_eventRequestSpawnActor_Parms
	{
		TSubclassOf<AActor>  Class;
		FTransform Transform;
		AActor* Owner;
		APawn* Instigator;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalSpawnPointLink_eventRequestSpawnActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms
	{
		FSurvivalSpawnPoint Point;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms()
			: ReturnValue(false)
		{
		}
	};
	FSurvivalSpawnPoint ISurvivalSpawnPointLink::GetSurvivalSpawnPoint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSurvivalSpawnPoint instead.");
		SurvivalSpawnPointLink_eventGetSurvivalSpawnPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalSpawnPointLink::IsBusy()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsBusy instead.");
		SurvivalSpawnPointLink_eventIsBusy_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* ISurvivalSpawnPointLink::RequestSpawnActor(TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestSpawnActor instead.");
		SurvivalSpawnPointLink_eventRequestSpawnActor_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISurvivalSpawnPointLink::SetSurvivalSpawnPoint(FSurvivalSpawnPoint Point)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSurvivalSpawnPoint instead.");
		SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	void USurvivalSpawnPointLink::StaticRegisterNativesUSurvivalSpawnPointLink()
	{
		UClass* Class = USurvivalSpawnPointLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSurvivalSpawnPoint", &ISurvivalSpawnPointLink::execGetSurvivalSpawnPoint },
			{ "IsBusy", &ISurvivalSpawnPointLink::execIsBusy },
			{ "RequestSpawnActor", &ISurvivalSpawnPointLink::execRequestSpawnActor },
			{ "SetSurvivalSpawnPoint", &ISurvivalSpawnPointLink::execSetSurvivalSpawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventGetSurvivalSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(nullptr, 0) }; // 3481119757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Return the spawn point details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalSpawnPointLink.h" },
		{ "ToolTip", "Return the spawn point details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalSpawnPointLink, nullptr, "GetSurvivalSpawnPoint", nullptr, nullptr, sizeof(SurvivalSpawnPointLink_eventGetSurvivalSpawnPoint_Parms), Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalSpawnPointLink_eventIsBusy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalSpawnPointLink_eventIsBusy_Parms), &Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Determines if the spawner is \"busy\", meaning that it cannot be used to spawn an actor.\n\x09 * This can be used in many ways, but my default implementation is for using it for cooldowns \n\x09 * (see FSurvivalSpawnPoint.h for more info)\n\x09 * or for overlaps, I.E. if a player or spawned actor is currently overlapping the spawner, we set it as busy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalSpawnPointLink.h" },
		{ "ToolTip", "Determines if the spawner is \"busy\", meaning that it cannot be used to spawn an actor.\nThis can be used in many ways, but my default implementation is for using it for cooldowns\n(see FSurvivalSpawnPoint.h for more info)\nor for overlaps, I.E. if a player or spawned actor is currently overlapping the spawner, we set it as busy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalSpawnPointLink, nullptr, "IsBusy", nullptr, nullptr, sizeof(SurvivalSpawnPointLink_eventIsBusy_Parms), Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Request that an actor be spawned.\n\x09 * Will return nullptr if the spawn fails.\n\x09*/" },
		{ "CPP_Default_Instigator", "None" },
		{ "CPP_Default_Owner", "None" },
		{ "ModuleRelativePath", "Public/Core/SurvivalSpawnPointLink.h" },
		{ "ToolTip", "Request that an actor be spawned.\nWill return nullptr if the spawn fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalSpawnPointLink, nullptr, "RequestSpawnActor", nullptr, nullptr, sizeof(SurvivalSpawnPointLink_eventRequestSpawnActor_Parms), Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms, Point), Z_Construct_UScriptStruct_FSurvivalSpawnPoint, METADATA_PARAMS(nullptr, 0) }; // 3481119757
	void Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms), &Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Set the spawn point details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/SurvivalSpawnPointLink.h" },
		{ "ToolTip", "Set the spawn point details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivalSpawnPointLink, nullptr, "SetSurvivalSpawnPoint", nullptr, nullptr, sizeof(SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms), Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvivalSpawnPointLink);
	UClass* Z_Construct_UClass_USurvivalSpawnPointLink_NoRegister()
	{
		return USurvivalSpawnPointLink::StaticClass();
	}
	struct Z_Construct_UClass_USurvivalSpawnPointLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivalSpawnPointLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivalSpawnPointLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivalSpawnPointLink_GetSurvivalSpawnPoint, "GetSurvivalSpawnPoint" }, // 3462096656
		{ &Z_Construct_UFunction_USurvivalSpawnPointLink_IsBusy, "IsBusy" }, // 1350797247
		{ &Z_Construct_UFunction_USurvivalSpawnPointLink_RequestSpawnActor, "RequestSpawnActor" }, // 2876324590
		{ &Z_Construct_UFunction_USurvivalSpawnPointLink_SetSurvivalSpawnPoint, "SetSurvivalSpawnPoint" }, // 3405150894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivalSpawnPointLink_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/SurvivalSpawnPointLink.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivalSpawnPointLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISurvivalSpawnPointLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvivalSpawnPointLink_Statics::ClassParams = {
		&USurvivalSpawnPointLink::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USurvivalSpawnPointLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivalSpawnPointLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivalSpawnPointLink()
	{
		if (!Z_Registration_Info_UClass_USurvivalSpawnPointLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvivalSpawnPointLink.OuterSingleton, Z_Construct_UClass_USurvivalSpawnPointLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USurvivalSpawnPointLink.OuterSingleton;
	}
	template<> GAIASURVIVALMODE_API UClass* StaticClass<USurvivalSpawnPointLink>()
	{
		return USurvivalSpawnPointLink::StaticClass();
	}
	USurvivalSpawnPointLink::USurvivalSpawnPointLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivalSpawnPointLink);
	USurvivalSpawnPointLink::~USurvivalSpawnPointLink() {}
	static FName NAME_USurvivalSpawnPointLink_GetSurvivalSpawnPoint = FName(TEXT("GetSurvivalSpawnPoint"));
	FSurvivalSpawnPoint ISurvivalSpawnPointLink::Execute_GetSurvivalSpawnPoint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalSpawnPointLink::StaticClass()));
		SurvivalSpawnPointLink_eventGetSurvivalSpawnPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalSpawnPointLink_GetSurvivalSpawnPoint);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalSpawnPointLink*)(O->GetNativeInterfaceAddress(USurvivalSpawnPointLink::StaticClass())))
		{
			Parms.ReturnValue = I->GetSurvivalSpawnPoint_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalSpawnPointLink_IsBusy = FName(TEXT("IsBusy"));
	bool ISurvivalSpawnPointLink::Execute_IsBusy(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalSpawnPointLink::StaticClass()));
		SurvivalSpawnPointLink_eventIsBusy_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalSpawnPointLink_IsBusy);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalSpawnPointLink*)(O->GetNativeInterfaceAddress(USurvivalSpawnPointLink::StaticClass())))
		{
			Parms.ReturnValue = I->IsBusy_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalSpawnPointLink_RequestSpawnActor = FName(TEXT("RequestSpawnActor"));
	AActor* ISurvivalSpawnPointLink::Execute_RequestSpawnActor(UObject* O, TSubclassOf<AActor>  Class, FTransform Transform, AActor* Owner, APawn* Instigator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalSpawnPointLink::StaticClass()));
		SurvivalSpawnPointLink_eventRequestSpawnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalSpawnPointLink_RequestSpawnActor);
		if (Func)
		{
			Parms.Class=Class;
			Parms.Transform=Transform;
			Parms.Owner=Owner;
			Parms.Instigator=Instigator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalSpawnPointLink*)(O->GetNativeInterfaceAddress(USurvivalSpawnPointLink::StaticClass())))
		{
			Parms.ReturnValue = I->RequestSpawnActor_Implementation(Class,Transform,Owner,Instigator);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USurvivalSpawnPointLink_SetSurvivalSpawnPoint = FName(TEXT("SetSurvivalSpawnPoint"));
	bool ISurvivalSpawnPointLink::Execute_SetSurvivalSpawnPoint(UObject* O, FSurvivalSpawnPoint Point)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USurvivalSpawnPointLink::StaticClass()));
		SurvivalSpawnPointLink_eventSetSurvivalSpawnPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USurvivalSpawnPointLink_SetSurvivalSpawnPoint);
		if (Func)
		{
			Parms.Point=Point;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISurvivalSpawnPointLink*)(O->GetNativeInterfaceAddress(USurvivalSpawnPointLink::StaticClass())))
		{
			Parms.ReturnValue = I->SetSurvivalSpawnPoint_Implementation(Point);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USurvivalSpawnPointLink, USurvivalSpawnPointLink::StaticClass, TEXT("USurvivalSpawnPointLink"), &Z_Registration_Info_UClass_USurvivalSpawnPointLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvivalSpawnPointLink), 1681724837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_2871677334(TEXT("/Script/GaiaSurvivalMode"),
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_SurvivalSpawnPointLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
