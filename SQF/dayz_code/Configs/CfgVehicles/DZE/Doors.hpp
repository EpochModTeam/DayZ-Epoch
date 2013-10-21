/* Again your very own basic definition*/
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
	armor = 200;
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
	coefInside = 4;
	coefInsideHeur = 4;
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
	scope = 1;
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
	armor = 800;
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
	armor = 200;						/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = 2;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	armor = 200;						/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = 2;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	armor = 1000;					/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = 2;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	armor = 1000;					/* "Lifepoints", if you like to call it that way.*/
	destrType = "DestructBuilding";		/* type of destruction, when armor = 0 */
	scope = 2;							/* Display it in the editor? 1 = No, 2 = Yes */
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
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
	displayName = "Wood Wall ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};
class Land_wood_wreck_third : ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
	displayName = "Wood Wall 1/3 ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wood_wreck_half : ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
	displayName = "Wood Floor 1/2 ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wood_wreck_floor : ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
	displayName = "Wood Floor ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_wood_wreck_quarter : ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
	displayName = "Wood Floor 1/4 ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
};

class Land_wreck_cinder: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
	displayName = "Cinder wall ruins";
	removeoutput[] = {{"CinderBlocks",{0,1}}};
};
class Land_wreck_metal_floor: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
	displayName = "Metal Floor ruins";
	removeoutput[] = {{"ItemPole",{0,2}},{"ItemTankTrap",{0,2}}};
};

class Land_iron_vein_wreck: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
	displayName = "iron vein ruins";
	removeoutput[] = {{"PartOre",{6,4}},{"PartOreSilver",{0,1}},{"PartOreGold",{0,1}}};
};
class Land_silver_vein_wreck: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
	displayName = "silver vein ruins";
	removeoutput[] = {{"PartOreSilver",{6,4}},{"PartOre",{0,1}},{"PartOreGold",{0,1}}};
};
class Land_gold_vein_wreck: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
	displayName = "gold vein ruins";
	removeoutput[] = {{"PartOreGold",{6,4}},{"PartOre",{0,1}},{"PartOreSilver",{0,1}}};
};

class Land_ammo_supply_wreck: ruins	{
	scope = 1;
	model = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
	displayName = "Supply Crate";
	removeoutput[] = {{"100Rnd_762x54_PK",{0,1}},{"29Rnd_30mm_AGS30",{0,1}},{"50Rnd_127x107_DSHKM",{0,1}},{"100Rnd_127x99_M2",{0,1}},{"2000Rnd_762x51_M134",{0,1}},{"48Rnd_40mm_MK19",{0,1}},{"100Rnd_762x51_M240",{0,1}}};
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName="Lock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;createdialog ""ComboLockUI""";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName="Lock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;createdialog ""ComboLockUI""";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName="Lock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement="this animate [""Open_hinge"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement="this animate [""Open_hinge"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;createdialog ""ComboLockUI""";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName="Lock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement="this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;createdialog ""ComboLockUI""";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			//condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_door"", 0]";
		};
		class Lock_Door : Open_Door
		{
			displayName="Lock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement="this animate [""Open_latch"", 0]";
		};
		class Unlock_Door : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="(DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement="this animate [""Open_latch"", 1]";
		};
		class Unlock_Door_Dialog : Open_Door
		{
			displayName="Unlock Door";
			//condition="(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			condition="DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement="dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;createdialog ""ComboLockUI""";
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
			displayName="Open Door";
			onlyforplayer = true;
			position="Door_knopf";
			radius=3; /* visibility distance of the entry */
			condition="this animationPhase ""Open_door"" < 0.5";
			statement="this animate [""Open_door"", 1]";
		};
		class Close_Door : Open_Door
		{
			displayName="Close Door";
			condition="this animationPhase ""Open_door"" >= 0.5";
			statement="this animate [""Open_door"", 0]";
		};
	};
};