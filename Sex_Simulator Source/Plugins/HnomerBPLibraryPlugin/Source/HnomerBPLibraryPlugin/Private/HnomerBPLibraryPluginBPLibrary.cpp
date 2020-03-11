// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HnomerBPLibraryPluginBPLibrary.h"
#include "HnomerBPLibraryPlugin.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "ConfigCacheIni.h"
#include "Engine/GameEngine.h"
#include "EngineGlobals.h"
#include "SlateCore.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/PakFile/Public/IPlatformFilePak.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/PakFile/Public/IPlatformFilePak.h"
#include "Runtime/Engine/Classes/Engine/ObjectLibrary.h"
#include "Runtime/Core/Public/Templates/SharedPointer.h"

#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Engine/StreamableManager.h"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#define	GET_PROJECT_MODS_FOLDER_GLOBAL_PATH = FString PakFullPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + "Content/Paks/";

UHnomerBPLibraryPluginBPLibrary::UHnomerBPLibraryPluginBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}
/*
float UHnomerBPLibraryPluginBPLibrary::HnomerBPLibraryPluginSampleFunction(float Param)
{
	return -1;
}
*/


FString UHnomerBPLibraryPluginBPLibrary::GetGameContentDirPath()
{
	const FString ThePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir());
	return ThePath;
}

FString UHnomerBPLibraryPluginBPLibrary::GetUserDirPath()
{
	const FString ThePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
	
	return ThePath;
}

FString UHnomerBPLibraryPluginBPLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);

	return ProjectVersion;
}

BPWorldType UHnomerBPLibraryPluginBPLibrary::GetCurrentWorldType(UObject* WorldContextObject)
{
	if (WorldContextObject)
	{
		
		UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);

		if (World)
		{
			switch (World->WorldType)
			{
				case (EWorldType::Type::PIE):
				{
					return BPWorldType::WT_PIE;
				}

				case (EWorldType::Type::Editor):
				{
					return BPWorldType::WT_Editor;
				}

				case (EWorldType::Type::None):
				{
					return BPWorldType::WT_None;
				}

				case (EWorldType::Type::EditorPreview):
				{
					return BPWorldType::WT_EditorPreview;
				}

				case (EWorldType::Type::Game):
				{
					return BPWorldType::WT_Game;
				}

				case (EWorldType::Type::GamePreview):
				{
					return BPWorldType::WT_GamePreview;
				}

				case (EWorldType::Type::Inactive):
				{
					return BPWorldType::WT_Inactive;
				}
			}
		}
	}

	return BPWorldType::WT_Error;
}

void UHnomerBPLibraryPluginBPLibrary::SetMinimizeGameWindow(bool IsMinimize, bool bForceIfAlreadyInState)
{
	UGameEngine* gameEngine = Cast<UGameEngine>(GEngine);

	if (gameEngine)
	{
		TSharedPtr<SWindow> windowPtr = gameEngine->GameViewportWindow.Pin();
		SWindow *window = windowPtr.Get();

		if (window)
		{
			if (IsMinimize)
			{
				if (window->IsWindowMaximized() || bForceIfAlreadyInState)
				{
					window->Minimize();
				}
			}
			else
			{
				if (window->IsWindowMinimized() || bForceIfAlreadyInState)
				{
					window->Maximize();
				}
			}
		}
	}
}

bool UHnomerBPLibraryPluginBPLibrary::IsStandaloneGameBuild(UObject* WorldContextObject)
{
	return UHnomerBPLibraryPluginBPLibrary::GetCurrentWorldType(WorldContextObject) == BPWorldType::WT_Game;
}

void UHnomerBPLibraryPluginBPLibrary::ResetActor(AActor* Actor)
{
	if (Actor)
	{
		Actor->Reset();
	}
}

TArray<UClass*> UHnomerBPLibraryPluginBPLibrary::GetSubclassesFromUClassOfClass(UClass* ClassToSearchFor)
{
	TArray<UClass*> Classes;

	for (TObjectIterator<UClass> It; It; ++It)
	{
		//if (It->IsChildOf(ClassToSearchFor->StaticClass()) && !(It->HasAnyClassFlags(CLASS_Abstract)))
		//{
			Classes.Add(*It);
		//}
	}
	
	return Classes;
}

UTexture2D * UHnomerBPLibraryPluginBPLibrary::GetTexture2DFromPixelsArray(TArray<FColor> PixelsArray, int SizeX, int SizeY)
{
	UTexture2D* Texture = UTexture2D::CreateTransient(SizeX, SizeY);
	
	auto stride = (int32)(sizeof(uint8) * 4); // for r, g, b, a

	FTexture2DMipMap& Mip = Texture->PlatformData->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(Data, PixelsArray.GetData(), SizeX * SizeY * stride);
	Mip.BulkData.Unlock();
	Texture->UpdateResource();

	return Texture;
}

TArray<FColor> UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromTexture2D(UTexture2D * Texture)
{
	TArray<FColor> PixelsArray;

	if (Texture)
	{
		FTexture2DMipMap* MyMipMap = &Texture->PlatformData->Mips[0];

		FByteBulkData* RawImageData = &MyMipMap->BulkData;
		
		FColor* FormatedImageData = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));
		
		uint32 TextureWidth = MyMipMap->SizeX;
		uint32 TextureHeight = MyMipMap->SizeY;
		
		for (uint32 i = 0; i < (TextureWidth * TextureHeight); i++)
		{
			PixelsArray.Add(FormatedImageData[i]);
		}
		
		RawImageData->Unlock();
		
	}

	return PixelsArray;
}

bool UHnomerBPLibraryPluginBPLibrary::MountPakFile(FString PakName, FString PakPath)
{
	bool Result = false;

	if (FCoreDelegates::OnMountPak.IsBound())
	{
		FString PakFullPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + "Content/Paks/" + PakName;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Loading pak file by path: " + PakFullPath);

		Result = FCoreDelegates::OnMountPak.Execute(PakFullPath, 4, nullptr); //Number should be 0-4; specifies search order

		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Project Dir: " + FPaths::ProjectDir());
		/////////////////
		if (Result)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Pak file has been mounted succesfuly! ");

			IPlatformFile& InnerPlatform = FPlatformFileManager::Get().GetPlatformFile();

			IPlatformFile* LowerLevel = InnerPlatform.GetLowerLevel();

			TSharedPtr<IFileHandle> PakHandle = MakeShareable(LowerLevel->OpenRead(*PakFullPath));

			if (PakHandle.IsValid())
			{
				FPakFile* Pak = new FPakFile(LowerLevel, *PakFullPath, false);

				if (Pak->IsValid())
				{
					Pak->SetMountPoint(*PakFullPath);

					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Pak Mount Point is: " + Pak->GetMountPoint());
				}
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Pak file mount failed!");
		}
	}

	return Result;

	/*
	FPakPlatformFile* PakPlatform = reinterpret_cast<FPakPlatformFile*>(const_cast<void*>(FCoreDelegates::OnMountPak.GetDelegateInstance()->GetRawUserObject()));
	auto gameDir = FPaths::GameDir();
	FPaths::MakeStandardFilename(gameDir);
	return PakPlatform->Mount(*PakName, 4, *gameDir);
	*/
	/*
	IPlatformFile& InnerPlatform = FPlatformFileManager::Get().GetPlatformFile();
	FPakPlatformFile* PakPlatform = new FPakPlatformFile();
	PakPlatform->Initialize(&InnerPlatform, TEXT(""));
	FPlatformFileManager::Get().SetPlatformFile(*PakPlatform);
	//const FString pakFilename = TEXT("<PATH>/new.pak");
	FString mountPoint(*FPaths::EngineContentDir());
	*/
	/*
	FPakFile pakFile(&InnerPlatform, *PakName, false);
	
	if (!pakFile.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Invalid pak file: " + PakName);

		return false;
	}
	
	pakFile.SetMountPoint(*mountPoint);
	*/
	/*
	const int32 PakOrder = 0;
	if (!PakPlatform->Mount(*PakName, PakOrder, *mountPoint))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Failed to mount pak file: " + PakName);

		return false;
	}

	return true;
	*/
	/*
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FPakPlatformFile* PakPlatformFile = new FPakPlatformFile();
	PakPlatformFile->Initialize(&PlatformFile, TEXT(""));

	if (FCoreDelegates::OnMountPak.IsBound())
	{
		FCoreDelegates::OnMountPak.Execute(PakPath, 4, nullptr); //Number should be 0-4; specifies search order

		return true;
	}
	
	return false;
	*/
}

void UHnomerBPLibraryPluginBPLibrary::GetAllAssetsInDirectoryRecursive(const TSubclassOf<UObject> assetClass, const FString path, TArray<UObject*>& assets)
{
	int32 NumAssetsLoaded;
	
	//FString FullPath = FPaths::ProjectContentDir() + path;
	FString FullPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + path;

	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(assetClass.Get(), false, true);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Loading assets by path: " + FullPath);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Loading of class: " + assetClass.Get()->GetName());

	NumAssetsLoaded = objectLibrary->LoadAssetsFromPath(*FullPath);

	if (NumAssetsLoaded <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Couldn't find or load any assets of class: " + assetClass.Get()->GetName());


		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Tring to check if any files exists by the path");

		TArray<FString> Filenames;
		IFileManager::Get().FindFilesRecursive(Filenames, *FullPath, TEXT("*"), true, false);

		if (Filenames.Num() > 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "FILES FOUND!");

			for (FString i : Filenames)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "--- " + i);
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "No Files found by the path, or folder doesn't exist");
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::FromInt(NumAssetsLoaded) + " Assets Loaded");
	}

	objectLibrary->GetObjects(assets);

	TArray<FString> Filenames;
	IFileManager::Get().FindFilesRecursive(Filenames, *FullPath, TEXT("*.umap"), true, false);
}

TArray<FColor> UHnomerBPLibraryPluginBPLibrary::GetPixelsArrayFromRenderTarget(UTextureRenderTarget2D* RenderTarget)
{
	TArray<FColor> Bitmap;

	FTextureRenderTargetResource* RTResource = RenderTarget->GameThread_GetRenderTargetResource();
	//auto Rect = FIntRect(512, 512, 512, 512);
	FReadSurfaceDataFlags ReadPixelFlags(RCM_UNorm);
	ReadPixelFlags.SetLinearToGamma(true); // @TODO: is this gamma correction, or something else?


	//RTResource->ReadPixels(Bitmap, ReadPixelFlags, Rect);
	RTResource->ReadPixels(Bitmap);

	/*
	UTexture2D* Texture = UTexture2D::CreateTransient(RenderTarget->SizeX, RenderTarget->SizeY);
	
	FTexture2DMipMap& Mip = Texture->PlatformData->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(Data, Bitmap.GetData(), Rect.Height() * Rect.Width());
	Mip.BulkData.Unlock();
	Texture->UpdateResource();
	*/
	return Bitmap;
}

void UHnomerBPLibraryPluginBPLibrary::LoadAssetsFromPakFolder(FString DLCFolder, TArray<TAssetPtr<UObject>> &Assets, TArray<UClass*> &Classes)
{
	//TEST
	//TArray<TAssetPtr<UObject>> Assets;
	//

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "============= START LOADING PAKS =============");
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "GameContentDir: " + FPaths::ProjectContentDir() + " EngineContentDir:" + FPaths::EngineContentDir());


	//FString Folder = DLCFolder;
	FString Folder = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + DLCFolder;


	FPaths::NormalizeDirectoryName(Folder);

	TArray<FString> FileNames;

	IPlatformFile* PreviousPlatformFile = NULL;
	FPakPlatformFile *PlatformFile = NULL;
	if (FString(FPlatformFileManager::Get().GetPlatformFile().GetName()).Equals(FString(TEXT("PakFile"))))
	{
		PlatformFile = static_cast<FPakPlatformFile*>(&FPlatformFileManager::Get().GetPlatformFile());
	}
	else
	{
		PlatformFile = new FPakPlatformFile;

		if (!PlatformFile->Initialize(&FPlatformFileManager::Get().GetPlatformFile(), TEXT("")))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "FPakPlatformFile failed to initialize");
			return;
		}
		PreviousPlatformFile = &FPlatformFileManager::Get().GetPlatformFile();
		FPlatformFileManager::Get().SetPlatformFile(*PlatformFile);
	}

	if (!PlatformFile->DirectoryExists(*Folder))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Directory not found: " + Folder);
		return;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Mod directory found: " + Folder);

	// Get list of files in folder
	IFileManager &FileManager = IFileManager::Get();
	FileManager.FindFiles(FileNames, *Folder);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Iterating files in Mod folder");

	FStreamableManager StreamableManager;

	// Iterates on every file, mount the paks and load the assets found in them
	for (FString &FileName : FileNames)
	{
		// Check if extension match required format
		if (FileName.Right(4).Equals(TEXT(".pak"), ESearchCase::IgnoreCase))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Pak file found: " + FileName);

			FString PakFullPath(FPaths::Combine(*Folder, *FileName));
			FString PakName, PakExtension;
			FileName.Split(TEXT("."), &PakName, &PakExtension);

			//FString PakMountPoint = FPaths::Combine(FPaths::GameContentDir(), TEXT("Mods"), PakName);
			FString PakMountPoint = FPaths::Combine(FPaths::GameContentDir(), TEXT("Mods"));

			if (!PlatformFile->Mount(*PakFullPath, 0, *PakMountPoint))
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Failed to mount " + FileName);

				continue;
			}

			//FString VirtualMountPoint(FString::Printf(TEXT("/Game/Mods/%s/"), *PakName));
			FString VirtualMountPoint(FString::Printf(TEXT("/%s/"), *PakName));


			//FPackageName::RegisterMountPoint(VirtualMountPoint, PakMountPoint);
			FPackageName::RegisterMountPoint(VirtualMountPoint, VirtualMountPoint);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, "PakMountPoint = " + PakMountPoint + "  ||  PakVirtualMountPoint = " + VirtualMountPoint);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Mount successful. Iterating assets in " + VirtualMountPoint);

			// Print files in pak
			struct FilesDump : public IPlatformFile::FDirectoryVisitor
			{
				FString mp_PakName;
				TArray<FString> Files;

				FilesDump(FString &PakName)
					: mp_PakName(PakName)
				{
				}

				virtual bool Visit(const TCHAR *FilenameOrDirectory, bool bIsDirectory)
				{
					if (bIsDirectory)
					{
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Found DIR in " + mp_PakName + ": " + FilenameOrDirectory);
					}
					else
					{
						const FString Filename(FilenameOrDirectory);
						if (Filename.Contains(TEXT(".umap")) || Filename.Contains(TEXT(".uasset")))
						{
							Files.Add(FilenameOrDirectory);

							GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Found FILE in " + mp_PakName + ": " + FilenameOrDirectory);
						}
					}
					return true;
				}
			};
			
			FilesDump Visitor(FileName);
			//PlatformFile->IterateDirectoryRecursively(*PakMountPoint, Visitor);
			PlatformFile->IterateDirectoryRecursively(*VirtualMountPoint, Visitor);

			for (const FString &AssetFilePath : Visitor.Files)
			{
				//aditional filter to filter out all engine assets
				if (AssetFilePath.Contains(TEXT("Content/Mods"), ESearchCase::IgnoreCase, ESearchDir::FromEnd))
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Asset File: " + AssetFilePath);

					FString AssetFileName = FPackageName::GetShortName(AssetFilePath);
					FString AssetName, AssetExtension;
					// Get asset name and extension
					AssetFileName.Split(TEXT("."), &AssetName, &AssetExtension);
					// Replace system path for virtual path and extension for asset name
					FString AssetRefPath(AssetFilePath.Replace(*PakMountPoint, *VirtualMountPoint));
					AssetRefPath = AssetRefPath.Replace(*AssetExtension, *AssetName);
					FPaths::RemoveDuplicateSlashes(AssetRefPath);

					// If asset is a Blueprint
					//if (AssetName.StartsWith(TEXT("BP_")))
					if (AssetName.Contains(TEXT("BP"), ESearchCase::CaseSensitive, ESearchDir::FromEnd))
					{
						// Add class postfix
						//AssetRefPath += TEXT("_C");

						//UObject* LoadedClass = StreamableManager.SynchronousLoad(FStringAssetReference(AssetRefPath));
						//UObject* LoadedClass = StreamableManager.SynchronousLoadType<UObject>(FStringAssetReference(AssetRefPath));

						UObject* LoadedClass = FStringAssetReference(AssetRefPath).TryLoad();

						if (LoadedClass == NULL)
						{
							GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Failed to load class: " + AssetRefPath);

							continue;
						}

						
						UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(LoadedClass);

						if (BPClass == NULL)
						{
							GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Casting to BlueprintGeneratedClass failed: " + AssetRefPath);

							continue;
						}
						
						Classes.Add(BPClass);
						//Classes.Add(LoadedClass);
					}
					else
					{
						Assets.Add(TAssetPtr<UObject>(FStringAssetReference(AssetRefPath)));
					}
				}
			}
		}
	}

	// return previous platform file manager to the top of the chain, so Unreal doesn't lose it's references
	if (PreviousPlatformFile != NULL)
	{
		FPlatformFileManager::Get().SetPlatformFile(*PreviousPlatformFile);
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "============= END LOADING PAKS =============");
}



FString UHnomerBPLibraryPluginBPLibrary::FColorToHexString(const FColor Color)
{
	return Color.ToHex();
}

FColor UHnomerBPLibraryPluginBPLibrary::HexColorStringToFColor(const FString StringHexColor)
{
	return FColor::FromHex(StringHexColor);;
}

void UHnomerBPLibraryPluginBPLibrary::GetNewBoneTranformsToMatchIK(FTransform CurrentRootTransform, FTransform CurrentJointTransform, FTransform CurrentEndTransform, FVector NewJointPos, FVector NewEndPos, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform)
{
	InOutRootTransform = CurrentRootTransform;
	InOutJointTransform = CurrentJointTransform;
	InOutEndTransform = CurrentEndTransform;

	FVector RootPos = InOutRootTransform.GetLocation();
	FVector JointPos = InOutJointTransform.GetLocation();
	FVector EndPos = InOutEndTransform.GetLocation();

	// Update transform for upper bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (JointPos - RootPos).GetSafeNormal();
		FVector const NewDir = (NewJointPos - RootPos).GetSafeNormal();
		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation
		InOutRootTransform.SetRotation(DeltaRotation * InOutRootTransform.GetRotation());
		// And put joint where it should be.
		InOutRootTransform.SetTranslation(RootPos);

	}

	// update transform for middle bone
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (EndPos - JointPos).GetSafeNormal();
		FVector const NewDir = (NewEndPos - NewJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation
		InOutJointTransform.SetRotation(DeltaRotation * InOutJointTransform.GetRotation());
		// And put joint where it should be.
		InOutJointTransform.SetTranslation(NewJointPos);

	}

	// Update transform for end bone.
	// currently not doing anything to rotation
	// keeping input rotation
	// Set correct location for end bone.
	InOutEndTransform.SetTranslation(NewEndPos);
}

