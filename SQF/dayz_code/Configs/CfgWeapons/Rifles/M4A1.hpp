#define M4A1_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define M4A1_MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define M4A1_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define M4A1_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
	
class M4A1_DZ : M4A1
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_NAME;
	
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
	
	/*magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};*/ //Allow use of G36 mags
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_DZ";
		Attachment_Holo = "M4A1_Holo_DZ";
		Attachment_ACOG = "M4A1_ACOG_DZ";
		Attachment_M203 = "M4A1_GL_DZ";
		Attachment_Sup556 = "M4A1_SD_DZ";
		Attachment_FL = "M4A1_FL_DZ";
		Attachment_MFL = "M4A1_MFL_DZ";
	};
};

class M4A1_FL_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_FL_NAME;
	
	M4A1_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_FL_DZ";
		Attachment_Holo = "M4A1_Holo_FL_DZ";
		Attachment_ACOG = "M4A1_ACOG_FL_DZ";
		Attachment_M203 = "M4A1_GL_FL_DZ";
		Attachment_Sup556 = "M4A1_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_DZ'] call player_removeAttachment";
			//script is formatted by ui_selectSlot to:
			//"_id = 'M4A1_FL_DZ' ; ['Attachment_FL',_id,'M4A1_DZ'] call player_removeAttachment;"
			
			//REGEX
			//script = "\[Attachment_([_a-zA-Z0-9]+)\,[_a-zA-Z0-9]+\,([_a-zA-Z0-9]+)\] call player_removeAttachment";
			//script = "; \['Attachment_$1',_id,'$2'\] call player_removeAttachment";
		};
	};
};

class M4A1_MFL_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_MFL_NAME;
	
	M4A1_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_MFL_DZ";
		Attachment_Holo = "M4A1_Holo_MFL_DZ";
		Attachment_ACOG = "M4A1_ACOG_MFL_DZ";
		Attachment_M203 = "M4A1_GL_MFL_DZ";
		Attachment_Sup556 = "M4A1_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_DZ'] call player_removeAttachment";
			//script is formatted by ui_selectSlot to:
			//"_id = 'M4A1_MFL_DZ' ; ['Attachment_MFL',_id,'M4A1_DZ'] call player_removeAttachment;"
			
			//REGEX
			//script = "\[Attachment_([_a-zA-Z0-9]+)\,[_a-zA-Z0-9]+\,([_a-zA-Z0-9]+)\] call player_removeAttachment";
			//script = "; \['Attachment_$1',_id,'$2'\] call player_removeAttachment";
		};
	};
};

class M4A1_SD_DZ : M4A1_AIM_SD_camo
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_SD_NAME;
	
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
	
	/*magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_Stanag
	};*/ //Allow use of G36 mags
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_SD_DZ";
		Attachment_Holo = "M4A1_Holo_SD_DZ";
		Attachment_ACOG = "M4A1_ACOG_SD_DZ";
		Attachment_M203 = "M4A1_GL_SD_DZ";
		Attachment_FL = "M4A1_SD_FL_DZ";
		Attachment_MFL = "M4A1_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_SD_FL_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_SD_FL_NAME;
	
	M4A1_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_SD_FL_DZ";
		Attachment_Holo = "M4A1_Holo_SD_FL_DZ";
		Attachment_ACOG = "M4A1_ACOG_SD_FL_DZ";
		Attachment_M203 = "M4A1_GL_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_SD_MFL_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_SD_MFL_NAME;
	
	M4A1_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_CCO_SD_MFL_DZ";
		Attachment_Holo = "M4A1_Holo_SD_MFL_DZ";
		Attachment_ACOG = "M4A1_ACOG_SD_MFL_DZ";
		Attachment_M203 = "M4A1_GL_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class M4A1_GL_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_NAME;
	
	M4A1_M203;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_DZ";
		Attachment_Holo = "M4A1_GL_Holo_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_DZ";
		Attachment_Sup556 = "M4A1_GL_SD_DZ";
		Attachment_FL = "M4A1_GL_FL_DZ";
		Attachment_MFL = "M4A1_GL_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_FL_DZ : M4A1_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_FL_NAME;
	
	M4A1_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_FL_DZ";
		Attachment_Holo = "M4A1_GL_Holo_FL_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_FL_DZ";
		Attachment_Sup556 = "M4A1_GL_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_MFL_DZ : M4A1_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_MFL_NAME;
	
	M4A1_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_MFL_DZ";
		Attachment_Holo = "M4A1_GL_Holo_MFL_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_MFL_DZ";
		Attachment_Sup556 = "M4A1_GL_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_SD_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_SD_NAME;
	
	M4A1_M203;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_SD_DZ";
		Attachment_Holo = "M4A1_GL_Holo_SD_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_SD_DZ";
		Attachment_FL = "M4A1_GL_SD_FL_DZ";
		Attachment_MFL = "M4A1_GL_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_SD_FL_DZ : M4A1_GL_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_SD_FL_NAME;
	
	M4A1_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_SD_FL_DZ";
		Attachment_Holo = "M4A1_GL_Holo_SD_FL_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_SD_MFL_DZ : M4A1_GL_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_SD_MFL_NAME;
	
	M4A1_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M4A1_GL_CCO_SD_MFL_DZ";
		Attachment_Holo = "M4A1_GL_Holo_SD_MFL_DZ";
		Attachment_ACOG = "M4A1_GL_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_SD_DZ'] call player_removeAttachment";
		};
	};
};



//CCO

class M4A1_CCO_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_DZ";
		Attachment_Sup556 = "M4A1_CCO_SD_DZ";
		Attachment_FL = "M4A1_CCO_FL_DZ";
		Attachment_MFL = "M4A1_CCO_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_CCO_FL_DZ : M4A1_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_FL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_FL_DZ";
		Attachment_Sup556 = "M4A1_CCO_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_CCO_MFL_DZ : M4A1_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_MFL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_MFL_DZ";
		Attachment_Sup556 = "M4A1_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_CCO_SD_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_SD_DZ";
		Attachment_FL = "M4A1_CCO_SD_FL_DZ";
		Attachment_MFL = "M4A1_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_CCO_SD_FL_DZ : M4A1_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_SD_FL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_CCO_SD_MFL_DZ : M4A1_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_CCO_SD_MFL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_CCO_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class M4A1_GL_CCO_DZ : M4A1_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_CCO_SD_DZ";
		Attachment_FL = "M4A1_GL_CCO_FL_DZ";
		Attachment_MFL = "M4A1_GL_CCO_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_CCO_FL_DZ : M4A1_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_FL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_CCO_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_CCO_MFL_DZ : M4A1_GL_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_MFL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_CCO_SD_DZ : M4A1_GL_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_SD_NAME;
	
	class Attachments
	{
		Attachment_FL = "M4A1_GL_CCO_SD_FL_DZ";
		Attachment_MFL = "M4A1_GL_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_CCO_SD_FL_DZ : M4A1_GL_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_SD_FL_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_CCO_SD_MFL_DZ : M4A1_GL_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_CCO_SD_MFL_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M4A1_GL_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_CCO_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_CCO_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};




//Holo

class M4A1_Holo_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_DZ";
		Attachment_Sup556 = "M4A1_Holo_SD_DZ";
		Attachment_FL = "M4A1_Holo_FL_DZ";
		Attachment_MFL = "M4A1_Holo_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_Holo_FL_DZ : M4A1_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_FL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_FL_DZ";
		Attachment_Sup556 = "M4A1_Holo_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_Holo_MFL_DZ : M4A1_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_MFL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_MFL_DZ";
		Attachment_Sup556 = "M4A1_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_Holo_SD_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_SD_DZ";
		Attachment_FL = "M4A1_Holo_SD_FL_DZ";
		Attachment_MFL = "M4A1_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_Holo_SD_FL_DZ : M4A1_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_SD_FL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_Holo_SD_MFL_DZ : M4A1_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_HOLO_SD_MFL_NAME;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_Holo_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class M4A1_GL_Holo_DZ : M4A1_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_Holo_SD_DZ";
		Attachment_FL = "M4A1_GL_Holo_FL_DZ";
		Attachment_MFL = "M4A1_GL_Holo_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_Holo_FL_DZ : M4A1_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_FL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_Holo_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_Holo_MFL_DZ : M4A1_GL_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_MFL_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_Holo_SD_DZ : M4A1_GL_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_FL = "M4A1_GL_Holo_SD_FL_DZ";
		Attachment_MFL = "M4A1_GL_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_Holo_SD_FL_DZ : M4A1_GL_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_SD_FL_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_Holo_SD_MFL_DZ : M4A1_GL_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_HOLO_SD_MFL_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M4A1_GL_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_Holo_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_Holo_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};



//ACOG

class M4A1_ACOG_DZ : M4A1_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_DZ";
		Attachment_Sup556 = "M4A1_ACOG_SD_DZ";
		Attachment_FL = "M4A1_ACOG_FL_DZ";
		Attachment_MFL = "M4A1_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_ACOG_FL_DZ : M4A1_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_FL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_FL_DZ";
		Attachment_Sup556 = "M4A1_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_ACOG_MFL_DZ : M4A1_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_MFL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_MFL_DZ";
		Attachment_Sup556 = "M4A1_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_ACOG_SD_DZ : M4A1_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_SD_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_SD_DZ";
		Attachment_FL = "M4A1_ACOG_SD_FL_DZ";
		Attachment_MFL = "M4A1_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_ACOG_SD_FL_DZ : M4A1_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_SD_FL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_ACOG_SD_MFL_DZ : M4A1_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_ACOG_SD_MFL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "M4A1_GL_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_ACOG_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class M4A1_GL_ACOG_DZ : M4A1_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_ACOG_SD_DZ";
		Attachment_FL = "M4A1_GL_ACOG_FL_DZ";
		Attachment_MFL = "M4A1_GL_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_ACOG_FL_DZ : M4A1_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_FL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_ACOG_MFL_DZ : M4A1_GL_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_MFL_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_Sup556 = "M4A1_GL_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_ACOG_SD_DZ : M4A1_GL_SD_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_SD_NAME;
	
	M4A1_ACOG;
	
	class Attachments
	{
		Attachment_FL = "M4A1_GL_ACOG_SD_FL_DZ";
		Attachment_MFL = "M4A1_GL_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_ACOG_SD_FL_DZ : M4A1_GL_SD_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_SD_FL_NAME;
	
	M4A1_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M4A1_GL_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

class M4A1_GL_ACOG_SD_MFL_DZ : M4A1_GL_SD_MFL_DZ
{
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_fl_ca.paa";
	displayName = $STR_DZ_WPN_M4A1_GL_ACOG_SD_MFL_NAME;
	
	M4A1_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M4A1_GL_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M4A1_ACOG_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'M4A1_GL_ACOG_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'M4A1_GL_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};
};

#undef M4A1_FLASHLIGHT
#undef M4A1_MFLASHLIGHT
#undef M4A1_M203
#undef M4A1_ACOG
