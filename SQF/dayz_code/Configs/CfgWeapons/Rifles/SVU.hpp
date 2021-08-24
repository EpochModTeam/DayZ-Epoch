class SVU_PSO1_DZ: SVD_PSO1_DZ {
	displayName = $STR_DZ_WPN_SVU_NAME;
	model = "\RH_aks\RH_svu.p3d";
	picture = "\RH_aks\inv\svu.paa";
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	begin1[] = {"\RH_aks\Sound\SVU.wss",1.778279,1,1200};
	soundBegin[] = {"begin1",1};
	magazines[] = {"10Rnd_762x54_SVD"};
	class ItemActions {};
	class Attachments {};
	
	class OpticsModes {
		class Scope {
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
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
	};	
};