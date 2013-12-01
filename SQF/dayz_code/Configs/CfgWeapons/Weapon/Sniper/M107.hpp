class m107: Rifle 
{
	displayname = "M107";
	type = "1";
	canlock = 0;
	cursor = "RifleCursor";
	cursoraim = "Foresight";
};

class m107_DZ: m107 
{
	displayname = "M107_DZ";
	type = "1";
	canlock = 0;
	cursor = "";
	cursoraim = "Foresight";
	dexterity = "(0.5 + 3.75/(12.9 + 0.001) + -3/10)";
	maxrange = 1800;
	maxrangeprobab = 0.1;
	mfact = 1;
	mfmax = 0;
	midrange = 500;
	midrangeprobab = 0.8;
	minrange = 1;
	minrangeprobab = 0.4;
	opticszoominit = 0.0553;
	opticszoommax = 0.05246;
	opticszoommin = 0.020984;
	reloadtime = 0.5;
	class OpticsModes {
		class StepScope {
			cameradir = "";
			discretedistance[] = {};
			discretedistanceinitindex = 0;
			distancezoommax = 500;
			distancezoommin = 500;
			memorypointcamera = "konec hlavne";
			opticsdisableperipherialvision = 1;
			opticsflare = 1;
			opticsid = 1;
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticszoominit = 0.05246;
			opticszoommax = 0.05246;
			opticszoommin = 0.020984;
			usemodeloptics = 1;
			visionmode[] = {"Normal"};
		};
	};
};