#define MK17_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

#define MK17_Laser irLaserPos = "laser pos";\
		irLaserEnd = "laser dir";\
		irDistance = 5

#define MK17_M203 muzzles[] = {this, M203Muzzle};\
handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\Anim\RH_scargl.rtm"}

class MK17_DZ : M4A1
{
	model = "\RH_mgswp\RH_Scarh.p3d";
	picture = "\RH_mgswp\inv\scarh.paa";
	handAnim[] = {};
	reloadMagazineSound[] = {"\RH_mgswp\sound\scar_Reload",0.0316228,1,20};
	displayName = $STR_DZ_WPN_MK17_NAME;
	descriptionShort = $STR_DZ_WPN_MK17_DESC;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;		
	bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
	bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
	bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
	bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
	bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
	bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
	bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
	bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
	bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
	bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
	bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
	bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};	
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_mgswp\sound\scarh",1.77828,1,1700};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0025;
		reloadtime = 0.096;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 300;
		maxRangeProbab = 0.03;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_mgswp\sound\scarh",1.77828,1,1700};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0025;
		reloadtime = 0.096;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};		
	
	magazines[] = {20Rnd_762x51_B_SCAR};	

	class Attachments
	{
		Attachment_CCO = "MK17_CCO_DZ";
		Attachment_Holo = "MK17_Holo_DZ";
		Attachment_ACOG = "MK17_ACOG_DZ";
		Attachment_M203 = "MK17_GL_DZ";
	};
};

class MK17_CCO_DZ : MK17_DZ
{
	model = "\RH_mgswp\RH_Scarh_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_aim.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	displayName = $STR_DZ_WPN_MK17_CCO_NAME;
	MK17_Laser;
	
	class Attachments
	{
		Attachment_M203 = "MK17_GL_CCO_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MK17_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_Holo_DZ : MK17_DZ
{
	model = "\RH_mgswp\RH_Scarh_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_eotech.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	displayName = $STR_DZ_WPN_MK17_HOLO_NAME;
	MK17_Laser;
	
	class Attachments
	{
		Attachment_M203 = "MK17_GL_Holo_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MK17_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_ACOG_DZ : MK17_DZ
{
	model = "\RH_mgswp\RH_Scarh_acog.p3d";
	picture = "\RH_mgswp\inv\scarh_acog.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	displayName = $STR_DZ_WPN_MK17_ACOG_NAME;
	
	MK17_Laser;	
	MK17_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "MK17_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MK17_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_GL_DZ : MK17_DZ
{
	model = "\RH_mgswp\RH_Scarh_gl.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl.paa";
	displayName = $STR_DZ_WPN_MK17_GL_NAME;	
	
	MK17_M203;
	
	class Attachments
	{
		Attachment_CCO = "MK17_GL_CCO_DZ";
		Attachment_Holo = "MK17_GL_Holo_DZ";
		Attachment_ACOG = "MK17_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_GL_CCO_DZ : MK17_GL_DZ
{
	model = "\RH_mgswp\RH_Scarh_gl_aim.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_aim.paa";
	displayName = $STR_DZ_WPN_MK17_GL_CCO_NAME;
	
	MK17_Laser;
	MK17_M203;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'MK17_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_GL_Holo_DZ : MK17_GL_DZ
{
	model = "\RH_mgswp\RH_Scarh_gl_eotech.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_eotech.paa";
	displayName = $STR_DZ_WPN_MK17_GL_HOLO_NAME;
	
	MK17_Laser;
	MK17_M203;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'MK17_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_GL_ACOG_DZ : MK17_GL_DZ
{
	model = "\RH_mgswp\RH_Scarh_gl_acog.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_acog.paa";
	displayName = $STR_DZ_WPN_MK17_GL_ACOG_NAME;
	
	MK17_Laser;
	MK17_M203;	
	MK17_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'MK17_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

//SD - No SD weapon model without a scope available
class MK17_CCO_SD_DZ : MK17_DZ
{
	model = "\RH_mgswp\RH_scarh_sd_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_aim.paa";
	displayName = $STR_DZ_WPN_MK17_CCO_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_MK17SD_DESC;
	modes[] = {"Single","FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	
	MK17_Laser;
	
	class Single: Single
	{
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: FullAuto
	{
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
	};	
	
	magazines[] = {20Rnd_762x51_SB_SCAR};
	
	class Attachments
	{
		Attachment_M203 = "MK17_GL_CCO_SD_DZ";
	};
	class ItemActions {};
};

class MK17_Holo_SD_DZ : MK17_CCO_SD_DZ
{
	model = "\RH_mgswp\RH_scarh_sd_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_eotech.paa";
	displayName = $STR_DZ_WPN_MK17_HOLO_SD_NAME;
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	
	MK17_Laser;
	
	class Attachments
	{
		Attachment_M203 = "MK17_GL_Holo_SD_DZ";
	};
	class ItemActions {};
};

class MK17_ACOG_SD_DZ : MK17_CCO_SD_DZ
{
	model = "\RH_mgswp\RH_scarh_sd_acog.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_acog.paa";
	displayName = $STR_DZ_WPN_MK17_ACOG_SD_NAME;
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	
	MK17_Laser;
	MK17_ACOG;
	
	class Attachments {};
	class ItemActions {};
};

class MK17_GL_CCO_SD_DZ : MK17_CCO_SD_DZ
{
	model = "\RH_mgswp\RH_scarh_sd_gl_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_gl_aim.paa";
	displayName = $STR_DZ_WPN_MK17_GL_CCO_SD_NAME;
	
	MK17_Laser;
	MK17_M203;
	
	class Attachments {};	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_CCO_SD_DZ'] call player_removeAttachment";
		};
	};
};

class MK17_GL_Holo_SD_DZ : MK17_CCO_SD_DZ
{
	model = "\RH_mgswp\RH_scarh_sd_gl_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_gl_eotech.paa";
	displayName = $STR_DZ_WPN_MK17_GL_HOLO_SD_NAME;
	
	MK17_Laser;
	MK17_M203;
	
	class Attachments {};	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'MK17_Holo_SD_DZ'] call player_removeAttachment";
		};
	};
};


#undef MK17_ACOG
#undef MK17_Laser
#undef MK17_M203