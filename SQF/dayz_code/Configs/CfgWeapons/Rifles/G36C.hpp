#define G36C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class G36C_DZ : G36C
{
	model = "z\addons\dayz_communityweapons\g36c\g36c.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_ca.paa";
	displayName = $STR_DZ_WPN_G36C_NAME;
	/*
	magazines[] =
	{
		30Rnd_556x45_G36,
		30Rnd_556x45_G36SD
	};
	*/
	class Attachments
	{
		Attachment_CCO = "G36C_CCO_DZ";
		Attachment_Holo = "G36C_Holo_DZ";
		Attachment_ACOG = "G36C_ACOG_DZ";
		Attachment_Sup556 = "G36C_SD_DZ";
	};
};

class G36C_SD_DZ : G36_C_SD_eotech
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_SD_NAME;
	/*
	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_G36
	};
	*/
	class Attachments
	{
		Attachment_CCO = "G36C_CCO_SD_DZ";
		Attachment_Holo = "G36C_Holo_SD_DZ";
		Attachment_ACOG = "G36C_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36C_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_CCO_DZ : G36C_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_ca.paa";
	displayName = $STR_DZ_WPN_G36C_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "G36C_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'G36C_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_CCO_SD_DZ : G36C_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_CCO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'G36C_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36C_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_Holo_DZ : G36C_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_ca.paa";
	displayName = $STR_DZ_WPN_G36C_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "G36C_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'G36C_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_Holo_SD_DZ : G36C_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_HOLO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'G36C_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36C_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_ACOG_DZ : G36C_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_acog_ca.paa";
	displayName = $STR_DZ_WPN_G36C_ACOG_NAME;
	
	G36C_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "G36C_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'G36C_DZ'] call player_removeAttachment";
		};
	};
};

class G36C_ACOG_SD_DZ : G36C_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_acog_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_ACOG_SD_NAME;
	
	G36C_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'G36C_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'G36C_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

#undef G36C_ACOG