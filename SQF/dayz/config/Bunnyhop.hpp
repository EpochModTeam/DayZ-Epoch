//AmovPercMevaSrasWrflDf
class BunnyhopRifle : AovrPercMstpSrasWrflDf
{
	speed = 0.65;
	file = "\dayz\st_bunnyhop\I44_sprint_jump.rtm";
	leftHandIKBeg = false;
	leftHandIKEnd = false;
	leftHandIKCurve[] = {0};
	duty = 2;
	forceAim = false;
	interpolationSpeed = 1;
	interpolationRestart = true;
	
	ConnectTo[] = {"AmovPercMevaSrasWrflDf", 0.01};
	//InterpolateTo[] = {"AmovPercMevaSrasWrflDf", 0.01};
};

//AmovPercMevaSrasWpstDf
class BunnyhopPistol : BunnyhopRifle
{
	ConnectTo[] = {"AmovPercMevaSrasWpstDf", 0.01};
	//InterpolateTo[] = {"AmovPercMevaSrasWpstDf", 0.01};
};

//AmovPercMevaSnonWnonDf
class BunnyhopUnarmed : BunnyhopRifle
{
	ConnectTo[] = {"AmovPercMevaSnonWnonDf", 0.01};
	//InterpolateTo[] = {"AmovPercMevaSnonWnonDf", 0.01};
};