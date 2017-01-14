#define FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

class SA58_DZ : Sa58V_EP1
{
	model = "z\addons\dayz_communityweapons\sa58\sa58.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ca.paa";
	displayName = $STR_DZ_WPN_SA58_NAME;
	
	modes[] = {Single, FullAuto};
	magazines[] = {30Rnd_762x39_SA58};
	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_SA58RIS = "SA58_RIS_DZ";
	};
};

class SA58_RIS_DZ : SA58_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_ca.paa";
	displayName = $STR_DZ_WPN_SA58_RIS_NAME;
	
	class Attachments
	{
		Attachment_CCO = "SA58_CCO_DZ";
		Attachment_Holo = "SA58_Holo_DZ";
		Attachment_ACOG = "SA58_ACOG_DZ";
		Attachment_FL = "SA58_RIS_FL_DZ";
		Attachment_MFL = "SA58_RIS_MFL_DZ";
	};
};

class SA58_RIS_FL_DZ : SA58_RIS_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_RIS_FL_NAME;
	
	FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "SA58_CCO_FL_DZ";
		Attachment_Holo = "SA58_Holo_FL_DZ";
		Attachment_ACOG = "SA58_ACOG_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'SA58_RIS_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_RIS_MFL_DZ : SA58_RIS_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_RIS_MFL_NAME;
	
	MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "SA58_CCO_MFL_DZ";
		Attachment_Holo = "SA58_Holo_MFL_DZ";
		Attachment_ACOG = "SA58_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'SA58_RIS_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_CCO_DZ : SA58_RIS_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_ca.paa";
	displayName = $STR_DZ_WPN_SA58_CCO_NAME;
	
	weaponInfoType = "RscWeaponEmpty";
	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	
	class Attachments
	{
		Attachment_FL = "SA58_CCO_FL_DZ";
		Attachment_MFL = "SA58_CCO_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'SA58_RIS_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_CCO_FL_DZ : SA58_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_CCO_FL_NAME;
	
	FLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'SA58_RIS_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'SA58_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_CCO_MFL_DZ : SA58_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_CCO_MFL_NAME;
	
	MFLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'SA58_RIS_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'SA58_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_Holo_DZ : SA58_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_ca.paa";
	displayName = $STR_DZ_WPN_SA58_HOLO_NAME;
	
	class Attachments
	{
		Attachment_FL = "SA58_Holo_FL_DZ";
		Attachment_MFL = "SA58_Holo_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SA58_RIS_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_Holo_FL_DZ : SA58_Holo_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_HOLO_FL_NAME;
	
	FLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SA58_RIS_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'SA58_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_Holo_MFL_DZ : SA58_Holo_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_HOLO_MFL_NAME;
	
	MFLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SA58_RIS_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'SA58_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_ACOG_DZ : SA58_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_ca.paa";
	displayName = $STR_DZ_WPN_SA58_ACOG_NAME;
	
	//TODO: new optic for acog
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
	
	class Attachments
	{
		Attachment_FL = "SA58_ACOG_FL_DZ";
		Attachment_MFL = "SA58_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SA58_RIS_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_ACOG_FL_DZ : SA58_ACOG_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_ACOG_FL_NAME;
	
	FLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SA58_RIS_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL',_id,'SA58_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class SA58_ACOG_MFL_DZ : SA58_ACOG_DZ
{
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_fl_ca.paa";
	displayName = $STR_DZ_WPN_SA58_ACOG_MFL_NAME;
	
	MFLASHLIGHT;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SA58_RIS_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL',_id,'SA58_ACOG_DZ'] call player_removeAttachment";
		};
	};
};
