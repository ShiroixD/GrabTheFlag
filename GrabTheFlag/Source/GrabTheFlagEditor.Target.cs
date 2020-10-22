

using UnrealBuildTool;
using System.Collections.Generic;

public class GrabTheFlagEditorTarget : TargetRules
{
	public GrabTheFlagEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "GrabTheFlag" } );
	}
}
