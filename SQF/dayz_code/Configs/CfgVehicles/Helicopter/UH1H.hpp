class UH1H_base: Helicopter 
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class LeftDoorGun: MainTurret
		{
			class Turrets: Turrets {};
		};
	};
};

class UH1H_DZ: UH1H_base
{
	displayname = $STR_VEH_NAME_UH1H_WOODLAND;
	vehicleClass = "DayZ Epoch Vehicles";
	scope = public;
	crew = "";
	model = "dayz_vehicles\helicopters\huey\huey.p3d";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};		
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 15;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 6;
	fuelCapacity = 1333;	
	radartype = 0;
	supplyRadius = 1.3;
	
	class Turrets : Turrets 
	{
		class MainTurret : MainTurret 
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
		class LeftDoorGun : LeftDoorGun
		{
			magazines[] = {"100Rnd_762x51_M240"};
		};
	};
};

class UH1H_2_DZ : UH1H_DZ
{
	displayname = $STR_VEH_NAME_UH1H_DESERT;
	hiddenSelections[] = {"Camo1","Camo2","Camo_mlod"};
	hiddenSelectionsTextures[] =
	{
		"ca\air_E\UH1H\data\UH1D_TKA_CO.paa",
		"ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa",
		"ca\air_E\UH1H\data\default_TKA_co.paa"
	};
};

class UH1H_DZE: UH1H_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class LeftDoorGun : LeftDoorGun {
			magazines[] = {};
		};
	};
};

class UH1H_2_DZE: UH1H_2_DZ {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class LeftDoorGun : LeftDoorGun {
			magazines[] = {};
		};
	};
};
