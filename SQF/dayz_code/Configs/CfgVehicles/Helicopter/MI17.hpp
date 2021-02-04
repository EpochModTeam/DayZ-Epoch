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
	scope = 2;
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
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_DZE1: Mi17_DZE
{
	displayName = "$STR_VEH_NAME_MI17+";
	original = "Mi17_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_DZE2: Mi17_DZE1
{
	displayName = "$STR_VEH_NAME_MI17++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_DZE3: Mi17_DZE2
{
	displayName = "$STR_VEH_NAME_MI17+++";
	fuelCapacity = 4000;
};

class Mi17_TK_EP1_DZ: Mi17_base  {
	displayname = "$STR_VEH_NAME_MI17_TK";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
class Mi17_TK_EP1_DZE: Mi17_TK_EP1_DZ {
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_TK_EP1_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_TK_EP1_DZE1: Mi17_TK_EP1_DZE
{
	displayName = "$STR_VEH_NAME_MI17_TK+";
	original = "Mi17_TK_EP1_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_TK_EP1_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_TK_EP1_DZE2: Mi17_TK_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_TK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_TK_EP1_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_TK_EP1_DZE3: Mi17_TK_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_TK+++";
	fuelCapacity = 4000;
};

class Mi17_UN_CDF_EP1_DZ: Mi17_base  {
	displayname = "$STR_VEH_NAME_MI17_UN";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
class Mi17_UN_CDF_EP1_DZE: Mi17_UN_CDF_EP1_DZ {
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_UN_CDF_EP1_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_UN_CDF_EP1_DZE1: Mi17_UN_CDF_EP1_DZE
{
	displayName = "$STR_VEH_NAME_MI17_UN+";
	original = "Mi17_UN_CDF_EP1_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_UN_CDF_EP1_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_UN_CDF_EP1_DZE2: Mi17_UN_CDF_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_UN++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_UN_CDF_EP1_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_UN_CDF_EP1_DZE3: Mi17_UN_CDF_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_UN+++";
	fuelCapacity = 4000;
};

class Mi17_CDF_DZ: Mi17_base {
	displayname = "$STR_VEH_NAME_MI17_CDF";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets  {
		class MainTurret : MainTurret  {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
		class BackTurret : BackTurret {
			gunnerCompartments = "compartment3";
			magazines[] = {};
		};
	};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_CDF_DZE1: Mi17_CDF_DZE
{
	displayName = "$STR_VEH_NAME_MI17_CDF+";
	original = "Mi17_CDF_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_CDF_DZE2: Mi17_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_CDF_DZE3: Mi17_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_CDF+++";
	fuelCapacity = 4000;
};

class Mi171Sh_CZ_EP1_DZ: Mi17_base {
	displayname = "$STR_VEH_NAME_MI17_SH";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	class Turrets : Turrets {
		class LeftTurret : MainTurret {
			gunnerCompartments = "compartment3";
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
			gunnerCompartments = "compartment3";
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
			gunnerCompartments = "compartment3";
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi171Sh_CZ_EP1_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi171Sh_CZ_EP1_DZE1: Mi171Sh_CZ_EP1_DZE
{
	displayName = "$STR_VEH_NAME_MI17_SH+";
	original = "Mi171Sh_CZ_EP1_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi171Sh_CZ_EP1_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi171Sh_CZ_EP1_DZE2: Mi171Sh_CZ_EP1_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_SH++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi171Sh_CZ_EP1_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi171Sh_CZ_EP1_DZE3: Mi171Sh_CZ_EP1_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_SH+++";
	fuelCapacity = 4000;
};

class Mi17_DES_DZ: Mi17_DZ {
	displayname = "$STR_VEH_NAME_MI17_DESERT";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body5_co.paa","\dayz_epoch_c\skins\mi17\mi17_det2_co.paa"};
};

class Mi17_DES_DZE: Mi17_DZE {
	displayname = "$STR_VEH_NAME_MI17_DESERT";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body5_co.paa","\dayz_epoch_c\skins\mi17\mi17_det2_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_DES_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_DES_DZE1: Mi17_DES_DZE
{
	displayName = "$STR_VEH_NAME_MI17_DESERT+";
	original = "Mi17_DES_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_DES_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_DES_DZE2: Mi17_DES_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_DESERT++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_DES_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_DES_DZE3: Mi17_DES_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_DESERT+++";
	fuelCapacity = 4000;
};

class Mi17_GREEN_DZ: Mi17_DZ {
	displayname = "$STR_VEH_NAME_MI17_GREEN";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body2_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
};

class Mi17_GREEN_DZE: Mi17_DZE {
	displayname = "$STR_VEH_NAME_MI17_GREEN";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body2_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_GREEN_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_GREEN_DZE1: Mi17_GREEN_DZE
{
	displayName = "$STR_VEH_NAME_MI17_GREEN+";
	original = "Mi17_GREEN_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_GREEN_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_GREEN_DZE2: Mi17_GREEN_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_GREEN++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_GREEN_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_GREEN_DZE3: Mi17_GREEN_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_GREEN+++";
	fuelCapacity = 4000;
};

class Mi17_BLUE_DZ: Mi17_DZ {
	displayname = "$STR_VEH_NAME_MI17_BLUE";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body3_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
};

class Mi17_BLUE_DZE: Mi17_DZE {
	displayname = "$STR_VEH_NAME_MI17_BLUE";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body3_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_BLUE_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_BLUE_DZE1: Mi17_BLUE_DZE
{
	displayName = "$STR_VEH_NAME_MI17_BLUE+";
	original = "Mi17_BLUE_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_BLUE_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_BLUE_DZE2: Mi17_BLUE_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_BLUE++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_BLUE_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_BLUE_DZE3: Mi17_BLUE_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_BLUE+++";
	fuelCapacity = 4000;
};

class Mi17_BLACK_DZ: Mi17_DZ {
	displayname = "$STR_VEH_NAME_MI17_BLACK";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body4_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
};

class Mi17_BLACK_DZE: Mi17_DZE {
	displayname = "$STR_VEH_NAME_MI17_BLACK";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body4_co.paa","\dayz_epoch_c\skins\mi17\mi17_det_co.paa"};
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_BLACK_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_BLACK_DZE1: Mi17_BLACK_DZE
{
	displayName = "$STR_VEH_NAME_MI17_BLACK+";
	original = "Mi17_BLACK_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_BLACK_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_BLACK_DZE2: Mi17_BLACK_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_BLACK++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_BLACK_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_BLACK_DZE3: Mi17_BLACK_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_BLACK+++";
	fuelCapacity = 4000;
};

class Mi17_RUST_DZ: Mi17_CDF_DZ {
	displayname = "$STR_VEH_NAME_MI17_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi8_body_crash_co.paa","ca\air\data\mi8_det_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\mi8_decals_ca.paa"};
};

class Mi17_RUST_DZE: Mi17_CDF_DZE {
	displayname = "$STR_VEH_NAME_MI17_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi8_body_crash_co.paa","ca\air\data\mi8_det_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\mi8_decals_ca.paa"};

	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_RUST_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_RUST_DZE1: Mi17_RUST_DZE
{
	displayName = "$STR_VEH_NAME_MI17_RUST+";
	original = "Mi17_RUST_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_RUST_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_RUST_DZE2: Mi17_RUST_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_RUST++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_RUST_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_RUST_DZE3: Mi17_RUST_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_RUST+++";
	fuelCapacity = 4000;
};

class Mi17_WINTER_DZ: Mi17_TK_EP1_DZ {
	displayname = "$STR_VEH_NAME_MI17_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body_winter.paa", "\dayz_epoch_c\skins\mi17\mi17_det_winter.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
};

class Mi17_WINTER_DZE: Mi17_TK_EP1_DZE {
	displayname = "$STR_VEH_NAME_MI17_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\mi17\mi17_body_winter.paa", "\dayz_epoch_c\skins\mi17\mi17_det_winter.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};

	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_WINTER_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_WINTER_DZE1: Mi17_WINTER_DZE
{
	displayName = "$STR_VEH_NAME_MI17_WINTER+";
	original = "Mi17_WINTER_DZE";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_WINTER_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_WINTER_DZE2: Mi17_WINTER_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_WINTER++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_WINTER_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_WINTER_DZE3: Mi17_WINTER_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_WINTER+++";
	fuelCapacity = 4000;
};

//Unarmed
class Mi17_Civilian;
class Mi17_Civilian_DZ: Mi17_Civilian {
	displayname = "$STR_VEH_NAME_MI17_CIVIL";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_Civilian_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_Civilian_DZE1: Mi17_Civilian_DZ
{
	displayName = "$STR_VEH_NAME_MI17_CIVIL+";
	original = "Mi17_Civilian_DZ";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_Civilian_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_Civilian_DZE2: Mi17_Civilian_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_CIVIL++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_Civilian_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_Civilian_DZE3: Mi17_Civilian_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_CIVIL+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_CDF;
class Mi17_medevac_CDF_DZ: Mi17_medevac_CDF {
	displayname = "$STR_VEH_NAME_MI17_MEDEVAC_CDF";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_medevac_CDF_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_medevac_CDF_DZE1: Mi17_medevac_CDF_DZ
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF+";
	original = "Mi17_medevac_CDF_DZ";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_medevac_CDF_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_medevac_CDF_DZE2: Mi17_medevac_CDF_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_medevac_CDF_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_medevac_CDF_DZE3: Mi17_medevac_CDF_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_CDF+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_Ins;
class Mi17_medevac_Ins_DZ: Mi17_medevac_Ins {
	displayname = "$STR_VEH_NAME_MI17_MEDEVAC_INS";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_medevac_Ins_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_medevac_Ins_DZE1: Mi17_medevac_Ins_DZ
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS+";
	original = "Mi17_medevac_Ins_DZ";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_medevac_Ins_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_medevac_Ins_DZE2: Mi17_medevac_Ins_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_medevac_Ins_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_medevac_Ins_DZE3: Mi17_medevac_Ins_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_INS+++";
	fuelCapacity = 4000;
};

class Mi17_medevac_RU;
class Mi17_medevac_RU_DZ: Mi17_medevac_RU {
	displayname = "$STR_VEH_NAME_MI17_MEDEVAC_RU";
	vehicleClass = "DayZ Epoch Vehicles";
	scope = 2;
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"Mi17_medevac_RU_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};	
};

class Mi17_medevac_RU_DZE1: Mi17_medevac_RU_DZ
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU+";
	original = "Mi17_medevac_RU_DZ";
	armor = 60;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"Mi17_medevac_RU_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class Mi17_medevac_RU_DZE2: Mi17_medevac_RU_DZE1
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU++";
	transportMaxWeapons = 60;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 16;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"Mi17_medevac_RU_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class Mi17_medevac_RU_DZE3: Mi17_medevac_RU_DZE2
{
	displayName = "$STR_VEH_NAME_MI17_MEDEVAC_RU+++";
	fuelCapacity = 4000;
};