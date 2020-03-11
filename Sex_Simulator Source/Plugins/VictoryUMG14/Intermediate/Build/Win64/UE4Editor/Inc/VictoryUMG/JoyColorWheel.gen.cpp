// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryUMG/Private/VictoryUMGPrivatePCH.h"
#include "VictoryUMG/Public/JoyColorWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyColorWheel() {}
// Cross Module References
	VICTORYUMG_API UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VictoryUMG();
	VICTORYUMG_API UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VICTORYUMG_API UClass* Z_Construct_UClass_UJoyColorWheel_NoRegister();
	VICTORYUMG_API UClass* Z_Construct_UClass_UJoyColorWheel();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	VICTORYUMG_API UFunction* Z_Construct_UFunction_UJoyColorWheel_GetColor();
	VICTORYUMG_API UFunction* Z_Construct_UFunction_UJoyColorWheel_SetColor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics
	{
		struct _Script_VictoryUMG_eventOnJoyWidgetConstructedEvent_Parms
		{
			bool IsConstructed;
		};
		static void NewProp_IsConstructed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConstructed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::NewProp_IsConstructed_SetBit(void* Obj)
	{
		((_Script_VictoryUMG_eventOnJoyWidgetConstructedEvent_Parms*)Obj)->IsConstructed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::NewProp_IsConstructed = { UE4CodeGen_Private::EPropertyClass::Bool, "IsConstructed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_VictoryUMG_eventOnJoyWidgetConstructedEvent_Parms), &Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::NewProp_IsConstructed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::NewProp_IsConstructed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VictoryUMG, "OnJoyWidgetConstructedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VictoryUMG_eventOnJoyWidgetConstructedEvent_Parms), Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics
	{
		struct _Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VictoryUMG, "OnJoyColorChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms), Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UJoyColorWheel::StaticRegisterNativesUJoyColorWheel()
	{
		UClass* Class = UJoyColorWheel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UJoyColorWheel::execGetColor },
			{ "SetColor", &UJoyColorWheel::execSetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics
	{
		struct JoyColorWheel_eventGetColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JoyColorWheel_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Color Wheel" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "Get Color!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyColorWheel, "GetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(JoyColorWheel_eventGetColor_Parms), Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyColorWheel_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyColorWheel_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics
	{
		struct JoyColorWheel_eventSetColor_Parms
		{
			FLinearColor NewColor;
			bool SkipAnimation;
		};
		static void NewProp_SkipAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipAnimation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_SkipAnimation_SetBit(void* Obj)
	{
		((JoyColorWheel_eventSetColor_Parms*)Obj)->SkipAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_SkipAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "SkipAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JoyColorWheel_eventSetColor_Parms), &Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_SkipAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JoyColorWheel_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_SkipAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Color Wheel" },
		{ "CPP_Default_SkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "Set Color Picker's Color!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyColorWheel, "SetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(JoyColorWheel_eventSetColor_Parms), Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyColorWheel_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyColorWheel_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJoyColorWheel_NoRegister()
	{
		return UJoyColorWheel::StaticClass();
	}
	struct Z_Construct_UClass_UJoyColorWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimationOnConstruction_MetaData[];
#endif
		static void NewProp_bSkipAnimationOnConstruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimationOnConstruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorWheelConstructed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorWheelConstructed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyColorWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoyColorWheel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyColorWheel_GetColor, "GetColor" }, // 3645019763
		{ &Z_Construct_UFunction_UJoyColorWheel_SetColor, "SetColor" }, // 147859074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyColorWheel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JoyColorWheel.h" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnColorChanged (Joy Color Wheel)" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "Called whenever the color is changed! Yay!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnColorChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UJoyColorWheel, OnColorChanged), Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction_MetaData[] = {
		{ "Category", "Joy Color Wheel" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "Should the color picker jump instantly to the chosen JoyColor when it is first created?" },
	};
#endif
	void Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction_SetBit(void* Obj)
	{
		((UJoyColorWheel*)Obj)->bSkipAnimationOnConstruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipAnimationOnConstruction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UJoyColorWheel), &Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_JoyColor_MetaData[] = {
		{ "Category", "Joy Color Wheel" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=\"Joy Color Wheel\")" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_JoyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "JoyColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UJoyColorWheel, JoyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_JoyColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_JoyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorWheelConstructed_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "DisplayName", "OnColorChanged (Joy Color Wheel)" },
		{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
		{ "ToolTip", "Event to set color right after creation\nUFUNCTION(BlueprintImplementableEvent, Category = \"Joy Color Wheel\")" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorWheelConstructed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnColorWheelConstructed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UJoyColorWheel, OnColorWheelConstructed), Z_Construct_UDelegateFunction_VictoryUMG_OnJoyWidgetConstructedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorWheelConstructed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorWheelConstructed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoyColorWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_bSkipAnimationOnConstruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_JoyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoyColorWheel_Statics::NewProp_OnColorWheelConstructed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyColorWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyColorWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJoyColorWheel_Statics::ClassParams = {
		&UJoyColorWheel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UJoyColorWheel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UJoyColorWheel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJoyColorWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyColorWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJoyColorWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJoyColorWheel, 3564904307);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoyColorWheel(Z_Construct_UClass_UJoyColorWheel, &UJoyColorWheel::StaticClass, TEXT("/Script/VictoryUMG"), TEXT("UJoyColorWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyColorWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
