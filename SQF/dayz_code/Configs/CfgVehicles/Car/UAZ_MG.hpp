class UAZ_MG_TK_EP1;
class UAZ_MG_TK_EP1_DZ: UAZ_MG_TK_EP1
{
	scope = 2;
	displayName = $STR_VEH_NAME_UAZ_DSHKM;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	supplyRadius = 1.3;	
};

class UAZ_MG_TK_EP1_DZE: UAZ_MG_TK_EP1_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
};