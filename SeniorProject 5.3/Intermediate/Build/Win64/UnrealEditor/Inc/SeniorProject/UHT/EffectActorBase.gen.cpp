// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Actor/EffectActorBase.h"
#include "ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectActorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADamageActorBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AEffectActorBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AEffectActorBase_NoRegister();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy();
	SENIORPROJECT_API UEnum* Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
	static UEnum* EEffectApplicationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("EEffectApplicationPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EEffectApplicationPolicy>()
	{
		return EEffectApplicationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enumerators[] = {
		{ "EEffectApplicationPolicy::ApplyOnOverlap", (int64)EEffectApplicationPolicy::ApplyOnOverlap },
		{ "EEffectApplicationPolicy::ApplyOnEndOverlap", (int64)EEffectApplicationPolicy::ApplyOnEndOverlap },
		{ "EEffectApplicationPolicy::DoNotApply", (int64)EEffectApplicationPolicy::DoNotApply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ApplyOnEndOverlap.Name", "EEffectApplicationPolicy::ApplyOnEndOverlap" },
		{ "ApplyOnOverlap.Name", "EEffectApplicationPolicy::ApplyOnOverlap" },
		{ "BlueprintType", "true" },
		{ "DoNotApply.Name", "EEffectApplicationPolicy::DoNotApply" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EEffectApplicationPolicy",
		"EEffectApplicationPolicy",
		Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
	static UEnum* EEffectRemovalPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("EEffectRemovalPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
	}
	template<> SENIORPROJECT_API UEnum* StaticEnum<EEffectRemovalPolicy>()
	{
		return EEffectRemovalPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enumerators[] = {
		{ "EEffectRemovalPolicy::RemoveOnEndOverlap", (int64)EEffectRemovalPolicy::RemoveOnEndOverlap },
		{ "EEffectRemovalPolicy::DoNotRemove", (int64)EEffectRemovalPolicy::DoNotRemove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotRemove.Name", "EEffectRemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
		{ "RemoveOnEndOverlap.Name", "EEffectRemovalPolicy::RemoveOnEndOverlap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		"EEffectRemovalPolicy",
		"EEffectRemovalPolicy",
		Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(AEffectActorBase::execApplyEffectToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEffectActorBase::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEffectActorBase::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void AEffectActorBase::StaticRegisterNativesAEffectActorBase()
	{
		UClass* Class = AEffectActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectToTarget", &AEffectActorBase::execApplyEffectToTarget },
			{ "OnEndOverlap", &AEffectActorBase::execOnEndOverlap },
			{ "OnOverlap", &AEffectActorBase::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics
	{
		struct EffectActorBase_eventApplyEffectToTarget_Parms
		{
			AActor* TargetActor;
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EffectActorBase_eventApplyEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EffectActorBase_eventApplyEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectActorBase, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::EffectActorBase_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::EffectActorBase_eventApplyEffectToTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics
	{
		struct EffectActorBase_eventOnEndOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EffectActorBase_eventOnEndOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectActorBase, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::EffectActorBase_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::EffectActorBase_eventOnEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEffectActorBase_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffectActorBase_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics
	{
		struct EffectActorBase_eventOnOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EffectActorBase_eventOnOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffectActorBase, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::EffectActorBase_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::EffectActorBase_eventOnOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEffectActorBase_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffectActorBase_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectActorBase);
	UClass* Z_Construct_UClass_AEffectActorBase_NoRegister()
	{
		return AEffectActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AEffectActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEffectHandles_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectHandles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveEffectHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstantEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InstantEffectApplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DurationGameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DurationEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationEffectApplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InfiniteGameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InfiniteEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectApplicationPolicy;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InfiniteEffectRemovalPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectRemovalPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectRemovalPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADamageActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEffectActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEffectActorBase_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 2413084095
		{ &Z_Construct_UFunction_AEffectActorBase_OnEndOverlap, "OnEndOverlap" }, // 3783057659
		{ &Z_Construct_UFunction_AEffectActorBase_OnOverlap, "OnOverlap" }, // 2759234932
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/EffectActorBase.h" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_ValueProp = { "ActiveEffectHandles", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_Key_KeyProp = { "ActiveEffectHandles_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles = { "ActiveEffectHandles", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, ActiveEffectHandles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_MetaData) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActorLevel_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActorLevel = { "ActorLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, ActorLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActorLevel_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActorLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantGameplayEffectClass = { "InstantGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, InstantGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantGameplayEffectClass_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantGameplayEffectClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy = { "InstantEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, InstantEffectApplicationPolicy), Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy_MetaData) }; // 1397775960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationGameplayEffectClass = { "DurationGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, DurationGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationGameplayEffectClass_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationGameplayEffectClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy = { "DurationEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, DurationEffectApplicationPolicy), Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy_MetaData) }; // 1397775960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteGameplayEffectClass = { "InfiniteGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, InfiniteGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteGameplayEffectClass_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteGameplayEffectClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy = { "InfiniteEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, InfiniteEffectApplicationPolicy), Z_Construct_UEnum_SeniorProject_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData) }; // 1397775960
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/EffectActorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy = { "InfiniteEffectRemovalPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectActorBase, InfiniteEffectRemovalPolicy), Z_Construct_UEnum_SeniorProject_EEffectRemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData), Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData) }; // 2368174702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActiveEffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_ActorLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InstantEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_DurationEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectActorBase_Statics::NewProp_InfiniteEffectRemovalPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectActorBase_Statics::ClassParams = {
		&AEffectActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEffectActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffectActorBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectActorBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEffectActorBase()
	{
		if (!Z_Registration_Info_UClass_AEffectActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectActorBase.OuterSingleton, Z_Construct_UClass_AEffectActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEffectActorBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<AEffectActorBase>()
	{
		return AEffectActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectActorBase);
	AEffectActorBase::~AEffectActorBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1397775960U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2368174702U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEffectActorBase, AEffectActorBase::StaticClass, TEXT("AEffectActorBase"), &Z_Registration_Info_UClass_AEffectActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectActorBase), 4190547131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_2345910492(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Actor_EffectActorBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
