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
#ifdef MONKEYBALLGAME_KillZone_generated_h
#error "KillZone.generated.h already included, missing '#pragma once' in KillZone.h"
#endif
#define MONKEYBALLGAME_KillZone_generated_h

#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_SPARSE_DATA
#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKillZone(); \
	friend struct Z_Construct_UClass_AKillZone_Statics; \
public: \
	DECLARE_CLASS(AKillZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBallGame"), NO_API) \
	DECLARE_SERIALIZER(AKillZone)


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAKillZone(); \
	friend struct Z_Construct_UClass_AKillZone_Statics; \
public: \
	DECLARE_CLASS(AKillZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBallGame"), NO_API) \
	DECLARE_SERIALIZER(AKillZone)


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKillZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKillZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillZone(AKillZone&&); \
	NO_API AKillZone(const AKillZone&); \
public:


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillZone(AKillZone&&); \
	NO_API AKillZone(const AKillZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKillZone)


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_PRIVATE_PROPERTY_OFFSET
#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_12_PROLOG
#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_SPARSE_DATA \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_RPC_WRAPPERS \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_INCLASS \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_SPARSE_DATA \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_INCLASS_NO_PURE_DECLS \
	MonkeyBallGame_Source_MonkeyBallGame_KillZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONKEYBALLGAME_API UClass* StaticClass<class AKillZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonkeyBallGame_Source_MonkeyBallGame_KillZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
