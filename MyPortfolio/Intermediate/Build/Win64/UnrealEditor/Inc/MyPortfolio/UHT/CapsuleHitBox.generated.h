// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBox/HitBoxes/CapsuleHitBox.h"

#ifdef MYPORTFOLIO_CapsuleHitBox_generated_h
#error "CapsuleHitBox.generated.h already included, missing '#pragma once' in CapsuleHitBox.h"
#endif
#define MYPORTFOLIO_CapsuleHitBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACapsuleHitBox ***********************************************************
struct Z_Construct_UClass_ACapsuleHitBox_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_ACapsuleHitBox_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapsuleHitBox(); \
	friend struct ::Z_Construct_UClass_ACapsuleHitBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_ACapsuleHitBox_NoRegister(); \
public: \
	DECLARE_CLASS2(ACapsuleHitBox, ABaseHitBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_ACapsuleHitBox_NoRegister) \
	DECLARE_SERIALIZER(ACapsuleHitBox)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACapsuleHitBox(ACapsuleHitBox&&) = delete; \
	ACapsuleHitBox(const ACapsuleHitBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsuleHitBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsuleHitBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapsuleHitBox) \
	NO_API virtual ~ACapsuleHitBox();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_13_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACapsuleHitBox;

// ********** End Class ACapsuleHitBox *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_CapsuleHitBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
