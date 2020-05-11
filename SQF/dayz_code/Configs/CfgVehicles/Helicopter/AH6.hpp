class AH6J_EP1;
class AH6J_EP1_DZ: AH6J_EP1
{
	scope = public;
	displayName = $STR_VEH_NAME_AH6J;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	weapons[] = {"TwinM134","CMFlareLauncher"};
	magazines[] = {"4000Rnd_762x51_M134","60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportmaxbackpacks = 4;
	fuelCapacity = 242;
	supplyRadius = 1.3;
	radartype = 0;
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		fired = "_this call BIS_Effects_EH_Fired;";
	};
};

class AH6J_EP1_DZE: AH6J_EP1_DZ
{
	scope = public;
	displayName = $STR_VEH_NAME_AH6J;
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
};

class AH6X_EP1;
class AH6X_DZ: AH6X_EP1 {
	displayname = $STR_VEH_NAME_AH6X;
	vehicleClass = "DayZ Epoch Vehicles";
	model = "dayz_vehicles\helicopters\greybird\greybird.p3d";
	scope = public;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"60Rnd_CMFlareMagazine","60Rnd_CMFlareMagazine"};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 10;
	transportMaxMagazines = 40;
	transportmaxbackpacks = 4;
	fuelCapacity = 242;
	radartype = 0;
	supplyRadius = 1.3;

	class Turrets {};
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
	};
};