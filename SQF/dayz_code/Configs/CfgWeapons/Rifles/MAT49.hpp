class MAT49_DZ: MP5A5
{
	scope = public;
	model = "\z\addons\dayz_epoch_w\mat49\h4_mat49";
	displayName = $STR_DZ_WPN_MAT49_NAME;
	descriptionShort = $STR_DZ_WPN_MAT49_DESC;	
	picture	= "\z\addons\dayz_epoch_w\mat49\data\W_mat49_CA.paa";
	magazines[]	= {32Rnd_9x19_MAT49};
	fireLightDuration = 0.000;
	fireLightIntensity = 0.000;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",db-50,1,10};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",db-25,1,25};
	distanceZoomMin	= 50;
	distanceZoomMax	= 50;
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\HKMP5.rtm"};
	modes[] = {Single, FullAuto};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"rh_smg\sound\mp7", db5, 1,1000};
		soundBegin[] = {begin1,1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"rh_smg\sound\mp7", db5, 1,1000};
		soundBegin[] = {begin1,1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount =1;
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_1outof10";
		aiRateOfFire = 0.001;
		dispersion = 0.003; //0.007;
		minRange = 0;
		minRangeProbab = 0.20;
		midRange = 7;
		midRangeProbab = 0.7;
		maxRange = 15;
		maxRangeProbab = 0.05;
	};
};