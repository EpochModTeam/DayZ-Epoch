class Fishing_Boat: Ship {
	accuracy = 0.5;
	armor = 10;
	cargoaction[] = {"FB_Cargo01", "FB_Cargo02", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo04"};
	cargogetinaction[] = {"GetInMedium"};
	cargogetoutaction[] = {"GetOutMedium"};
	cargoiscodriver[] = {0};
	cost = 10000;
	crew = "";
	maxspeed = 40;
	damageresistance = 0.00318;
	displayname = $STR_VEH_NAME_FISHING_BOAT;
	driveraction = "FB_Driver";
	ejectdeadcargo = 1;
	ejectdeaddriver = 1;
	extcameraposition[] = {0, 4, -14};
	faction = "CIV";
	getinaction = "GetInMedium";
	getoutaction = "GetOutMedium";
	hideweaponscargo = 1;
	icon = "\Ca\water2\Data\UI\icon_fishboat_ca.paa";
	insidesoundcoef = 1;
	mapsize = 8;
	model = "\CA\water2\Fishing_boat\fishing_boat";
	picture = "\ca\water2\data\ui\picture_fishboat_CA.paa";
	scope = 2;
	side = 3;
	soundengineoffext[] = {"ca\sounds\vehicles\Water\FISHING_BOAT\ext-slowboat-engine-stop-02", 0.177828, 1, 100};
	soundengineoffint[] = {"ca\sounds\vehicles\Water\FISHING_BOAT\ext-slowboat-engine-stop-02", 0.177828, 1, 100};
	soundengineonext[] = {"\ca\sounds\Vehicles\Water\FISHING_BOAT\ext-slowboat-engine-start-02", 0.177828, 1, 100};
	soundengineonint[] = {"\ca\sounds\Vehicles\Water\FISHING_BOAT\ext-slowboat-engine-start-02", 0.177828, 1, 100};
	supplyradius = 3;
	textplural = "Ships";
	textsingular = "Ship";
	transportsoldier = 7;
	typicalcargo[] = {};
	vehicleclass = "Ship";
	class Library {
		libtextdesc = "Simple boat used to catch fish in the sea. According to the international Food and Agriculture Organization there are about 4 million of commercial fishing boats worldwide. This is one of them.";
	};
	class Turrets {
	};
	class SoundEvents {
	};
	class Sounds {
		class Engine {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-low-05", 1, 1, 250};
			volume = "engineOn*(rpm factor[0.6, 0.1])";
		};
		class EngineHighOut {
			frequency = "(randomizer*0.05+0.95)*rpm";
			sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-hi-04", 1, 1, 350};
			volume = "engineOn*(rpm factor[0.4, 1.5])";
		};
		class IdleOut {
			frequency = 1;
			sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-idle-03", 0.1, 1, 130};
			volume = "engineOn*(rpm factor[0.3, 0])";
		};
		class WaternoiseOutW0 {
			frequency = 1;
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", 0.251189, 1, 100};
			volume = "((speed factor[0, 8]) min (speed factor[8, 0]))";
		};
		class WaternoiseOutW1 {
			frequency = 1;
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", 0.316228, 1, 100};
			volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
		};
		class WaternoiseOutW2 {
			frequency = 1;
			sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1, 100};
			volume = "((speed factor[9, 18.7]) min (speed factor[18.7, 9]))";
		};
	};
	class Exhausts {
		class Exhaust1 {
			direction = "vyfuk konec";
			effect = "ExhaustsEffect";
			position = "vyfuk start";
		};
	};
	class Reflectors {
		class Middle {
			ambient[] = {0.07, 0.07, 0.07, 1};
			brightness = 1;
			color[] = {0.8, 0.8, 1, 1};
			direction = "svetlo konec";
			hitpoint = "svetlo";
			position = "svetlo";
			selection = "svetlo";
			size = 1;
		};
	};
	class Damage {
		mat[] = {"ca\water2\fishing_boat\data\fishboat_001.rvmat", "ca\water2\fishing_boat\data\fishboat_001_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_001_destruct.rvmat", "ca\water2\fishing_boat\data\fishboat_002.rvmat", "ca\water2\fishing_boat\data\fishboat_002_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_002_destruct.rvmat"};
		tex[] = {};
	};
};