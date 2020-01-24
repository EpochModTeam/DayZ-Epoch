class Smallboat_1;
class Smallboat_1_DZE: Smallboat_1
{
	scope = public;
	displayName = "$STR_DN_SMALLBOATA";
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;	
	transportMaxBackpacks = 4;	
	supplyRadius = 3;
};

class Smallboat_2_DZE: Smallboat_1_DZE
{
	displayName = "$STR_DN_SMALLBOATB";
	model = "\CA\water2\small_boat\smallboat_2";
};
