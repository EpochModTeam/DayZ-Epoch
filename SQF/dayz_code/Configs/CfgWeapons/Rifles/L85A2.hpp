#define L85A2_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define L85A2_MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define L85A2_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

//Iron sights

class L85A2_DZ : BAF_L85A2_RIS_Holo
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_NAME;
	
	irDistance = 0;
	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Single;
	class FullAuto;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_DZ";
		Attachment_Holo = "L85A2_Holo_DZ";
		Attachment_ACOG = "L85A2_ACOG_DZ";
		Attachment_Sup556 = "L85A2_SD_DZ";
		Attachment_FL = "L85A2_FL_DZ";
		Attachment_MFL = "L85A2_MFL_DZ";
	};
};

class L85A2_FL_DZ : L85A2_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_FL_NAME;
	
	L85A2_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_FL_DZ";
		Attachment_Holo = "L85A2_Holo_FL_DZ";
		Attachment_ACOG = "L85A2_ACOG_FL_DZ";
		Attachment_Sup556 = "L85A2_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_MFL_DZ : L85A2_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_MFL_NAME;
	
	L85A2_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_MFL_DZ";
		Attachment_Holo = "L85A2_Holo_MFL_DZ";
		Attachment_ACOG = "L85A2_ACOG_MFL_DZ";
		Attachment_Sup556 = "L85A2_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_SD_Base : L85A2_DZ
{
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};
	fireLightDuration = 0;
	fireLightIntensity = 0;
	modes[] = {"Single","FullAuto"};
	class Single : Single
	{
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto : FullAuto
	{
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
};
	
class L85A2_SD_DZ : L85A2_SD_Base
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_SD_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_SD_NAME;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_SD_DZ";
		Attachment_Holo = "L85A2_Holo_SD_DZ";
		Attachment_ACOG = "L85A2_ACOG_SD_DZ";
		Attachment_FL = "L85A2_SD_FL_DZ";
		Attachment_MFL = "L85A2_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_SD_FL_DZ : L85A2_SD_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_sd_FL_NAME;
	
	L85A2_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_SD_FL_DZ";
		Attachment_Holo = "L85A2_Holo_SD_FL_DZ";
		Attachment_ACOG = "L85A2_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_SD_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_SD_MFL_DZ : L85A2_SD_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_sd_MFL_NAME;
	
	L85A2_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "L85A2_CCO_SD_MFL_DZ";
		Attachment_Holo = "L85A2_Holo_SD_MFL_DZ";
		Attachment_ACOG = "L85A2_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_SD_DZ'] call player_removeAttachment";
		};
	};
};

//CCO

class L85A2_CCO_DZ : L85A2_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_CCO.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_CCO_SD_DZ";
		Attachment_FL = "L85A2_CCO_FL_DZ";
		Attachment_MFL = "L85A2_CCO_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_CCO_FL_DZ : L85A2_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_FL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_CCO_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_CCO_MFL_DZ : L85A2_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_MFL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_CCO_SD_DZ : L85A2_SD_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_SD_NAME;
	
	class Attachments
	{
		Attachment_FL = "L85A2_CCO_SD_FL_DZ";
		Attachment_MFL = "L85A2_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_CCO_SD_FL_DZ : L85A2_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_SD_FL_NAME;
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_CCO_SD_MFL_DZ : L85A2_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_CCO_SD_MFL_NAME;
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'L85A2_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_CCO_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class L85A2_Holo_DZ : L85A2_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_Holo_SD_DZ";
		Attachment_FL = "L85A2_Holo_FL_DZ";
		Attachment_MFL = "L85A2_Holo_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_Holo_FL_DZ : L85A2_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_FL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_Holo_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_Holo_MFL_DZ : L85A2_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_MFL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_Holo_SD_DZ : L85A2_SD_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_FL = "L85A2_Holo_SD_FL_DZ";
		Attachment_MFL = "L85A2_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_Holo_SD_FL_DZ : L85A2_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_SD_FL_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_Holo_SD_MFL_DZ : L85A2_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_HOLO_SD_MFL_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'L85A2_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_Holo_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};

//ACOG

class L85A2_ACOG_DZ : L85A2_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_NAME;
	
	L85A2_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_ACOG_SD_DZ";
		Attachment_FL = "L85A2_ACOG_FL_DZ";
		Attachment_MFL = "L85A2_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_ACOG_FL_DZ : L85A2_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_FL_NAME;
	
	L85A2_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_ACOG_MFL_DZ : L85A2_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_MFL_NAME;
	
	L85A2_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "L85A2_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_ACOG_SD_DZ : L85A2_SD_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_SD_NAME;
	
	L85A2_ACOG;
	
	class Attachments
	{
		Attachment_FL = "L85A2_ACOG_SD_FL_DZ";
		Attachment_MFL = "L85A2_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_ACOG_SD_FL_DZ : L85A2_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_SD_FL_NAME;
	
	L85A2_ACOG;
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'L85A2_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

class L85A2_ACOG_SD_MFL_DZ : L85A2_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_L85A2_ACOG_SD_MFL_NAME;
	
	L85A2_ACOG;

	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'L85A2_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'L85A2_ACOG_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'L85A2_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

class BAF_L85A2_RIS_CWS;
class BAF_L85A2_RIS_TWS_DZ : BAF_L85A2_RIS_CWS
{
	visionMode[] = {"Normal","NVG","Ti"};
	thermalMode[] = {6};
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;
	displayName = "L85A2 TWS";
	
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};	
};
