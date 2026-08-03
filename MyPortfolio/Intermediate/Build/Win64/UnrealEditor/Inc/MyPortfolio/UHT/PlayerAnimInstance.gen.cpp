// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Animations/PlayerAnim/PlayerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
MYPORTFOLIO_API UClass* Z_Construct_UClass_UBaseAnimInstance();
MYPORTFOLIO_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
MYPORTFOLIO_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerAnimInstance ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerAnimInstance;
UClass* UPlayerAnimInstance::GetPrivateStaticClass()
{
	using TClass = UPlayerAnimInstance;
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerAnimInstance"),
			Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton,
			StaticRegisterNativesUPlayerAnimInstance,
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
	return Z_Registration_Info_UClass_UPlayerAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/PlayerAnim/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Animations/PlayerAnim/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGuarding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character Movement" },
		{ "ModuleRelativePath", "Animations/PlayerAnim/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPlayerAnimInstance constinit property declarations **********************
	static void NewProp_bIsGuarding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGuarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPlayerAnimInstance constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPlayerAnimInstance_Statics

// ********** Begin Class UPlayerAnimInstance Property Definitions *********************************
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsGuarding_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bIsGuarding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsGuarding = { "bIsGuarding", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsGuarding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGuarding_MetaData), NewProp_bIsGuarding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsGuarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UPlayerAnimInstance Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
}
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// ********** End Class UPlayerAnimInstance ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Animations_PlayerAnim_PlayerAnimInstance_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 822593516U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Animations_PlayerAnim_PlayerAnimInstance_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Animations_PlayerAnim_PlayerAnimInstance_h__Script_MyPortfolio_1019305277{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Animations_PlayerAnim_PlayerAnimInstance_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Animations_PlayerAnim_PlayerAnimInstance_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
