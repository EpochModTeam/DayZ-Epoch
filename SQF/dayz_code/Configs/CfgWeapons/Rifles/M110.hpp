class M110_NVG_EP1;
class M110_NV_DZ: M110_NVG_EP1 {
	displayName = $STR_DZ_WPN_M110_NV_NAME;
	descriptionShort = $STR_DZ_WPN_M110_NV_DESC;	
	class OpticsModes
	{
		class HTWS
		{
			opticsID = 1;
			useModelOptics = "true";
			opticsZoomMin = 0.0293;
			distanceZoomMin = 300;
			opticsZoomMax = 0.0293;
			distanceZoomMax = 300;
			opticsZoomInit = 0.0293;
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsPPEffects[] = {};
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {};
			discretefov[] = {0.0755,0.0249};
			discreteInitIndex = 0;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};
};