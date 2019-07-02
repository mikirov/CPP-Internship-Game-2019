// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLISIONS_MyMovementComponent_generated_h
#error "MyMovementComponent.generated.h already included, missing '#pragma once' in MyMovementComponent.h"
#endif
#define COLLISIONS_MyMovementComponent_generated_h

#define Collisions_Source_Collisions_MyMovementComponent_h_13_RPC_WRAPPERS
#define Collisions_Source_Collisions_MyMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Collisions_Source_Collisions_MyMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyMovementComponent(); \
	friend struct Z_Construct_UClass_UMyMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMyMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(UMyMovementComponent)


#define Collisions_Source_Collisions_MyMovementComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMyMovementComponent(); \
	friend struct Z_Construct_UClass_UMyMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMyMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collisions"), NO_API) \
	DECLARE_SERIALIZER(UMyMovementComponent)


#define Collisions_Source_Collisions_MyMovementComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyMovementComponent(UMyMovementComponent&&); \
	NO_API UMyMovementComponent(const UMyMovementComponent&); \
public:


#define Collisions_Source_Collisions_MyMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyMovementComponent(UMyMovementComponent&&); \
	NO_API UMyMovementComponent(const UMyMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyMovementComponent)


#define Collisions_Source_Collisions_MyMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Collisions_Source_Collisions_MyMovementComponent_h_10_PROLOG
#define Collisions_Source_Collisions_MyMovementComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_MyMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_MyMovementComponent_h_13_RPC_WRAPPERS \
	Collisions_Source_Collisions_MyMovementComponent_h_13_INCLASS \
	Collisions_Source_Collisions_MyMovementComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collisions_Source_Collisions_MyMovementComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collisions_Source_Collisions_MyMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Collisions_Source_Collisions_MyMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Collisions_Source_Collisions_MyMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
	Collisions_Source_Collisions_MyMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLISIONS_API UClass* StaticClass<class UMyMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collisions_Source_Collisions_MyMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
