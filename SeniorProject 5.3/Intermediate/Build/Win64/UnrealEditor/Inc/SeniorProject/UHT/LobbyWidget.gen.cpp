// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UI/Lobby/LobbyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyWidget() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULobbyWidget();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ULobbyWidget::StaticRegisterNativesULobbyWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyWidget);
	UClass* Z_Construct_UClass_ULobbyWidget_NoRegister()
	{
		return ULobbyWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Lobby/LobbyWidget.h" },
		{ "ModuleRelativePath", "UI/Lobby/LobbyWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyWidget_Statics::ClassParams = {
		&ULobbyWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULobbyWidget()
	{
		if (!Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton, Z_Construct_UClass_ULobbyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton;
	}
	template<> SENIORPROJECT_API UClass* StaticClass<ULobbyWidget>()
	{
		return ULobbyWidget::StaticClass();
	}
	ULobbyWidget::ULobbyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyWidget);
	ULobbyWidget::~ULobbyWidget() {}
	struct Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyWidget, ULobbyWidget::StaticClass, TEXT("ULobbyWidget"), &Z_Registration_Info_UClass_ULobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidget), 3032778965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidget_h_1392358197(TEXT("/Script/SeniorProject"),
		Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeniorProject_5_3_Source_SeniorProject_UI_Lobby_LobbyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS