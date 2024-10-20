// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef SENIORPROJECT_AttributeSetBase_generated_h
#error "AttributeSetBase.generated.h already included, missing '#pragma once' in AttributeSetBase.h"
#endif
#define SENIORPROJECT_AttributeSetBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	SENIORPROJECT_API static class UScriptStruct* StaticStruct();


template<> SENIORPROJECT_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MagicPenetration); \
	DECLARE_FUNCTION(execOnRep_Lethality); \
	DECLARE_FUNCTION(execOnRep_LifeSteal); \
	DECLARE_FUNCTION(execOnRep_ManaRegeneration); \
	DECLARE_FUNCTION(execOnRep_HealthRegeneration); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_AttackSpeed); \
	DECLARE_FUNCTION(execOnRep_AbilityHaste); \
	DECLARE_FUNCTION(execOnRep_CriticalChance); \
	DECLARE_FUNCTION(execOnRep_MovementSpeed); \
	DECLARE_FUNCTION(execOnRep_MagicResistance); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_AbilityPower); \
	DECLARE_FUNCTION(execOnRep_AttackDamage); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSetBase(); \
	friend struct Z_Construct_UClass_UAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Mana, \
		AttackDamage, \
		AbilityPower, \
		Armor, \
		MagicResistance, \
		AttackSpeed, \
		AbilityHaste, \
		CriticalChance, \
		MovementSpeed, \
		MaxHealth, \
		MaxMana, \
		HealthRegeneration, \
		ManaRegeneration, \
		Lethality, \
		MagicPenetration, \
		LifeSteal, \
		NETFIELD_REP_END=LifeSteal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSetBase) \
public:


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSetBase(UAttributeSetBase&&); \
	NO_API UAttributeSetBase(const UAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSetBase) \
	NO_API virtual ~UAttributeSetBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_62_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
