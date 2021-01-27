#define Steyr_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
}

class SteyrAug_A3_base: Rifle
{
	scope = 0;
	displayName = "";
	descriptionShort = $STR_DZ_WPN_AUGA3_DESC;
	model = "\MIDF_Weapons\Aug_a3\Aug_a3.p3d";	
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	cursoraim = "Foresight";
	value = 2;
	optics = 0;
	dexterity = 1.8;
	opticsDisablePeripherialVision = 0;
	handAnim[] = {"OFP2_ManSkeleton","\MIDF_Weapons\data\anim\A3_fgrip.rtm"};
	reloadMagazineSound[] = {"\MIDF_Weapons\sound\auga3_reload.wss",1.77828,1,20};
	drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1",0.01,1};
	magazines[] = {30Rnd_556x45_Aug,100Rnd_556x45_BetaCMag};	
	modes[] = {"Single","FullAuto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\MIDF_Weapons\Sound\auga3.wss",1.77828,1,1000};
		begin2[] = {"\MIDF_Weapons\Sound\auga3.wss",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadTime = 0.075;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.001;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 450;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\MIDF_Weapons\Sound\auga3.wss",1.77828,1,1000};
		begin2[] = {"\MIDF_Weapons\Sound\auga3.wss",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadTime = 0.09;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
};

class SteyrAug_A3_Green_DZ: SteyrAug_A3_base {
	scope = 2;
	displayName = $STR_DZ_WPN_AUGA3_NAME;
	modelOptics = "\MIDF_Weapons\optic\leupold_cqt.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_green.paa";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	opticsZoomInit = 0.5;
	opticsZoomMin = 0.12787;
	opticsZoomMax = 0.383612;
	distanceZoomMin = 300;
	distanceZoomMax = 300;	
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_GL_Green_DZ";
	};
};

class SteyrAug_A3_Black_DZ: SteyrAug_A3_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_black.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_black.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_GL_Black_DZ";
	};
};

class SteyrAug_A3_Blue_DZ: SteyrAug_A3_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_blue.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_blue.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_GL_Blue_DZ";
	};
};

class SteyrAug_A3_ACOG_Green_DZ: SteyrAug_A3_Green_DZ {
	displayName = $STR_DZ_WPN_AUGA3_ACOG_NAME;
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_green.paa";
	Steyr_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_ACOG_GL_Green_DZ";
	};	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_Green_DZ'] call player_removeAttachment";
		};
	};	
};

class SteyrAug_A3_ACOG_Black_DZ: SteyrAug_A3_ACOG_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog_black.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_black.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_ACOG_GL_Black_DZ";
	};
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_Black_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_ACOG_Blue_DZ: SteyrAug_A3_ACOG_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_acog_blue.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_blue.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_ACOG_GL_Blue_DZ";
	};
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_Blue_DZ'] call player_removeAttachment";
		};
	};	
};

class SteyrAug_A3_Holo_Green_DZ: SteyrAug_A3_base {
	scope = 2;
	displayName = $STR_DZ_WPN_AUGA3_HOLO_NAME;
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_green.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_Holo_GL_Green_DZ";
	};	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_Green_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_Holo_Black_DZ: SteyrAug_A3_Holo_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech_black.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_black.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_Holo_GL_Black_DZ";
	};
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_Black_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_Holo_Blue_DZ: SteyrAug_A3_Holo_Green_DZ {
	model = "\MIDF_Weapons\Aug_a3\Aug_a3_eotech_blue.p3d";
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_blue.paa";
	
	class Attachments
	{
		Attachment_M203 = "SteyrAug_A3_Holo_GL_Blue_DZ";
	};	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_Blue_DZ'] call player_removeAttachment";
		};
	};	
};

class SteyrAug_A3_GL_Green_DZ: SteyrAug_A3_Green_DZ {
	scope = 2;
	displayName = $STR_DZ_WPN_AUGA3_GL_NAME;
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_green.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_gl.p3d";	
	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\MIDF_Weapons\data\anim\A3_GL.rtm"};

	class Attachments {};	
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Green_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_GL_Black_DZ: SteyrAug_A3_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_black.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_gl_black.p3d";
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Black_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_GL_Blue_DZ: SteyrAug_A3_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_blue.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_gl_blue.p3d";
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Blue_DZ'] call player_removeAttachment";
		};
	};	
};

class SteyrAug_A3_ACOG_GL_Green_DZ: SteyrAug_A3_ACOG_Green_DZ {
	displayName = $STR_DZ_WPN_AUGA3_ACOG_GL_NAME;
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_green.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl.p3d";
	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\MIDF_Weapons\data\anim\A3_GL.rtm"};
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_ACOG_Green_DZ'] call player_removeAttachment";
		};
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_GL_Green_DZ'] call player_removeAttachment";
		};		
	};		
};
class SteyrAug_A3_ACOG_GL_Black_DZ: SteyrAug_A3_ACOG_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_black.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_black.p3d";
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_ACOG_Black_DZ'] call player_removeAttachment";
		};
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_GL_Black_DZ'] call player_removeAttachment";
		};
	};	
};
class SteyrAug_A3_ACOG_GL_Blue_DZ: SteyrAug_A3_ACOG_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_blue.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_blue.p3d";
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_ACOG_Blue_DZ'] call player_removeAttachment";
		};
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SteyrAug_A3_GL_Blue_DZ'] call player_removeAttachment";
		};
	};	
};

class SteyrAug_A3_Holo_GL_Green_DZ: SteyrAug_A3_base {
	scope = 2;
	displayName = $STR_DZ_WPN_AUGA3_HOLO_GL_NAME;
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_green.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl.p3d";
	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\MIDF_Weapons\data\anim\A3_GL.rtm"};
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Holo_Green_DZ'] call player_removeAttachment";
		};
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_GL_Green_DZ'] call player_removeAttachment";
		};
	};		
};
class SteyrAug_A3_Holo_GL_Black_DZ: SteyrAug_A3_Holo_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_black.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_black.p3d";
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Holo_Black_DZ'] call player_removeAttachment";
		};
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_GL_Black_DZ'] call player_removeAttachment";
		};
	};		
};
class SteyrAug_A3_Holo_GL_Blue_DZ: SteyrAug_A3_Holo_GL_Green_DZ {
	picture = "\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_blue.paa";
	model = "\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_blue.p3d";	
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'SteyrAug_A3_Holo_Blue_DZ'] call player_removeAttachment";
		};
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SteyrAug_A3_GL_Blue_DZ'] call player_removeAttachment";
		};
	};	
};

#undef Steyr_ACOG