// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemComponentBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInformation();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "OnAttackEndSignatures__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttackEndSignatures_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEndSignatures)
{
	OnAttackEndSignatures.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execBroadCastAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadCastAttackEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execClientUpdateItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_ClickedItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateItem_Implementation(Z_Param_ClickedItemInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execClientUpdateAbilityLevel)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateAbilityLevel_Implementation(Z_Param_AbilityTag,Z_Param_AbilityLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execClientEffectApplied)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execServerSpendSpellPoint)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSpendSpellPoint_Implementation(Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execChangeGrantedTagToEffect)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PrevTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_NextTag);
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeGrantedTagToEffect_Implementation(Z_Param_PrevTag,Z_Param_NextTag,Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execServerSellItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_ClickedItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSellItem_Implementation(Z_Param_ClickedItemInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execServerBuyItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_ClickedItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBuyItem_Implementation(Z_Param_ClickedItemInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execApplyDebuffEffectSelf)
	{
		P_GET_OBJECT(UClass,Z_Param_DebuffEffectClass);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DebuffTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffCoefficient);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DebuffFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDebuffEffectSelf(Z_Param_DebuffEffectClass,Z_Param_Out_DebuffTag,Z_Param_DebuffCoefficient,Z_Param_DebuffDuration,Z_Param_DebuffFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemComponentBase::execGetAbilityLevel)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(Z_Param_AbilityTag);
		P_NATIVE_END;
	}
	struct AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms
	{
		FGameplayTag PrevTag;
		FGameplayTag NextTag;
		TSubclassOf<UGameplayEffect>  Effect;
	};
	struct AbilitySystemComponentBase_eventClientEffectApplied_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayEffectSpec EffectSpec;
		FActiveGameplayEffectHandle ActiveEffectHandle;
	};
	struct AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms
	{
		FGameplayTag AbilityTag;
		int32 AbilityLevel;
	};
	struct AbilitySystemComponentBase_eventClientUpdateItem_Parms
	{
		FItemInformation ClickedItemInfo;
	};
	struct AbilitySystemComponentBase_eventServerBuyItem_Parms
	{
		FItemInformation ClickedItemInfo;
	};
	struct AbilitySystemComponentBase_eventServerSellItem_Parms
	{
		FItemInformation ClickedItemInfo;
	};
	struct AbilitySystemComponentBase_eventServerSpendSpellPoint_Parms
	{
		FGameplayTag AbilityTag;
	};
	static FName NAME_UAbilitySystemComponentBase_BroadCastAttackEnd = FName(TEXT("BroadCastAttackEnd"));
	void UAbilitySystemComponentBase::BroadCastAttackEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_BroadCastAttackEnd),NULL);
	}
	static FName NAME_UAbilitySystemComponentBase_ChangeGrantedTagToEffect = FName(TEXT("ChangeGrantedTagToEffect"));
	void UAbilitySystemComponentBase::ChangeGrantedTagToEffect(FGameplayTag PrevTag, FGameplayTag NextTag, TSubclassOf<UGameplayEffect>  Effect)
	{
		AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms Parms;
		Parms.PrevTag=PrevTag;
		Parms.NextTag=NextTag;
		Parms.Effect=Effect;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ChangeGrantedTagToEffect),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
	void UAbilitySystemComponentBase::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
	{
		AbilitySystemComponentBase_eventClientEffectApplied_Parms Parms;
		Parms.AbilitySystemComponent=AbilitySystemComponent;
		Parms.EffectSpec=EffectSpec;
		Parms.ActiveEffectHandle=ActiveEffectHandle;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ClientEffectApplied),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ClientUpdateAbilityLevel = FName(TEXT("ClientUpdateAbilityLevel"));
	void UAbilitySystemComponentBase::ClientUpdateAbilityLevel(FGameplayTag const& AbilityTag, int32 AbilityLevel)
	{
		AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms Parms;
		Parms.AbilityTag=AbilityTag;
		Parms.AbilityLevel=AbilityLevel;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ClientUpdateAbilityLevel),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ClientUpdateItem = FName(TEXT("ClientUpdateItem"));
	void UAbilitySystemComponentBase::ClientUpdateItem(FItemInformation const& ClickedItemInfo)
	{
		AbilitySystemComponentBase_eventClientUpdateItem_Parms Parms;
		Parms.ClickedItemInfo=ClickedItemInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ClientUpdateItem),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ServerBuyItem = FName(TEXT("ServerBuyItem"));
	void UAbilitySystemComponentBase::ServerBuyItem(FItemInformation ClickedItemInfo)
	{
		AbilitySystemComponentBase_eventServerBuyItem_Parms Parms;
		Parms.ClickedItemInfo=ClickedItemInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ServerBuyItem),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ServerSellItem = FName(TEXT("ServerSellItem"));
	void UAbilitySystemComponentBase::ServerSellItem(FItemInformation const& ClickedItemInfo)
	{
		AbilitySystemComponentBase_eventServerSellItem_Parms Parms;
		Parms.ClickedItemInfo=ClickedItemInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ServerSellItem),&Parms);
	}
	static FName NAME_UAbilitySystemComponentBase_ServerSpendSpellPoint = FName(TEXT("ServerSpendSpellPoint"));
	void UAbilitySystemComponentBase::ServerSpendSpellPoint(FGameplayTag const& AbilityTag)
	{
		AbilitySystemComponentBase_eventServerSpendSpellPoint_Parms Parms;
		Parms.AbilityTag=AbilityTag;
		ProcessEvent(FindFunctionChecked(NAME_UAbilitySystemComponentBase_ServerSpendSpellPoint),&Parms);
	}
	void UAbilitySystemComponentBase::StaticRegisterNativesUAbilitySystemComponentBase()
	{
		UClass* Class = UAbilitySystemComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDebuffEffectSelf", &UAbilitySystemComponentBase::execApplyDebuffEffectSelf },
			{ "BroadCastAttackEnd", &UAbilitySystemComponentBase::execBroadCastAttackEnd },
			{ "ChangeGrantedTagToEffect", &UAbilitySystemComponentBase::execChangeGrantedTagToEffect },
			{ "ClientEffectApplied", &UAbilitySystemComponentBase::execClientEffectApplied },
			{ "ClientUpdateAbilityLevel", &UAbilitySystemComponentBase::execClientUpdateAbilityLevel },
			{ "ClientUpdateItem", &UAbilitySystemComponentBase::execClientUpdateItem },
			{ "GetAbilityLevel", &UAbilitySystemComponentBase::execGetAbilityLevel },
			{ "ServerBuyItem", &UAbilitySystemComponentBase::execServerBuyItem },
			{ "ServerSellItem", &UAbilitySystemComponentBase::execServerSellItem },
			{ "ServerSpendSpellPoint", &UAbilitySystemComponentBase::execServerSpendSpellPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics
	{
		struct AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms
		{
			TSubclassOf<UGameplayEffect>  DebuffEffectClass;
			FGameplayTag DebuffTag;
			float DebuffCoefficient;
			float DebuffDuration;
			float DebuffFrequency;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DebuffEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebuffTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebuffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffEffectClass = { "DebuffEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms, DebuffEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffTag = { "DebuffTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms, DebuffTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffTag_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffCoefficient_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffCoefficient = { "DebuffCoefficient", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms, DebuffCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffCoefficient_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffDuration_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffFrequency = { "DebuffFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms, DebuffFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffFrequency_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffFrequency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::NewProp_DebuffFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ApplyDebuffEffectSelf", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::AbilitySystemComponentBase_eventApplyDebuffEffectSelf_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "BroadCastAttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_PrevTag = { "PrevTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms, PrevTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_NextTag = { "NextTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms, NextTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_PrevTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_NextTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ChangeGrantedTagToEffect", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventChangeGrantedTagToEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData) }; // 4290086594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ClientEffectApplied", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventClientEffectApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventClientEffectApplied_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::NewProp_AbilityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ClientUpdateAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventClientUpdateAbilityLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickedItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickedItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::NewProp_ClickedItemInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::NewProp_ClickedItemInfo = { "ClickedItemInfo", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventClientUpdateItem_Parms, ClickedItemInfo), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::NewProp_ClickedItemInfo_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::NewProp_ClickedItemInfo_MetaData) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::NewProp_ClickedItemInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ClientUpdateItem", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventClientUpdateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventClientUpdateItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics
	{
		struct AbilitySystemComponentBase_eventGetAbilityLevel_Parms
		{
			FGameplayTag AbilityTag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventGetAbilityLevel_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::AbilitySystemComponentBase_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::AbilitySystemComponentBase_eventGetAbilityLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickedItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::NewProp_ClickedItemInfo = { "ClickedItemInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventServerBuyItem_Parms, ClickedItemInfo), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(0, nullptr) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::NewProp_ClickedItemInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ServerBuyItem", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventServerBuyItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventServerBuyItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickedItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickedItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::NewProp_ClickedItemInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::NewProp_ClickedItemInfo = { "ClickedItemInfo", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventServerSellItem_Parms, ClickedItemInfo), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::NewProp_ClickedItemInfo_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::NewProp_ClickedItemInfo_MetaData) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::NewProp_ClickedItemInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ServerSellItem", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventServerSellItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventServerSellItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySystemComponentBase_eventServerSpendSpellPoint_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::NewProp_AbilityTag_MetaData), Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::NewProp_AbilityTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemComponentBase, nullptr, "ServerSpendSpellPoint", nullptr, nullptr, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::PropPointers), sizeof(AbilitySystemComponentBase_eventServerSpendSpellPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(AbilitySystemComponentBase_eventServerSpendSpellPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemComponentBase);
	UClass* Z_Construct_UClass_UAbilitySystemComponentBase_NoRegister()
	{
		return UAbilitySystemComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackEndSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttackEndSignature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySystemComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ApplyDebuffEffectSelf, "ApplyDebuffEffectSelf" }, // 3225406905
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_BroadCastAttackEnd, "BroadCastAttackEnd" }, // 2447331622
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ChangeGrantedTagToEffect, "ChangeGrantedTagToEffect" }, // 4000681034
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ClientEffectApplied, "ClientEffectApplied" }, // 4212018037
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateAbilityLevel, "ClientUpdateAbilityLevel" }, // 569880212
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ClientUpdateItem, "ClientUpdateItem" }, // 3588188747
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_GetAbilityLevel, "GetAbilityLevel" }, // 1429693080
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ServerBuyItem, "ServerBuyItem" }, // 2901897189
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSellItem, "ServerSellItem" }, // 3606759356
		{ &Z_Construct_UFunction_UAbilitySystemComponentBase_ServerSpendSpellPoint, "ServerSpendSpellPoint" }, // 1812849322
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/AbilitySystemComponentBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemComponentBase_Statics::NewProp_AttackEndSignature_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AbilitySystem/AbilitySystemComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitySystemComponentBase_Statics::NewProp_AttackEndSignature = { "AttackEndSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySystemComponentBase, AttackEndSignature), Z_Construct_UDelegateFunction_SeniorProject_OnAttackEndSignatures__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::NewProp_AttackEndSignature_MetaData), Z_Construct_UClass_UAbilitySystemComponentBase_Statics::NewProp_AttackEndSignature_MetaData) }; // 765496312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySystemComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemComponentBase_Statics::NewProp_AttackEndSignature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemComponentBase_Statics::ClassParams = {
		&UAbilitySystemComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilitySystemComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemComponentBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemComponentBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilitySystemComponentBase()
	{
		if (!Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton, Z_Construct_UClass_UAbilitySystemComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilitySystemComponentBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UAbilitySystemComponentBase>()
	{
		return UAbilitySystemComponentBase::StaticClass();
	}
	UAbilitySystemComponentBase::UAbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemComponentBase);
	UAbilitySystemComponentBase::~UAbilitySystemComponentBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemComponentBase, UAbilitySystemComponentBase::StaticClass, TEXT("UAbilitySystemComponentBase"), &Z_Registration_Info_UClass_UAbilitySystemComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemComponentBase), 738929659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_3629775232(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
