// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/HitBox/HitBoxes/BoxHitBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBoxHitBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABoxHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABoxHitBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABoxHitBox ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABoxHitBox;
UClass* ABoxHitBox::GetPrivateStaticClass()
{
	using TClass = ABoxHitBox;
	if (!Z_Registration_Info_UClass_ABoxHitBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BoxHitBox"),
			Z_Registration_Info_UClass_ABoxHitBox.InnerSingleton,
			StaticRegisterNativesABoxHitBox,
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
	return Z_Registration_Info_UClass_ABoxHitBox.InnerSingleton;
}
UClass* Z_Construct_UClass_ABoxHitBox_NoRegister()
{
	return ABoxHitBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABoxHitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitBox/HitBoxes/BoxHitBox.h" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/BoxHitBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "BoxHitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HitCollision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/BoxHitBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HitCollision" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ABoxHitBox constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABoxHitBox constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxHitBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABoxHitBox_Statics

// ********** Begin Class ABoxHitBox Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxHitBox_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxHitBox, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxHitBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxHitBox_Statics::NewProp_BoxCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxHitBox_Statics::PropPointers) < 2048);
// ********** End Class ABoxHitBox Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ABoxHitBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseHitBox,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxHitBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxHitBox_Statics::ClassParams = {
	&ABoxHitBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoxHitBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoxHitBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxHitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoxHitBox_Statics::Class_MetaDataParams)
};
void ABoxHitBox::StaticRegisterNativesABoxHitBox()
{
}
UClass* Z_Construct_UClass_ABoxHitBox()
{
	if (!Z_Registration_Info_UClass_ABoxHitBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxHitBox.OuterSingleton, Z_Construct_UClass_ABoxHitBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoxHitBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABoxHitBox);
ABoxHitBox::~ABoxHitBox() {}
// ********** End Class ABoxHitBox *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoxHitBox, ABoxHitBox::StaticClass, TEXT("ABoxHitBox"), &Z_Registration_Info_UClass_ABoxHitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxHitBox), 2067130550U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h__Script_MyPortfolio_992662079{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
