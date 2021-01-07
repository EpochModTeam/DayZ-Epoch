class CinderWallHalf_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	upgradeBuilding[] = {"CinderWall_DZ",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWallHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallHalf_Gap_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half2.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF_GAP;
	upgradeBuilding[] = {"CinderWall_DZ",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWallHalf_Gap_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallWindow_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	armor = 3400;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win.p3d";
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW;
	GhostPreview = "CinderWallWindow_Preview_DZ";
	upgradeBuilding[] = {"CinderWallWindowLocked_DZ",{},{{"ItemComboLock",1}}};	
	maintainBuilding[] = {{"MortarBucket",1}};
	class AnimationSources 
	{
		class Open_door 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_doorR 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};			
	};
	class UserActions
	{			
		class Open_Door
		{
			displayName = $STR_BLD_ACTIONS_OPEN_WINDOW;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_WINDOW;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallWindowLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	offset[] = {0,2,0};
	armor = 3400;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win_locked.p3d";
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED;
	GhostPreview = "CinderWallWindow_Preview_DZ";
	downgradeBuilding[] = {"CinderWallWindow_DZ",{{"ItemComboLock",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	class AnimationSources 
	{
		class Open_door 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_doorR 
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
		class Open_Door
		{
			displayName = $STR_BLD_ACTIONS_OPEN_WINDOW;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_WINDOW;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_LOCK_WINDOW;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCK_WINDOW;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCK_WINDOW;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};

class CinderWallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoor_DZ",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallSmallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoorSmall_DZ",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderGateFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_frame.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	maintainBuilding[] = {{"MortarBucket",3}};
	upgradeBuilding[] = {"CinderGate_DZ",{"ItemToolbox"},{{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	GhostPreview = "CinderGate_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderGarageOpenTopFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop_frame.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEFRAME;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderGarageOpenTop_DZ",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderGarageOpenTop_Preview_DZ";
	class DestructionEffects : DestructionEffects 
	{
		class Ruin1 
		{
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class Concrete_Bunker_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01.p3d";
	offset[] = {0,4,0};
	displayName = $STR_EPOCH_CINDERBUNKER;
	upgradeBuilding[] = {"Concrete_Bunker_Locked_DZ",{},{{"ItemComboLock",1}}};		
	GhostPreview = "Concrete_Bunker_Preview_DZ";	
	class AnimationSources 
	{
		class raise_all 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class rollers 
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0; 
		};
	};
	class UserActions
	{
		class Open_Door
		{
			displayName = $STR_BLD_ACTIONS_OPEN_BUNKER;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""raise_all"" < 0.5)";
			statement = "this animate [""raise_all"", 1];this animate [""rollers"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_BUNKER;
			condition = "(this animationPhase ""raise_all"" >= 0.5)";
			statement = "this animate [""raise_all"", 0];this animate [""rollers"", 0];";
		};	
	};
};
class Concrete_Bunker_Locked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01_locked.p3d";
	offset[] = {0,4,0};
	displayName = $STR_EPOCH_CINDERBUNKERLOCKED;
	GhostPreview = "Concrete_Bunker_Preview_DZ";
	downgradeBuilding[] = {"Concrete_Bunker_DZ",{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class raise_all 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class rollers 
		{
			source = "user";
			animPeriod = 1;
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
		class Open_Door
		{
			displayName = $STR_BLD_ACTIONS_OPEN_BUNKER;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""raise_all"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_BUNKER;
			condition = "(this animationPhase ""raise_all"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""raise_all"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_LOCK_BUNKER;
			condition = "(this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCK_BUNKER;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCK_BUNKER;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};		
	};
};