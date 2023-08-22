// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSurvivalSpawnPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalSpawnPoint();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSurvivalSpawnPoint>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSurvivalSpawnPoint cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint;
class UScriptStruct* FSurvivalSpawnPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivalSpawnPoint, (UObject*)Z_Construct_UPackage__Script_GaiaSurvivalMode(), TEXT("SurvivalSpawnPoint"));
	}
	return Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.OuterSingleton;
}
template<> GAIASURVIVALMODE_API UScriptStruct* StaticStruct<FSurvivalSpawnPoint>()
{
	return FSurvivalSpawnPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AllowedClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedClasses;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AllowedTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnerTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnerTags;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverlapFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlapFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTransformOverride_MetaData[];
#endif
		static void NewProp_bAllowTransformOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTransformOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The struct that holds all of the spawn point details.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "The struct that holds all of the spawn point details." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivalSpawnPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Name for JSON serialization and identification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "Name for JSON serialization and identification." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * The priority for the spawner. \n\x09 * If <=-1 the priority is ignored.\n\x09 * Priorities are managed from lowest to highest.\n\x09 * I.E. 0 has a higher priority than 1.\n\x09 * Higher priority spawners are preferred first, \n\x09 * but will be ignored for lower priority spawners if they are \"busy\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "The priority for the spawner.\nIf <=-1 the priority is ignored.\nPriorities are managed from lowest to highest.\nI.E. 0 has a higher priority than 1.\nHigher priority spawners are preferred first,\nbut will be ignored for lower priority spawners if they are \"busy\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * The time it takes to cooldown after spawning.\n\x09 * If <= 0 there will be no cooldown time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "The time it takes to cooldown after spawning.\nIf <= 0 there will be no cooldown time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, CooldownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_CooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_CooldownTime_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses_Inner = { "AllowedClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Determines if a class if allowed to be spawned by the spawner.\n\x09 * If there are no elements in the array, then it can be ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "Determines if a class if allowed to be spawned by the spawner.\nIf there are no elements in the array, then it can be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, AllowedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags_Inner = { "AllowedTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * Determines if a class with a tag is allowed to be spawned by the spawner.\n\x09 * If there are no elements in the array, then it can be ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "Determines if a class with a tag is allowed to be spawned by the spawner.\nIf there are no elements in the array, then it can be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags = { "AllowedTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, AllowedTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags_Inner = { "SpawnerTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * The tags to give to the spawner for lookups and filtering.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "The tags to give to the spawner for lookups and filtering." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags = { "SpawnerTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, SpawnerTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters_Inner = { "OverlapFilters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * The filters to use when checking for an overlapping actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "The filters to use when checking for an overlapping actor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters = { "OverlapFilters", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalSpawnPoint, OverlapFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride_MetaData[] = {
		{ "Category", "SurvivalSpawnPoint" },
		{ "Comment", "/**\n\x09 * By default, this is used when the SurvivalModeSpawnPoint is the spawn point for the system.\n\x09 * If true, we will take the Transform property in RequestSpawnActor and use that instead of the build in transform for the spawn point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalSpawnPoint.h" },
		{ "ToolTip", "By default, this is used when the SurvivalModeSpawnPoint is the spawn point for the system.\nIf true, we will take the Transform property in RequestSpawnActor and use that instead of the build in transform for the spawn point." },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride_SetBit(void* Obj)
	{
		((FSurvivalSpawnPoint*)Obj)->bAllowTransformOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride = { "bAllowTransformOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSurvivalSpawnPoint), &Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_CooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_AllowedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_SpawnerTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_OverlapFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewProp_bAllowTransformOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SurvivalSpawnPoint",
		sizeof(FSurvivalSpawnPoint),
		alignof(FSurvivalSpawnPoint),
		Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivalSpawnPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.InnerSingleton, Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalSpawnPoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalSpawnPoint_h_Statics::ScriptStructInfo[] = {
		{ FSurvivalSpawnPoint::StaticStruct, Z_Construct_UScriptStruct_FSurvivalSpawnPoint_Statics::NewStructOps, TEXT("SurvivalSpawnPoint"), &Z_Registration_Info_UScriptStruct_SurvivalSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSurvivalSpawnPoint), 3481119757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalSpawnPoint_h_929983624(TEXT("/Script/GaiaSurvivalMode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalSpawnPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalSpawnPoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
