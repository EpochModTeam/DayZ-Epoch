class V3S_Base;
class V3S_Civ: V3S_Base {
	crew = "";
	faction = "CIV";
	rarityurban = 0.3;
	scope = 2;
	side = 3;
	typicalcargo[] = {};
	class Library {
		libtextdesc = "The V3S is a Czech-made military 6x6 cargo truck capable of carrying cargo up to 5 tons, or up to 3 tons in rough terrain.<br/>This one is a harmless civilian vehicle.";
	};
};

class V3S_Base_EP1;

class V3S_TK_EP1_DZE: V3S_Base_EP1
{
	scope = 2;
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

class V3S_RA_TK_GUE_EP1_DZE: V3S_Base_EP1
{
	scope = 2;
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