// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLISIONS_CollidingPawn_generated_h
#error "CollidingPawn.generated.h already included, missing '#pragma once' in CollidingPawn.h"
#endif
#define COLLISIONS_CollidingPawn_generated_h

#define Collisions_Source_Collisions_CollidingPawn_h_15_RPC_WRAPPERS
#define Collisions_Source_Collisions_CollidingPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Collisions_Source_Collisions_CollidingPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define Collisions_Source_Collisions_CollidingPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACollidingPawn(); \
	friend struct Z_Construct_UClass_ACollidingPawn_Statics; \
public: \
	DECLARE_CLASS(ACollidingPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(ACollidingPawn)


#define Collisions_Source_Collisions_CollidingPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollidingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollidingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public:


#define Collisions_Source_Collisions_CollidingPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollidingPawn(ACollidingPawn&&); \
	NO_API ACollidingPawn(const ACollidingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollidingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollidingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollidingPawn)


#define Collisions_Source_Collisions_CollidingPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define Collisions_Source_Collisions_CollidingPawn_h_12_PROLOG
#define Collisions_Source_Collisions_CollidingPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_CollidingPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_CollidingPawn_h_15_RPC_WRAPPERS \
	Collisions_Source_Collisions_CollidingPawn_h_15_INCLASS \
	Collisions_Source_Collisions_CollidingPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collisions_Source_Collisions_CollidingPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_CollidingPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_CollidingPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Collisions_Source_Collisions_CollidingPawn_h_15_INCLASS_NO_PURE_DECLS \
	Collisions_Source_Collisions_CollidingPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLISIONS_API UClass* StaticClass<class ACollidingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collisions_Source_Collisions_CollidingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
