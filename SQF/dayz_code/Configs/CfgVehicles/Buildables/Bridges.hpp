class Metal_Drawbridge_DZ: CinderWallDoor_DZ_Base
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGE;
	GhostPreview = "Drawbridge_Preview_DZ";
	offset[] = {0,2.5,0};
	upgradeBuilding[] = {"Metal_DrawbridgeLocked_DZ",{},{{"ItemComboLock",1}}};
	class AnimationSources {
		class Open_inner {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_outer {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};			
	};
	class UserActions
	{			
		class Open_inner
		{
			displayName = $STR_EPOCH_ACTION_LOWER_BRIDGE;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "this animationPhase ""Open_inner"" < 0.5";
			statement = "this animate [""Open_inner"", 1];this animate [""Open_outer"", 1];";
		};
		class Close_Door : Open_inner
		{
			displayName = $STR_EPOCH_ACTION_RAISE_BRIDGE;
			condition = "this animationPhase ""Open_inner"" >= 0.5";
			statement = "this animate [""Open_inner"", 0];this animate [""Open_outer"", 0];";
		};
	};
};
class Metal_DrawbridgeLocked_DZ: CinderWallDoorLocked_DZ_Base
{
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge_locked.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGELOCKED;
	GhostPreview = "Drawbridge_Preview_DZ";
	offset[] = {0,2.5,0};
	downgradeBuilding[] = {"Metal_Drawbridge_DZ",{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class Open_inner 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_outer 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_latch 
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0; 
		};
	};
	class UserActions
	{			
		class Open_inner
		{
			displayName = $STR_EPOCH_ACTION_LOWER_BRIDGE;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""Open_inner"" == 0) && (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_inner"", 1];this animate [""Open_outer"", 1];";
		};
		class Close_Door : Open_inner
		{
			displayName = $STR_EPOCH_ACTION_RAISE_BRIDGE;
			condition = "(this animationPhase ""Open_inner"" == 1) && (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_inner"", 0];this animate [""Open_outer"", 0];";
		};
		class Lock_Door : Open_inner
		{
			displayName = $STR_EPOCH_ACTION_LOCK_BRIDGE;
			condition = "(this animationPhase ""Open_outer"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_inner
		{
			displayName = $STR_EPOCH_ACTION_UNLOCK_BRIDGE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_outer"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_inner
		{
			displayName = $STR_EPOCH_ACTION_UNLOCK_BRIDGE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};