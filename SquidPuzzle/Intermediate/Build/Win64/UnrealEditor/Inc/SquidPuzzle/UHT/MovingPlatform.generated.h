// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingPlatform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQUIDPUZZLE_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define SQUIDPUZZLE_MovingPlatform_generated_h

#define FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SquidPuzzle"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingPlatform(AMovingPlatform&&); \
	AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform) \
	NO_API virtual ~AMovingPlatform();


#define FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_9_PROLOG
#define FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_12_INCLASS_NO_PURE_DECLS \
	FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQUIDPUZZLE_API UClass* StaticClass<class AMovingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SquidPuzzle_Source_SquidPuzzle_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
