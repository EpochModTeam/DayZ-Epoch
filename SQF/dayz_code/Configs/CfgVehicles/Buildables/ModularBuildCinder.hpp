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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
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

/* Model not finshed
class HeliNest_DZ: ModularItems {
	scope = 2;
	armor = 7000;
	model = "\z\addons\dayz_epoch_v\base_building\floors\helinest\all_heli_shop.p3d";
	displayName = "Helinest";
	GhostPreview = "Helinest_Preview_DZ";
	class AnimationSources 
	{
		class door1 
		{
			source = "user";
			animPeriod = 2;
			initPhase = 0; 
		};
		class door2: door1{};		
		class door3: door1{};		
		class door4: door1{};		
		class door5: door1{};		
		class door6: door1{};		
		class door7: door1{};		
		class door8: door1{};		
		class door9: door1{};		
		class door10: door1{};		

	};
	class UserActions
	{			
		class Open_Door
		{
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "Door_knopf";
			radius = 3;
			condition = "(this animationPhase ""door1"" == 0)";
			statement = "this animate [""door1"", 1];this animate [""door2"", 1];this animate [""door3"", 1];this animate [""door4"", 1];this animate [""door5"", 1];this animate [""door6"", 1];this animate [""door7"", 1];this animate [""door8"", 1];this animate [""door9"", 1]; this animate [""door10"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""door1"" == 1)";
//			statement = "this animate [""door1"", 0];this animate [""Open_doorR"", 0];";
			statement = "this animate [""door1"", 0];this animate [""door2"", 0];this animate [""door3"", 0];this animate [""door4"", 0];this animate [""door5"", 0];this animate [""door6"", 0];this animate [""door7"", 0];this animate [""door8"", 0];this animate [""door9"", 0]; this animate [""door10"", 0];";

		};
	};
};
*/

