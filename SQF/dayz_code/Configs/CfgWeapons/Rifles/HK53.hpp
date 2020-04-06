class HK53A3_DZ: M4A1
{
	scope = public;
	model = "\RH_smg\RH_HK53.p3d";
	displayName = $STR_DZ_WPN_HK53A3_NAME;
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	picture = "\RH_smg\inv\hk53.paa";
	reloadMagazineSound[] = {"\RH_smg\sound\HK53_reload.wss",0.056234,1,25};
	handAnim[] = {"OFP2_ManSkeleton"};
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
		Attachment_CCO = "HK53A3_CCO_DZ";
		Attachment_Holo = "HK53A3_Holo_DZ";
	};
};

class HK53A3_CCO_DZ: HK53A3_DZ
{
	displayName = $STR_DZ_WPN_HK53A3_CCO_NAME;
	model = "\RH_smg\RH_HK53aim.p3d";
	picture = "\RH_smg\inv\HK53aim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK53A3_DZ'] call player_removeAttachment";
		};
	};	
};

class HK53A3_Holo_DZ: HK53A3_DZ
{
	displayName = $STR_DZ_WPN_HK53A3_HOLO_NAME;
	model = "\RH_smg\RH_HK53eot.p3d";
	picture = "\RH_smg\inv\HK53eot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK53A3_DZ'] call player_removeAttachment";
		};
	};	
};