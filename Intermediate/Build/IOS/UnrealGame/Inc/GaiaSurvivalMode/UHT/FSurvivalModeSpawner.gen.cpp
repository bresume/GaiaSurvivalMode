// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeSpawner.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSurvivalModeSpawner() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalActorSpawner();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeSpawner();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSurvivalModeSpawner>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSurvivalModeSpawner cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SurvivalModeSpawner;
class UScriptStruct* FSurvivalModeSpawner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivalModeSpawner, (UObject*)Z_Construct_UPackage__Script_GaiaSurvivalMode(), TEXT("SurvivalModeSpawner"));
	}
	return Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.OuterSingleton;
}
template<> GAIASURVIVALMODE_API UScriptStruct* StaticStruct<FSurvivalModeSpawner>()
{
	return FSurvivalModeSpawner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsToSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToSpawn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IgnoreRounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreRounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreEveryXRounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IgnoreEveryXRounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveRounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivateEveryXRounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivateEveryXRounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The spawner details that are linked to each round.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "The spawner details that are linked to each round." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivalModeSpawner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Name for JSON serialization and identification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Name for JSON serialization and identification." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn_Inner = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalActorSpawner, METADATA_PARAMS(nullptr, 0) }; // 313437834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Actors to spawn.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Actors to spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, ActorsToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn_MetaData)) }; // 313437834
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds_Inner = { "IgnoreRounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Specific rounds for this spawner to ignore.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Specific rounds for this spawner to ignore." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds = { "IgnoreRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, IgnoreRounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreEveryXRounds_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Ignore the round every x rounds.\n\x09 * I.E. if the value == 5 we won't use this spawner every 5 rounds.\n\x09 * If it's <=0 then the value is ignored and this won't be used \n\x09 * unless the IgnoreRounds property has a matching round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Ignore the round every x rounds.\nI.E. if the value == 5 we won't use this spawner every 5 rounds.\nIf it's <=0 then the value is ignored and this won't be used\nunless the IgnoreRounds property has a matching round." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreEveryXRounds = { "IgnoreEveryXRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, IgnoreEveryXRounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreEveryXRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreEveryXRounds_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds_Inner = { "ActiveRounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Specific rounds for this spawner to be activated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Specific rounds for this spawner to be activated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds = { "ActiveRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, ActiveRounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActivateEveryXRounds_MetaData[] = {
		{ "Category", "SurvivalModeSpawner" },
		{ "Comment", "/**\n\x09 * Active on the round every x rounds.\n\x09 * I.E. if the value == 5 we will use this spawner every 5 rounds.\n\x09 * If it's <=0 then the value is ignored\n\x09 * unless the ActiveRounds property has a matching round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeSpawner.h" },
		{ "ToolTip", "Active on the round every x rounds.\nI.E. if the value == 5 we will use this spawner every 5 rounds.\nIf it's <=0 then the value is ignored\nunless the ActiveRounds property has a matching round." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActivateEveryXRounds = { "ActivateEveryXRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeSpawner, ActivateEveryXRounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActivateEveryXRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActivateEveryXRounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActorsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_IgnoreEveryXRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActiveRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewProp_ActivateEveryXRounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SurvivalModeSpawner",
		sizeof(FSurvivalModeSpawner),
		alignof(FSurvivalModeSpawner),
		Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeSpawner()
	{
		if (!Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.InnerSingleton, Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SurvivalModeSpawner.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeSpawner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeSpawner_h_Statics::ScriptStructInfo[] = {
		{ FSurvivalModeSpawner::StaticStruct, Z_Construct_UScriptStruct_FSurvivalModeSpawner_Statics::NewStructOps, TEXT("SurvivalModeSpawner"), &Z_Registration_Info_UScriptStruct_SurvivalModeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSurvivalModeSpawner), 3760272155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeSpawner_h_2315606623(TEXT("/Script/GaiaSurvivalMode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeSpawner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeSpawner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
