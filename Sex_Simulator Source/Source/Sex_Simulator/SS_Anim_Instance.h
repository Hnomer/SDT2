// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Animation/AnimInstance.h"
#include "SS_Anim_Instance.generated.h"

/**
 * 
 */
UCLASS()
class SEX_SIMULATOR_API USS_Anim_Instance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FVector HeadVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FRotator HipRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FRotator HeadRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FRotator JawRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoBlink;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoCloseEyes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoInnerBrowsUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoInnerBrowsDown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoWholeBrowsUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		bool DoWholeBrowsDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		float EyesOpenedPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FRotator LeftEyeRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SamkaAnimInstance")
		FRotator RightEyeRotation;
};
