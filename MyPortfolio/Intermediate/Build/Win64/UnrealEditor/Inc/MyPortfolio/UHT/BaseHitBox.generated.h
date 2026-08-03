// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBox/BaseHitBox.h"

#ifdef MYPORTFOLIO_BaseHitBox_generated_h
#error "BaseHitBox.generated.h already included, missing '#pragma once' in BaseHitBox.h"
#endif
#define MYPORTFOLIO_BaseHitBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseHitBox **************************************************************
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugHitBox);


struct Z_Construct_UClass_ABaseHitBox_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABaseHitBox_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseHitBox(); \
	friend struct ::Z_Construct_UClass_ABaseHitBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_ABaseHitBox_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseHitBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_ABaseHitBox_NoRegister) \
	DECLARE_SERIALIZER(ABaseHitBox)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseHitBox(ABaseHitBox&&) = delete; \
	ABaseHitBox(const ABaseHitBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseHitBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseHitBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseHitBox) \
	NO_API virtual ~ABaseHitBox();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_9_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseHitBox;

// ********** End Class ABaseHitBox ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_BaseHitBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
