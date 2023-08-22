// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaiaSurvivalMode_init() {}
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature();
	GAIASURVIVALMODE_API UFunction* Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GaiaSurvivalMode;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GaiaSurvivalMode()
	{
		if (!Z_Registration_Info_UPackage__Script_GaiaSurvivalMode.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GaiaSurvivalMode_GameStart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GaiaSurvivalMode_OnEnemyDestroyed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GaiaSurvivalMode_RoundStart__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GaiaSurvivalMode",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC19A4CD,
				0x7190FC3E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GaiaSurvivalMode.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GaiaSurvivalMode.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GaiaSurvivalMode(Z_Construct_UPackage__Script_GaiaSurvivalMode, TEXT("/Script/GaiaSurvivalMode"), Z_Registration_Info_UPackage__Script_GaiaSurvivalMode, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC19A4CD, 0x7190FC3E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
