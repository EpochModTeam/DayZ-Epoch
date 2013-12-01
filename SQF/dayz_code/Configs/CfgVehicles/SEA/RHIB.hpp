class NewTurret;
class ViewPilot;
class ViewOptics;
class Sounds { class Engine; class Movement;};
class DefaultEventhandlers;
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
    fuelCapacity = 100;
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
    class Eventhandlers : DefaultEventhandlers
    {
    };
    class DestructionEffects
    {
    };
  };
  
class Boat : Ship
{
	precision = 6;
	brakeDistance = 20;
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;
};
class RHIB_DZ : Boat
{
	scope = 2;
	displayName = "RHIB";
	vehicleClass = "Ship";
	accuracy = 0.5;
	crew = "USMC_Soldier";
	faction = "USMC";
	side = 1;
	model = "\ca\water\rhib";
	picture = "\ca\water\data\ico\rhib_CA.paa";
	Icon = "\Ca\water\Data\map_ico\icomap_RHIB_CA.paa";
	mapSize = 8;
	unitInfoType = "UnitInfoShip";
	soundEnviron[] = {
	  "",
	  0.0562341,
	  0.9
	};
	class SoundEvents
	{
	};
	insideSoundCoef = 1;
	soundEngineOnInt[] = {
	  "ca\sounds\vehicles\water\rhib\ext-boat-start-01",
	  0.1,
	  1
	};
	soundEngineOnExt[] = {
	  "ca\sounds\vehicles\water\rhib\ext-boat-start-01",
	  1,
	  1,
	  150
	};
	soundEngineOffInt[] = {
	  "ca\sounds\vehicles\water\rhib\ext-boat-stop-01",
	  0.1,
	  1
	};
	soundEngineOffExt[] = {
	  "ca\sounds\vehicles\water\rhib\ext-boat-stop-01",
	  1,
	  1,
	  150
	};
	class Sounds
	{
	  class Engine
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01",
		  1,
		  0.9,
		  300
		};
		frequency = "(randomizer*0.05+0.95)*rpm";
		volume = "engineOn*(rpm factor[0.5, 0.1])";
	  };
	  class EngineHighOut
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01",
		  1,
		  0.8,
		  300
		};
		frequency = "(randomizer*0.05+0.95)*rpm";
		volume = "engineOn*(rpm factor[0.4, 1.3])";
	  };
	  class IdleOut
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03",
		  0.562341,
		  1,
		  150
		};
		frequency = "1";
		volume = "engineOn*(rpm factor[0.3, 0])";
	  };
	  class WaternoiseOutW0
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",
		  0.398107,
		  1,
		  100
		};
		frequency = "1";
		volume = "(speed factor[7, 0])";
	  };
	  class WaternoiseOutW1
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",
		  0.398107,
		  1,
		  100
		};
		frequency = "1";
		volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
	  };
	  class WaternoiseOutW2
	  {
		sound[] = {
		  "ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",
		  0.398107,
		  1,
		  100
		};
		frequency = "1";
		volume = "(speed factor[9, 18.7])";
	  };
	};
	driverAction = "RHIB_Driver";
	cargoAction[] = {
	  "RHIB_Cargo"
	};
	getInAction = "GetInMedium";
	getOutAction = "GetOutMedium";
	cargoGetInAction[] = {
	  "GetInMedium"
	};
	cargoGetOutAction[] = {
	  "GetOutMedium"
	};
	castDriverShadow = 1;
	castCargoShadow = 1;
	gunnerHasFlares = 0;
	maxSpeed = 60;
	enableGPS = 1;
	transportSoldier = 10;
	typicalCargo[] = {
	  "USMC_Soldier",
	  "USMC_Soldier_AT"
	};
	supplyRadius = 3;
	class Exhausts
	{
	  class Exhaust1
	  {
		position = "vyfuk start";
		direction = "vyfuk konec";
		effect = "";
	  };
	};
	class TransportMagazines
	{
	  class _xx_30Rnd_556x45_Stanag
	  {
		magazine = "30Rnd_556x45_Stanag";
		count = "30*1";
	  };
	  class _xx_200Rnd_556x45_M249
	  {
		magazine = "200Rnd_556x45_M249";
		count = "5*1";
	  };
	  class _xx_HandGrenade_west
	  {
		magazine = "HandGrenade_west";
		count = "10*1";
	  };
	  class _xx_5Rnd_762x51_M24
	  {
		magazine = "5Rnd_762x51_M24";
		count = "10*1";
	  };
	  class _xx_15rnd_9x19_M9
	  {
		magazine = "15rnd_9x19_M9";
		count = "15*1";
	  };
	  class _xx_M136
	  {
		magazine = "M136";
		count = "3*1";
	  };
	  class _xx_1Rnd_HE_M203
	  {
		magazine = "1Rnd_HE_M203";
		count = "3*1";
	  };
	};
	cost = 10000;
	armor = 30;
	class AnimationSources
	{
	  class ReloadAnim
	  {
		source = "reload";
		weapon = "M2";
	  };
	  class ReloadMagazine
	  {
		source = "reloadmagazine";
		weapon = "M2";
	  };
	  class Revolving
	  {
		source = "revolving";
		weapon = "M2";
	  };
	};
	class Turrets : Turrets
	{
	  class MainTurret : NewTurret
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
		soundServo[] = {
		  "\ca\sounds\vehicles\servos\turret-1",
		  0.00562341,
		  1
		};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		weapons[] = {
		  "M2"
		};
		magazines[] = {
		  "100Rnd_127x99_M2",
		  "100Rnd_127x99_M2",
		  "100Rnd_127x99_M2"
		};
		gunnerName = "front gunner";
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
	class Library
	{
	  libTextDesc = "The Naval Special Warfare Rigid Hull Inflatable Boat is a fast, high-buoyancy all weather boat designed to transport a fully equipped team of eight-men and three crew members. It is also fully transportable by C-130 Hercules.";
	};
	extCameraPosition[] = {
	  0,
	  4,
	  -14
	};
	class Damage
	{
	  tex[] = {
	  };
	  mat[] = {
		"ca\water\data\rhib.rvmat",
		"ca\water\data\rhib.rvmat",
		"ca\water\data\rhib_destruct.rvmat",
		"ca\water\data\rhib_dash.rvmat",
		"ca\water\data\rhib_dash.rvmat",
		"ca\water\data\rhib_dash_destruct.rvmat"
	  };
	};
};