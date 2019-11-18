class UralCivil: Ural_Base {
	displayName= $STR_VEH_NAME_URAL_CIVIL;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};
class Ural_CDF: Ural_Base {
	crew = "";
	displayName= $STR_VEH_NAME_URAL_CDF;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};
class Ural_TK_CIV_EP1: Ural_Base {
	crew = "";
	displayName= $STR_VEH_NAME_URAL_TK;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};
class Ural_UN_EP1: Ural_Base {
	crew = "";
	displayName= $STR_VEH_NAME_URAL_UN;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
};

class UralCivil_DZ: UralCivil {
	scope = public;
	side=TCivilian;
	faction=CIV;
	vehicleClass = "Car";
	
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 10;
	
	crew = "";
	typicalCargo[]={};
	model=\ca\wheeled\ural;
	picture="\Ca\wheeled\data\ico\ural_civil1_CA.paa";
	rarityUrban=0.3;
	accuracy=0.22;
	hiddenSelectionsTextures[] =
	{
		"\ca\wheeled\data\ural_kabina_civ1_co.paa",
		"\ca\wheeled\data\ural_plachta_civ1_co.paa"
	};
};

class UralCivil_DZE : Ural_Base {
	scope = public;
	side = 3;
	faction = "CIV";
	displayName= $STR_VEH_NAME_URAL_CIVIL;
	vehicleClass = "Car";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	model = "\ca\wheeled\ural";
	picture = "\Ca\wheeled\data\ico\ural_civil1_CA.paa";
	rarityUrban = 0.3;
	accuracy = 0.22;
	hiddenSelectionsTextures[] = {
		"\ca\wheeled\data\ural_kabina_civ1_co.paa",
		"\ca\wheeled\data\ural_plachta_civ1_co.paa"
	};
};
class UralOpen_Base;
class UralCivil2_DZE : UralOpen_Base {
	displayName = $STR_VEH_NAME_URAL_CIVIL_OPEN;
	model = "\ca\wheeled\Ural_Open";
	accuracy = 0.22;
	scope = public;
	side = 3;
	faction = "CIV";
	vehicleClass = "Car";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	picture = "\Ca\wheeled\data\ico\ural_civil1_CA.paa";
	rarityUrban = 0.22;
	hiddenSelectionsTextures[] = {
		"\ca\wheeled\data\ural_kabina_civ2_co.paa",
		"\ca\wheeled\data\ural_korba_civ2_co.paa"
	};
};
class UralRefuel_TK_EP1;
class UralRefuel_TK_EP1_DZ: UralRefuel_TK_EP1 {
	scope = public;
	displayName = $STR_VEH_NAME_URAL_FUEL;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	transportMaxWeapons = 50;
	transportMaxMagazines = 200;
	transportmaxbackpacks = 8;	
	class TransportMagazines{};
	class TransportWeapons{};
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;
};
