// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sex_SimulatorTarget : TargetRules
{
	public Sex_SimulatorTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Game;
		
		//ExtraModuleNames.Add("Sex_Simulator");
		ExtraModuleNames.AddRange( new string[] { "Sex_Simulator" } );
	}
}
