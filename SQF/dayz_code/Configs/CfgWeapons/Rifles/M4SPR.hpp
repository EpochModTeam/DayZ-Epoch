class M4SPR;
class M4SPR_DZ: M4SPR // Works with NVG
{
	//Moved 30Rnd Stanag to first in array
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag", "60Rnd_556x45_Stanag_Taped"};
	
	//A2OA M4SPR does not allow NVG after 2018-04-05 CorePatch
	visionMode[] = {};
};

class M4SPR_DZE: M4SPR_DZ // Does not work with NVG
{
	visionMode[] = {"Normal"};
};