// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/AI/CustomBehaviorTree/BTTask_FindPatrolPos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPatrolPos() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos_NoRegister();
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  \xeb\xb8\x94\xeb\x9e\x99\xeb\xb3\xb4\xeb\x93\x9c\xec\x97\x90 HomePos, PatrolPos \xed\x82\xa4\xea\xb0\x80 \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc \xec\x82\xac\xec\x9a\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\xa8.\n */" },
#endif
		{ "IncludePath", "AI/CustomBehaviorTree/BTTask_FindPatrolPos.h" },
		{ "ModuleRelativePath", "AI/CustomBehaviorTree/BTTask_FindPatrolPos.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\x9e\x99\xeb\xb3\xb4\xeb\x93\x9c\xec\x97\x90 HomePos, PatrolPos \xed\x82\xa4\xea\xb0\x80 \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc \xec\x82\xac\xec\x9a\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\xa8." },
#endif
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams)
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
	UBTTask_FindPatrolPos::~UBTTask_FindPatrolPos() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTTask_FindPatrolPos_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTTask_FindPatrolPos_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPatrolPos, UBTTask_FindPatrolPos::StaticClass, TEXT("UBTTask_FindPatrolPos"), &Z_Registration_Info_UClass_UBTTask_FindPatrolPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPatrolPos), 457912308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTTask_FindPatrolPos_h_889556749(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTTask_FindPatrolPos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_AI_CustomBehaviorTree_BTTask_FindPatrolPos_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
