// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Input/InputComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputComponentBase() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInputComponentBase();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInputComponentBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UInputComponentBase::StaticRegisterNativesUInputComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputComponentBase);
	UClass* Z_Construct_UClass_UInputComponentBase_NoRegister()
	{
		return UInputComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UInputComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/InputComponentBase.h" },
		{ "ModuleRelativePath", "Input/InputComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputComponentBase_Statics::ClassParams = {
		&UInputComponentBase::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInputComponentBase()
	{
		if (!Z_Registration_Info_UClass_UInputComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputComponentBase.OuterSingleton, Z_Construct_UClass_UInputComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputComponentBase.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UInputComponentBase>()
	{
		return UInputComponentBase::StaticClass();
	}
	UInputComponentBase::UInputComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputComponentBase);
	UInputComponentBase::~UInputComponentBase() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputComponentBase, UInputComponentBase::StaticClass, TEXT("UInputComponentBase"), &Z_Registration_Info_UClass_UInputComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputComponentBase), 621247623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputComponentBase_h_1185072584(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_Input_InputComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
