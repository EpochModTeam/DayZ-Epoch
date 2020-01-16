class M4SPR;
class M4SPR_DZE: M4SPR
{
	//Moved 30Rnd Stanag to first in array
	magazines[] = {"30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag", "30Rnd_556x45_G36SD","60Rnd_556x45_Stanag_tape_ice_DZE"};
	
	//A2OA M4SPR does not allow NVG after 2018-04-05 CorePatch
	visionMode[] = {"Normal", "NVG"};
};