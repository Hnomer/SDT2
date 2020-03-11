// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/VictoryPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryPC() {}
// Cross Module References
	VICTORYBPLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FVictorySubtitleCue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VICTORYBPLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVictorySubtitleCue, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVictorySubtitleCue(FVictorySubtitleCue::StaticStruct, TEXT("/Script/VictoryBPLibrary"), TEXT("VictorySubtitleCue"), false, nullptr, nullptr);
static struct FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue
{
	FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VictorySubtitleCue")),new UScriptStruct::TCppStructOps<FVictorySubtitleCue>);
	}
} ScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue;
	struct Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "Exposing the UE4 Subtitle system for Solus\n <3 Rama" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVictorySubtitleCue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "SubtitleCue" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVictorySubtitleCue, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_SubtitleText_MetaData[] = {
		{ "Category", "SubtitleCue" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "The text to appear in the subtitle." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_SubtitleText = { UE4CodeGen_Private::EPropertyClass::Text, "SubtitleText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVictorySubtitleCue, SubtitleText), METADATA_PARAMS(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_SubtitleText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_SubtitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::NewProp_SubtitleText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
		nullptr,
		&NewStructOps,
		"VictorySubtitleCue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVictorySubtitleCue),
		alignof(FVictorySubtitleCue),
		Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC() { return 3592289565U; }
	static FName NAME_AVictoryPC_OnVictorySubtitlesQueued = FName(TEXT("OnVictorySubtitlesQueued"));
	void AVictoryPC::OnVictorySubtitlesQueued(TArray<FVictorySubtitleCue> const& VictorySubtitles, float CueDuration)
	{
		VictoryPC_eventOnVictorySubtitlesQueued_Parms Parms;
		Parms.VictorySubtitles=VictorySubtitles;
		Parms.CueDuration=CueDuration;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_OnVictorySubtitlesQueued),&Parms);
	}
	static FName NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived = FName(TEXT("VictoryPC_GetMyIP_DataReceived"));
	void AVictoryPC::VictoryPC_GetMyIP_DataReceived(const FString& YourIP)
	{
		VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms Parms;
		Parms.YourIP=YourIP;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived),&Parms);
	}
	void AVictoryPC::StaticRegisterNativesAVictoryPC()
	{
		UClass* Class = AVictoryPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Subtitles_CPPDelegate", &AVictoryPC::execSubtitles_CPPDelegate },
			{ "VictoryPC_GetMyIP_SendRequest", &AVictoryPC::execVictoryPC_GetMyIP_SendRequest },
			{ "VictoryPlaySpeechSound", &AVictoryPC::execVictoryPlaySpeechSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictorySubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VictorySubtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VictorySubtitles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_CueDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CueDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventOnVictorySubtitlesQueued_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventOnVictorySubtitlesQueued_Parms, VictorySubtitles), METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVictorySubtitleCue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_CueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::NewProp_VictorySubtitles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory Subtitles" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "OnVictorySubtitlesQueued", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(VictoryPC_eventOnVictorySubtitlesQueued_Parms), Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics
	{
		struct VictoryPC_eventSubtitles_CPPDelegate_Parms
		{
			TArray<FSubtitleCue> VictorySubtitles;
			float CueDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictorySubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VictorySubtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VictorySubtitles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_CueDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CueDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventSubtitles_CPPDelegate_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventSubtitles_CPPDelegate_Parms, VictorySubtitles), METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_CueDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::NewProp_VictorySubtitles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "Subtitles_CPPDelegate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(VictoryPC_eventSubtitles_CPPDelegate_Parms), Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YourIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::NewProp_YourIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::NewProp_YourIP = { UE4CodeGen_Private::EPropertyClass::Str, "YourIP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms, YourIP), METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::NewProp_YourIP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::NewProp_YourIP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::NewProp_YourIP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory PC" },
		{ "DisplayName", "Victory PC ~ GetMyIP ~ Data Received!" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "Implement this event to receive your IP once the request is processed! This requires that your computer has a live internet connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPC_GetMyIP_DataReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms), Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics
	{
		struct VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), &Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory PC" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "This node relies on http://api.ipify.org, so if this node ever stops working, check out http://api.ipify.org.  Returns false if the operation could not occur because HTTP module was not loaded or unable to process request." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPC_GetMyIP_SendRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics
	{
		struct VictoryPC_eventVictoryPlaySpeechSound_Parms
		{
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory Subtitles" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ToolTip", "When the sound is played OnVictorySubtitlesQueued will be called with the subtitles!\nYou can bind an event off of the audio component for OnAudioFinished to know hwen the sound is done!" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPlaySpeechSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(VictoryPC_eventVictoryPlaySpeechSound_Parms), Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVictoryPC_NoRegister()
	{
		return AVictoryPC::StaticClass();
	}
	struct Z_Construct_UClass_AVictoryPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVictoryPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVictoryPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued, "OnVictorySubtitlesQueued" }, // 1645911429
		{ &Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate, "Subtitles_CPPDelegate" }, // 3178984978
		{ &Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived, "VictoryPC_GetMyIP_DataReceived" }, // 1134644732
		{ &Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest, "VictoryPC_GetMyIP_SendRequest" }, // 920846870
		{ &Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound, "VictoryPlaySpeechSound" }, // 658763069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoryPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VictoryPC.h" },
		{ "ModuleRelativePath", "Public/VictoryPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVictoryPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVictoryPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVictoryPC_Statics::ClassParams = {
		&AVictoryPC::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVictoryPC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVictoryPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVictoryPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVictoryPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoryPC, 4052960618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoryPC(Z_Construct_UClass_AVictoryPC, &AVictoryPC::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("AVictoryPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
