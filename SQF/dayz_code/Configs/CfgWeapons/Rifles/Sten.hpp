class Sten_MK_DZ: MP5A5
{
	scope = public;
	model = "z\addons\dayz_epoch_w\sten\h4_sten.p3d";
	displayName = $STR_DZ_WPN_STEN_MK_NAME;
	picture	= "\z\addons\dayz_epoch_w\sten\data\W_sten_CA.paa";
	magazines[]	= {32Rnd_9x19_STEN};
	descriptionShort = $STR_DZ_WPN_STEN_MK_DESC;		
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	fireLightDuration = 0.000;
	fireLightIntensity = 0.000;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",db-50,1,10};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",db-25,1,25};
	distanceZoomMin = 50;
	distanceZoomMax	= 50;
	handAnim[] ={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\HKMP5.rtm"};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\addons\dayz_epoch_w\sten\data\dze_sten_01_co.paa"};
	modes[] = {FullAuto};
	class FullAuto : Mode_FullAuto
	{
		begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1", db5, 1,1000};
		begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2", db5, 1,1000};
		soundBegin[] = {begin1,0.5, begin2,0.5};
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