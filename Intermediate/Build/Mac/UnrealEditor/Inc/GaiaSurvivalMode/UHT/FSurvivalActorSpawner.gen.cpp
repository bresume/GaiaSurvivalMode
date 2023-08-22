// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSurvivalActorSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalActorSpawner();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSurvivalActorSpawner>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSurvivalActorSpawner cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SurvivalActorSpawner;
class UScriptStruct* FSurvivalActorSpawner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivalActorSpawner, (UObject*)Z_Construct_UPackage__Script_GaiaSurvivalMode(), TEXT("SurvivalActorSpawner"));
	}
	return Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.OuterSingleton;
}
template<> GAIASURVIVALMODE_API UScriptStruct* StaticStruct<FSurvivalActorSpawner>()
{
	return FSurvivalActorSpawner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Holds info for spawning an actor.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
		{ "ToolTip", "Holds info for spawning an actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivalActorSpawner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalActorSpawner, SpawnedActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SurvivalActorSpawner" },
		{ "Comment", "/**\n\x09 * Name for JSON serialization and identification.\n\x09 * This cannot be \"None\" as this is how the \n\x09 * spawn system checks to see if the spawner is valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
		{ "ToolTip", "Name for JSON serialization and identification.\nThis cannot be \"None\" as this is how the\nspawn system checks to see if the spawner is valid." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalActorSpawner, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "SurvivalActorSpawner" },
		{ "Comment", "/**\n\x09 * The class to spawn.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
		{ "ToolTip", "The class to spawn." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalActorSpawner, Class), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_NumToSpawn_MetaData[] = {
		{ "Category", "SurvivalActorSpawner" },
		{ "Comment", "/**\n\x09 * The number of times the actor is spawned.\n\x09 * For loop takes num to spawn -1 so it should be > 0.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
		{ "ToolTip", "The number of times the actor is spawned.\nFor loop takes num to spawn -1 so it should be > 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_NumToSpawn = { "NumToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalActorSpawner, NumToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_NumToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_NumToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnDelayTime_MetaData[] = {
		{ "Category", "SurvivalActorSpawner" },
		{ "Comment", "/**\n\x09 * The time it takes between each spawn.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalActorSpawner.h" },
		{ "ToolTip", "The time it takes between each spawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnDelayTime = { "SpawnDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalActorSpawner, SpawnDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnDelayTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_NumToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewProp_SpawnDelayTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SurvivalActorSpawner",
		sizeof(FSurvivalActorSpawner),
		alignof(FSurvivalActorSpawner),
		Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivalActorSpawner()
	{
		if (!Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.InnerSingleton, Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SurvivalActorSpawner.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalActorSpawner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalActorSpawner_h_Statics::ScriptStructInfo[] = {
		{ FSurvivalActorSpawner::StaticStruct, Z_Construct_UScriptStruct_FSurvivalActorSpawner_Statics::NewStructOps, TEXT("SurvivalActorSpawner"), &Z_Registration_Info_UScriptStruct_SurvivalActorSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSurvivalActorSpawner), 313437834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalActorSpawner_h_1428956398(TEXT("/Script/GaiaSurvivalMode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalActorSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalActorSpawner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
