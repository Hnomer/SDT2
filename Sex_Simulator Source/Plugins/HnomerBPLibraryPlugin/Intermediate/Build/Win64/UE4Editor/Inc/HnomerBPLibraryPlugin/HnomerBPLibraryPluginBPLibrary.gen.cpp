// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HnomerBPLibraryPlugin/Public/HnomerBPLibraryPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHnomerBPLibraryPluginBPLibrary() {}
// Cross Module References
	HNOMERBPLIBRARYPLUGIN_API UEnum* Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType();
	UPackage* Z_Construct_UPackage__Script_HnomerBPLibraryPlugin();
	HNOMERBPLIBRARYPLUGIN_API UClass* Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_NoRegister();
	HNOMERBPLIBRARYPLUGIN_API UClass* Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HNOMERBPLIBRARYPLUGIN_API UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow();
// End Cross Module References
	static UEnum* BPWorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType, Z_Construct_UPackage__Script_HnomerBPLibraryPlugin(), TEXT("BPWorldType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BPWorldType(BPWorldType_StaticEnum, TEXT("/Script/HnomerBPLibraryPlugin"), TEXT("BPWorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType_CRC() { return 1545528079U; }
	UEnum* Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HnomerBPLibraryPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BPWorldType"), 0, Get_Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BPWorldType::WT_None", (int64)BPWorldType::WT_None },
				{ "BPWorldType::WT_Editor", (int64)BPWorldType::WT_Editor },
				{ "BPWorldType::WT_EditorPreview", (int64)BPWorldType::WT_EditorPreview },
				{ "BPWorldType::WT_PIE", (int64)BPWorldType::WT_PIE },
				{ "BPWorldType::WT_Game", (int64)BPWorldType::WT_Game },
				{ "BPWorldType::WT_GamePreview", (int64)BPWorldType::WT_GamePreview },
				{ "BPWorldType::WT_Inactive", (int64)BPWorldType::WT_Inactive },
				{ "BPWorldType::WT_Error", (int64)BPWorldType::WT_Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n//\"BlueprintType\" is essential to include" },
				{ "WT_Editor.DisplayName", "Editor" },
				{ "WT_EditorPreview.DisplayName", "Editor Preview" },
				{ "WT_Error.DisplayName", "Error" },
				{ "WT_Game.DisplayName", "Game" },
				{ "WT_GamePreview.DisplayName", "Game Preview" },
				{ "WT_Inactive.DisplayName", "Inactive" },
				{ "WT_None.DisplayName", "None" },
				{ "WT_PIE.DisplayName", "PIE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HnomerBPLibraryPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"BPWorldType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"BPWorldType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHnomerBPLibraryPluginBPLibrary::StaticRegisterNativesUHnomerBPLibraryPluginBPLibrary()
	{
		UClass* Class = UHnomerBPLibraryPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FColorToHexString", &UHnomerBPLibraryPluginBPLibrary::execFColorToHexString },
			{ "GetAllAssetsInDirectoryRecursive", &UHnomerBPLibraryPluginBPLibrary::execGetAllAssetsInDirectoryRecursive },
			{ "GetCurrentWorldType", &UHnomerBPLibraryPluginBPLibrary::execGetCurrentWorldType },
			{ "GetGameContentDirPath", &UHnomerBPLibraryPluginBPLibrary::execGetGameContentDirPath },
			{ "GetNewBoneTranformsToMatchIK", &UHnomerBPLibraryPluginBPLibrary::execGetNewBoneTranformsToMatchIK },
			{ "GetPixelsArrayFromRenderTarget", &UHnomerBPLibraryPluginBPLibrary::execGetPixelsArrayFromRenderTarget },
			{ "GetPixelsArrayFromTexture2D", &UHnomerBPLibraryPluginBPLibrary::execGetPixelsArrayFromTexture2D },
			{ "GetProjectVersion", &UHnomerBPLibraryPluginBPLibrary::execGetProjectVersion },
			{ "GetSubclassesFromUClassOfClass", &UHnomerBPLibraryPluginBPLibrary::execGetSubclassesFromUClassOfClass },
			{ "GetTexture2DFromPixelsArray", &UHnomerBPLibraryPluginBPLibrary::execGetTexture2DFromPixelsArray },
			{ "GetUserDirPath", &UHnomerBPLibraryPluginBPLibrary::execGetUserDirPath },
			{ "HexColorStringToFColor", &UHnomerBPLibraryPluginBPLibrary::execHexColorStringToFColor },
			{ "IsStandaloneGameBuild", &UHnomerBPLibraryPluginBPLibrary::execIsStandaloneGameBuild },
			{ "LoadAssetsFromPakFolder", &UHnomerBPLibraryPluginBPLibrary::execLoadAssetsFromPakFolder },
			{ "MountPakFile", &UHnomerBPLibraryPluginBPLibrary::execMountPakFile },
			{ "ResetActor", &UHnomerBPLibraryPluginBPLibrary::execResetActor },
			{ "SetMinimizeGameWindow", &UHnomerBPLibraryPluginBPLibrary::execSetMinimizeGameWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventFColorToHexString_Parms
		{
			FColor Color;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventFColorToHexString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventFColorToHexString_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "FColorToHexString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(HnomerBPLibraryPluginBPLibrary_eventFColorToHexString_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetAllAssetsInDirectoryRecursive_Parms
		{
			const TSubclassOf<UObject>  assetClass;
			FString path;
			TArray<UObject*> assets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_assets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_assets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_assetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_assetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assets = { UE4CodeGen_Private::EPropertyClass::Array, "assets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetAllAssetsInDirectoryRecursive_Parms, assets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "assets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetAllAssetsInDirectoryRecursive_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assetClass = { UE4CodeGen_Private::EPropertyClass::Class, "assetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetAllAssetsInDirectoryRecursive_Parms, assetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assetClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::NewProp_assetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "DeterminesOutputType", "assetClass" },
		{ "DynamicOutputParam", "assets" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Get (and load) all assets from a folder relative to GameDir/Content that match the class.\n\n  param assetClass   Class of the assets to look for\n  param path            Path is relative to GameDir/Content e.g. \"/somepath\". NOTE: \"\" or \"/\" WILL NOT WORK!!!\n  param assets        OUT: The assets found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetAllAssetsInDirectoryRecursive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetAllAssetsInDirectoryRecursive_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetCurrentWorldType_Parms
		{
			UObject* WorldContextObject;
			BPWorldType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetCurrentWorldType_Parms, ReturnValue), Z_Construct_UEnum_HnomerBPLibraryPlugin_BPWorldType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetCurrentWorldType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Get World Type ENum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetCurrentWorldType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetCurrentWorldType_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetGameContentDirPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetGameContentDirPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Execute Sample function\", Keywords = \"HnomerBPLibraryPlugin sample test testing\"), Category = \"HnomerBPLibraryPluginTesting\")\nstatic float HnomerBPLibraryPluginSampleFunction(float Param);\n//Get Path to Game Content folder. In case of packaged game this will return the path to the .pak file, giving the ability to access anything inside" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetGameContentDirPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetGameContentDirPath_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms
		{
			FTransform CurrentRootTransform;
			FTransform CurrentJointTransform;
			FTransform CurrentEndTransform;
			FVector NewJointPos;
			FVector NewEndPos;
			FTransform InOutRootTransform;
			FTransform InOutJointTransform;
			FTransform InOutEndTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutEndTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutJointTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutRootTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEndPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewJointPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentEndTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentJointTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRootTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutEndTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InOutEndTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, InOutEndTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutJointTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InOutJointTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, InOutJointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutRootTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InOutRootTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, InOutRootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_NewEndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "NewEndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, NewEndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_NewJointPos = { UE4CodeGen_Private::EPropertyClass::Struct, "NewJointPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, NewJointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentEndTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentEndTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, CurrentEndTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentJointTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentJointTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, CurrentJointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentRootTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentRootTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms, CurrentRootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutEndTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutJointTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_InOutRootTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_NewEndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_NewJointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentEndTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentJointTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::NewProp_CurrentRootTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetNewBoneTranformsToMatchIK", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetNewBoneTranformsToMatchIK_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromRenderTarget_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromRenderTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "DisplayName", "Get Pixels Array From Render Target" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetPixelsArrayFromRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromRenderTarget_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromTexture2D_Parms
		{
			UTexture2D* Texture;
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromTexture2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "DisplayName", "Get Pixels Array From Texture2D" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetPixelsArrayFromTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetPixelsArrayFromTexture2D_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Get project version set in Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetProjectVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetProjectVersion_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetSubclassesFromUClassOfClass_Parms
		{
			UClass* ClassToSearchFor;
			TArray<UClass*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSearchFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetSubclassesFromUClassOfClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ClassToSearchFor = { UE4CodeGen_Private::EPropertyClass::Class, "ClassToSearchFor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetSubclassesFromUClassOfClass_Parms, ClassToSearchFor), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::NewProp_ClassToSearchFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "DisplayName", "Get Subclasses From UClass Of Class" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Get all classes! WARNING! HEAVY DUTY!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetSubclassesFromUClassOfClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetSubclassesFromUClassOfClass_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms
		{
			TArray<FColor> PixelsArray;
			int32 SizeX;
			int32 SizeY;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PixelsArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelsArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_PixelsArray = { UE4CodeGen_Private::EPropertyClass::Array, "PixelsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms, PixelsArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_PixelsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_PixelsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::NewProp_PixelsArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "DisplayName", "Get Texture2D From Pixels Array" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetTexture2DFromPixelsArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetTexture2DFromPixelsArray_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventGetUserDirPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventGetUserDirPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Get Path to Game Content folder. In case of packaged game this will return the path to the .pak file, giving the ability to access anything inside" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "GetUserDirPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventGetUserDirPath_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventHexColorStringToFColor_Parms
		{
			FString StringHexColor;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringHexColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringHexColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventHexColorStringToFColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_StringHexColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_StringHexColor = { UE4CodeGen_Private::EPropertyClass::Str, "StringHexColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventHexColorStringToFColor_Parms, StringHexColor), METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_StringHexColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_StringHexColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::NewProp_StringHexColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "HexColorStringToFColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(HnomerBPLibraryPluginBPLibrary_eventHexColorStringToFColor_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventIsStandaloneGameBuild_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HnomerBPLibraryPluginBPLibrary_eventIsStandaloneGameBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HnomerBPLibraryPluginBPLibrary_eventIsStandaloneGameBuild_Parms), &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventIsStandaloneGameBuild_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Is Standalone build or is game in local editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "IsStandaloneGameBuild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventIsStandaloneGameBuild_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventLoadAssetsFromPakFolder_Parms
		{
			FString DLCFolder;
			TArray<TSoftObjectPtr<UObject> > Assets;
			TArray<UClass*> Classes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Classes = { UE4CodeGen_Private::EPropertyClass::Array, "Classes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventLoadAssetsFromPakFolder_Parms, Classes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Classes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Classes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Assets = { UE4CodeGen_Private::EPropertyClass::Array, "Assets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventLoadAssetsFromPakFolder_Parms, Assets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Assets_Inner = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Assets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_DLCFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_DLCFolder = { UE4CodeGen_Private::EPropertyClass::Str, "DLCFolder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventLoadAssetsFromPakFolder_Parms, DLCFolder), METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_DLCFolder_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_DLCFolder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Classes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Classes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_Assets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::NewProp_DLCFolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "LoadAssetsFromPakFolder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(HnomerBPLibraryPluginBPLibrary_eventLoadAssetsFromPakFolder_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms
		{
			FString PakName;
			FString PakPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms), &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_PakPath = { UE4CodeGen_Private::EPropertyClass::Str, "PakPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms, PakPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_PakName = { UE4CodeGen_Private::EPropertyClass::Str, "PakName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms, PakName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_PakPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::NewProp_PakName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "MountPakFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventMountPakFile_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventResetActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HnomerBPLibraryPluginBPLibrary_eventResetActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Unload streaming level from memory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "ResetActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventResetActor_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics
	{
		struct HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms
		{
			bool isMinimize;
			bool bForceIfAlreadyInState;
		};
		static void NewProp_bForceIfAlreadyInState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceIfAlreadyInState;
		static void NewProp_isMinimize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMinimize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_bForceIfAlreadyInState_SetBit(void* Obj)
	{
		((HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms*)Obj)->bForceIfAlreadyInState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_bForceIfAlreadyInState = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceIfAlreadyInState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms), &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_bForceIfAlreadyInState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_isMinimize_SetBit(void* Obj)
	{
		((HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms*)Obj)->isMinimize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_isMinimize = { UE4CodeGen_Private::EPropertyClass::Bool, "isMinimize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms), &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_isMinimize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_bForceIfAlreadyInState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::NewProp_isMinimize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "HnomerBPLibrary" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
		{ "ToolTip", "Minimize or maximize game window. Has option to set window state, even if it is already in that state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, "SetMinimizeGameWindow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HnomerBPLibraryPluginBPLibrary_eventSetMinimizeGameWindow_Parms), Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_NoRegister()
	{
		return UHnomerBPLibraryPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HnomerBPLibraryPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_FColorToHexString, "FColorToHexString" }, // 2133751410
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetAllAssetsInDirectoryRecursive, "GetAllAssetsInDirectoryRecursive" }, // 803199558
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetCurrentWorldType, "GetCurrentWorldType" }, // 1657965124
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetGameContentDirPath, "GetGameContentDirPath" }, // 254619519
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetNewBoneTranformsToMatchIK, "GetNewBoneTranformsToMatchIK" }, // 2820011955
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromRenderTarget, "GetPixelsArrayFromRenderTarget" }, // 2495831185
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetPixelsArrayFromTexture2D, "GetPixelsArrayFromTexture2D" }, // 3793036847
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetProjectVersion, "GetProjectVersion" }, // 2783064589
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetSubclassesFromUClassOfClass, "GetSubclassesFromUClassOfClass" }, // 1896106016
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetTexture2DFromPixelsArray, "GetTexture2DFromPixelsArray" }, // 3734645862
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_GetUserDirPath, "GetUserDirPath" }, // 1109562820
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_HexColorStringToFColor, "HexColorStringToFColor" }, // 2813143723
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_IsStandaloneGameBuild, "IsStandaloneGameBuild" }, // 11324695
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_LoadAssetsFromPakFolder, "LoadAssetsFromPakFolder" }, // 2241320961
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_MountPakFile, "MountPakFile" }, // 2001461409
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_ResetActor, "ResetActor" }, // 477614058
		{ &Z_Construct_UFunction_UHnomerBPLibraryPluginBPLibrary_SetMinimizeGameWindow, "SetMinimizeGameWindow" }, // 3746460399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HnomerBPLibraryPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HnomerBPLibraryPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHnomerBPLibraryPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::ClassParams = {
		&UHnomerBPLibraryPluginBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHnomerBPLibraryPluginBPLibrary, 1480263005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHnomerBPLibraryPluginBPLibrary(Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary, &UHnomerBPLibraryPluginBPLibrary::StaticClass, TEXT("/Script/HnomerBPLibraryPlugin"), TEXT("UHnomerBPLibraryPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHnomerBPLibraryPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
