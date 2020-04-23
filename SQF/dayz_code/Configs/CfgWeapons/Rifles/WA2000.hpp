class WA2000_DZ: m107
{
	scope = public;
	type = WeaponSlotPrimary;
	canlock	= 0;
	displayname = $STR_DZ_WPN_WA2000_NAME;
	descriptionShort = $STR_DZ_WPN_WA2000_DESC;
	model = "z\addons\dayz_epoch_w\wa2000\h4_wa2000.p3d";
	picture = "\dayz_epoch_c\icons\weapons\w_wa2000_ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	magazines[] = {6Rnd_762x51_WA2000};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
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
	begin1[] = {"\RH_m14\Sound\m14.wss",1.778279,1,1000};
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
	recoil = "recoil_single_primary_8outof10";
	recoilProne = "recoil_single_primary_prone_7outof10";
	dexterity = 0.45;	
	class Library
	{
		libTextDesc = "The Walther WA 2000 is a semi-automatic bullpup sniper rifle produced by the Carl Walther GmbH Sportwaffen company from 1982 until 1988.<br/> Only 176 were built due to its high cost.";
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
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
			discreteDistanceInitIndex = 4;
		};
	};
};