#define MasadaC_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
class OpticsModes\
{\
	class ACOG\
	{\
		opticsID = 1;\
		useModelOptics = true;\
		opticsFlare = true;\
		opticsDisablePeripherialVision = true;\
		opticsZoomMin = 0.0623;\
		opticsZoomMax = 0.0623;\
		opticsZoomInit = 0.0623;\
		distanceZoomMin = 300;\
		distanceZoomMax = 300;\
		memoryPointCamera = "opticView";\
		visionMode[] = {"Normal"};\
		opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};\
		cameraDir = "";\
	};\
	\
	class Iron\
	{\
		opticsID = 2;\
		useModelOptics = false;\
		opticsFlare = false;\
		opticsDisablePeripherialVision = false;\
		opticsZoomMin = 0.25;\
		opticsZoomMax = 1.1;\
		opticsZoomInit = 0.5;\
		distanceZoomMin = 100;\
		distanceZoomMax = 100;\
		memoryPointCamera = "eye";\
		visionMode[] = {};\
		opticsPPEffects[] = {};\
		cameraDir = "";\
	};\
}

class Masada_DZ : M4A1
{
	displayName = $STR_DZ_WPN_Masada_NAME;	
	model = "\RH_hk416\RH_mas.p3d";
	picture = "\RH_hk416\inv\mas.paa";
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\ctar21_Reload.wss",0.056234,1,20};	
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\acr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.001;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;			
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\acr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;			
	};	
	
	magazines[] = 
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36, 
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	
	class Attachments
	{
		Attachment_CCO = "Masada_CCO_DZ";
		Attachment_Holo = "Masada_Holo_DZ";
		Attachment_ACOG = "Masada_ACOG_DZ";
		Attachment_Sup556 = "Masada_SD_DZ";
	};
};

class Masada_SD_DZ : M4A1_AIM_SD_camo
{
	model = "\RH_hk416\RH_massd.p3d";
	picture = "\RH_hk416\inv\massd.paa";
	displayName = $STR_DZ_WPN_Masada_SD_NAME;
	
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\massd.wss",1.0,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.001;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;		
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\massd.wss",1.0,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;		
	};	
	
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};
	
	class Attachments
	{
		Attachment_CCO = "Masada_CCO_SD_DZ";
		Attachment_Holo = "Masada_Holo_SD_DZ";
		Attachment_ACOG = "Masada_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_DZ'] call player_removeAttachment";
		};
	};
};

//CCO
class Masada_CCO_DZ : Masada_DZ
{
	model = "\RH_hk416\RH_masaim.p3d";
	picture = "\RH_hk416\inv\masaim.paa";
	displayName = $STR_DZ_WPN_Masada_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "Masada_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Masada_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_CCO_SD_DZ : Masada_SD_DZ
{
	model = "\RH_hk416\RH_massdaim.p3d";
	picture = "\RH_hk416\inv\massdaim.paa";
	displayName = $STR_DZ_WPN_Masada_CCO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Masada_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_CCO_DZ'] call player_removeAttachment";
		};
	};
};


//Holo

class Masada_Holo_DZ : Masada_DZ
{
	model = "\RH_hk416\RH_maseotech.p3d";
	picture = "\RH_hk416\inv\maseotech.paa";
	displayName = $STR_DZ_WPN_Masada_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "Masada_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Masada_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_Holo_SD_DZ : Masada_SD_DZ
{
	model = "\RH_hk416\RH_massdeotech.p3d";
	picture = "\RH_hk416\inv\massdeotech.paa";
	displayName = $STR_DZ_WPN_Masada_HOLO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Masada_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_ACOG_DZ : Masada_DZ
{
	model = "\RH_hk416\RH_masacog.p3d";
	picture = "\RH_hk416\inv\masacog.paa";
	displayName = $STR_DZ_WPN_Masada_ACOG_NAME;
	
	MasadaC_ACOG;
	
	class Attachments 
	{
		Attachment_Sup556 = "Masada_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'Masada_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_ACOG_SD_DZ : Masada_SD_DZ
{
	model = "\RH_hk416\RH_massdacog.p3d";
	picture = "\RH_hk416\inv\massdacog.paa";
	displayName = $STR_DZ_WPN_Masada_ACOG_SD_NAME;
	
	MasadaC_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'Masada_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_BL_DZ : Masada_DZ
{
	displayName = $STR_DZ_WPN_Masada_NAME;	
	model = "\RH_hk416\RH_masb.p3d";
	picture = "\RH_hk416\inv\masb.paa";
	
	class Attachments
	{
		Attachment_CCO = "Masada_BL_CCO_DZ";
		Attachment_Holo = "Masada_BL_Holo_DZ";
		Attachment_ACOG = "Masada_BL_ACOG_DZ";
		Attachment_Sup556 = "Masada_BL_SD_DZ";
	};
};

class Masada_BL_SD_DZ : Masada_SD_DZ
{
	model = "\RH_hk416\RH_masbsd.p3d";
	picture = "\RH_hk416\inv\masbsd.paa";
	displayName = $STR_DZ_WPN_Masada_SD_NAME;
	
	class Attachments
	{
		Attachment_CCO = "Masada_BL_CCO_SD_DZ";
		Attachment_Holo = "Masada_BL_Holo_SD_DZ";
		Attachment_ACOG = "Masada_BL_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_BL_DZ'] call player_removeAttachment";
		};
	};
};

//CCO
class Masada_BL_CCO_DZ : Masada_BL_DZ
{
	model = "\RH_hk416\RH_masbaim.p3d";
	picture = "\RH_hk416\inv\masbaim.paa";
	displayName = $STR_DZ_WPN_Masada_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "Masada_BL_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Masada_BL_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_BL_CCO_SD_DZ : Masada_BL_SD_DZ
{
	model = "\RH_hk416\RH_masbsdaim.p3d";
	picture = "\RH_hk416\inv\masbsdaim.paa";
	displayName = $STR_DZ_WPN_Masada_CCO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'Masada_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_BL_CCO_DZ'] call player_removeAttachment";
		};
	};
};


//Holo

class Masada_BL_Holo_DZ : Masada_BL_DZ
{
	model = "\RH_hk416\RH_masbeotech.p3d";
	picture = "\RH_hk416\inv\masbeotech.paa";
	displayName = $STR_DZ_WPN_Masada_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "Masada_BL_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Masada_BL_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_BL_Holo_SD_DZ : Masada_BL_SD_DZ
{
	model = "\RH_hk416\RH_masbsdeotech.p3d";
	picture = "\RH_hk416\inv\masbsdeotech.paa";
	displayName = $STR_DZ_WPN_Masada_HOLO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'Masada_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_BL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_BL_ACOG_DZ : Masada_BL_DZ
{
	model = "\RH_hk416\RH_masbacog.p3d";
	picture = "\RH_hk416\inv\masbacog.paa";
	displayName = $STR_DZ_WPN_Masada_ACOG_NAME;
	
	MasadaC_ACOG;
	
	class Attachments 
	{
		Attachment_Sup556 = "Masada_BL_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'Masada_BL_DZ'] call player_removeAttachment";
		};
	};
};

class Masada_BL_ACOG_SD_DZ : Masada_BL_SD_DZ
{
	model = "\RH_hk416\RH_masbsdacog.p3d";
	picture = "\RH_hk416\inv\masbsdacog.paa";
	displayName = $STR_DZ_WPN_Masada_ACOG_SD_NAME;
	
	MasadaC_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'Masada_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'Masada_BL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

#undef MasadaC_ACOG