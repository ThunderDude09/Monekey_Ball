// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MONKEYBALLGAME_WinZone_generated_h
#error "WinZone.generated.h already included, missing '#pragma once' in WinZone.h"
#endif
#define MONKEYBALLGAME_WinZone_generated_h

#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_SPARSE_DATA
#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWinZone(); \
	friend struct Z_Construct_UClass_AWinZone_Statics; \
public: \
	DECLARE_CLASS(AWinZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBallGame"), NO_API) \
	DECLARE_SERIALIZER(AWinZone)


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWinZone(); \
	friend struct Z_Construct_UClass_AWinZone_Statics; \
public: \
	DECLARE_CLASS(AWinZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBallGame"), NO_API) \
	DECLARE_SERIALIZER(AWinZone)


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWinZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWinZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWinZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWinZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWinZone(AWinZone&&); \
	NO_API AWinZone(const AWinZone&); \
public:


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWinZone(AWinZone&&); \
	NO_API AWinZone(const AWinZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWinZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWinZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWinZone)


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_PRIVATE_PROPERTY_OFFSET
#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_12_PROLOG
#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_SPARSE_DATA \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_RPC_WRAPPERS \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_INCLASS \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_SPARSE_DATA \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_INCLASS_NO_PURE_DECLS \
	MonkeyBallGame_Source_MonkeyBallGame_WinZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONKEYBALLGAME_API UClass* StaticClass<class AWinZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonkeyBallGame_Source_MonkeyBallGame_WinZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
