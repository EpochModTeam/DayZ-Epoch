class Ship : AllVehicles
{
	transportMaxMagazines = 2000;
    transportMaxWeapons = 200;
    transportMaxBackpacks = 40;
    vehicleClass = "Ship";
    icon = "iconShip";
    cost = 1e+007;
    armor = 1000;
    displayName = "Ship";
    accuracy = 0.005;
    maxSpeed = 30;
    simulation = "ship";
    audible = 6;
    fuelCapacity = 250;
    formationX = 50;
    formationZ = 100;
    brakeDistance = 50;
    formationTime = 20;
    steerAheadSimul = 2;
    steerAheadPlan = 2.4;
    predictTurnSimul = 2;
    predictTurnPlan = 2.4;
    type = 1;
    threat[] = {
      0.2,
      0.2,
      0.1
    };
    getInRadius = 10;
    driverAction = "";
    cargoAction[] = {
      ""
    };
    pointPilot = "pilot";
    pointCommander = "velitel";
    selectionFireAnim = "zasleh";
    selectionBrakeLights = "brzdove svetlo";
    memoryPointMissile[] = {
      "spice rakety",
      "usti hlavne"
    };
    memoryPointMissileDir[] = {
      "konec rakety",
      "konec hlavne"
    };
    canFloat = 1;
    soundGear[] = {
      "",
      0.000177828,
      1
    };
    occludeSoundsWhenIn = 0.562341;
    obstructSoundsWhenIn = 0.316228;
    class Exhausts
    {
      class Exhaust1
      {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffect";
      };
    };
    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";
    leftWaterEffect = "LWaterEffects";
    rightWaterEffect = "RWaterEffects";
    leftEngineEffect = "LEngEffects";
    rightEngineEffect = "REngEffects";
    memoryPointsLeftEngineEffect = "EngineEffectL";
    memoryPointsRightEngineEffect = "EngineEffectR";
    class HitPoints
    {
      class HitEngine
      {
        armor = 1.2;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
    class Turrets
    {
      class MainTurret : NewTurret
      {
        commanding = -1;
        startEngine = 0;
      };
    };
    class ViewPilot : ViewPilot
    {
      initFov = 0.7;
      minFov = 0.25;
      maxFov = 1.4;
      initAngleX = 0;
      minAngleX = -65;
      maxAngleX = 85;
      initAngleY = 0;
      minAngleY = -150;
      maxAngleY = 150;
    };
    class ViewOptics : ViewOptics
    {
      initFov = 0.7;
      minFov = 0.07;
      maxFov = 0.35;
    };
    class MarkerLights
    {
      class RedStill
      {
        color[] = {
          1,
          0.1,
          0.1,
          1
        };
        ambient[] = {
          0.1,
          0.01,
          0.01,
          1
        };
        name = "cerveny pozicni";
        brightness = 0.01;
        blinking = 0;
      };
      class GreenStill
      {
        color[] = {
          0.1,
          1,
          0.1,
          1
        };
        ambient[] = {
          0.01,
          0.1,
          0.01,
          1
        };
        name = "zeleny pozicni";
        brightness = 0.01;
        blinking = 0;
      };
      class WhiteStill
      {
        color[] = {
          1,
          1,
          1,
          1
        };
        ambient[] = {
          0.1,
          0.1,
          0.1,
          1
        };
        name = "bily pozicni";
        brightness = 0.01;
        blinking = 0;
      };
    };
    class Sounds : Sounds
    {
      class Engine : Engine
      {
        sound = "soundEngine";
        frequency = "(1-randomizer*0.05)*1.2*(thrust*0.7+0.5)";
        volume = "(thrust*0.5)+0.5";
      };
      class Movement : Movement
      {
        sound = "soundEnviron";
        frequency = "(speed*0.03334)*1.3+(1-(speed*0.03334))*0.7";
        volume = "(speed*0.03334)+(1-(speed*0.03334))*0.1";
      };
    };
    class SpeechVariants
    {
      class Default
      {
        speechSingular[] = {
          "veh_Ship"
        };
        speechPlural[] = {
          "veh_Ships"
        };
      };
      class EN : Default
      {
      };
      class CZ
      {
        speechSingular[] = {
          "veh_Ship_CZ"
        };
        speechPlural[] = {
          "veh_Ships_CZ"
        };
      };
      class CZ_Akuzativ
      {
        speechSingular[] = {
          "veh_Ship_CZ4P"
        };
        speechPlural[] = {
          "veh_Ships_CZ4P"
        };
      };
      class RU
      {
        speechSingular[] = {
          "veh_Ship_RU"
        };
        speechPlural[] = {
          "veh_Ships_RU"
        };
      };
    };
    TextPlural = "Ships";
    TextSingular = "Ship";
    nameSound = "veh_Ship";
    unitInfoType = "UnitInfoCar";
    enableGPS = 0;
    getInAction = "GetInLow";
    getOutAction = "GetOutLow";
    cargoGetInAction[] = {
      "GetInLow"
    };
    cargoGetOutAction[] = {
      "GetOutLow"
    };
    precision = 10;
};
  
class SmallShip: Ship
{
	displayName = "Small Ship";
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
};
class BigShip: Ship
{
	displayName = "Big Ship";
	transportMaxMagazines = 500;
	transportMaxWeapons = 200;
};
class Boat : Ship
{	
	precision = 6;
	brakeDistance = 20;
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;
};

class RHIB;
class RHIB_DZ : RHIB
{
	scope = public;
	displayName = $STR_VEH_NAME_RHIB_M2;
	crew = "";
	enablemanualfire = 0;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class NewTurret;	
};

class RHIB_DZE : RHIB_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: NewTurret
		{
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = 60;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
				class HitGun
				{
					armor = 0.6;
					material = 60;
					name = "zbran";
					visual = "zbran";
					passThrough = 1;
				};
			};
			stabilizedInAxes = 0;
			body = "MainTurret";
			gun = "MainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			gunnerAction = "RHIB_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			ejectDeadGunner = 1;
			outGunnerMayFire = 1;
			inGunnerMayFire = 0;
			minElev = -25;
			maxElev = 60;
			initElev = 5;
			minTurn = -135;
			maxTurn = 135;
			initTurn = 0;
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.0056234132,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			weapons[] = {"M2"};
			magazines[] = {};
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerForceOptics = 0;
			startEngine = 0;
			commanding = 2;
			primaryGunner = 0;
			primaryObserver = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
		};
	};
};

class RHIB2Turret;
class RHIB2Turret_DZ : RHIB2Turret
{
	scope = public;
	displayName = $STR_VEH_NAME_RHIB_MK19;
	enablemanualfire = 0;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;	
};

class RHIB2Turret_DZE : RHIB2Turret_DZ
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
		class BackTurret: MainTurret
		{
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			stabilizedInAxes = 0;
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_REARGUNNER";
			commanding = -2;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			minElev = -50;
			maxElev = 25;
			initElev = -5;
			minTurn = 120;
			maxTurn = 240;
			initTurn = 180;
			weapons[] = {"MK19"};				
			gunBeg = "usti hlavne_1";
			gunEnd = "konec hlavne_1";
			primaryGunner = 1;
			primaryObserver = 0;
			memoryPointGun = "kulas_1";
			memoryPointGunnerOptics = "gunnerview_1";
		};
	};
};