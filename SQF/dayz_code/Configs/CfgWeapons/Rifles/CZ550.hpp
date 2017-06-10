class CZ550_DZ : Huntingrifle
{
	model = "z\addons\dayz_communityweapons\CZ550\CZ550.p3d";
	magazines[] = {5Rnd_17HMR};

	//CZ550_SCOPE
	optics = true;
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";

	class OpticsModes : OpticsModes
	{
		class StepScope : StepScope {};
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[] = {};
			cameraDir = "";
		};
	};
	//CZ550_SCOPE end
};