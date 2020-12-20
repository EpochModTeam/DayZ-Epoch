#define HK416_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define HK416C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
	
class HK416_DZ : M4A1
{
	model = "\RH_hk416\RH_hk416.p3d";
	picture = "\RH_hk416\inv\hk416.paa";
	displayName = $STR_DZ_WPN_HK416_NAME;
	
	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\Hk416_anim.rtm"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};
	
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\hk416.wss",1.778279,1,800};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\hk416.wss",1.778279,1,800};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 90;
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
		Attachment_CCO = "HK416_CCO_DZ";
		Attachment_Holo = "HK416_Holo_DZ";
		Attachment_M203 = "HK416_GL_DZ";
		Attachment_Sup556 = "HK416_SD_DZ";
	};
};

class HK416_SD_DZ : M4A1_AIM_SD_camo
{
	model = "\RH_hk416\RH_hk416sd.p3d";
	picture = "\RH_hk416\inv\hk416sd.paa";
	displayName = $STR_DZ_WPN_HK416_SD_NAME;
	
	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\Hk416_anim.rtm"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\hk416sd.wss",1.0,1,80};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\hk416sd.wss",1.0,1,80};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 90;
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
		Attachment_CCO = "HK416_CCO_SD_DZ";
		Attachment_Holo = "HK416_Holo_SD_DZ";
		Attachment_M203 = "HK416_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_DZ'] call player_removeAttachment";
		};
	};
};


//Grenade launcher

class HK416_GL_DZ : HK416_DZ
{
	model = "\RH_hk416\RH_hk416gl.p3d";
	picture = "\RH_hk416\inv\hk416gl.paa";
	displayName = $STR_DZ_WPN_HK416_GL_NAME;
	
	HK416_M203;
	
	class Attachments
	{
		Attachment_CCO = "HK416_GL_CCO_DZ";
		Attachment_Holo = "HK416_GL_Holo_DZ";
		Attachment_Sup556 = "HK416_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_DZ'] call player_removeAttachment";
		};
	};
};

class HK416_GL_SD_DZ : HK416_SD_DZ
{
	model = "\RH_hk416\RH_hk416sdgl.p3d";
	picture = "\RH_hk416\inv\hk416sdgl.paa";
	displayName = $STR_DZ_WPN_HK416_GL_SD_NAME;
	
	HK416_M203;
	
	class Attachments
	{
		Attachment_CCO = "HK416_GL_CCO_SD_DZ";
		Attachment_Holo = "HK416_GL_Holo_SD_DZ";
		Attachment_ACOG = "HK416_GL_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_GL_DZ'] call player_removeAttachment";
		};
	};
};

//CCO

class HK416_CCO_DZ : HK416_DZ
{
	model = "\RH_hk416\RH_hk416aim.p3d";
	picture = "\RH_hk416\inv\hk416aim.paa";
	displayName = $STR_DZ_WPN_HK416_CCO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416_GL_CCO_DZ";
		Attachment_Sup556 = "HK416_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416_DZ'] call player_removeAttachment";
		};
	};
};

class HK416_CCO_SD_DZ : HK416_SD_DZ
{
	model = "\RH_hk416\RH_hk416sdaim.p3d";
	picture = "\RH_hk416\inv\hk416sdaim.paa";
	displayName = $STR_DZ_WPN_HK416_CCO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416_GL_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK416_GL_CCO_DZ : HK416_GL_DZ
{
	model = "\RH_hk416\RH_hk416glaim.p3d";
	picture = "\RH_hk416\inv\hk416glaim.paa";
	displayName = $STR_DZ_WPN_HK416_GL_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "HK416_GL_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class HK416_GL_CCO_SD_DZ : HK416_GL_SD_DZ
{
	model = "\RH_hk416\RH_hk416sdglaim.p3d";
	picture = "\RH_hk416\inv\hk416sdglaim.paa";
	displayName = $STR_DZ_WPN_HK416_GL_CCO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_GL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class HK416_Holo_DZ : HK416_DZ
{
	model = "\RH_hk416\RH_hk416eotech.p3d";
	picture = "\RH_hk416\inv\hk416eotech.paa";
	displayName = $STR_DZ_WPN_HK416_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416_GL_Holo_DZ";
		Attachment_Sup556 = "HK416_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416_DZ'] call player_removeAttachment";
		};
	};
};

class HK416_Holo_SD_DZ : HK416_SD_DZ
{
	model = "\RH_hk416\RH_hk416sdeotech.p3d";
	picture = "\RH_hk416\inv\hk416sdeotech.paa";
	displayName = $STR_DZ_WPN_HK416_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416_GL_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_Holo_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK416_GL_Holo_DZ : HK416_GL_DZ
{
	model = "\RH_hk416\RH_hk416gleotech.p3d";
	picture = "\RH_hk416\inv\Hk416gleotech.paa";
	displayName = $STR_DZ_WPN_HK416_GL_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup556 = "HK416_GL_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class HK416_GL_Holo_SD_DZ : HK416_GL_SD_DZ
{
	model = "\RH_hk416\RH_hk416sdgleotech.p3d";
	picture = "\RH_hk416\inv\hk416sdgleotech.paa";
	displayName = $STR_DZ_WPN_HK416_GL_HOLO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup556',_id,'HK416_GL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class HK416C_DZ : HK416_DZ
{
	model = "\RH_hk416\RH_hk416s.p3d";
	picture = "\RH_hk416\inv\hk416s.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\hk416cqb_anim.rtm"};
	displayName = $STR_DZ_WPN_HK416C_NAME;
	
	class Attachments
	{
		Attachment_CCO = "HK416C_CCO_DZ";
		Attachment_Holo = "HK416C_Holo_DZ";
		Attachment_M203 = "HK416C_GL_DZ";
		Attachment_ACOG = "HK416C_ACOG_DZ";
	};
};

//Grenade launcher

class HK416C_GL_DZ : HK416C_DZ
{
	model = "\RH_hk416\RH_hk416sgl.p3d";
	picture = "\RH_hk416\inv\hk416sgl.paa";	
	displayName = $STR_DZ_WPN_HK416C_GL_NAME;
	
	HK416_M203;
	
	class Attachments
	{
		Attachment_CCO = "HK416C_GL_CCO_DZ";
		Attachment_Holo = "HK416C_GL_Holo_DZ";
		Attachment_ACOG = "HK416C_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416C_DZ'] call player_removeAttachment";
		};
	};
};


//CCO

class HK416C_CCO_DZ : HK416C_DZ
{
	model = "\RH_hk416\RH_hk416saim.p3d";
	picture = "\RH_hk416\inv\hk416saim.paa";	
	displayName = $STR_DZ_WPN_HK416C_CCO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416C_GL_CCO_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416C_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK416C_GL_CCO_DZ : HK416C_GL_DZ
{
	model = "\RH_hk416\RH_hk416sglaim.p3d";
	picture = "\RH_hk416\inv\hk416sglaim.paa";	
	displayName = $STR_DZ_WPN_HK416C_GL_CCO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK416C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416C_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class HK416C_Holo_DZ : HK416C_DZ
{
	model = "\RH_hk416\RH_hk416seotech.p3d";
	picture = "\RH_hk416\inv\hk416seotech.paa";
	displayName = $STR_DZ_WPN_HK416C_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK416C_GL_Holo_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416C_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK416C_GL_Holo_DZ : HK416C_GL_DZ
{
	model = "\RH_hk416\RH_hk416sgleotech.p3d";
	picture = "\RH_hk416\inv\Hk416sgleotech.paa";
	displayName = $STR_DZ_WPN_HK416C_GL_HOLO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK416C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416C_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class HK416C_ACOG_DZ : HK416C_DZ
{
	model = "\RH_hk416\RH_hk416sacog.p3d";
	picture = "\RH_hk416\inv\hk416sacog.paa";
	displayName = $STR_DZ_WPN_HK416C_ACOG_NAME;
	
	HK416C_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "HK416C_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK416C_DZ'] call player_removeAttachment";
		};
	};
};

class HK416C_GL_ACOG_DZ : HK416C_GL_DZ
{
	model = "\RH_hk416\RH_hk416sglacog.p3d";
	picture = "\RH_hk416\inv\hk416sglacog.paa";
	displayName = $STR_DZ_WPN_HK416C_GL_ACOG_NAME;
	
	HK416_M203;
	HK416C_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK416C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK416C_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

#undef HK416_M203
#undef HK416C_ACOG
