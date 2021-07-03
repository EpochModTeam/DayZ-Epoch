class VSS_vintorez;
class VSS_vintorez_DZE: VSS_vintorez
{
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
	class OpticsModes
	{		
		class Scope 
		{
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			cameraDir = "";
			distanceZoomMax = 300;
			distanceZoomMin = 300;
			memoryPointCamera = "opticView";
			opticsDisablePeripherialVision = 1;
			opticsFlare = 1;
			opticsID = 1;
			opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
			opticsZoomInit = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomMin = 0.0623;
			useModelOptics = 1;
			visionMode[] = {"Normal"};
		};
		class Ironsights: Scope
		{
			distanceZoomMax = 100;
			distanceZoomMin = 100;
			memoryPointCamera = "eye";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsID = 2;
			opticsPPEffects[] = {};
			opticsZoomInit = 0.5;
			opticsZoomMax = 1.1;
			opticsZoomMin = 0.25;
			useModelOptics = 0;
			visionMode[] = {};
			discreteDistance[] = {100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420};
			discreteDistanceInitIndex = 0;
		};			
	};	
	class Single: Mode_SemiAuto
	{
		dispersion = 0.00045;
		soundContinuous = 0;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		soundBegin[] = {"begin1",1};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
	};
	class Full: Mode_FullAuto
	{
		dispersion = 0.00045;
		soundContinuous = 0;
		reloadTime = 0.08;
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		soundBegin[] = {"begin1",1};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
	};	
	
	magazines[] = {"20Rnd_9x39_SP5_VSS", "10Rnd_9x39_SP5_VSS"};
};