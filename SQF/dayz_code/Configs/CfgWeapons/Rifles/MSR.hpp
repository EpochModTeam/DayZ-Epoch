class MSR_BASE: Rifle
{
	scope = private;
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 100;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\MSR_anim.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	picture = "\fhq_remington\XM2010\icons\xm2010.paa";
	dexterity = 1.35;
	displayName = "XM2010";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	begin1[] = {"\dayz_epoch_c\sounds\weapons\msr.ogg",10,1,2000};
	soundBegin[] = {"begin1",1};
	soundContinuous = 0;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.1,1,20};
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 500;
	midRangeProbab = 0.7;
	maxRange = 1000;
	maxRangeProbab = 0.05;
	initSpeed = 936;
	dispersion = 0.00012;
	magazines[] = {"7Rnd_86x70_MSR"};
	reloadTime = 2;
	backgroundReload = 1;
	recoil = "recoil_single_primary_6outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	value = 1000;
	aiRateOfFire = 8;
	aiRateOfFireDistance = 1000;
	class Library
	{
		libTextDesc = "The Remington Modular Sniper Rifle (MSR) is a step forward in sniper rifle performance. Chambered for the .338 Lapua Magnum, it offers precision shooting over rangers of 1500 meters or more.";
	};
	descriptionShort = "Sniper rifle   <br/>Caliber: .338 Lapua Magnum";
	weaponInfoType = "RscWeaponZeroing";
	optics = 1;
	visionMode[] = {"Normal"};
	discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
	discreteDistanceInitIndex = 2;
	opticsDisablePeripherialVision = 1;
	opticsZoomMin = 0.0498;
	distanceZoomMin = 400;
	opticsZoomMax = 0.15;
	distanceZoomMax = 120;
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
};
class MSR_SD_BASE: Rifle
{
	scope = private;
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 100;
	fireLightDuration = 0;
	fireLightIntensity = 0;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\MSR_anim.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	picture = "\fhq_remington\XM2010\icons\xm2010.paa";
	dexterity = 1.35;
	displayName = "XM2010 SD";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	begin1[] = {"\dayz_epoch_c\sounds\weapons\msrsd.ogg",2.51189,1,50};
	soundBegin[] = {"begin1",1};
	soundContinuous = 0;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.1,1,20};
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 500;
	midRangeProbab = 0.7;
	maxRange = 1000;
	maxRangeProbab = 0.05;
	dispersion = 0.00012;
	initSpeed = 900;
	magazines[] = {"7Rnd_86x70_MSR_SD"};
	reloadTime = 2;
	backgroundReload = 1;
	recoil = "recoil_single_primary_6outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	value = 1000;
	aiRateOfFire = 8;
	aiRateOfFireDistance = 1000;
	class Library
	{
		libTextDesc = "The Remington Modular Sniper Rifle (MSR) is a step forward in sniper rifle performance. Chambered for the .338 Lapua Magnum, it offers precision shooting over rangers of 1500 meters or more.";
	};
	descriptionShort = "Sniper rifle   <br/>Caliber: .338 Lapua Magnum";
	weaponInfoType = "RscWeaponZeroing";
	optics = 1;
	visionMode[] = {"Normal"};
	discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
	discreteDistanceInitIndex = 2;
	opticsDisablePeripherialVision = 1;
	opticsZoomMin = 0.0498;
	distanceZoomMin = 400;
	opticsZoomMax = 0.15;
	distanceZoomMax = 120;
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
};

class MSR_DZ: MSR_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSR_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_DESC;	
	model = "\fhq_remington\MSR\MSR.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msr.paa";
};

class MSR_SD_DZ: MSR_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSRSD_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_SD_DESC;	
	model = "\fhq_remington\MSR\MSR_sd.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msrsd.paa";
};

class MSR_NV_DZ: MSR_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSR_NV_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_NV_DESC;	
	model = "\fhq_remington\MSR\MSR_nv.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msrnv.paa";
	visionMode[] = {"Normal","NVG"};
};

class MSR_NV_SD_DZ: MSR_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSRSD_NV_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_SD_NV_DESC;	
	model = "\fhq_remington\MSR\MSR_nv_sd.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msrnvsd.paa";
	visionMode[] = {"Normal","NVG"};
};

class MSR_TWS_DZ: MSR_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSR_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_TWS_DESC;	
	model = "\fhq_remington\MSR\MSR_tws.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msrtws.paa";
	modelOptics = "\Ca\weapons_E\HWTS_optic.p3d";
	opticsPPEffects[] = {};
	visionMode[] = {"Ti"};
	thermalMode[] = {0,1};
	class OpticsModes
	{
		class HTWS
		{
			opticsID = 1;
			useModelOptics = "true";
			opticsZoomMin = 0.0249;
			distanceZoomMin = 400;
			opticsZoomMax = 0.0755;
			distanceZoomMax = 120;
			opticsZoomInit = 0.0755;
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsPPEffects[] = {};
			visionMode[] = {"Ti"};
			thermalMode[] = {0,1};
			discretefov[] = {0.0755,0.0249};
			discreteInitIndex = 0;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 2;
		};
	};
};

class MSR_TWS_SD_DZ: MSR_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_MSRSD_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_MSR_SD_TWS_DESC;	
	model = "\fhq_remington\MSR\MSR_tws_sd.p3d";
	picture = "\dayz_epoch_c\icons\weapons\msrtwssd.paa";
	modelOptics = "\Ca\weapons_E\HWTS_optic.p3d";
	opticsPPEffects[] = {};
	visionMode[] = {"Ti"};
	thermalMode[] = {0,1};
	class OpticsModes
	{
		class HTWS
		{
			opticsID = 1;
			useModelOptics = "true";
			opticsZoomMin = 0.0249;
			distanceZoomMin = 400;
			opticsZoomMax = 0.0755;
			distanceZoomMax = 120;
			opticsZoomInit = 0.0755;
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsPPEffects[] = {};
			visionMode[] = {"Ti"};
			thermalMode[] = {0,1};
			discretefov[] = {0.0755,0.0249};
			discreteInitIndex = 0;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 2;
		};
	};
};
