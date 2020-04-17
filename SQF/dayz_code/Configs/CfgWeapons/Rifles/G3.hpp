class G3_DZ: FNFAL_DZ
{
	scope = public;
	model = "\z\addons\dayz_epoch_w\g3\h4g3.p3d";
	picture	= "\z\addons\dayz_epoch_w\g3\data\w_g3_ca.paa";
	displayName	= $STR_DZ_WPN_G3_NAME;
	descriptionShort = $STR_DZ_WPN_G3_DESC;
	magazines[] = {20Rnd_762x51_G3};
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	fireLightDuration = 0.000;
	fireLightIntensity = 0.000;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",db-50,1,10};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",db-25,1,25};
	distanceZoomMin	= 50;
	distanceZoomMax	= 50;
	//handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\HKMP5.rtm"};
	modes[] = {Single, FullAuto};
	class Single : Mode_SemiAuto
	{
		begin1[] = {"rh_mgswp\sound\scarAk", db5, 1,1000};
		soundBegin[] = {begin1,1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_1outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.05;
	};
	class FullAuto : Mode_FullAuto
	{
		begin1[] = {"rh_mgswp\sound\scarAk", db5, 1,1000};
		soundBegin[] = {begin1,1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_1outof10";
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