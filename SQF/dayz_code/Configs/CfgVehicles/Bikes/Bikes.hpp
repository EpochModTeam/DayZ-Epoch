class Bicycle;
class Old_bike_base_EP1 : Bicycle
{
	class Reflectors 
	{
		class Right
		{
			color[] = {0.9,0.8,0.8,1};
			ambient[] = {0.1,0.1,0.1,1};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			brightness = 0.4;
			size = 1;
		};
	};
};

class Old_bike_TK_CIV_EP1;
class Old_bike_TK_CIV_EP1_DZE: Old_bike_TK_CIV_EP1 {
	scope = 2;
	displayName = $STR_VEH_NAME_BIKE_OLD;
	vehicleClass = "DayZ Epoch Vehicles";	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = -1;
};

class MMT_Civ;
class MMT_Civ_DZE: MMT_Civ {
	scope = 2;
	displayName = $STR_VEH_NAME_BIKE_MOUNTAINBIKE;
	vehicleClass = "DayZ Epoch Vehicles";	
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	supplyRadius = -1;
};
