// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/HitBox/HitBoxes/CapsuleHitBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCapsuleHitBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ACapsuleHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ACapsuleHitBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACapsuleHitBox ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACapsuleHitBox;
UClass* ACapsuleHitBox::GetPrivateStaticClass()
{
	using TClass = ACapsuleHitBox;
	if (!Z_Registration_Info_UClass_ACapsuleHitBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CapsuleHitBox"),
			Z_Registration_Info_UClass_ACapsuleHitBox.InnerSingleton,
			StaticRegisterNativesACapsuleHitBox,
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
	return Z_Registration_Info_UClass_ACapsuleHitBox.InnerSingleton;
}
UClass* Z_Construct_UClass_ACapsuleHitBox_NoRegister()
{
	return ACapsuleHitBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACapsuleHitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HitBox/HitBoxes/CapsuleHitBox.h" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/CapsuleHitBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[] = {
		{ "Category", "CapsuleHitBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HitCollision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/HitBoxes/CapsuleHitBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HitCollision" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACapsuleHitBox constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACapsuleHitBox constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleHitBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACapsuleHitBox_Statics

// ********** Begin Class ACapsuleHitBox Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsuleHitBox_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACapsuleHitBox, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollision_MetaData), NewProp_CapsuleCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsuleHitBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsuleHitBox_Statics::NewProp_CapsuleCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleHitBox_Statics::PropPointers) < 2048);
// ********** End Class ACapsuleHitBox Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_ACapsuleHitBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseHitBox,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleHitBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleHitBox_Statics::ClassParams = {
	&ACapsuleHitBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACapsuleHitBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleHitBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleHitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ACapsuleHitBox_Statics::Class_MetaDataParams)
};
void ACapsuleHitBox::StaticRegisterNativesACapsuleHitBox()
{
}
UClass* Z_Construct_UClass_ACapsuleHitBox()
{
	if (!Z_Registration_Info_UClass_ACapsuleHitBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACapsuleHitBox.OuterSingleton, Z_Construct_UClass_ACapsuleHitBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACapsuleHitBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACapsuleHitBox);
ACapsuleHitBox::~ACapsuleHitBox() {}
// ********** End Class ACapsuleHitBox *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACapsuleHitBox, ACapsuleHitBox::StaticClass, TEXT("ACapsuleHitBox"), &Z_Registration_Info_UClass_ACapsuleHitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACapsuleHitBox), 2834647589U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h__Script_MyPortfolio_2799098266{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
