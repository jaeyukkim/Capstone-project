// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCombatInterface();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	DEFINE_FUNCTION(ICombatInterface::execSetIsAttacking)
	{
		P_GET_UBOOL(Z_Param_bIsAttacking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAttacking_Implementation(Z_Param_bIsAttacking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execIsAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacking_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetAvatar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetDieAnimationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationAsset**)Z_Param__Result=P_THIS->GetDieAnimationAsset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetAttackMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetAttackMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetHitReactMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetHitReactMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetCombatSocketLocation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	struct CombatInterface_eventGetAttackMontage_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetAttackMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetAvatar_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetAvatar_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetCombatSocketLocation_Parms
	{
		FGameplayTag MontageTag;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetCombatSocketLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct CombatInterface_eventGetDieAnimationAsset_Parms
	{
		UAnimationAsset* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetDieAnimationAsset_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventGetHitReactMontage_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventGetHitReactMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CombatInterface_eventIsAttacking_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventIsAttacking_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct CombatInterface_eventIsDead_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CombatInterface_eventIsDead_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct CombatInterface_eventSetIsAttacking_Parms
	{
		bool bIsAttacking;
	};
	UAnimMontage* ICombatInterface::GetAttackMontage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackMontage instead.");
		CombatInterface_eventGetAttackMontage_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* ICombatInterface::GetAvatar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
		CombatInterface_eventGetAvatar_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector ICombatInterface::GetCombatSocketLocation(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatSocketLocation instead.");
		CombatInterface_eventGetCombatSocketLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	UAnimationAsset* ICombatInterface::GetDieAnimationAsset()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDieAnimationAsset instead.");
		CombatInterface_eventGetDieAnimationAsset_Parms Parms;
		return Parms.ReturnValue;
	}
	UAnimMontage* ICombatInterface::GetHitReactMontage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitReactMontage instead.");
		CombatInterface_eventGetHitReactMontage_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ICombatInterface::IsAttacking()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAttacking instead.");
		CombatInterface_eventIsAttacking_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ICombatInterface::IsDead() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
		CombatInterface_eventIsDead_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICombatInterface::SetIsAttacking(bool bIsAttacking)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsAttacking instead.");
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackMontage", &ICombatInterface::execGetAttackMontage },
			{ "GetAvatar", &ICombatInterface::execGetAvatar },
			{ "GetCombatSocketLocation", &ICombatInterface::execGetCombatSocketLocation },
			{ "GetDieAnimationAsset", &ICombatInterface::execGetDieAnimationAsset },
			{ "GetHitReactMontage", &ICombatInterface::execGetHitReactMontage },
			{ "IsAttacking", &ICombatInterface::execIsAttacking },
			{ "IsDead", &ICombatInterface::execIsDead },
			{ "SetIsAttacking", &ICombatInterface::execSetIsAttacking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAttackMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAttackMontage", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::PropPointers), sizeof(CombatInterface_eventGetAttackMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetAttackMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetAttackMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAttackMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetAvatar", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers), sizeof(CombatInterface_eventGetAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetAvatar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatSocketLocation_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData), Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCombatSocketLocation", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers), sizeof(CombatInterface_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetCombatSocketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetDieAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetDieAnimationAsset", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::PropPointers), sizeof(CombatInterface_eventGetDieAnimationAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetDieAnimationAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetHitReactMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetHitReactMontage", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers), sizeof(CombatInterface_eventGetHitReactMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventGetHitReactMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetHitReactMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetHitReactMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatInterface_eventIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventIsAttacking_Parms), &Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "IsAttacking", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::PropPointers), sizeof(CombatInterface_eventIsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventIsAttacking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_IsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_IsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_IsDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventIsDead_Parms), &Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers), sizeof(CombatInterface_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics
	{
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((CombatInterface_eventSetIsAttacking_Parms*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatInterface_eventSetIsAttacking_Parms), &Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::NewProp_bIsAttacking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "SetIsAttacking", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::PropPointers), sizeof(CombatInterface_eventSetIsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventSetIsAttacking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_SetIsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_SetIsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetAttackMontage, "GetAttackMontage" }, // 2248308404
		{ &Z_Construct_UFunction_UCombatInterface_GetAvatar, "GetAvatar" }, // 4221870183
		{ &Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 4132511811
		{ &Z_Construct_UFunction_UCombatInterface_GetDieAnimationAsset, "GetDieAnimationAsset" }, // 1771998961
		{ &Z_Construct_UFunction_UCombatInterface_GetHitReactMontage, "GetHitReactMontage" }, // 2363863605
		{ &Z_Construct_UFunction_UCombatInterface_IsAttacking, "IsAttacking" }, // 3795256593
		{ &Z_Construct_UFunction_UCombatInterface_IsDead, "IsDead" }, // 3147900906
		{ &Z_Construct_UFunction_UCombatInterface_SetIsAttacking, "SetIsAttacking" }, // 4252487587
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interface/CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	UCombatInterface::~UCombatInterface() {}
	static FName NAME_UCombatInterface_GetAttackMontage = FName(TEXT("GetAttackMontage"));
	UAnimMontage* ICombatInterface::Execute_GetAttackMontage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetAttackMontage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAttackMontage);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackMontage_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetAvatar = FName(TEXT("GetAvatar"));
	AActor* ICombatInterface::Execute_GetAvatar(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetAvatar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetAvatar);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAvatar_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetCombatSocketLocation = FName(TEXT("GetCombatSocketLocation"));
	FVector ICombatInterface::Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetCombatSocketLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetCombatSocketLocation);
		if (Func)
		{
			Parms.MontageTag=MontageTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCombatSocketLocation_Implementation(MontageTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetDieAnimationAsset = FName(TEXT("GetDieAnimationAsset"));
	UAnimationAsset* ICombatInterface::Execute_GetDieAnimationAsset(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetDieAnimationAsset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetDieAnimationAsset);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDieAnimationAsset_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_GetHitReactMontage = FName(TEXT("GetHitReactMontage"));
	UAnimMontage* ICombatInterface::Execute_GetHitReactMontage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventGetHitReactMontage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_GetHitReactMontage);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHitReactMontage_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_IsAttacking = FName(TEXT("IsAttacking"));
	bool ICombatInterface::Execute_IsAttacking(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventIsAttacking_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_IsAttacking);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAttacking_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_IsDead = FName(TEXT("IsDead"));
	bool ICombatInterface::Execute_IsDead(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventIsDead_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_IsDead);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsDead_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCombatInterface_SetIsAttacking = FName(TEXT("SetIsAttacking"));
	void ICombatInterface::Execute_SetIsAttacking(UObject* O, bool bIsAttacking)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventSetIsAttacking_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_SetIsAttacking);
		if (Func)
		{
			Parms.bIsAttacking=bIsAttacking;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			I->SetIsAttacking_Implementation(bIsAttacking);
		}
	}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 2113326845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_3986931803(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS