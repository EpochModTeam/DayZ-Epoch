class m107: Rifle
{
	scope = public;
	type = WeaponSlotPrimary;
	canlock = 0;
	picture = "\CA\weapons\data\Equip\W_m107_CA.paa";
	UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
	magazines[] = {"10Rnd_127x99_m107"};
	dexterity = 0.45;
	modelOptics = "\ca\Weapons\2Dscope_MilDot_14";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	opticsZoomInit = 0.0553;
	opticsZoomMin = 0.0178;
	distanceZoomMin = 500;
	opticsZoomMax = 0.0553;
	distanceZoomMax = 200;
	displayname = $STR_DZ_WPN_M107_NAME;
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
	class Library
	{
		libTextDesc = "The M107 is a long-range, shoulder fired, semi-automatic sniper rifle, manufactured by Beneli Armi S.P.A. It is highly prized for its manageable recoil.<br/>The M107uses 12.7x99 mm cartridges and its effective range is around 1.800 m.";
	};
	descriptionShort = $STR_DZ_WPN_M107_DESC;
	model = "\ca\weapons_E\m107\m107";
	htMin = 1;
	htMax = 420;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	weaponInfoType = "RscWeaponZeroing";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M107b.rtm"};
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

class m107_DZ: m107 {};
class m107_SKN : m107_DZ {};