// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/HitBox/HitBoxes/SphereHitBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSphereHitBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ASphereHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ASphereHitBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASphereHitBox ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASphereHitBox;
UClass* ASphereHitBox::GetPrivateStaticClass()
{
	using TClass = ASphereHitBox;
	if (!Z_Registration_Info_UClass_ASphereHitBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SphereHitBox"),
			Z_Registration_Info_UClass_ASphereHitBox.InnerSingleton,
			StaticRegisterNativesASphereHitBox,
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
	return Z_Registration_Info_UClass_ASphereHitBox.InnerSingleton;
}
UClass* Z_Construct_UClass_ASphereHitBox_NoRegister()
{
	return ASphereHitBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASphereHitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HitBox/HitBoxes/SphereHitBox.h" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/SphereHitBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "SphereHitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HitCollision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/SphereHitBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HitCollision" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASphereHitBox constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASphereHitBox constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereHitBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASphereHitBox_Statics

// ********** Begin Class ASphereHitBox Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereHitBox_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereHitBox, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereHitBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereHitBox_Statics::NewProp_SphereCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereHitBox_Statics::PropPointers) < 2048);
// ********** End Class ASphereHitBox Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ASphereHitBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseHitBox,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereHitBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphereHitBox_Statics::ClassParams = {
	&ASphereHitBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASphereHitBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASphereHitBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereHitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ASphereHitBox_Statics::Class_MetaDataParams)
};
void ASphereHitBox::StaticRegisterNativesASphereHitBox()
{
}
UClass* Z_Construct_UClass_ASphereHitBox()
{
	if (!Z_Registration_Info_UClass_ASphereHitBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphereHitBox.OuterSingleton, Z_Construct_UClass_ASphereHitBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASphereHitBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASphereHitBox);
ASphereHitBox::~ASphereHitBox() {}
// ********** End Class ASphereHitBox **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASphereHitBox, ASphereHitBox::StaticClass, TEXT("ASphereHitBox"), &Z_Registration_Info_UClass_ASphereHitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphereHitBox), 2586081450U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h__Script_MyPortfolio_1335980845{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
