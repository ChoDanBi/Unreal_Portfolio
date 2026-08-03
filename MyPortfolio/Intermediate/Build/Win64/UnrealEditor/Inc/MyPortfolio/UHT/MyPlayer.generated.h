// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Players/MyPlayer.h"

#ifdef MYPORTFOLIO_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define MYPORTFOLIO_MyPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPlayer ****************************************************************
struct Z_Construct_UClass_AMyPlayer_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct ::Z_Construct_UClass_AMyPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_AMyPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_AMyPlayer_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&) = delete; \
	AMyPlayer(const AMyPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_17_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayer;

// ********** End Class AMyPlayer ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Characters_Players_MyPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
