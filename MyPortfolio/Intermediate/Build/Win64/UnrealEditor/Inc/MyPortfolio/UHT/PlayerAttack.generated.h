// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Players/PlayerAttack.h"

#ifdef MYPORTFOLIO_PlayerAttack_generated_h
#error "PlayerAttack.generated.h already included, missing '#pragma once' in PlayerAttack.h"
#endif
#define MYPORTFOLIO_PlayerAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerAttack ************************************************************
struct Z_Construct_UClass_APlayerAttack_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAttack_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAttack(); \
	friend struct ::Z_Construct_UClass_APlayerAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_APlayerAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerAttack, AMyPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_APlayerAttack_NoRegister) \
	DECLARE_SERIALIZER(APlayerAttack)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerAttack(APlayerAttack&&) = delete; \
	APlayerAttack(const APlayerAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAttack) \
	NO_API virtual ~APlayerAttack();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_12_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerAttack;

// ********** End Class APlayerAttack **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_PlayerAttack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
