// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SENIORPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SENIORPROJECT_MyCharacter_generated_h

#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwordTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave); \
	DECLARE_FUNCTION(execPlayFootSound);


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwordTrace); \
	DECLARE_FUNCTION(execHurt); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execComboAttackSave); \
	DECLARE_FUNCTION(execPlayFootSound);


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_16_PROLOG
#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_INCLASS \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_Player_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
