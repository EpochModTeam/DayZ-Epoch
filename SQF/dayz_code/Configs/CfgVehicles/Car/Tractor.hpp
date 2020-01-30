class Tractor;
class Tractor_DZE: Tractor {
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_TRACTOR;	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	
	class Reflectors
	{
		class Left
		{
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 120;
		};
	};	
};

class tractorOld;
class TractorOld_DZE: tractorOld {
	vehicleClass = "DayZ Epoch Vehicles";
	displayname = $STR_VEH_NAME_TRACTOR_OLD;	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Reflectors
	{
		class Left
		{
			color[] = {0.9,0.8,0.8,1.0};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.5;
			angle = 120;
		};
	};
};