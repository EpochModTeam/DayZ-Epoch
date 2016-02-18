
class Smallboat_1: Ship
{
	displayName = "$STR_DN_SMALLBOATA";
	crew = "Worker1";
	typicalCargo[] = {"Worker1"};
	class Library
	{
		libTextDesc = "$STR_LIB_SMALLBOAT";
	};
	side = 3;
	faction = "CIV";
	model = "\CA\water2\small_boat\smallboat_1";
	picture = "\ca\water2\data\ui\picture_smallboat_CA.paa";
	Icon = "\Ca\water2\Data\UI\icon_smallboat_ca.paa";
	mapSize = 5;
	driverAction = "SB_Driver";
	cargoAction[] = {"SB_Cargo"};
	cargoIsCoDriver[] = {0};
	ejectDeadCargo = 1;
	ejectDeadDriver = 0;
	maxSpeed = 29;
	transportSoldier = 5;
	cost = 10000;
	armor = 10;
	damageResistance = 0.00882;
	class Turrets{};
	vehicleClass = "Ship";
	scope = 2;
	accuracy = 0.5;
	soundEnviron[] = {"",0.0056234132,1.0};
	class SoundEvents{};
	soundEngineOnInt[] = {"\ca\sounds\Vehicles\Water\SMALL_BOAT\ext-slowboat-engine-start-03",0.17782794,1.0,200};
	soundEngineOnExt[] = {"\ca\sounds\Vehicles\Water\SMALL_BOAT\ext-slowboat-engine-start-03",0.17782794,1.0,200};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Water\SMALL_BOAT\ext-slowboat-engine-stop-03",0.17782794,1.0,200};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Water\SMALL_BOAT\ext-slowboat-engine-stop-03",0.17782794,1.0,200};
	class Sounds
	{
		class Engine
		{
			sound[] = {"ca\sounds\vehicles\water\small_boat\ext-slowboat-engine-low-04",1.0,1.0,350};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*(rpm factor[0.5, 0.1])";
		};
		class EngineHighOut
		{
			sound[] = {"ca\sounds\vehicles\water\small_boat\ext-slowboat-engine-hi-03",1.0,1.0,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "engineOn*(rpm factor[0.35, 1.5])";
		};
		class IdleOut
		{
			sound[] = {"ca\sounds\vehicles\water\small_boat\ext-slowboat-engine-idle-04",0.1,1.0,150};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.3, 0])";
		};
		class WaternoiseOutW0
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",0.25118864,1.0,100};
			frequency = "1";
			volume = "((speed factor[0, 8]) min (speed factor[8, 0]))";
		};
		class WaternoiseOutW1
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",0.31622776,1.0,100};
			frequency = "1";
			volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
		};
		class WaternoiseOutW2
		{
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",0.39810717,1.0,100};
			frequency = "1";
			volume = "((speed factor[9, 18.7]) min (speed factor[18.7, 9]))";
		};
	};
	supplyRadius = 3;
	textSingular = "Ship";
	textPlural = "Ships";
	class Exhausts
	{
		class Exhaust1
		{
			position = "vyfuk start";
			direction = "vyfuk konec";
			effect = "ExhaustsEffect";
		};
	};
	class Reflectors{};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\water2\small_boat\data\smallboat_001.rvmat","ca\water2\small_boat\data\smallboat_damage.rvmat","ca\water2\small_boat\data\smallboat_destruct.rvmat"};
	};
	extCameraPosition[] = {0,4.0,-14.0};
};

class smallboat_2: Smallboat_1
{
	displayName = "$STR_DN_SMALLBOATB";
	model = "\CA\water2\small_boat\smallboat_2";
};
