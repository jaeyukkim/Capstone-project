// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SeniorProject/AISetting/BTTask_FindPatrolPos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPatrolPos() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UBTTask_FindPatrolPos::StaticRegisterNativesUBTTask_FindPatrolPos()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindPatrolPos);
	UClass* Z_Construct_UClass_UBTTask_FindPatrolPos_NoRegister()
	{
		return UBTTask_FindPatrolPos::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindPatrolPos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  ???? ?????? ?\xcc\xb5? ?????? ????\n */" },
		{ "IncludePath", "SeniorProject/AISetting/BTTask_FindPatrolPos.h" },
		{ "ModuleRelativePath", "SeniorProject/AISetting/BTTask_FindPatrolPos.h" },
		{ "ToolTip", "???? ?????? ?\xcc\xb5? ?????? ????" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPatrolPos>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::ClassParams = {
		&UBTTask_FindPatrolPos::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindPatrolPos()
	{
		if (!Z_Registration_Info_UClass_UBTTask_FindPatrolPos.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindPatrolPos.OuterSingleton, Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_FindPatrolPos.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<UBTTask_FindPatrolPos>()
	{
		return UBTTask_FindPatrolPos::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPatrolPos);
	struct Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_BTTask_FindPatrolPos_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_BTTask_FindPatrolPos_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPatrolPos, UBTTask_FindPatrolPos::StaticClass, TEXT("UBTTask_FindPatrolPos"), &Z_Registration_Info_UClass_UBTTask_FindPatrolPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPatrolPos), 3392431668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_BTTask_FindPatrolPos_h_599792802(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_BTTask_FindPatrolPos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_Source_SeniorProject_AISetting_BTTask_FindPatrolPos_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
