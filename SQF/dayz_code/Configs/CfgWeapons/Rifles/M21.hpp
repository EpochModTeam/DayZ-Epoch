class M21_DZ: M14_EP1
{
	scope = public;
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