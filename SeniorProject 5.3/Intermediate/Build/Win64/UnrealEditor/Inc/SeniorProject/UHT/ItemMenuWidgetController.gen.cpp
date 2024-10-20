// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMenuWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UDefaultWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidgetController_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInformation();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInformation;
class UScriptStruct* FItemInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInformation, (UObject*)Z_Construct_UPackage__Script_SeniorProject(), TEXT("ItemInformation"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInformation.OuterSingleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FItemInformation>()
{
	return FItemInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemImg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialOption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecialOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBought_MetaData[];
#endif
		static void NewProp_bHasBought_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBought;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemPrice_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemPrice = { "ItemPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemPrice_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg = { "ItemImg", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemImg), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemDescription_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_SpecialOption_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_SpecialOption = { "SpecialOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, SpecialOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_SpecialOption_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_SpecialOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility = { "ItemAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemEffect_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemEffect = { "ItemEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInformation, ItemEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemEffect_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_SetBit(void* Obj)
	{
		((FItemInformation*)Obj)->bHasBought = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought = { "bHasBought", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemInformation), &Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData), Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemImg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_SpecialOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_ItemEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_bHasBought,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"ItemInformation",
		Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers),
		sizeof(FItemInformation),
		alignof(FItemInformation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton, Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemInformation.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventGoldChangedSignature_Parms
		{
			int32 NewGold;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::NewProp_NewGold = { "NewGold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventGoldChangedSignature_Parms, NewGold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::NewProp_NewGold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "GoldChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventGoldChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::_Script_SeniorProject_eventGoldChangedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGoldChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& GoldChangedSignature, int32 NewGold)
{
	struct _Script_SeniorProject_eventGoldChangedSignature_Parms
	{
		int32 NewGold;
	};
	_Script_SeniorProject_eventGoldChangedSignature_Parms Parms;
	Parms.NewGold=NewGold;
	GoldChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventBuyButtonChangedDelegate_Parms
		{
			bool bIsBuyable;
		};
		static void NewProp_bIsBuyable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuyable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable_SetBit(void* Obj)
	{
		((_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms*)Obj)->bIsBuyable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable = { "bIsBuyable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms), &Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::NewProp_bIsBuyable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "BuyButtonChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBuyButtonChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BuyButtonChangedDelegate, bool bIsBuyable)
{
	struct _Script_SeniorProject_eventBuyButtonChangedDelegate_Parms
	{
		bool bIsBuyable;
	};
	_Script_SeniorProject_eventBuyButtonChangedDelegate_Parms Parms;
	Parms.bIsBuyable=bIsBuyable ? true : false;
	BuyButtonChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventItemStateChangedDelegate_Parms
		{
			FItemInformation Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventItemStateChangedDelegate_Parms, Info), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData), Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::NewProp_Info_MetaData) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "ItemStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventItemStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventItemStateChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FItemStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ItemStateChangedDelegate, FItemInformation const& Info)
{
	struct _Script_SeniorProject_eventItemStateChangedDelegate_Parms
	{
		FItemInformation Info;
	};
	_Script_SeniorProject_eventItemStateChangedDelegate_Parms Parms;
	Parms.Info=Info;
	ItemStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics
	{
		struct _Script_SeniorProject_eventItemDeletedDelegate_Parms
		{
			FGameplayTag ItemInputTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::NewProp_ItemInputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::NewProp_ItemInputTag = { "ItemInputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeniorProject_eventItemDeletedDelegate_Parms, ItemInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::NewProp_ItemInputTag_MetaData), Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::NewProp_ItemInputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::NewProp_ItemInputTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeniorProject, nullptr, "ItemDeletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventItemDeletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::_Script_SeniorProject_eventItemDeletedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FItemDeletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ItemDeletedDelegate, FGameplayTag const& ItemInputTag)
{
	struct _Script_SeniorProject_eventItemDeletedDelegate_Parms
	{
		FGameplayTag ItemInputTag;
	};
	_Script_SeniorProject_eventItemDeletedDelegate_Parms Parms;
	Parms.ItemInputTag=ItemInputTag;
	ItemDeletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UItemMenuWidgetController::execInitializeShopPlayerItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeShopPlayerItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execSellItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SellItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execBuyItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execShopClickedPlayerItem)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ItemInputTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShopClickedPlayerItem(Z_Param_ItemInputTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execShopClickedItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShopClickedItem(Z_Param_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execUpdateClickedItem)
	{
		P_GET_STRUCT(FItemInformation,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateClickedItem(Z_Param_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execOnInitializeShopItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitializeShopItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidgetController::execBroadcastInitialValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInitialValues();
		P_NATIVE_END;
	}
	void UItemMenuWidgetController::StaticRegisterNativesUItemMenuWidgetController()
	{
		UClass* Class = UItemMenuWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInitialValues", &UItemMenuWidgetController::execBroadcastInitialValues },
			{ "BuyItem", &UItemMenuWidgetController::execBuyItem },
			{ "InitializeShopPlayerItem", &UItemMenuWidgetController::execInitializeShopPlayerItem },
			{ "OnInitializeShopItem", &UItemMenuWidgetController::execOnInitializeShopItem },
			{ "SellItem", &UItemMenuWidgetController::execSellItem },
			{ "ShopClickedItem", &UItemMenuWidgetController::execShopClickedItem },
			{ "ShopClickedPlayerItem", &UItemMenuWidgetController::execShopClickedPlayerItem },
			{ "UpdateClickedItem", &UItemMenuWidgetController::execUpdateClickedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "BroadcastInitialValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "BuyItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_BuyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_BuyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "InitializeShopPlayerItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "OnInitializeShopItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "SellItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_SellItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_SellItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics
	{
		struct ItemMenuWidgetController_eventShopClickedItem_Parms
		{
			FItemInformation Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMenuWidgetController_eventShopClickedItem_Parms, Info), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(0, nullptr) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "ShopClickedItem", nullptr, nullptr, Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::ItemMenuWidgetController_eventShopClickedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::ItemMenuWidgetController_eventShopClickedItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics
	{
		struct ItemMenuWidgetController_eventShopClickedPlayerItem_Parms
		{
			FGameplayTag ItemInputTag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::NewProp_ItemInputTag = { "ItemInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMenuWidgetController_eventShopClickedPlayerItem_Parms, ItemInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::NewProp_ItemInputTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "ShopClickedPlayerItem", nullptr, nullptr, Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::ItemMenuWidgetController_eventShopClickedPlayerItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::ItemMenuWidgetController_eventShopClickedPlayerItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics
	{
		struct ItemMenuWidgetController_eventUpdateClickedItem_Parms
		{
			FItemInformation Info;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemMenuWidgetController_eventUpdateClickedItem_Parms, Info), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(0, nullptr) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidgetController, nullptr, "UpdateClickedItem", nullptr, nullptr, Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::ItemMenuWidgetController_eventUpdateClickedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::ItemMenuWidgetController_eventUpdateClickedItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemMenuWidgetController);
	UClass* Z_Construct_UClass_UItemMenuWidgetController_NoRegister()
	{
		return UItemMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UItemMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GoldChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButtonChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BuyButtonChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellButtonChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SellButtonChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerItemChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerItemChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShopPlayerItemInitializeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShopPlayerItemInitializeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowItemInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowItemInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDeletedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemDeletedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTagData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemTagData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickedItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickedItemInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemMenuWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemMenuWidgetController_BroadcastInitialValues, "BroadcastInitialValues" }, // 3844572844
		{ &Z_Construct_UFunction_UItemMenuWidgetController_BuyItem, "BuyItem" }, // 3701576931
		{ &Z_Construct_UFunction_UItemMenuWidgetController_InitializeShopPlayerItem, "InitializeShopPlayerItem" }, // 1281931556
		{ &Z_Construct_UFunction_UItemMenuWidgetController_OnInitializeShopItem, "OnInitializeShopItem" }, // 398999314
		{ &Z_Construct_UFunction_UItemMenuWidgetController_SellItem, "SellItem" }, // 3158261841
		{ &Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedItem, "ShopClickedItem" }, // 1226843625
		{ &Z_Construct_UFunction_UItemMenuWidgetController_ShopClickedPlayerItem, "ShopClickedPlayerItem" }, // 3607195588
		{ &Z_Construct_UFunction_UItemMenuWidgetController_UpdateClickedItem, "UpdateClickedItem" }, // 2584465513
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged = { "GoldChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, GoldChanged), Z_Construct_UDelegateFunction_SeniorProject_GoldChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged_MetaData) }; // 4267651908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate = { "BuyButtonChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, BuyButtonChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate_MetaData) }; // 3728400177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_SellButtonChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_SellButtonChangedDelegate = { "SellButtonChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, SellButtonChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_BuyButtonChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_SellButtonChangedDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_SellButtonChangedDelegate_MetaData) }; // 3728400177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_PlayerItemChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_PlayerItemChangedDelegate = { "PlayerItemChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, PlayerItemChangedDelegate), Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_PlayerItemChangedDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_PlayerItemChangedDelegate_MetaData) }; // 543603649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShopPlayerItemInitializeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShopPlayerItemInitializeDelegate = { "ShopPlayerItemInitializeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ShopPlayerItemInitializeDelegate), Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShopPlayerItemInitializeDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShopPlayerItemInitializeDelegate_MetaData) }; // 543603649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShowItemInfoDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShowItemInfoDelegate = { "ShowItemInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ShowItemInfoDelegate), Z_Construct_UDelegateFunction_SeniorProject_ItemStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShowItemInfoDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShowItemInfoDelegate_MetaData) }; // 543603649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemDeletedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemDeletedDelegate = { "ItemDeletedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ItemDeletedDelegate), Z_Construct_UDelegateFunction_SeniorProject_ItemDeletedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemDeletedDelegate_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemDeletedDelegate_MetaData) }; // 2122445564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData = { "ItemTagData", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ItemTagData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData[] = {
		{ "ModuleRelativePath", "UI/ItemMenu/ItemMenuWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo = { "ClickedItemInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemMenuWidgetController, ClickedItemInfo), Z_Construct_UScriptStruct_FItemInformation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData), Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo_MetaData) }; // 3158792783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_GoldChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_BuyButtonChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_SellButtonChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_PlayerItemChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShopPlayerItemInitializeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ShowItemInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemDeletedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ItemTagData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidgetController_Statics::NewProp_ClickedItemInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemMenuWidgetController_Statics::ClassParams = {
		&UItemMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemMenuWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton, Z_Construct_UClass_UItemMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemMenuWidgetController.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UItemMenuWidgetController>()
	{
		return UItemMenuWidgetController::StaticClass();
	}
	UItemMenuWidgetController::UItemMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemMenuWidgetController);
	UItemMenuWidgetController::~UItemMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FItemInformation::StaticStruct, Z_Construct_UScriptStruct_FItemInformation_Statics::NewStructOps, TEXT("ItemInformation"), &Z_Registration_Info_UScriptStruct_ItemInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInformation), 3158792783U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemMenuWidgetController, UItemMenuWidgetController::StaticClass, TEXT("UItemMenuWidgetController"), &Z_Registration_Info_UClass_UItemMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemMenuWidgetController), 2066982768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_4110673549(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
