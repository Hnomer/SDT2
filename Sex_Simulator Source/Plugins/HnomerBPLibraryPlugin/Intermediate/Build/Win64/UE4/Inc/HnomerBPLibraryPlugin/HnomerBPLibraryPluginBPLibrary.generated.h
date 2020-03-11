// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
struct FColor;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
class AActor;
enum class BPWorldType : uint8;
#ifdef HNOMERBPLIBRARYPLUGIN_HnomerBPLibraryPluginBPLibrary_generated_h
#error "HnomerBPLibraryPluginBPLibrary.generated.h already included, missing '#pragma once' in HnomerBPLibraryPluginBPLibrary.h"
#endif
#define HNOMERBPLIBRARYPLUGIN_HnomerBPLibraryPluginBPLibrary_generated_h

#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNewBoneTranformsToMatchIK) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_CurrentRootTransform); \
		P_GET_STRUCT(FTransform,Z_Param_CurrentJointTransform); \
		P_GET_STRUCT(FTransform,Z_Param_CurrentEndTransform); \
		P_GET_STRUCT(FVector,Z_Param_NewJointPos); \
		P_GET_STRUCT(FVector,Z_Param_NewEndPos); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutRootTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutJointTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutEndTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::GetNewBoneTranformsToMatchIK(Z_Param_CurrentRootTransform,Z_Param_CurrentJointTransform,Z_Param_CurrentEndTransform,Z_Param_NewJointPos,Z_Param_NewEndPos,Z_Param_Out_InOutRootTransform,Z_Param_Out_InOutJointTransform,Z_Param_Out_InOutEndTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHexColorStringToFColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringHexColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::HexColorStringToFColor(Z_Param_StringHexColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFColorToHexString) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::FColorToHexString(Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetsFromPakFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DLCFolder); \
		P_GET_TARRAY_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Assets); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_Classes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::LoadAssetsFromPakFolder(Z_Param_DLCFolder,Z_Param_Out_Assets,Z_Param_Out_Classes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAssetsInDirectoryRecursive) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_assetClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::GetAllAssetsInDirectoryRecursive(Z_Param_assetClass,Z_Param_path,Z_Param_Out_assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelsArrayFromTexture2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromTexture2D(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture2DFromPixelsArray) \
	{ \
		P_GET_TARRAY(FColor,Z_Param_PixelsArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetTexture2DFromPixelsArray(Z_Param_PixelsArray,Z_Param_SizeX,Z_Param_SizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelsArrayFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromRenderTarget(Z_Param_RenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMountPakFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::MountPakFile(Z_Param_PakName,Z_Param_PakPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubclassesFromUClassOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassToSearchFor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UClass*>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetSubclassesFromUClassOfClass(Z_Param_ClassToSearchFor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::ResetActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandaloneGameBuild) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::IsStandaloneGameBuild(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimizeGameWindow) \
	{ \
		P_GET_UBOOL(Z_Param_isMinimize); \
		P_GET_UBOOL(Z_Param_bForceIfAlreadyInState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::SetMinimizeGameWindow(Z_Param_isMinimize,Z_Param_bForceIfAlreadyInState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWorldType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(BPWorldType*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetCurrentWorldType(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserDirPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetUserDirPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameContentDirPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetGameContentDirPath(); \
		P_NATIVE_END; \
	}


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewBoneTranformsToMatchIK) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_CurrentRootTransform); \
		P_GET_STRUCT(FTransform,Z_Param_CurrentJointTransform); \
		P_GET_STRUCT(FTransform,Z_Param_CurrentEndTransform); \
		P_GET_STRUCT(FVector,Z_Param_NewJointPos); \
		P_GET_STRUCT(FVector,Z_Param_NewEndPos); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutRootTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutJointTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutEndTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::GetNewBoneTranformsToMatchIK(Z_Param_CurrentRootTransform,Z_Param_CurrentJointTransform,Z_Param_CurrentEndTransform,Z_Param_NewJointPos,Z_Param_NewEndPos,Z_Param_Out_InOutRootTransform,Z_Param_Out_InOutJointTransform,Z_Param_Out_InOutEndTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHexColorStringToFColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringHexColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::HexColorStringToFColor(Z_Param_StringHexColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFColorToHexString) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::FColorToHexString(Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetsFromPakFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DLCFolder); \
		P_GET_TARRAY_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Assets); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_Classes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::LoadAssetsFromPakFolder(Z_Param_DLCFolder,Z_Param_Out_Assets,Z_Param_Out_Classes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAssetsInDirectoryRecursive) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_assetClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_assets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::GetAllAssetsInDirectoryRecursive(Z_Param_assetClass,Z_Param_path,Z_Param_Out_assets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelsArrayFromTexture2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromTexture2D(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture2DFromPixelsArray) \
	{ \
		P_GET_TARRAY(FColor,Z_Param_PixelsArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetTexture2DFromPixelsArray(Z_Param_PixelsArray,Z_Param_SizeX,Z_Param_SizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPixelsArrayFromRenderTarget) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FColor>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromRenderTarget(Z_Param_RenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMountPakFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::MountPakFile(Z_Param_PakName,Z_Param_PakPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubclassesFromUClassOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ClassToSearchFor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UClass*>*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetSubclassesFromUClassOfClass(Z_Param_ClassToSearchFor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::ResetActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandaloneGameBuild) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::IsStandaloneGameBuild(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimizeGameWindow) \
	{ \
		P_GET_UBOOL(Z_Param_isMinimize); \
		P_GET_UBOOL(Z_Param_bForceIfAlreadyInState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHnomerBPLibraryPluginBPLibrary::SetMinimizeGameWindow(Z_Param_isMinimize,Z_Param_bForceIfAlreadyInState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWorldType) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(BPWorldType*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetCurrentWorldType(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetProjectVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserDirPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetUserDirPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameContentDirPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UHnomerBPLibraryPluginBPLibrary::GetGameContentDirPath(); \
		P_NATIVE_END; \
	}


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHnomerBPLibraryPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHnomerBPLibraryPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HnomerBPLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHnomerBPLibraryPluginBPLibrary)


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUHnomerBPLibraryPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UHnomerBPLibraryPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHnomerBPLibraryPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HnomerBPLibraryPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHnomerBPLibraryPluginBPLibrary)


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHnomerBPLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHnomerBPLibraryPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHnomerBPLibraryPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHnomerBPLibraryPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHnomerBPLibraryPluginBPLibrary(UHnomerBPLibraryPluginBPLibrary&&); \
	NO_API UHnomerBPLibraryPluginBPLibrary(const UHnomerBPLibraryPluginBPLibrary&); \
public:


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHnomerBPLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHnomerBPLibraryPluginBPLibrary(UHnomerBPLibraryPluginBPLibrary&&); \
	NO_API UHnomerBPLibraryPluginBPLibrary(const UHnomerBPLibraryPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHnomerBPLibraryPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHnomerBPLibraryPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHnomerBPLibraryPluginBPLibrary)


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_PRIVATE_PROPERTY_OFFSET
#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_44_PROLOG
#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_PRIVATE_PROPERTY_OFFSET \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_RPC_WRAPPERS \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_INCLASS \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_PRIVATE_PROPERTY_OFFSET \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_INCLASS_NO_PURE_DECLS \
	Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HnomerBPLibraryPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sex_Simulator_4_20_Plugins_HnomerBPLibraryPlugin_Source_HnomerBPLibraryPlugin_Public_HnomerBPLibraryPluginBPLibrary_h


#define FOREACH_ENUM_BPWORLDTYPE(op) \
	op(BPWorldType::WT_None) \
	op(BPWorldType::WT_Editor) \
	op(BPWorldType::WT_EditorPreview) \
	op(BPWorldType::WT_PIE) \
	op(BPWorldType::WT_Game) \
	op(BPWorldType::WT_GamePreview) \
	op(BPWorldType::WT_Inactive) \
	op(BPWorldType::WT_Error) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
