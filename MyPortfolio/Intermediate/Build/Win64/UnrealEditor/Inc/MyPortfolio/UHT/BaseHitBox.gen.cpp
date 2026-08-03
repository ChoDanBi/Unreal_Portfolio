// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/HitBox/BaseHitBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseHitBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox();
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseHitBox Function DebugHitBox *****************************************
struct Z_Construct_UFunction_ABaseHitBox_DebugHitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HitBox/BaseHitBox.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugHitBox constinit property declarations ***************************
// ********** End Function DebugHitBox constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHitBox_DebugHitBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseHitBox, nullptr, "DebugHitBox", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHitBox_DebugHitBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHitBox_DebugHitBox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseHitBox_DebugHitBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHitBox_DebugHitBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHitBox::execDebugHitBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugHitBox();
	P_NATIVE_END;
}
// ********** End Class ABaseHitBox Function DebugHitBox *******************************************

// ********** Begin Class ABaseHitBox **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseHitBox;
UClass* ABaseHitBox::GetPrivateStaticClass()
{
	using TClass = ABaseHitBox;
	if (!Z_Registration_Info_UClass_ABaseHitBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseHitBox"),
			Z_Registration_Info_UClass_ABaseHitBox.InnerSingleton,
			StaticRegisterNativesABaseHitBox,
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
	return Z_Registration_Info_UClass_ABaseHitBox.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseHitBox_NoRegister()
{
	return ABaseHitBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseHitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitBox/BaseHitBox.h" },
		{ "ModuleRelativePath", "HitBox/BaseHitBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "Category", "BaseHitBox" },
		{ "ModuleRelativePath", "HitBox/BaseHitBox.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABaseHitBox constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABaseHitBox constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DebugHitBox"), .Pointer = &ABaseHitBox::execDebugHitBox },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseHitBox_DebugHitBox, "DebugHitBox" }, // 3710717754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseHitBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABaseHitBox_Statics

// ********** Begin Class ABaseHitBox Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseHitBox_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseHitBox, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseHitBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseHitBox_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHitBox_Statics::PropPointers) < 2048);
// ********** End Class ABaseHitBox Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_ABaseHitBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHitBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseHitBox_Statics::ClassParams = {
	&ABaseHitBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseHitBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHitBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseHitBox_Statics::Class_MetaDataParams)
};
void ABaseHitBox::StaticRegisterNativesABaseHitBox()
{
	UClass* Class = ABaseHitBox::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABaseHitBox_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABaseHitBox()
{
	if (!Z_Registration_Info_UClass_ABaseHitBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseHitBox.OuterSingleton, Z_Construct_UClass_ABaseHitBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseHitBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABaseHitBox);
ABaseHitBox::~ABaseHitBox() {}
// ********** End Class ABaseHitBox ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h__Script_MyPortfolio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseHitBox, ABaseHitBox::StaticClass, TEXT("ABaseHitBox"), &Z_Registration_Info_UClass_ABaseHitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseHitBox), 1134558360U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h__Script_MyPortfolio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h__Script_MyPortfolio_722932576{
	TEXT("/Script/MyPortfolio"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h__Script_MyPortfolio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h__Script_MyPortfolio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
