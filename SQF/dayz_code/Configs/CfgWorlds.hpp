class DayLightingBrightAlmost;	// External class reference
class DefaultClutter;	// External class reference
class Grid;	// External class reference

class CfgWorlds {
	class Chernarus;
	class DayZMod : Chernarus {
		cutscenes[] = {"DayZModIntro1"};
		description = DayZVersion;
		seagullPos[] = {1272.842,150.0,14034.962};
		ilsTaxiIn[] = {4785.21,10174.29,5024.903,9759.071,5027.385,9737.021,5015.327,9721.136,4928.958,9670.509,4906.105,9664.372,4880.936,9673.65};
		ilsTaxiOff[] = {4671,10038,4195.5,10862.011,4201.01,10885.8,4218.536,10899.822,4304.679,10950.154,4324.962,10953.66,4345.746,10938.886,4785.21,10174.29};
	};

	initWorld = "DayZMod";
	demoWorld = "DayZMod";
};

class CfgWorldList {
	class DayZMod {};
};
