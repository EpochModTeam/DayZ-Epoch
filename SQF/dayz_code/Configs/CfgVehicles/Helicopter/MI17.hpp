class Mi17_base: Helicopter  {
	class Turrets: Turrets {

		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class BackTurret: MainTurret {
			class Turrets: Turrets {};
		};
	};
};

class Mi17_DZ: Mi17_base	 {
	displayname = $STR_VEH_NAME_MI17;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	radartype = 0;
	
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_DZE: Mi17_DZ	 {
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_TK_EP1_DZ: Mi17_base  {
	displayname = $STR_VEH_NAME_MI17_TK;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
	radartype = 0;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_TK_EP1_DZE: Mi17_TK_EP1_DZ	 {
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_UN_CDF_EP1_DZ: Mi17_base  {
	displayname = $STR_VEH_NAME_MI17_UN;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_UN_CO.paa", "\CA\air_E\data\mi17_det_UN_CO.paa", "\ca\air_E\Data\mi17_decals2_UN_CA.paa", "\ca\air_E\Data\mi17_decals_UN_CA.paa"};
	radartype = 0;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_UN_CDF_EP1_DZE: Mi17_UN_CDF_EP1_DZ	 {
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi17_CDF_DZ: Mi17_base {
	displayname = $STR_VEH_NAME_MI17_CDF;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelectionsTextures[] = {"\CA\air\data\mi8_body_g_CDF_CO.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
	radartype = 0;

	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {"100Rnd_762x54_PK"};
		};
		class BackTurret : BackTurret {
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
};
class Mi17_CDF_DZE: Mi17_CDF_DZ	 {
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			magazines[] = {};
		};
	};
};

class Mi171Sh_CZ_EP1_DZ: Mi17_base {
	displayname = $STR_VEH_NAME_MI17_SH;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_ACR_CO.paa", "\CA\air_E\data\mi17_det_ACR_CO.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa", "\ca\air\data\mi8_decals_ca.paa"};
	model = "\CorePatch\CorePatch_Mi8\models\Mi_171";
	picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
	Icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
	mapSize = 25;
	accuracy = 1000;	// accuracy needed to recognize type of this target
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	LockDetectionSystem = 0;
	IncommingMisslieDetectionSystem = 0;
	gunnerUsesPilotView = true;
	radartype = 0;
	
	// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
	threat[] = {1, 0.6, 0.3};

	enableSweep = false;
	
	class Turrets : Turrets {
		class LeftTurret : MainTurret {
			proxyIndex = 2;
			commanding = -1;
			primaryGunner = 0;
			gunnerName = $STR_POSITION_DOORGUNNER;
			maxElev = 30;
			initElev = 11;
			minTurn = 20;
			maxTurn = 155;
			initTurn = 80;
			magazines[] = {"100Rnd_762x54_PK"};
		};
		
		class BackTurret : BackTurret {
			gunnerName = $STR_POSITION_REARGUNNER;
			primaryGunner = 1;
			commanding = -3;
			proxyIndex = 3;
			gunnerAction = "Mi171_Gunner_EP1";
			gunnerInAction = "Mi171_Gunner_EP1";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -49;
			maxElev = 10;
			initElev = 0;
			magazines[] = {"100Rnd_762x54_PK"};
		};
		
		class RightTurret : MainTurret {
			proxyIndex = 1;
			gunnerName = $STR_POSITION_CREWCHIEF;
			body = "Turret_3";
			gun = "Gun_3";
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			minElev = -60;
			maxElev = 30;
			initElev = 11;
			minTurn = -155;
			maxTurn = -30;
			initTurn = -70;
			weapons[] = {PKT_3};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_3";	// endpoint of the gun
			gunEnd = "chamber_3";	// chamber of the gun
			gunnerAction = "Mi8_Gunner";
			gunnerInAction = "Mi8_Gunner";
			memoryPointGun = "muzzle_3";
			memoryPointGunnerOptics = "gunnerview3";
			selectionFireAnim = "zasleh3";
			primaryGunner = 0;
			commanding = -1;
			magazines[] = {"100Rnd_762x54_PK"};
		};
	};
	
	class AnimationSources : AnimationSources {
		class HUDaction {
			source = "user";
			animPeriod = 2;
			initPhase = 0;
		};
		
		class HUDaction_Hide : HUDaction {};
		
		class ReloadAnim_3 {
			source = "reload";
			weapon = PKT_3;
		};
		
		class ReloadMagazine_3 {
			source = "reloadmagazine";
			weapon = PKT_3;
		};
		
		class Revolving_3 {
			source = "revolving";
			weapon = PKT_3;
		};
		
		class HIDE_weapon_holders {
			source = "user";
			animPeriod = 1e-007;
			initPhase = 1;
		};
		
		class HIDE_front_armor : HIDE_weapon_holders {
			initPhase = 1;
		};
		
		class HIDE_exhaust : HIDE_weapon_holders {
			initPhase = 1;
		};
	};
	
	class UserActions {
		class HUDoff {
			displayName = $STR_AM_HUDON;
			displayNameDefault = $STR_AM_HUDON;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
			statement = "this animate [""HUDAction"",0];this animate [""HUDaction_Hide"",0]";
		};	
		class HUDon {
			displayName = $STR_AM_HUDOFF;
			displayNameDefault = $STR_AM_HUDOFF;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
			statement = "this animate [""HUDAction"",1];this animate [""HUDaction_Hide"",1]";
		};
	};
};

class Mi171Sh_CZ_EP1_DZE: Mi171Sh_CZ_EP1_DZ {
	class Turrets : Turrets {
		class LeftTurret : MainTurret {
			proxyIndex = 2;
			commanding = -1;
			primaryGunner = 0;
			gunnerName = $STR_POSITION_DOORGUNNER;
			maxElev = 30;
			initElev = 11;
			minTurn = 20;
			maxTurn = 155;
			initTurn = 80;
			magazines[] = {};
		};
		
		class BackTurret : BackTurret {
			gunnerName = $STR_POSITION_REARGUNNER;
			primaryGunner = 1;
			commanding = -3;
			proxyIndex = 3;
			gunnerAction = "Mi171_Gunner_EP1";
			gunnerInAction = "Mi171_Gunner_EP1";
			minTurn = 130;
			maxTurn = 230;
			initTurn = 180;
			minElev = -34;
			maxElev = 10;
			initElev = 0;
			magazines[] = {};
		};
		
		class RightTurret : MainTurret {
			proxyIndex = 1;
			gunnerName = $STR_POSITION_CREWCHIEF;
			body = "Turret_3";
			gun = "Gun_3";
			animationSourceBody = "Turret_3";
			animationSourceGun = "Gun_3";
			minElev = -49;
			maxElev = 30;
			initElev = 11;
			minTurn = -155;
			maxTurn = -30;
			initTurn = -70;
			weapons[] = {PKT_3};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_3";	// endpoint of the gun
			gunEnd = "chamber_3";	// chamber of the gun
			gunnerAction = "Mi8_Gunner";
			gunnerInAction = "Mi8_Gunner";
			memoryPointGun = "muzzle_3";
			memoryPointGunnerOptics = "gunnerview3";
			selectionFireAnim = "zasleh3";
			primaryGunner = 0;
			commanding = -1;
			magazines[] = {};
		};
	};
};

//Unarmed
class Mi17_Civilian;
class Mi17_Civilian_DZ: Mi17_Civilian {
	displayname = $STR_VEH_NAME_MI17_CIVIL;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};	
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	radartype = 0;
};

class Mi17_medevac_CDF;
class Mi17_medevac_CDF_DZ: Mi17_medevac_CDF {
	displayname = $STR_VEH_NAME_MI17_MEDEVAC_CDF;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;
};

class Mi17_medevac_Ins;
class Mi17_medevac_Ins_DZ: Mi17_medevac_Ins {
	displayname = $STR_VEH_NAME_MI17_MEDEVAC_INS;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;
};

class Mi17_medevac_RU;
class Mi17_medevac_RU_DZ: Mi17_medevac_RU {
	displayname = $STR_VEH_NAME_MI17_MEDEVAC_RU;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 30;
	transportMaxMagazines = 150;
	transportmaxbackpacks = 8;
	fuelCapacity = 1870;
	attendant = 0;
	radartype = 0;
};
