#define MP7_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define MP7_MFLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define MP7_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class MP7_base: MP5A5
{
	scope = 2;
	displayName = "MP7";
	model = "\C1987_Mp7\mp7.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";
	optics = 0;
	value = 1000;
	dexterity = 1.75;
	handAnim[] = {"OFP2_ManSkeleton","\C1987_Mp7\anim\mp7.rtm"};
	modes[] = {"Single","Fullauto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss",2,1,750};
		begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss",2,1,750};
		begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss",2,1,750};
		begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss",2,1,750};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		dispersion = 0.004;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss",2,1,750};
		begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss",2,1,750};
		begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss",2,1,750};
		begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss",2,1,750};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		soundContinuous = 0;
		ffCount = 1;
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		aiRateOfFire = 0.001;
		dispersion = 0.0035;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	reloadMagazineSound[] = {"\C1987_Mp7\sound\mp7_reload.wss",1,1,20};
	drySound[] = {"\C1987_Mp7\sound\mp7_dry.wss",1,1,20};
	magazines[] = {"40Rnd_46x30_mp7"};
	descriptionShort = "HK MP7A1";
	class Library
	{
		libTextDesc = "The MP7 is a German Submachine Gun Manufactured by Heckler and Koch (HK) and Chambered for the HK 4.6×30mm Cartridge. It was Designed with the new Cartridge to Meet NATO Requirements Published in 1989, as these Requirements call for a Personal Defense Weapon (PDW) Class Firearm, with a greater ability to defeat body armor than current Weapons limited to conventional Pistol Cartridges. The MP7 went into Production in 2001. It is a direct Rival to the FN P90, also Developed in Response to NATO's Requirement. The Weapon has been revised since its Introduction and the current Production Version is the MP7A1.";
	};
};
class MP7_DZ: MP7_base
{
	displayName = $STR_DZ_WPN_MP7_NAME;
	model = "\C1987_Mp7\mp7.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";
	descriptionShort = $STR_DZ_WPN_MP7_DESC;
	
	class Attachments
	{
		Attachment_CCO = "MP7_CCO_DZ";
		Attachment_Holo = "MP7_Holo_DZ";
		Attachment_ACOG = "MP7_ACOG_DZ";
		Attachment_Sup9 = "MP7_SD_DZ";
		Attachment_FL_Pist = "MP7_FL_DZ";
		Attachment_MFL_Pist = "MP7_MFL_DZ";
	};	
};

class MP7_FL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_FL_NAME;
	model = "\C1987_Mp7\mp7_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";
	
	MP7_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "MP7_CCO_FL_DZ";
		Attachment_Holo = "MP7_Holo_DZ";
		Attachment_ACOG = "MP7_ACOG_FL_DZ";
		Attachment_Sup9 = "MP7_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_MFL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_MFL_NAME;
	model = "\C1987_Mp7\mp7_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";
	
	MP7_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "MP7_CCO_MFL_DZ";
		Attachment_Holo = "MP7_Holo_DZ";
		Attachment_ACOG = "MP7_ACOG_MFL_DZ";
		Attachment_Sup9 = "MP7_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_Holo_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_NAME;
	model = "\C1987_Mp7\mp7_eot.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_Holo_SD_DZ";
		Attachment_FL_Pist = "MP7_Holo_FL_DZ";
		Attachment_MFL_Pist = "MP7_Holo_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_Holo_FL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_FL_NAME;
	model = "\C1987_Mp7\mp7_eot_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";
	
	MP7_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_Holo_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_Holo_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_Holo_MFL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_MFL_NAME;
	model = "\C1987_Mp7\mp7_eot_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";
	
	MP7_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_Holo_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_NAME;
	model = "\C1987_Mp7\mp7_aim.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_CCO_SD_DZ";
		Attachment_FL_Pist = "MP7_CCO_FL_DZ";
		Attachment_MFL_Pist = "MP7_CCO_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_FL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_FL_NAME;
	model = "\C1987_Mp7\mp7_aim_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";
	
	MP7_FLASHLIGHT;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_CCO_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_MFL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_MFL_NAME;
	model = "\C1987_Mp7\mp7_aim_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";
	
	MP7_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_NAME;
	model = "\C1987_Mp7\mp7_acog.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";
	
	MP7_ACOG;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_ACOG_SD_DZ";
		Attachment_FL_Pist = "MP7_ACOG_FL_DZ";
		Attachment_MFL_Pist = "MP7_ACOG_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_FL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_FL_NAME;
	model = "\C1987_Mp7\mp7_acog_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";
	
	MP7_FLASHLIGHT;
	MP7_ACOG;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_ACOG_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_MFL_DZ: MP7_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_MFL_NAME;
	model = "\C1987_Mp7\mp7_acog_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";
	
	MP7_MFLASHLIGHT;
	MP7_ACOG;
	
	class Attachments
	{
		Attachment_Sup9 = "MP7_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_ACOG_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_SD_DZ: MP7_base
{
	displayName = $STR_DZ_WPN_MP7_SD_NAME;
	model = "\C1987_Mp7\mp7_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss",1,1,200};
		soundBegin[] = {"begin1",1};
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		dispersion = 0.002;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss",1,1,200};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		ffCount = 1;
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		aiRateOfFire = 0.001;
		dispersion = 0.0035;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	magazines[] = {"40Rnd_46x30_sd_mp7"};
	descriptionShort = $STR_DZ_WPN_MP7_SD_DESC;
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_SD_FL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_SD_FL_NAME;
	model = "\C1987_Mp7\mp7_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";

	MP7_FLASHLIGHT;

	class Attachments
	{
		Attachment_CCO = "MP7_CCO_SD_FL_DZ";
		Attachment_Holo = "MP7_Holo_SD_FL_DZ";
		Attachment_ACOG = "MP7_ACOG_SD_FL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_SD_MFL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_SD_MFL_NAME;
	model = "\C1987_Mp7\mp7_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";

	MP7_MFLASHLIGHT;
	
	class Attachments
	{
		Attachment_CCO = "MP7_CCO_SD_MFL_DZ";
		Attachment_Holo = "MP7_Holo_SD_MFL_DZ";
		Attachment_ACOG = "MP7_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class  MP7_Holo_SD_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_SD_NAME;
	model = "\C1987_Mp7\mp7_eot_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
	
	class Attachments
	{
		Attachment_FL_Pist = "MP7_Holo_SD_FL_DZ";
		Attachment_MFL_Pist = "MP7_Holo_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_Holo_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_Holo_SD_FL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_SD_FL_NAME;
	model = "\C1987_Mp7\mp7_eot_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
	
	MP7_FLASHLIGHT;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_Holo_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_Holo_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_Holo_SD_MFL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_HOLO_SD_MFL_NAME;
	model = "\C1987_Mp7\mp7_eot_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
	
	MP7_MFLASHLIGHT;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MP7_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_Holo_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_Holo_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_SD_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_SD_NAME;
	model = "\C1987_Mp7\mp7_aim_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
	
	class Attachments
	{
		Attachment_FL_Pist = "MP7_CCO_SD_FL_DZ";
		Attachment_MFL_Pist = "MP7_CCO_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_CCO_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_SD_FL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_SD_FL_NAME;
	model = "\C1987_Mp7\mp7_aim_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
	
	MP7_FLASHLIGHT;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_CCO_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_CCO_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_CCO_SD_MFL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_CCO_SD_MFL_NAME;
	model = "\C1987_Mp7\mp7_aim_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
	
	MP7_MFLASHLIGHT;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MP7_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_CCO_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_CCO_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_SD_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_SD_NAME;
	model = "\C1987_Mp7\mp7_acog_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";
	
	MP7_ACOG;
	
	class Attachments
	{
		Attachment_FL_Pist = "MP7_ACOG_SD_FL_DZ";
		Attachment_MFL_Pist = "MP7_ACOG_SD_MFL_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_ACOG_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_SD_FL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_SD_FL_NAME;
	model = "\C1987_Mp7\mp7_acog_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";

	MP7_FLASHLIGHT;
	MP7_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_SD_FL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_ACOG_FL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_FL_Pist',_id,'MP7_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class MP7_ACOG_SD_MFL_DZ: MP7_SD_DZ
{
	displayName = $STR_DZ_WPN_MP7_ACOG_SD_MFL_NAME;
	model = "\C1987_Mp7\mp7_acog_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";

	MP7_MFLASHLIGHT;
	MP7_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MP7_SD_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'MP7_ACOG_MFL_DZ'] call player_removeAttachment";
		};
		class RemoveFlashlight
		{
			text = $STR_DZ_ATT_FL_RFL_RMVE;
			script = "; ['Attachment_MFL_Pist',_id,'MP7_ACOG_SD_DZ'] call player_removeAttachment";
		};
	};	
};

#undef MP7_FLASHLIGHT
#undef MP7_MFLASHLIGHT
#undef MP7_ACOG