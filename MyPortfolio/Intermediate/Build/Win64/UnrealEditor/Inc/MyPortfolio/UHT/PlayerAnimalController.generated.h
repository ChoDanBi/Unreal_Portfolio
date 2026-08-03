// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/PlayerController/PlayerAnimalController.h"

#ifdef MYPORTFOLIO_PlayerAnimalController_generated_h
#error "PlayerAnimalController.generated.h already included, missing '#pragma once' in PlayerAnimalController.h"
#endif
#define MYPORTFOLIO_PlayerAnimalController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerAnimalController **************************************************
struct Z_Construct_UClass_APlayerAnimalController_Statics;
MYPORTFOLIO_API UClass* Z_Construct_UClass_APlayerAnimalController_NoRegister();

#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAnimalController(); \
	friend struct ::Z_Construct_UClass_APlayerAnimalController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPORTFOLIO_API UClass* ::Z_Construct_UClass_APlayerAnimalController_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerAnimalController, ABasePlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), Z_Construct_UClass_APlayerAnimalController_NoRegister) \
	DECLARE_SERIALIZER(APlayerAnimalController)


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerAnimalController(APlayerAnimalController&&) = delete; \
	APlayerAnimalController(const APlayerAnimalController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAnimalController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAnimalController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAnimalController) \
	NO_API virtual ~APlayerAnimalController();


#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_12_PROLOG
#define FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerAnimalController;

// ********** End Class APlayerAnimalController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Portfolio_MyPortfolio_Source_MyPortfolio_Controllers_PlayerController_PlayerAnimalController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
