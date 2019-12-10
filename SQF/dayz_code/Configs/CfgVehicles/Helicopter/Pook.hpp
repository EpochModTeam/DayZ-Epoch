class pook_H13_base;
class pook_H13_base_DZE: pook_H13_base
{
	scope = 0;
	crew = "";
	enablemanualfire = 0;
	typicalCargo[] = {};
	radarType = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	class Turrets {};
	weapons[] = {};
	magazines[] = {};
	threat[] = {0,0,0};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	transportmaxbackpacks = 2;
	attendant = 0;	
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
	};
};

class pook_medevac_DZE: pook_H13_base_DZE
{
	scope = 2;
	displayName = $STR_VEH_NAME_BELLH13_MEDEVAC;
	model = "\pook_H13\pook_H13_medevac.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};
	transportSoldier = 3;
	cargoAction[] = {"UAZ_Cargo01","M113_Cargo04_EP1","M113_Cargo04_EP1"};
};

class pook_medevac_CDF_DZE: pook_medevac_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_MEDEVAC_GREEN;
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};
};

class pook_medevac_CIV_DZE: pook_medevac_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_MEDEVAC_ORANGE;
	hiddenSelectionsTextures[] = {"\CA\air2\Chukar\Data\chukar_co.paa","CA\wheeled\data\Signs\red_cross_ca.paa","ca\air\data\clear_empty.paa"};
};

class pook_gunship_DZ:  pook_H13_base_DZE
{
	scope = 2;
	displayName = $STR_VEH_NAME_BELLH13_GUNSHIP;
	model = "\pook_H13\pook_H13_gunship.p3d";
	hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\a10\data\a10_01_co.paa","ca\a10\data\a10_02_co.paa"};
	transportSoldier = 1;
	threat[] = {0.05,0.1,0.01};
	gunBeg[] = {"muzzle_1","muzzle_2"};
	gunEnd[] = {"chamber_1","chamber_2"};
	memoryPointGun = "machinegun";
	memoryPointLMissile = "Missile_1";
	memoryPointRMissile = "Missile_2";
	memoryPointLRocket = "Rocket_1";
	memoryPointRRocket = "Rocket_2";
	selectionFireAnim = "zasleh";
	weapons[] = {"pook_M60_dual","pook_H13Grenades"};
	magazines[] = {"pook_1300Rnd_762x51_M60","pook_12Rnd_Grenade_Camel"};

	class DefaultEventhandlers;
	class Eventhandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class pook_gunship_DZE: pook_gunship_DZ
{
	magazines[] = {};
};

class pook_gunship_CDF_DZ: pook_gunship_DZ
{
	displayName = $STR_VEH_NAME_BELLH13_GUNSHIP_GREEN;
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_gunship_CDF_DZE: pook_gunship_CDF_DZ
{
	magazines[] = {};
};

class pook_H13_transport;
class pook_transport_DZ: pook_H13_transport
{
	scope = 2;
	displayName = $STR_VEH_NAME_BELLH13_TRANSPORT;
	crew = "";
	typicalCargo[] = {};
	radarType = 0;
	class TransportMagazines{};
	class TransportWeapons{};	
	cargoIsCoDriver[] = {1,0,0};
	cargoAction[] = {"MH6_Cargo01","MH6_Cargo03","MH6_Cargo02"};
	threat[] = {0.01,0.01,0.01};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 3;
	transportMaxMagazines = 30;
	transportmaxbackpacks = 2;
	attendant = 0;	
	transportAmmo = 0;
	hideWeaponsCargo = 0;
	fuelCapacity = 450;	
	weapons[] = {"SmokeLauncher","pook_H13Grenades"};
	magazines[] = {"SmokeLauncherMag","pook_12Rnd_Grenade_Camel"};
	
	class Turrets; // External class reference
	class MainTurret; // External class reference

	class DefaultEventhandlers;
	class Eventhandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class pook_transport_DZE: pook_transport_DZ
{	
	magazines[] = {};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};	
};

class pook_transport_CDF_DZ: pook_transport_DZ
{
	displayName = $STR_VEH_NAME_BELLH13_TRANSPORT_GREEN;
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8_body_g_cdf_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_transport_CDF_DZE: pook_transport_CDF_DZ
{
	magazines[] = {};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};	
};

class pook_H13_civ_DZE: pook_H13_base_DZE
{
	scope = 2;
	displayName = $STR_VEH_NAME_BELLH13_CIV;
	hiddenSelectionsTextures[] = {"\CA\air\Data\mi8civil_body_g_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_H13_civ_white_DZE: pook_H13_civ_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_CIV_WHITE;
	hiddenSelectionsTextures[] = {"\CA\air_e\Data\mi17_body_un_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_H13_civ_slate_DZE: pook_H13_civ_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_CIV_BLUE;
	hiddenSelectionsTextures[] = {"\CA\water2\Seafox\Data\seafox_co.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_H13_civ_black_DZE: pook_H13_civ_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_CIV_BLACK;
	hiddenSelectionsTextures[] = {"ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};

class pook_H13_civ_yellow_DZE: pook_H13_civ_DZE
{
	displayName = $STR_VEH_NAME_BELLH13_CIV_YELLOW;
	hiddenSelectionsTextures[] = {"pook_h13\data\yellow.paa","ca\air\data\clear_empty.paa","ca\air\data\clear_empty.paa"};
};