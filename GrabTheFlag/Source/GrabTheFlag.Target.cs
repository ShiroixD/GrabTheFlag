

using UnrealBuildTool;
using System.Collections.Generic;

public class GrabTheFlagTarget : TargetRules
{
	public GrabTheFlagTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "GrabTheFlag" } );
	}
}
