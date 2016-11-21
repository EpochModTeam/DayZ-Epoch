class MV22;
class MV22_DZ : MV22 { 
	accuracy = 1000; 
	scope = public; 
	displayName = "MV-22"; 
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 10;
	fuelCapacity = 6513;
	class UserActions
	{
		class Repair {ACTION_REPAIR; radius = 8;};
		class Salvage {ACTION_SALVAGE; radius = 8;};
		class PushPlane {ACTION_PUSH;};
	};
};
