class DZE_Base_Object : All {
	scope = 0;
	side = 3;
	icon = "\ca\data\data\Unknown_object.paa";
	nameSound = "object";
	simulation = "house";
	picture = "pictureStaticObject";
	model="";
	sound = "Building";
	placement = "vertical";
	ladders[] = {};
	vehicleClass =  "";
	displayName = "";
	mapSize = 7.5;
	animated = true;
	armor = 2200;
	destrType = "DestructBuilding";
	damageResistance = 0.004;
	reversed = 0;
	hasDriver = 0;
	accuracy = 0.1;
	cost = 1000;
	weapons[] = {};
	magazines[] = {};
	irTarget = 0;
	type = 1;
	threat[] = {0,0,0};
	maxSpeed = 0;
	
	//coefInside = 4;
	//coefInsideHeur = 4;

	// test settings from h barrier to see if this prevents glitching though a door
	coefInside = 0.5;
	coefInsideHeur = 0.8;

	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};

		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};

		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class DZE_Housebase : DZE_Base_Object {
	scope = 0;
	model = "";
	icon = "";
	displayName = "";
	animated = true;
	vehicleClass = "DayZ Epoch Buildables";
	nameSound = "house";
	accuracy = 0.2;
	typicalCargo[] = {};
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	mapSize = 11;
	cost = 0;
	armor = 2200;
	reversed = 0;
	class DestructionEffects;
};

class Land_DZE_WoodDoor_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";	/* path to the object */
	displayName =  "Wood Door Base"; 		/* entry in Stringtable.xml */
	nameSound = "";						
	mapSize = 8;						/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";			/* Path to the picture shown in the editor. */
	accuracy = 1000;   
	armor = 2500;						/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	offset[] = {0,1.5,0};
	class DestructionEffects : DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d"; /* path to the object*/
				/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
};

class Land_DZE_WoodDoorLocked_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	displayName =  "Wood Door Base";
	nameSound = "";
	mapSize = 8;
	icon = "\ca\data\data\Unknown_object.paa";
	accuracy = 1000;
	armor = 2500;
	destrType = "DestructBuilding";
	offset[] = {0,1.5,0};
	class DestructionEffects : DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	lockable = 3;
};

class CinderWallDoor_DZ_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName =  "Block Garage Door Base";
	nameSound = "";
	mapSize = 8;
	icon = "\ca\data\data\Unknown_object.paa";
	accuracy = 1000;   
	armor = 4000;
	destrType = "DestructBuilding";
	offset[] = {0,1.5,0};
	maintainBuilding[] = {{"MortarBucket",1}};
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

class CinderWallDoorLocked_DZ_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName =  "Block Garage Door Base";
	nameSound = "";	
	mapSize = 8;
	icon = "\ca\data\data\Unknown_object.paa";
	accuracy = 1000; 
	armor = 4000;
	destrType = "DestructBuilding";
	offset[] = {0,1.5,0};
	maintainBuilding[] = {{"MortarBucket",1}};
	lockable = 3;
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

class Land_DZE_WoodDoor: Land_DZE_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	displayName = $STR_EPOCH_WALLWITHDOOR;
	GhostPreview = "WoodDoor_Preview_DZ"; 
	upgradeBuilding[] = {"Land_DZE_WoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];";
		};
	};
};

class Land_DZE_WoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\small_wall_door_locked_anim.p3d";
	displayName = $STR_EPOCH_WALLWITHDOORLOCKED;
	GhostPreview = "WoodDoor_Preview_DZ"; 
	downgradeBuilding[] = {"Land_DZE_WoodDoor",{{"ItemComboLock",1}}};
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_hinge {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class Land_DZE_LargeWoodDoor: Land_DZE_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\large_wall_door_anim.p3d";
	displayName = $STR_EPOCH_LARGEWALLWITHDOOR;
	GhostPreview = "LargeWoodDoor_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_LargeWoodDoorLocked",{},{{"ItemComboLock",1}}};
	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
};

class Land_DZE_LargeWoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\large_wall_door_locked_anim.p3d";
	displayName = $STR_EPOCH_LARGEWALLWITHDOORLOCKED;
	GhostPreview = "LargeWoodDoor_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{{"ItemComboLock",1}}};
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_hinge {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class Land_DZE_GarageWoodDoor: Land_DZE_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Garage_door_anim.p3d";
	displayName = $STR_EPOCH_WOODGARAGEDOOR;
	GhostPreview = "GarageWoodDoor_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_GarageWoodDoorLocked",{},{{"ItemComboLock",1}}};
	
	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
};

class Land_DZE_GarageWoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Garage_door_locked_anim.p3d";
	displayName = $STR_EPOCH_WOODGARAGEDOORLOCKED;
	GhostPreview = "GarageWoodDoor_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_GarageWoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_hinge {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class Land_DZE_WoodGate: Land_DZE_WoodDoor_Base {
	scope = 2;
	armor = 3200;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage.p3d";
	displayName = $STR_EPOCH_WOODGATE;
	GhostPreview = "WoodGate_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_WoodGateLocked",{},{{"ItemComboLock",1}}};
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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class Land_DZE_WoodGateLocked: Land_DZE_WoodDoorLocked_Base {
	scope = 2;
	armor = 3200;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_locked.p3d";
	displayName = $STR_EPOCH_WOODGATELOCKED;
	GhostPreview = "WoodGate_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_WoodGate",{{"ItemComboLock",1}}};
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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class Land_DZE_WoodOpenTopGarageDoor: Land_DZE_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\wood_garage_notop.p3d";
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOOR;
	GhostPreview = "Wood_GarageOpenTop_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_WoodOpenTopGarageLocked",{},{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class doorl 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class doorR 
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""doorl"" < 0.5";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""doorl"" >= 0.5";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
	};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class Land_DZE_WoodOpenTopGarageLocked: Land_DZE_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\locked_wood_garage_notop.p3d";
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED;
	GhostPreview = "Wood_GarageOpenTop_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_WoodOpenTopGarageDoor",{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class doorl 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class doorR 
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""doorl"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallDoorLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\steel_garage_locked.p3d";
	displayName = $STR_EPOCH_BLOCKGARAGEDOORLOCKED;
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	downgradeBuilding[] = {"CinderWallDoor_DZ",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_latch {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
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
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class CinderWallDoor_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName = $STR_EPOCH_BLOCKGARAGEDOOR;
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	upgradeBuilding[] = {"CinderWallDoorLocked_DZ",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
};

class CinderWallDoorSmallLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Steel_door_locked.p3d";
	displayName = $STR_EPOCH_BLOCKDOORLOCKED;
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	downgradeBuilding[] = {"CinderWallDoorSmall_DZ",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_latch {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
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
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class CinderWallDoorSmall_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Steel_door.p3d";
	displayName = $STR_EPOCH_BLOCKDOOR;
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	upgradeBuilding[] = {"CinderWallDoorSmallLocked_DZ",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;			
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
};

class CinderGate_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	armor = 4600;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_door.p3d";
	displayName = $STR_EPOCH_CINDERGATE;
	GhostPreview = "CinderGate_Preview_DZ";
	upgradeBuilding[] = {"CinderGateLocked_DZ",{},{{"ItemComboLock",1}}};
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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
};

class CinderGateLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	armor = 4600;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_locked.p3d";
	displayName = $STR_EPOCH_CINDERGATELOCKED;
	GhostPreview = "CinderGate_Preview_DZ";
	downgradeBuilding[] = {"CinderGate_DZ",{{"ItemComboLock",1}}};
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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class CinderGarageOpenTop_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop.p3d";
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOOR;
	GhostPreview = "CinderGarageOpenTop_Preview_DZ";
	upgradeBuilding[] = {"CinderGarageOpenTopLocked_DZ",{},{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class doorl
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class doorR 
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
			position = "action";
			radius = 3;
			condition = "this animationPhase ""doorl"" < 0.5";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""doorl"" >= 0.5";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
	};
};

class CinderGarageOpenTopLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\locked_cindergarage_notop.p3d";
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED;
	GhostPreview = "CinderGarageOpenTop_Preview_DZ";
	downgradeBuilding[] = {"CinderGarageOpenTop_DZ",{{"ItemComboLock",1}}};
	class AnimationSources 
	{
		class doorl 
		{
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class doorR 
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""doorl"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
		class Lock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class CinderDoorHatch_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinderdoor_hatch.p3d";
	displayName = $STR_EPOCH_BLOCKDOOR_HATCH;
	GhostPreview = "CinderDoorHatch_Preview_DZ";
	upgradeBuilding[] = {"CinderDoorHatchLocked_DZ",{},{{"ItemComboLock",1}}};
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
			position = "action";
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
};

class CinderDoorHatchLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinder_door_hatch_locked.p3d";
	displayName = $STR_EPOCH_BLOCKDOORLOCKED_HATCH;
	GhostPreview = "CinderDoorHatch_Preview_DZ";
	downgradeBuilding[] = {"CinderDoorHatch_DZ",{{"ItemComboLock",1}}};
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
			position = "action";
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
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class Door_DZ: CinderWallDoor_DZ_Base {
	scope = 2;
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_single.p3d";
	displayName = $STR_EPOCH_DOOR;
	GhostPreview = "DoorFrame_Preview_DZ";
	upgradeBuilding[] = {"DoorLocked_DZ",{},{{"ItemComboLock",1}}};		
	
	class AnimationSources {
		class Open_door {
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
			position = "action";
			radius = 3;			
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};	
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};
		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};
		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class DoorLocked_DZ: CinderWallDoorLocked_DZ_Base {
	scope = 2;
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_locked_single.p3d";
	displayName = $STR_EPOCH_DOORLOCKED;
	GhostPreview = "DoorFrame_Preview_DZ";
	downgradeBuilding[] = {"Door_DZ",{{"ItemComboLock",1}}};
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_latch {
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
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
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
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};
		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};
		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

/*
	Vanilla DayZ buildables are defined in \dayz_buildings\configs\
	Only included here to overwrite vanilla ItemPadlock with Epoch ItemComboLock
*/
class WoodenGate_Base;
class WoodenGate_1: WoodenGate_Base
{
	class Upgrade { //to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"}; 
		requiredParts[] = {"ItemLog","ItemComboLock"};
		create = "WoodenGate_2";
	};
	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};