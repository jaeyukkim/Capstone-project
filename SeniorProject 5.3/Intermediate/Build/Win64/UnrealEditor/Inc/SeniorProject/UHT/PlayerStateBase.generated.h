// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBase/PlayerStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SENIORPROJECT_PlayerStateBase_generated_h
#error "PlayerStateBase.generated.h already included, missing '#pragma once' in PlayerStateBase.h"
#endif
#define SENIORPROJECT_PlayerStateBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SpellPoints); \
	DECLARE_FUNCTION(execOnRep_Gold); \
	DECLARE_FUNCTION(execOnRep_XP); \
	DECLARE_FUNCTION(execOnRep_Level); \
	DECLARE_FUNCTION(execSetPlayerCharacterClass); \
	DECLARE_FUNCTION(execBroadcastPlayerStat);


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerStateBase(); \
	friend struct Z_Construct_UClass_APlayerStateBase_Statics; \
public: \
	DECLARE_CLASS(APlayerStateBase, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerStateBase) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerStateBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerCharacterClass=NETFIELD_REP_START, \
		LobbyCharacterClass, \
		GameProcess, \
		Level, \
		XP, \
		SpellPoints, \
		Gold, \
		TeamName, \
		NETFIELD_REP_END=TeamName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerStateBase(APlayerStateBase&&); \
	NO_API APlayerStateBase(const APlayerStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerStateBase) \
	NO_API virtual ~APlayerStateBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_26_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class APlayerStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_PlayerStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
