class UH1_Base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics: ViewOptics {};
			class Turrets: Turrets {};
		};
		class RightDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
		class CoPilotObs: MainTurret {
			class Turrets: Turrets {};
		};
	};
};
class UH1Y_DZ: UH1_Base {
	scope = public;
	side = 2;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
	weapons[] = {};
	magazines[] = {};
	fuelCapacity = 1333;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class RightDoorGun: RightDoorGun
		{
			gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			visionMode[] = {"Normal","NVG"};
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class CoPilotObs: CoPilotObs
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
	};
	/*class Turrets : Turrets {
		class MainTurret : MainTurret {
			magazines[] = {"2000Rnd_762x51_M134"};
		};
		class RightDoorGun : RightDoorGun {
			magazines[] = {"2000Rnd_762x51_M134"};
		};
	};*/
};
class UH1Y_DZE: UH1Y_DZ {
	class Turrets : Turrets {
		class MainTurret: MainTurret
		{
			gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			magazines[] = {};
		};
		class RightDoorGun: RightDoorGun
		{
			gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			visionMode[] = {"Normal","NVG"};
			magazines[] = {};
		};
		class CoPilotObs: CoPilotObs
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
	};
};
