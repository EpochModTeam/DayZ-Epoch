class BRDM2_HQ_Base;
class BRDM2_HQ_TK_GUE_EP1: BRDM2_HQ_Base {
	class Turrets; // External class reference
	class MainTurret; // External class reference	
};

class BRDM2_HQ_TK_GUE_EP1_DZ: BRDM2_HQ_TK_GUE_EP1 {
	scope = public;
	displayname = "BRDM2 HQ (PKT)";
	displaynameshort = "BRDM2 HQ (PKT)";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	armor = 85;
	damageResistance = 0.032;
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	fuelCapacity = 220;

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
				visionMode[] = {"Normal","NVG"};
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
