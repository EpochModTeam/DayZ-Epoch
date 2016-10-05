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
	displayname = "UH-1H (Green Camo)";
	displaynameshort = "UH-1H (Green Camo)";
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
	fuelCapacity = 1333;
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
	displayname = "UH-1H (Desert Camo)";
	displaynameshort = "UH-1H (Desert Camo)";	
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
