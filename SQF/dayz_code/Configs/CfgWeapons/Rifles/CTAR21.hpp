class CTAR21_DZ: M4A1
{
	scope = 2;
	displayName = $STR_DZ_WPN_CTAR21_NAME;
	model = "\RH_hk416\RH_ctar21.p3d";
	picture = "\RH_hk416\inv\ctar21.paa";
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	reloadMagazineSound[] = {"\RH_hk416\sound\ctar21_Reload.wss",0.056234,1,20};
	modes[] = {"Single","FullAuto"};
	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,		
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_smg\sound\HK53.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_smg\sound\HK53.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		dispersion = 0.004;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 60;
		maxRangeProbab = 0.05;
	};
	
	class Attachments
	{
		Attachment_CCO = "CTAR21_CCO_DZ";
		Attachment_ACOG = "CTAR21_ACOG_DZ";
	};
};

class CTAR21_CCO_DZ: CTAR21_DZ
{
	displayName = $STR_DZ_WPN_CTAR21_CCO_NAME;
	model = "\RH_hk416\RH_ctar21m.p3d";
	picture = "\RH_hk416\inv\ctar21m.paa";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'CTAR21_DZ'] call player_removeAttachment";
		};
	};	
};

class CTAR21_ACOG_DZ: CTAR21_DZ
{
	displayName = $STR_DZ_WPN_CTAR21_ACOG_NAME;
	model = "\RH_hk416\RH_star21.p3d";
	picture = "\RH_hk416\inv\star21.paa";
	modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
	
	class OpticsModes
	{
		class ACOG
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Iron
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[] = {};
			cameraDir = "";
		};
	};
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'CTAR21_DZ'] call player_removeAttachment";
		};
	};	
};