// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ItemMenu/ItemMenuWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemInformation;
#ifdef SENIORPROJECT_ItemMenuWidgetController_generated_h
#error "ItemMenuWidgetController.generated.h already included, missing '#pragma once' in ItemMenuWidgetController.h"
#endif
#define SENIORPROJECT_ItemMenuWidgetController_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_13_DELEGATE \
SENIORPROJECT_API void FGoldChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& GoldChangedSignature, int32 NewGold);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_14_DELEGATE \
SENIORPROJECT_API void FBuyButtonChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BuyButtonChangedDelegate, bool bIsBuyable);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemInformation_Statics; \
	SENIORPROJECT_API static class UScriptStruct* StaticStruct();


template<> SENIORPROJECT_API UScriptStruct* StaticStruct<struct FItemInformation>();

#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateClickedItem); \
	DECLARE_FUNCTION(execBroadcastInitialValues);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemMenuWidgetController(); \
	friend struct Z_Construct_UClass_UItemMenuWidgetController_Statics; \
public: \
	DECLARE_CLASS(UItemMenuWidgetController, UDefaultWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UItemMenuWidgetController)


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemMenuWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemMenuWidgetController(UItemMenuWidgetController&&); \
	NO_API UItemMenuWidgetController(const UItemMenuWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemMenuWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMenuWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemMenuWidgetController) \
	NO_API virtual ~UItemMenuWidgetController();


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_45_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UItemMenuWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_UI_ItemMenu_ItemMenuWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
