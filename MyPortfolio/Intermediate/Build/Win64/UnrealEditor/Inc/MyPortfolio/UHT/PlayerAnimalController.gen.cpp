// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Controllers/PlayerController/PlayerAnimalController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerAnimalController() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABasePlayerController();
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAnimalController();
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAnimalController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerAnimalController **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerAnimalController;
UClass* APlayerAnimalController::GetPrivateStaticClass()
{
	using TClass = APlayerAnimalController;
	if (!Z_Registration_Info_UClass_APlayerAnimalController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerAnimalController"),
			Z_Registration_Info_UClass_APlayerAnimalController.InnerSingleton,
			StaticRegisterNativesAPlayerAnimalController,
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
	return Z_Registration_Info_UClass_APlayerAnimalController.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerAnimalController_NoRegister()
{
	return APlayerAnimalController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerAnimalController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/PlayerController/PlayerAnimalController.h" },
		{ "ModuleRelativePath", "Controllers/PlayerController/PlayerAnimalController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/PlayerController/PlayerAnimalController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APlayerAnimalController constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APlayerAnimalController constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAnimalController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlayerAnimalController_Statics

// ********** Begin Class APlayerAnimalController Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAnimalController_Statics::NewProp_GuardAction = { "GuardAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerAnimalController, GuardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardAction_MetaData), NewProp_GuardAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAnimalController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnimalController_Statics::NewProp_GuardAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAnimalController_Statics::PropPointers) < 2048);
// ********** End Class APlayerAnimalController Property Definitions *******************************
UObject* (*const Z_Construct_UClass_APlayerAnimalController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAnimalController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAnimalController_Statics::ClassParams = {
	&APlayerAnimalController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerAnimalController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAnimalController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAnimalController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAnimalController_Statics::Class_MetaDataParams)
};
void APlayerAnimalController::StaticRegisterNativesAPlayerAnimalController()
{
}
UClass* Z_Construct_UClass_APlayerAnimalController()
{
	if (!Z_Registration_Info_UClass_APlayerAnimalController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAnimalController.OuterSingleton, Z_Construct_UClass_APlayerAnimalController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAnimalController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlayerAnimalController);
APlayerAnimalController::~APlayerAnimalController() {}
// ********** End Class APlayerAnimalController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAnimalController, APlayerAnimalController::StaticClass, TEXT("APlayerAnimalController"), &Z_Registration_Info_UClass_APlayerAnimalController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAnimalController), 3522910821U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h__Script_MyPortfolio_934013610{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
