// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Characters/Players/PlayerAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerAttack() {}

// ********** Begin Cross Module References ********************************************************
MYPORTFOLIO_API UClass* Z_Construct_UClass_AMyPlayer();
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAttack();
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerAttack ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerAttack;
UClass* APlayerAttack::GetPrivateStaticClass()
{
	using TClass = APlayerAttack;
	if (!Z_Registration_Info_UClass_APlayerAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerAttack"),
			Z_Registration_Info_UClass_APlayerAttack.InnerSingleton,
			StaticRegisterNativesAPlayerAttack,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APlayerAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerAttack_NoRegister()
{
	return APlayerAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Players/PlayerAttack.h" },
		{ "ModuleRelativePath", "Characters/Players/PlayerAttack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APlayerAttack constinit property declarations ****************************
// ********** End Class APlayerAttack constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlayerAttack_Statics
UObject* (*const Z_Construct_UClass_APlayerAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAttack_Statics::ClassParams = {
	&APlayerAttack::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAttack_Statics::Class_MetaDataParams)
};
void APlayerAttack::StaticRegisterNativesAPlayerAttack()
{
}
UClass* Z_Construct_UClass_APlayerAttack()
{
	if (!Z_Registration_Info_UClass_APlayerAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAttack.OuterSingleton, Z_Construct_UClass_APlayerAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlayerAttack);
APlayerAttack::~APlayerAttack() {}
// ********** End Class APlayerAttack **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAttack, APlayerAttack::StaticClass, TEXT("APlayerAttack"), &Z_Registration_Info_UClass_APlayerAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAttack), 2330493535U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h__Script_MyPortfolio_1017201209{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
