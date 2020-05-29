class GraveDZE: Land_A_tent {
	vehicleClass = "DayZ Epoch Buildings";
	displayName = "Grave DZE";
	destrType = "DestructNo";
	model = "\z\addons\dayz_epoch\models\skeleton.p3d";
	transportMaxMagazines = 80;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 1;
};

class Mass_grave;
class Mass_grave_DZ: Mass_grave
{
	vehicleClass = "DayZ Epoch Buildings";
};

class Mass_grave_DZE: Mass_grave
{
	vehicleClass = "DayZ Epoch Buildings";
	transportMaxMagazines = 200;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 10;
};