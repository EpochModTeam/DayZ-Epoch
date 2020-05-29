class M200_CheyTac_DZ: m107
{
	scope = 2;
	type = 1;
	canlock	= 0;
	displayname = $STR_DZ_WPN_M200_CHEYTAC_NAME;
	descriptionShort = $STR_DZ_WPN_M200_CHEYTAC_DESC;
	model = "z\addons\dayz_epoch_w\m200\h4_cheytac.p3d";
	picture = "\z\addons\dayz_epoch_w\m200\data\w_cheytac_Ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	magazines[] = {5Rnd_408_CheyTac};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M107b.rtm"};
	modelOptics = "\ca\Weapons\2Dscope_MilDot_14";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	opticsZoomInit = 0.0553;
	opticsZoomMin = 0.0178;
	distanceZoomMin = 500;
	opticsZoomMax = 0.0553;
	distanceZoomMax = 200;
	autoFire = 0;
	begin1[] = {"ca\sounds\weapons\rifles\m107",2.51189,1,1300};
	soundBegin[] = {"begin1",1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-2",0.0316228,1,20};
	reloadTime = 0.5;
	dispersion = 0.0005;
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 1200;
	midRangeProbab = 0.7;
	maxRange = 1800;
	maxRangeProbab = 0.05;
	recoil = "recoil_single_primary_9outof10";
	recoilProne = "recoil_single_primary_prone_7outof10";
	dexterity = 0.45;	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\addons\dayz_epoch_w\m200\data\dze_m200_co.paa"};
	class Library
	{
		libTextDesc = "The CheyTac Intervention is an American bolt-action sniper rifle manufactured by CheyTac LLC, which can also be classified as an anti-materiel rifle.<br/> It is fed by a 7-round detachable single-stack magazine containing .408 cartridges and its effective range is around 2500m.";
	};
	htMin = 1;
	htMax = 420;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	weaponInfoType = "RscWeaponZeroing";
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomInit = 0.0553;
			opticsZoomMin = 0.0178;
			distanceZoomMin = 500;
			opticsZoomMax = 0.0553;
			distanceZoomMax = 200;
			memoryPointCamera = "Konec hlavne";
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			cameraDir = "";
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1600,1800};
			discreteDistanceInitIndex = 3;
		};
	};
};