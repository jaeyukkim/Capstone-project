// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeniorProject_init() {}
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature();
	SENIORPROJECT_API UFunction* Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SeniorProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SeniorProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_MessageWidgetRowSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnAttributeChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeniorProject_OnLevelChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SeniorProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA2B41283,
				0xAD17D93B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SeniorProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SeniorProject(Z_Construct_UPackage__Script_SeniorProject, TEXT("/Script/SeniorProject"), Z_Registration_Info_UPackage__Script_SeniorProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2B41283, 0xAD17D93B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
