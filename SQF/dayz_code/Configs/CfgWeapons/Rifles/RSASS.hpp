class RSASS_BASE: DMR
{
	scope = private;
	htMin = 1;
	htMax = 420;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	picture = "\ca\weapons_E\Data\icons\m110_tws_CA.paa";
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
	opticsZoomMin = 0.0498;
	distanceZoomMin = 400;
	opticsZoomMax = 0.15;
	distanceZoomMax = 120;
	opticsZoomInit = 0.15;
	dexterity = 1.55;
	begin1[] = {"\dayz_epoch_c\sounds\weapons\rsass.ogg",10,1,2000};
	soundBegin[] = {"begin1",1};
	drySound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_dry",1,1,20};
	reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_reload",1,1,100};
	reloadTime = 2;
	backgroundReload = "true";
	modes[] = {"Single"};
	magazines[] = {"20Rnd_762x51_RSASS"};
	modelOptics = "\ca\weapons\2Dscope_MilDot_10";
	weaponInfoType = "RscWeaponZeroing";
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 100;
	class Library
	{
		libTextDesc = "Sniper Rifle<br/>Caliber 7.62x51mm NATO<br/><br/>The Remington Semi Automatic Sniper System is a gas-operated semi-automatic sniper rifle with a chambering for 7.62x51mm. It is produced by Remington Arms in cooperation with JP Enterprises.";
	};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\dayz_epoch_c\sounds\weapons\rsass.ogg",10,1,2000};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M110\M110_reload",1,1,100};
		dispersion = 0.00012;
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 1000;
		displayName = "";
	};
	discretefov[] = {0.0755,0.0249};
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin = 0.0249;
			opticsZoomMax = 0.0249;
			opticsZoomInit = 0.0249;
			memoryPointCamera = "opticsView";
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			cameraDir = "";
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
		class Kolimator
		{
			cameradir = "";
			distancezoommax = 300;
			distancezoommin = 300;
			memorypointcamera = "eye";
			opticsdisableperipherialvision = 0;
			opticsflare = 0;
			opticsid = 2;
			opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticszoominit = 0.5;
			opticszoommax = 1.1;
			opticszoommin = 0.25;
			usemodeloptics = 0;
			visionmode[] = {};
		};
	};
};
class RSASS_SD_BASE: RSASS_BASE
{
	magazines[] = {"20Rnd_762x51_RSASS_SD"};
	modes[] = {"FHQ_RSASS_H_SD_Single"};
	class FHQ_RSASS_H_SD_Single: Mode_SemiAuto
	{
		begin1[] = {"\dayz_epoch_c\sounds\weapons\rsass_sd.ogg",2.51189,1,50};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0015;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.5;
		aiRateOfFireDistance = 500;
	};
};

class RSASS_DZ: RSASS_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_RSASS_NAME;
	descriptionShort = $STR_DZ_WPN_RSASS_DESC;	
	model = "\fhq_remington\rsass\rsass.p3d";
	picture = "\fhq_remington\rsass\icons\rsass.paa";
	opticsZoomInit = 0.0293;
	distanceZoomMin = 300;
	opticsZoomMin = 0.0293;
	distanceZoomMax = 300;
	opticsZoomMax = 0.0293;
};

class RSASS_TWS_DZ: RSASS_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_RSASS_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_RSASS_TWS_DESC;		
	model = "\fhq_remington\rsass\rsass_tws.p3d";
	picture = "\fhq_remington\rsass\icons\rsass_tws.paa";
	weaponInfoType = "RscWeaponZeroing";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
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
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
		class Kolimator
		{
			cameradir = "";
			distancezoommax = 300;
			distancezoommin = 300;
			memorypointcamera = "eye";
			opticsdisableperipherialvision = 0;
			opticsflare = 0;
			opticsid = 2;
			opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticszoominit = 0.5;
			opticszoommax = 1.1;
			opticszoommin = 0.25;
			usemodeloptics = 0;
			visionmode[] = {};
		};
	};
};
class RSASS_SD_DZ: RSASS_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_RSASSSD_NAME;
	descriptionShort = $STR_DZ_WPN_RSASS_SD_DESC;		
	model = "\fhq_remington\rsass\rsass_sd.p3d";
	picture = "\fhq_remington\rsass\icons\rsass_sd.paa";
	opticsZoomInit = 0.0293;
	distanceZoomMin = 300;
	opticsZoomMin = 0.0293;
	distanceZoomMax = 300;
	opticsZoomMax = 0.0293;
};

class RSASS_TWS_SD_DZ: RSASS_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_RSASSSD_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_RSASS_SD_TWS_DESC;		
	model = "\fhq_remington\rsass\rsass_tws_sd.p3d";
	picture = "\fhq_remington\rsass\icons\rsass_tws_sd.paa";
	weaponInfoType = "RscWeaponZeroing";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
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
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
		class Kolimator
		{
			cameradir = "";
			distancezoommax = 300;
			distancezoommin = 300;
			memorypointcamera = "eye";
			opticsdisableperipherialvision = 0;
			opticsflare = 0;
			opticsid = 2;
			opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticszoominit = 0.5;
			opticszoommax = 1.1;
			opticszoommin = 0.25;
			usemodeloptics = 0;
			visionmode[] = {};
		};
	};
};
