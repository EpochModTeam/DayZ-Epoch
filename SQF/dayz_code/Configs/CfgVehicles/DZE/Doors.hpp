/* Again your very own basic definition*/
class DZE_Base_Object : All {
	scope = private;
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
	// static 
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

/* Your very own base class for buildings*/
class DZE_Housebase : DZE_Base_Object {
	scope = protected;
	model = "";
	icon = "";
	displayName = "";
	animated = true;
	vehicleClass = "Fortifications";
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
	/*extern*/ class DestructionEffects;
};

class Land_DZE_WoodDoor_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";	/* path to the object */
	displayName =  "Wood Door Base"; 		/* entry in Stringtable.csv */
	nameSound = "";						
	mapSize = 8;						/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";			/* Path to the picture shown in the editor. */
	accuracy = 1000;   
	armor = 2200;						/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = public;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";	/* path to the object */
	displayName =  "Wood Door Base"; 		/* entry in Stringtable.csv */
	nameSound = "";						
	mapSize = 8;						/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";			/* Path to the picture shown in the editor. */
	accuracy = 1000;   
	armor = 2500;						/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = public;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	lockable = 3;
};

class CinderWallDoor_DZ_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";	/* path to the object */
	displayName =  "Block Garage Door Base"; 		/* entry in Stringtable.csv */
	nameSound = "";						
	mapSize = 8;						/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";			/* Path to the picture shown in the editor. */
	accuracy = 1000;   
	armor = 4000;					/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = public;							/* Display it in the editor? 1 = No, 2 = Yes */
	offset[] = {0,1.5,0};
	maintainBuilding[] = {{"MortarBucket",1}};
	class DestructionEffects : DestructionEffects
	{
		class Ruin1
		{
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class CinderWallDoorLocked_DZ_Base: DZE_Housebase {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";	/* path to the object */
	displayName =  "Block Garage Door Base"; 		/* entry in Stringtable.csv */
	nameSound = "";						
	mapSize = 8;						/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";			/* Path to the picture shown in the editor. */
	accuracy = 1000;   
	armor = 4000;					/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = public;							/* Display it in the editor? 1 = No, 2 = Yes */
	offset[] = {0,1.5,0};
	maintainBuilding[] = {{"MortarBucket",1}};
	lockable = 3;
	class DestructionEffects : DestructionEffects
	{
		class Ruin1
		{
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

/*  Same name as stated in the Class DestructionEffects, but an "Land_" added infront*/
class Land_wood_wreck_frame : ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};
class Land_wood_wreck_third : ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wood_wreck_half : ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wood_wreck_floor : ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_wood_wreck_quarter : ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wreck_cinder: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
	displayName = $STR_CINDER_WALL_WRECK;
	removeoutput[] = {{"CinderBlocks",{0,1}}};
};
class Land_wreck_metal_floor: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	removeoutput[] = {{"ItemPole",{0,2}},{"ItemTankTrap",{0,2}}};
};

class Land_iron_vein_wreck: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_IRON;
	//removeoutput[] = {{"PartOre",{10,10}},{"PartOreSilver",{0,10}},{"PartOreGold",{0,5}}}; // Moved to CfgLoot group
};
class Land_silver_vein_wreck: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_SILVER;
	//removeoutput[] = {{"PartOreSilver",{10,10}},{"PartOre",{0,1}},{"PartOreGold",{6,4}}}; // Moved to CfgLoot group
};
class Land_gold_vein_wreck: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
	//removeoutput[] = {{"PartOreGold",{10,10}},{"PartOre",{0,1}},{"PartOreSilver",{6,4}}}; // Moved to CfgLoot group
};

class Land_ammo_supply_wreck: ruins	{
	scope = protected;
	model = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
	displayName = $STR_EPOCH_BULK_NAME;
	//removeoutput[] = {{"100Rnd_762x54_PK",{0,1}},{"29Rnd_30mm_AGS30",{0,1}},{"50Rnd_127x107_DSHKM",{0,1}},{"100Rnd_127x99_M2",{0,1}},{"2000Rnd_762x51_M134",{0,1}},{"48Rnd_40mm_MK19",{0,1}},{"100Rnd_762x51_M240",{0,1}}}; // Moved to CfgLoot group
};





/* Your doorsegment is derivated from the normal wall.*/
class Land_DZE_WoodDoor: Land_DZE_WoodDoor_Base {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	displayName =  "Wood Door";
	GhostPreview = "WoodDoor_Preview_DZ"; 
	upgradeBuilding[] = {"Land_DZE_WoodDoorLocked",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0];";
		};
	};
};

class Land_DZE_WoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	model = "\z\addons\dayz_epoch\models\small_wall_door_locked_anim.p3d";
	displayName =  "Wood Door Locked";
	GhostPreview = "WoodDoor_Preview_DZ"; 
	downgradeBuilding[] = {"Land_DZE_WoodDoor",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
		class Open_hinge {
			source = "user";
			animPeriod = 1; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_LOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};

class Land_DZE_LargeWoodDoor: Land_DZE_WoodDoor_Base {
	model = "\z\addons\dayz_epoch\models\large_wall_door_anim.p3d";
	displayName =  "Large Wood Door";
	GhostPreview = "LargeWoodDoor_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_LargeWoodDoorLocked",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0]";
		};
	};
};

class Land_DZE_LargeWoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	model = "\z\addons\dayz_epoch\models\large_wall_door_locked_anim.p3d";
	displayName =  "Large Wood Door Locked";
	GhostPreview = "LargeWoodDoor_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
		class Open_hinge {
			source = "user";
			animPeriod = 1; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_LOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};

class Land_DZE_GarageWoodDoor: Land_DZE_WoodDoor_Base {
	model = "\z\addons\dayz_epoch\models\Garage_door_anim.p3d";
	displayName =  "Garage Wood Door";
	GhostPreview = "GarageWoodDoor_Preview_DZ";
	upgradeBuilding[] = {"Land_DZE_GarageWoodDoorLocked",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0]";
		};
	};
};

class Land_DZE_GarageWoodDoorLocked: Land_DZE_WoodDoorLocked_Base {
	model = "\z\addons\dayz_epoch\models\Garage_door_locked_anim.p3d";
	displayName =  "Garage Wood Door Locked";
	GhostPreview = "GarageWoodDoor_Preview_DZ";
	downgradeBuilding[] = {"Land_DZE_GarageWoodDoor",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
		class Open_hinge {
			source = "user";
			animPeriod = 1; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_LOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};


class CinderWallDoorLocked_DZ: CinderWallDoorLocked_DZ_Base {
	model = "\z\addons\dayz_epoch\models\steel_garage_locked.p3d";
	displayName =  "Block Garage Door Locked";
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	downgradeBuilding[] = {"CinderWallDoor_DZ",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
		class Open_latch {
			source = "user";
			animPeriod = 1; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_LOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement="this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};


class CinderWallDoor_DZ: CinderWallDoor_DZ_Base {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName =  "Block Garage Door";
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	upgradeBuilding[] = {"CinderWallDoorLocked_DZ",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0]";
		};
	};
};



class CinderWallDoorSmallLocked_DZ: CinderWallDoorLocked_DZ_Base {
	model = "\z\addons\dayz_epoch\models\Steel_door_locked.p3d";
	displayName =  "Block Door Locked";
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	downgradeBuilding[] = {"CinderWallDoorSmall_DZ",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
		class Open_latch {
			source = "user";
			animPeriod = 1; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{			
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_LOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement="this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName=$STR_EPOCH_DOORS_UNLOCK;
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog ""DoorAccess"";} else {createdialog ""ComboLockUI"";};";
		};
	};
};


class CinderWallDoorSmall_DZ: CinderWallDoor_DZ_Base {
	model = "\z\addons\dayz_epoch\models\Steel_door.p3d";
	displayName =  "Block Door";
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	upgradeBuilding[] = {"CinderWallDoorSmallLocked_DZ",{{"ItemComboLock",1}}};
	/* Arma needs to know, how the animation trigger is triggered*/
	class AnimationSources {
			/* name must be identical to the one given by the model.cfg ("Open_Door")" */
		class Open_door {
			source = "user";
			animPeriod = 4; /* duration in seconds */
			initPhase = 0; 
		};
	};
	
	/* The entry to the actionmenu */
	class UserActions
	{
		class Open_Door
		{
			displayName=$STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName=$STR_DN_OUT_C_DOOR;
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0]";
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
