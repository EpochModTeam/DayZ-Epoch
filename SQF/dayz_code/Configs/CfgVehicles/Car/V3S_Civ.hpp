class V3S_Civ: V3S_Base {
		crew = "";
		faction = "CIV";
		rarityurban = 0.3;
		scope = public;
		side = 3;
		typicalCargo[] = {};
		class TransportMagazines {};
		class TransportWeapons {};
		class Library {
			libtextdesc = $STR_EP1_LIB_V3S;
		};
	};

class V3S_Base_EP1;
class V3S_Open_TK_CIV_EP1: V3S_Base_EP1 {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};
class V3S_Open_TK_EP1: V3S_Base_EP1 {
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};
class V3S_TK_EP1_DZE: V3S_Base_EP1 {
	scope = public;
	side = 0;
	faction = "BIS_TK";
	crew = "";
	typicalCargo[] = {};
	model = "\ca\wheeled_E\V3S\V3S_transport";
	displayname = "V3S";
	driverAction = "V3S_Driver_EP1";
	class TransportMagazines {};
	class TransportWeapons {};
};
class V3S_RA_TK_GUE_EP1_DZE: V3S_Base_EP1 {
	scope = public;
	side = 2;
	faction = "BIS_TK_GUE";
	crew = "";
	//armor = 40;
	typicalCargo[] = {};
	vehicleClass = "Support";
	displayname = "V3S Reammo";
	model = "\ca\wheeled_E\V3S\V3S_Repair";
	Icon = "\CA\wheeled_e\data\UI\Icon_V3S_repair_CA.paa";
	Picture = "\CA\wheeled_e\data\UI\Picture_V3S_repair_CA.paa";
	MapSize = 7;
	driverAction = "V3S_Driver_EP1";
	transportSoldier = 2;
	class TransportMagazines {};
	class TransportWeapons {};
	type = 0;
	threat[] = {0,0,0};
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_EGUE_co","ca\wheeled_E\V3S\Data\v3s_intkor_EGUE_co","ca\wheeled_E\V3S\Data\v3s_koloint02_EGUE_co","ca\wheeled_E\V3S\Data\v3s_repair_EGUE_co"};
	//transportMaxMagazines = 200;
	//transportMaxWeapons = 50;
	//transportMaxBackpacks = 8;
	//terrainCoef = 2.5;
};
class V3S_Refuel_TK_GUE_EP1;
class V3S_Refuel_TK_GUE_EP1_DZ: V3S_Refuel_TK_GUE_EP1 {
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0;
	fuelCapacity = 10000;
};