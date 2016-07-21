#define M16A4_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define M16A4_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
class M16A4_DZ : M16A2
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_ca.paa";
	displayName = $STR_DZ_WPN_M16A4;
	
	magazines[] = 
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_StanagSD
	};
	
	class Attachments
	{
		Attachment_CCO = "M16A4_CCO_DZ";
		Attachment_Holo = "M16A4_Holo_DZ";
		Attachment_ACOG = "M16A4_ACOG_DZ";
		Attachment_M203 = "M16A4_GL_DZ";
		Attachment_FL = "M16A4_FL_DZ";
	};
};

class M16A4_FL_DZ : M16A4_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_FL;
	
	M16A4_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M16A4_CCO_FL_DZ";
		Attachment_Holo = "M16A4_Holo_FL_DZ";
		Attachment_ACOG = "M16A4_ACOG_FL_DZ";
		Attachment_M203 = "M16A4_GL_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_DZ : M16A4_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL;
	
	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	
	class Attachments
	{
		Attachment_CCO = "M16A4_GL_CCO_DZ";
		Attachment_Holo = "M16A4_GL_Holo_DZ";
		Attachment_ACOG = "M16A4_GL_ACOG_DZ";
		Attachment_FL = "M16A4_GL_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_FL_DZ : M16A4_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_FL;
	
	M16A4_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "M16A4_GL_CCO_FL_DZ";
		Attachment_Holo = "M16A4_GL_Holo_FL_DZ";
		Attachment_ACOG = "M16A4_GL_ACOG_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_GL_DZ'] call player_removeAttachment";
		};
	};
};



//CCO
class M16A4_CCO_DZ : M16A4_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_cco_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_CCO;
	
	class Attachments
	{
		Attachment_M203 = "M16A4_GL_CCO_DZ";
		Attachment_FL = "M16A4_CCO_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M16A4_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_CCO_FL_DZ : M16A4_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_CCO_FL;
	
	class Attachments
	{
		Attachment_M203 = "M16A4_GL_CCO_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M16A4_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_CCO_DZ : M16A4_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_cco_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_CCO;
	
	class Attachments
	{
		Attachment_FL = "M16A4_GL_CCO_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M16A4_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_CCO_FL_DZ : M16A4_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_CCO_FL;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M16A4_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_GL_CCO_DZ'] call player_removeAttachment";
		};
	};
};



//Holo
class M16A4_Holo_DZ : M16A4_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_holo_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_HOLO;
	
	class Attachments
	{
		Attachment_M203 = "M16A4_GL_Holo_DZ";
		Attachment_FL = "M16A4_Holo_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M16A4_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_Holo_FL_DZ : M16A4_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_HOLO_FL;
	
	class Attachments
	{
		Attachment_M203 = "M16A4_GL_Holo_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M16A4_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_Holo_DZ : M16A4_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_holo_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_gl_HOLO;
	
	class Attachments
	{
		Attachment_FL = "M16A4_GL_Holo_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M16A4_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_Holo_FL_DZ : M16A4_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_HOLO_FL;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M16A4_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_GL_Holo_DZ'] call player_removeAttachment";
		};
	};
};



//ACOG

class M16A4_ACOG_DZ : M16A4_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_acog_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_ACOG_NAME;
	
	M16A4_ACOG;
	
	class Attachments
	{
		Attachment_M203 = M16A4_GL_ACOG_DZ;
		Attachment_FL = M16A4_ACOG_FL_DZ;
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M16A4_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_ACOG_FL_DZ : M16A4_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_ACOG_FL_NAME;
	
	M16A4_ACOG;
	
	class Attachments
	{
		Attachment_M203 = M16A4_GL_ACOG_FL_DZ;
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M16A4_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_ACOG_DZ : M16A4_GL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_acog_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_ACOG_NAME;
	
	M16A4_ACOG;
	
	class Attachments
	{
		Attachment_FL = M16A4_GL_ACOG_FL_DZ;
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M16A4_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class M16A4_GL_ACOG_FL_DZ : M16A4_GL_FL_DZ
{
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_M16A4_GL_ACOG_FL_NAME;
	
	M16A4_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M16A4_GL_FL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'M16A4_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'M16A4_GL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};