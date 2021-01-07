class GraveDZE: Land_A_tent 
{
	scope = 2;
	vehicleClass = "DayZ Epoch Misc";
	displayName = $STR_EPOCH_BONES_GRAVE;
	destrType = "DestructNo";
	model = "\z\addons\dayz_epoch\models\skeleton.p3d";
	transportMaxMagazines = 80;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 1;
};

class Mass_grave;
class Mass_grave_DZ: Mass_grave
{
	vehicleClass = "DayZ Epoch Misc";
};

class Mass_grave_DZE: Mass_grave_DZ
{
	transportMaxMagazines = 200;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 10;
};

class Wreck_Base;
class Body1 : Wreck_Base
{
	scope = 2;
	mapSize = 2;
	displayName = $STR_EPOCH_DEAD_SOLDIER;
	model = "\dayz\objects\dead_soldier_0";
	vehicleClass = "DayZ Epoch Misc";
};

class Body1_DZE : Body1
{
	transportMaxMagazines = 80;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 5;	
};

class Body2 : Wreck_Base
{
	scope = 2;
	mapSize = 2;
	displayName = $STR_EPOCH_DEAD_SOLDIER;
	model = "\dayz\objects\dead_soldier_1";
	vehicleClass = "DayZ Epoch Misc";
};


class Body2_DZE : Body2
{
	transportMaxMagazines = 80;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 5;	
};