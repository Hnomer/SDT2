// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sex_SimulatorEditorTarget : TargetRules
{
	public Sex_SimulatorEditorTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Editor;
		
		ExtraModuleNames.Add("Sex_Simulator");
	}
}
