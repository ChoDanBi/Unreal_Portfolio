// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBox/HitBoxes/SphereHitBox.h"

#ifdef MYPORTFOLIO_SphereHitBox_generated_h
#error "SphereHitBox.generated.h already included, missing '#pragma once' in SphereHitBox.h"
#endif
#define MYPORTFOLIO_SphereHitBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASphereHitBox ************************************************************
struct Z_Construct_UClass_ASphereHitBox_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_ASphereHitBox_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASphereHitBox(); \
	friend struct ::Z_Construct_UClass_ASphereHitBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_ASphereHitBox_NoRegister(); \
public: \
	DECLARE_CLASS2(ASphereHitBox, ABaseHitBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_ASphereHitBox_NoRegister) \
	DECLARE_SERIALIZER(ASphereHitBox)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASphereHitBox(ASphereHitBox&&) = delete; \
	ASphereHitBox(const ASphereHitBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASphereHitBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereHitBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASphereHitBox) \
	NO_API virtual ~ASphereHitBox();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_13_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASphereHitBox;

// ********** End Class ASphereHitBox **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_HitBox_HitBoxes_SphereHitBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
