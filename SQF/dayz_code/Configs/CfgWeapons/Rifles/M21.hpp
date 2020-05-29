class M21_DZ: M14_EP1
{
	scope = 2;
	displayName = $STR_DZ_WPN_M21_NAME;
	descriptionShort = $STR_DZ_WPN_M21_DESC;
	model = "\RH_m14\RH_m21.p3d";
	picture = "\RH_m14\inv\m21.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsZoomMin = 0.029624;
	opticsZoomMax = 0.08222;
	opticsZoomInit = 0.08222;
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	optics = 1;
	modes[] = {"Single"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_m14\Sound\m14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundBurst = 1;
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 7.125e-005;
		reloadTime = 0.1;
		recoil = "M21_Recoil";
		recoilProne = "M21_ProneRecoil";
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 550;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 650;
		maxRangeProbab = 0.05;
	};		
};

class M21A5_DZ: M21_DZ
{
	displayName = $STR_DZ_WPN_M21A5_NAME;
	model = "\RH_mgswp\RH_mk21a5.p3d";
	picture = "\RH_mgswp\inv\mk21a5.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	modelOptics = "\ca\weapons\2Dscope_MilDot_10";
	opticsZoomMin = "0.28778/10";
	opticsZoomMax = "0.28778/10";
	opticsZoomInit = "0.28778/10";
	discretefov[] = {};
	discreteInitIndex = 0;
	visionMode[] = {"Normal"};
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;
};

class M21A5_SD_DZ: M21A5_DZ
{
	displayName = $STR_DZ_WPN_M21A5_SD_NAME;
	descriptionShort = $STR_DZ_WPN_M21SD_DESC;
	model = "\RH_mgswp\RH_mk21a5sd.p3d";
	picture = "\RH_mgswp\inv\mk21a5sd.paa";
	magazines[] = {20Rnd_762x51_DMRSD};	
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_mgswp\sound\m14sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
	};		
};