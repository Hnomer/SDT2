// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"

#include "HnomerBPLibraryPluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class BPWorldType : uint8
{
	WT_None 			UMETA(DisplayName = "None"),
	WT_Editor 			UMETA(DisplayName = "Editor"),
	WT_EditorPreview 	UMETA(DisplayName = "Editor Preview"),
	WT_PIE				UMETA(DisplayName = "PIE"),
	WT_Game				UMETA(DisplayName = "Game"),
	WT_GamePreview		UMETA(DisplayName = "Game Preview"),
	WT_Inactive			UMETA(DisplayName = "Inactive"),
	WT_Error			UMETA(DisplayName = "Error")
};


UCLASS()
class UHnomerBPLibraryPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
/*
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "HnomerBPLibraryPlugin sample test testing"), Category = "HnomerBPLibraryPluginTesting")
	static float HnomerBPLibraryPluginSampleFunction(float Param);
*/

	//Get Path to Game Content folder. In case of packaged game this will return the path to the .pak file, giving the ability to access anything inside
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static FString GetGameContentDirPath();

		
	//Get Path to Game Content folder. In case of packaged game this will return the path to the .pak file, giving the ability to access anything inside
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static FString GetUserDirPath();


	//Get project version set in Project Settings
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static FString GetProjectVersion();


	//Get World Type ENum
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static BPWorldType GetCurrentWorldType(UObject* WorldContextObject);

	
	//Minimize or maximize game window. Has option to set window state, even if it is already in that state
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary")
		static void SetMinimizeGameWindow(bool isMinimize, bool bForceIfAlreadyInState);


	//Is Standalone build or is game in local editor
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static bool IsStandaloneGameBuild(UObject* WorldContextObject);


	//Unload streaming level from memory
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary")
		static void ResetActor(AActor* Actor);


	//Get all classes! WARNING! HEAVY DUTY!
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary", DisplayName = "Get Subclasses From UClass Of Class")
		static TArray<UClass*> GetSubclassesFromUClassOfClass(UClass* ClassToSearchFor);


	//
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary")
		static bool MountPakFile(FString PakName, FString PakPath);


	//
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary", DisplayName = "Get Pixels Array From Render Target")
		static TArray<FColor> GetPixelsArrayFromRenderTarget(UTextureRenderTarget2D* RenderTarget);


	//
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary", DisplayName = "Get Texture2D From Pixels Array")
		static UTexture2D* GetTexture2DFromPixelsArray(TArray<FColor> PixelsArray, int SizeX, int SizeY);


	//
	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary", DisplayName = "Get Pixels Array From Texture2D")
		static TArray<FColor> GetPixelsArrayFromTexture2D(UTexture2D* Texture);



	/**
	*  Get (and load) all assets from a folder relative to GameDir/Content that match the class.
	*
	*    param assetClass   Class of the assets to look for
	*    param path            Path is relative to GameDir/Content e.g. "/somepath". NOTE: "" or "/" WILL NOT WORK!!!
	*    param assets        OUT: The assets found
	*/
	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary", meta = (DeterminesOutputType = "assetClass", DynamicOutputParam = "assets"))
		static void GetAllAssetsInDirectoryRecursive(const TSubclassOf<UObject> assetClass, const FString path, TArray<UObject*>& assets);



	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary")
		static void LoadAssetsFromPakFolder(const FString DLCFolder, TArray<TAssetPtr<UObject>> &Assets, TArray<UClass*> &Classes);




	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static FString FColorToHexString(const FColor Color);

	UFUNCTION(BlueprintPure, Category = "HnomerBPLibrary")
		static FColor HexColorStringToFColor(const FString StringHexColor);


	UFUNCTION(BlueprintCallable, Category = "HnomerBPLibrary")
		static void GetNewBoneTranformsToMatchIK(FTransform CurrentRootTransform, FTransform CurrentJointTransform, FTransform CurrentEndTransform, FVector NewJointPos, FVector NewEndPos, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform);
};
