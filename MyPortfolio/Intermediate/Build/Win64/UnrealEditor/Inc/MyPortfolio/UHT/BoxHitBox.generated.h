// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBox/HitBoxes/BoxHitBox.h"

#ifdef MYPORTFOLIO_BoxHitBox_generated_h
#error "BoxHitBox.generated.h already included, missing '#pragma once' in BoxHitBox.h"
#endif
#define MYPORTFOLIO_BoxHitBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABoxHitBox ***************************************************************
struct Z_Construct_UClass_ABoxHitBox_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_ABoxHitBox_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxHitBox(); \
	friend struct ::Z_Construct_UClass_ABoxHitBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_ABoxHitBox_NoRegister(); \
public: \
	DECLARE_CLASS2(ABoxHitBox, ABaseHitBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_ABoxHitBox_NoRegister) \
	DECLARE_SERIALIZER(ABoxHitBox)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABoxHitBox(ABoxHitBox&&) = delete; \
	ABoxHitBox(const ABoxHitBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxHitBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxHitBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxHitBox) \
	NO_API virtual ~ABoxHitBox();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_8_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABoxHitBox;

// ********** End Class ABoxHitBox *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_BoxHitBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
