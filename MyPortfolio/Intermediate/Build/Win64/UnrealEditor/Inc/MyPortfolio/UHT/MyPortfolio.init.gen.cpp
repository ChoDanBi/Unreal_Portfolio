// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPortfolio_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyPortfolio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyPortfolio()
	{
		if (!Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/MyPortfolio",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xF61A361E,
			0xAB42C0AC,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyPortfolio(Z_Construct_UPackage__Script_MyPortfolio, TEXT("/Script/MyPortfolio"), Z_Registration_Info_UPackage__Script_MyPortfolio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF61A361E, 0xAB42C0AC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
