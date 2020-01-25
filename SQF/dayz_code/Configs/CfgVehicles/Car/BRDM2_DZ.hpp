class BRDM2_HQ_Base;
class BRDM2_HQ_TK_GUE_EP1: BRDM2_HQ_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference	
};

class BRDM2_HQ_TK_GUE_EP1_DZ: BRDM2_HQ_TK_GUE_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_BRDM2_HQ;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	armor = 85;
	damageResistance = 0.032;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 220;
	enableGPS = 0;
	supplyRadius = 1.4;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -90;
				maxAngleX = 90;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.05;
				maxFov = 0.2;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				visionMode[] = {"Normal"};
			};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		};
	};		
};

class BRDM2_HQ_TK_GUE_EP1_DZE: BRDM2_HQ_TK_GUE_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};		
};

class BRDM2_TK_EP1: BRDM2_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference	
};
class BRDM2_TK_EP1_DZ: BRDM2_TK_EP1 {
	displayname = $STR_VEH_NAME_BRDM2_TK;
	vehicleClass = "DayZ Epoch Vehicles";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportmaxbackpacks = 6;
	armor = 85;
	damageResistance = 0.032;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 220;	
	enableGPS = 0;
	supplyRadius = 1.4;
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"PKTBC"};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.2;
				minFov = 0.05;
				maxFov = 0.2;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				visionMode[] = {"Normal"};
			};
		};
	};
};

class BRDM2_TK_EP1_DZE: BRDM2_TK_EP1_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};		
};

class BRDM2_TK_GUE_EP1_DZ: BRDM2_TK_EP1_DZ {
	displayname = $STR_VEH_NAME_BRDM2_GUE;
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\BDRM2_KHK_01_CO.paa"};
	hiddenSelections[] = {"Camo1"};	
};

class BRDM2_TK_GUE_EP1_DZE: BRDM2_TK_EP1_DZE {
	displayname = $STR_VEH_NAME_BRDM2_GUE;
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\BDRM2_KHK_01_CO.paa"};
	hiddenSelections[] = {"Camo1"};	
};

class BRDM2_Desert_ACR_DZ: BRDM2_TK_EP1_DZ {
	displayname = $STR_VEH_NAME_BRDM2_DES;
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};
};

class BRDM2_Desert_ACR_DZE: BRDM2_TK_EP1_DZE {
	displayname = $STR_VEH_NAME_BRDM2_DES;
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};
};

