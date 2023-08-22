// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeDetails.h"
#include "GaiaSurvivalMode/Public/Core/FSurvivalModeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSurvivalModeDetails() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeDetails();
	GAIASURVIVALMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeSpawner();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSurvivalModeDetails>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSurvivalModeDetails cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SurvivalModeDetails;
class UScriptStruct* FSurvivalModeDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SurvivalModeDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SurvivalModeDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivalModeDetails, (UObject*)Z_Construct_UPackage__Script_GaiaSurvivalMode(), TEXT("SurvivalModeDetails"));
	}
	return Z_Registration_Info_UScriptStruct_SurvivalModeDetails.OuterSingleton;
}
template<> GAIASURVIVALMODE_API UScriptStruct* StaticStruct<FSurvivalModeDetails>()
{
	return FSurvivalModeDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteRounds_MetaData[];
#endif
		static void NewProp_bInfiniteRounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BossRounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BossRounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BossRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BossRoundEveryXRound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BossRoundEveryXRound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultSpawners;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BossSpawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BossSpawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BossSpawners;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenRounds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStartSound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GameStartSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameEndSound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GameEndSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundStartSound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoundStartSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundEndSound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoundEndSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndGameText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EndGameText;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnerTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnerTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The overall game details.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The overall game details." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivalModeDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * Name for JSON serialization and identification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "Name for JSON serialization and identification." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The widget to show in the HUD.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The widget to show in the HUD." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * If true, the game doesn't stop.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "If true, the game doesn't stop." },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds_SetBit(void* Obj)
	{
		((FSurvivalModeDetails*)Obj)->bInfiniteRounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds = { "bInfiniteRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSurvivalModeDetails), &Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_MaxRounds_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The maximum number of rounds if bInfiniteRounds == false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The maximum number of rounds if bInfiniteRounds == false." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, MaxRounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_MaxRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_MaxRounds_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds_Inner = { "BossRounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * Hardcoded boss rounds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "Hardcoded boss rounds." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds = { "BossRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, BossRounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRoundEveryXRound_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * If greater than 0, handle a boss round every x rounds.\n\x09 * I.E. if the value == 5 we will set a boss round every 5 rounds.\n\x09 * If it's <=0 then the value is ignored and this won't be used \n\x09 * unless the BossRounds property has a matching round..\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "If greater than 0, handle a boss round every x rounds.\nI.E. if the value == 5 we will set a boss round every 5 rounds.\nIf it's <=0 then the value is ignored and this won't be used\nunless the BossRounds property has a matching round.." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRoundEveryXRound = { "BossRoundEveryXRound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, BossRoundEveryXRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRoundEveryXRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRoundEveryXRound_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners_Inner = { "DefaultSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The spawners to use every round, even if it's a boss round.\n\x09 * The only time we wouldn't use these spawners is if the spawner \n\x09 * explicitly excludes a round.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The spawners to use every round, even if it's a boss round.\nThe only time we wouldn't use these spawners is if the spawner\nexplicitly excludes a round." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners = { "DefaultSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, DefaultSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners_MetaData)) }; // 3760272155
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners_Inner = { "BossSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSurvivalModeSpawner, METADATA_PARAMS(nullptr, 0) }; // 3760272155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The spawners to use to spawn bosses.\n\x09 * These are only used during boss rounds\n\x09 * and they will be used in conjunction with the default spawners \n\x09 * if the default spawner is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The spawners to use to spawn bosses.\nThese are only used during boss rounds\nand they will be used in conjunction with the default spawners\nif the default spawner is enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners = { "BossSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, BossSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners_MetaData)) }; // 3760272155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_TimeBetweenRounds_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The time between rounds\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The time between rounds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_TimeBetweenRounds = { "TimeBetweenRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, TimeBetweenRounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_TimeBetweenRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_TimeBetweenRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameStartSound_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The sound to play when the game starts.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The sound to play when the game starts." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameStartSound = { "GameStartSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, GameStartSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameStartSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameStartSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameEndSound_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The sound to play when the game ends.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The sound to play when the game ends." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameEndSound = { "GameEndSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, GameEndSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameEndSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameEndSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundStartSound_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The sound to play when a round starts.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The sound to play when a round starts." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundStartSound = { "RoundStartSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, RoundStartSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundStartSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundStartSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundEndSound_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The sound to play when a round ends.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The sound to play when a round ends." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundEndSound = { "RoundEndSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, RoundEndSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundEndSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundEndSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_EndGameText_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * The text to display at the end of the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "The text to display at the end of the game." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_EndGameText = { "EndGameText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, EndGameText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_EndGameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_EndGameText_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags_Inner = { "SpawnerTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags_MetaData[] = {
		{ "Category", "SurvivalModeDetails" },
		{ "Comment", "/**\n\x09 * Tags used to lookup valid spawners.\n\x09 * I.E. if this is an open world game, you might only want certain spawners in an area to fire off.\n\x09 * This list can be empty.\n\x09 * If it is empty, we just grab all of the actors with the ISurvialSpawnPointLink interface.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/FSurvivalModeDetails.h" },
		{ "ToolTip", "Tags used to lookup valid spawners.\nI.E. if this is an open world game, you might only want certain spawners in an area to fire off.\nThis list can be empty.\nIf it is empty, we just grab all of the actors with the ISurvialSpawnPointLink interface." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags = { "SpawnerTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSurvivalModeDetails, SpawnerTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_bInfiniteRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_MaxRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossRoundEveryXRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_DefaultSpawners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_BossSpawners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_TimeBetweenRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameStartSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_GameEndSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundStartSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_RoundEndSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_EndGameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewProp_SpawnerTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GaiaSurvivalMode,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SurvivalModeDetails",
		sizeof(FSurvivalModeDetails),
		alignof(FSurvivalModeDetails),
		Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivalModeDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_SurvivalModeDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SurvivalModeDetails.InnerSingleton, Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SurvivalModeDetails.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeDetails_h_Statics::ScriptStructInfo[] = {
		{ FSurvivalModeDetails::StaticStruct, Z_Construct_UScriptStruct_FSurvivalModeDetails_Statics::NewStructOps, TEXT("SurvivalModeDetails"), &Z_Registration_Info_UScriptStruct_SurvivalModeDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSurvivalModeDetails), 2451853430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeDetails_h_3852639000(TEXT("/Script/GaiaSurvivalMode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bhramamobile_wkspaces_dungeon_destroyers_ue5_Plugins_GaiaSurvivalMode_Source_GaiaSurvivalMode_Public_Core_FSurvivalModeDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
