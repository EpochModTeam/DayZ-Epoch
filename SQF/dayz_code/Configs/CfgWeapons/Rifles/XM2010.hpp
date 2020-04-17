class XM2010_BASE: Rifle
{
	scope = private;
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 100;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\XM2010_anim.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	picture = "\fhq_remington\XM2010\icons\xm2010.paa";
	dexterity = 1.35;
	displayName = "XM2010";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	begin1[] = {"\dayz_epoch_c\sounds\weapons\xm2010.ogg",10,1,2000};
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
	magazines[] = {"5Rnd_762x67_XM2010"};
	reloadTime = 2;
	backgroundReload = 1;
	recoil = "recoil_single_primary_6outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	value = 1000;
	aiRateOfFire = 8;
	aiRateOfFireDistance = 1000;
	class Library
	{
		libTextDesc = "The XM2010 is now being fielded by the US Army to replace the older M24. Chambered for the .300 Winchester, the Remington Arms Chassis System (RACS) allows for a folding stock and adjustment options for the shooter.";
	};
	descriptionShort = "Sniper rifle <br/>Caliber: .300 Winchester";
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

class XM2010_SD_BASE: Rifle
{
	scope = private;
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 100;
	fireLightDuration = 0;
	fireLightIntensity = 0;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\XM2010_anim.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	picture = "\fhq_remington\XM2010\icons\xm2010.paa";
	dexterity = 1.35;
	displayName = "XM2010 SD";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	begin1[] = {"\dayz_epoch_c\sounds\weapons\xm2010sd.ogg",2.51189,1,50};
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
	magazines[] = {"5Rnd_762x67_XM2010_SD"};
	reloadTime = 2;
	backgroundReload = 1;
	recoil = "recoil_single_primary_6outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	value = 1000;
	aiRateOfFire = 8;
	aiRateOfFireDistance = 1000;
	class Library
	{
		libTextDesc = "The XM2010 is now being fielded by the US Army to replace the older M24. Chambered for the .300 Winchester, the Remington Arms Chassis System (RACS) allows for a folding stock and adjustment options for the shooter.";
	};
	descriptionShort = "Sniper rifle <br/>Caliber: .300 Winchester";
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

class XM2010_DZ: XM2010_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_DESC;
	model = "\fhq_remington\XM2010\XM2010.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010.paa";
};
class XM2010_SD_DZ: XM2010_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010SD_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_SD_DESC;
	model = "\fhq_remington\XM2010\XM2010_sd.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010_sd.paa";
};
class XM2010_NV_DZ: XM2010_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010_NV_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_NV_DESC;
	model = "\fhq_remington\XM2010\XM2010_nv.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010_nv.paa";
	visionMode[] = {"Normal","NVG"};
};
class XM2010_NV_SD_DZ: XM2010_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010SD_NV_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_SD_NV_DESC;
	model = "\fhq_remington\XM2010\XM2010_nv_sd.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010_nv_sd.paa";
	visionMode[] = {"Normal","NVG"};
};
class XM2010_TWS_DZ: XM2010_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_TWS_DESC;
	model = "\fhq_remington\XM2010\XM2010_tws.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010_tws.paa";
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
class XM2010_TWS_SD_DZ: XM2010_SD_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_XM2010SD_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_XM2010_SD_TWS_DESC;
	model = "\fhq_remington\XM2010\XM2010_tws_sd.p3d";
	picture = "\fhq_remington\XM2010\icons\xm2010_tws_sd.paa";
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