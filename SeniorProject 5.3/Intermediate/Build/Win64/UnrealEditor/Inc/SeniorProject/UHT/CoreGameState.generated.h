// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSetting/CoreGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyCharacter; struct FGameplayTag;
class APlayerState;
class UObject;
class UTexture;
struct FGameplayTag;
#ifdef SENIORPROJECT_CoreGameState_generated_h
#error "CoreGameState.generated.h already included, missing '#pragma once' in CoreGameState.h"
#endif
#define SENIORPROJECT_CoreGameState_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerInfo_Statics; \
	SENIORPROJECT_API static class UScriptStruct* StaticStruct();


template<> SENIORPROJECT_API UScriptStruct* StaticStruct<struct FPlayerInfo>();

#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerUpdateTurretStates_Implementation(FGameplayTag const& LineTag, FGameplayTag const& TurretLevelTag, FGameplayTag const& TeamTag, bool bIsDestroy); \
	virtual void ServerPlayerReady_Implementation(APlayerState* ReadyUser); \
	virtual void MulticastPlayerReady_Implementation(APlayerState* InPS); \
	virtual void MulticastPlayerCharacterChanged_Implementation(APlayerState* InPS, UClass* SelectedCharacter, UTexture* CharacterImg); \
	virtual void MulticastNewPlayerEntranced_Implementation(); \
 \
	DECLARE_FUNCTION(execIsInhibitorDestroyed); \
	DECLARE_FUNCTION(execGetValidTargetTurret); \
	DECLARE_FUNCTION(execServerUpdateTurretStates); \
	DECLARE_FUNCTION(execGetSelectedPlayerClass); \
	DECLARE_FUNCTION(execServerPlayerReady); \
	DECLARE_FUNCTION(execMulticastPlayerReady); \
	DECLARE_FUNCTION(execMulticastPlayerCharacterChanged); \
	DECLARE_FUNCTION(execMulticastNewPlayerEntranced);


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreGameState(); \
	friend struct Z_Construct_UClass_ACoreGameState_Statics; \
public: \
	DECLARE_CLASS(ACoreGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ACoreGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerInfos=NETFIELD_REP_START, \
		ReadyUsers, \
		RedTeam, \
		BlueTeam, \
		BlueTeamTurretStates, \
		RedTeamTurretStates, \
		GameProcess, \
		NETFIELD_REP_END=GameProcess	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoreGameState(ACoreGameState&&); \
	NO_API ACoreGameState(const ACoreGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoreGameState) \
	NO_API virtual ~ACoreGameState();


#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_68_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ACoreGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_GameSetting_CoreGameState_h


#define FOREACH_ENUM_EGAMEPROCESS(op) \
	op(EGameProcess::CharacterSelectSession) \
	op(EGameProcess::GameStartSession) \
	op(EGameProcess::GameEndSession) 

enum class EGameProcess : uint8;
template<> struct TIsUEnumClass<EGameProcess> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EGameProcess>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
