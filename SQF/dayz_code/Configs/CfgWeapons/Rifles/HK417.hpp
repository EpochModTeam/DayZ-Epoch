#define HK417_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define HK417C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
	
class HK417_DZ : M14_EP1
{
	model = "\RH_hk416\RH_hk417.p3d";
	picture = "\RH_hk416\inv\hk417.paa";
	displayName = $STR_DZ_WPN_HK417_NAME;
	
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};
	
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\hk417.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0015;
		reloadTime = 0.1;
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.5;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\hk417.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.004;
		reloadTime = 0.1;
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};	
	
	magazines[] = 
	{
		20Rnd_762x51_HK417
	};
	
	class Attachments
	{
		Attachment_CCO = "HK417_CCO_DZ";
		Attachment_Holo = "HK417_Holo_DZ";
		Attachment_ACOG = "HK417_ACOG_DZ";
		Attachment_Sup762 = "HK417_SD_DZ";
	};
};

class HK417_SD_DZ : HK417_DZ
{
	model = "\RH_hk416\RH_hk416sd.p3d";
	picture = "\RH_hk416\inv\hk416sd.paa";
	displayName = $STR_DZ_WPN_HK417_SD_NAME;
	
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_hk416\sound\hk417sd.wss",1.0,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0015;
		reloadTime = 0.1;
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.5;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_hk416\sound\hk417sd.wss",1.0,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.004;
		reloadTime = 0.1;
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};	
	
	magazines[] =
	{
		20Rnd_762x51_HK417SD
	};
	
	class Attachments
	{
		Attachment_CCO = "HK417_CCO_SD_DZ";
		Attachment_Holo = "HK417_Holo_SD_DZ";
		Attachment_ACOG = "HK417_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'HK417_DZ'] call player_removeAttachment";
		};
	};
};

//CCO
class HK417_CCO_DZ : HK417_DZ
{
	model = "\RH_hk416\RH_hk417aim.p3d";
	picture = "\RH_hk416\inv\hk417aim.paa";
	displayName = $STR_DZ_WPN_HK417_CCO_NAME;
	
	class Attachments
	{
		Attachment_Sup762 = "HK417_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK417_DZ'] call player_removeAttachment";
		};
	};
};

class HK417_CCO_SD_DZ : HK417_SD_DZ
{
	model = "\RH_hk416\RH_hk417sdaim.p3d";
	picture = "\RH_hk416\inv\hk417sdaim.paa";
	displayName = $STR_DZ_WPN_HK417_CCO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK417_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'HK417_CCO_DZ'] call player_removeAttachment";
		};
	};
};


//Holo

class HK417_Holo_DZ : HK417_DZ
{
	model = "\RH_hk416\RH_hk417eotech.p3d";
	picture = "\RH_hk416\inv\hk417eotech.paa";
	displayName = $STR_DZ_WPN_HK417_HOLO_NAME;
	
	class Attachments
	{
		Attachment_Sup762 = "HK417_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK417_DZ'] call player_removeAttachment";
		};
	};
};

class HK417_Holo_SD_DZ : HK417_SD_DZ
{
	model = "\RH_hk416\RH_hk417sdeotech.p3d";
	picture = "\RH_hk416\inv\hk417sdeotech.paa";
	displayName = $STR_DZ_WPN_HK417_HOLO_SD_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK417_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'HK417_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class HK417_ACOG_DZ : HK417_DZ
{
	model = "\RH_hk416\RH_hk417acog.p3d";
	picture = "\RH_hk416\inv\hk417acog.paa";
	displayName = $STR_DZ_WPN_HK417_ACOG_NAME;
	
	HK417C_ACOG;
	
	class Attachments 
	{
		Attachment_Sup762 = "HK417_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK417_DZ'] call player_removeAttachment";
		};
	};
};

class HK417_ACOG_SD_DZ : HK417_SD_DZ
{
	model = "\RH_hk416\RH_hk417sdacog.p3d";
	picture = "\RH_hk416\inv\hk417sdacog.paa";
	displayName = $STR_DZ_WPN_HK417_ACOG_SD_NAME;
	
	HK417C_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK417_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'HK417_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class HK417C_DZ : HK417_DZ
{
	model = "\RH_hk416\RH_hk417s.p3d";
	picture = "\RH_hk416\inv\hk417s.paa";
	handAnim[] = {"OFP2_ManSkeleton"};
	displayName = $STR_DZ_WPN_HK417C_NAME;
	
	class Attachments
	{
		Attachment_CCO = "HK417C_CCO_DZ";
		Attachment_Holo = "HK417C_Holo_DZ";
		Attachment_M203 = "HK417C_GL_DZ";
		Attachment_ACOG = "HK417C_ACOG_DZ";
	};
};

//Grenade launcher

class HK417C_GL_DZ : HK417C_DZ
{
	model = "\RH_hk416\RH_hk417sgl.p3d";
	picture = "\RH_hk416\inv\hk417sgl.paa";
	displayName = $STR_DZ_WPN_HK417C_GL_NAME;
	
	HK417_M203;
	
	class Attachments
	{
		Attachment_CCO = "HK417C_GL_CCO_DZ";
		Attachment_Holo = "HK417C_GL_Holo_DZ";
		Attachment_ACOG = "HK417C_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK417C_DZ'] call player_removeAttachment";
		};
	};
};


//CCO

class HK417C_CCO_DZ : HK417C_DZ
{
	model = "\RH_hk416\RH_hk417saim.p3d";
	picture = "\RH_hk416\inv\hk417saim.paa";
	displayName = $STR_DZ_WPN_HK417C_CCO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK417C_GL_CCO_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK417C_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK417C_GL_CCO_DZ : HK417C_GL_DZ
{
	model = "\RH_hk416\RH_hk417sglaim.p3d";
	picture = "\RH_hk416\inv\hk417sglaim.paa";
	displayName = $STR_DZ_WPN_HK417C_GL_CCO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'HK417C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK417C_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class HK417C_Holo_DZ : HK417C_DZ
{
	model = "\RH_hk416\RH_hk417seotech.p3d";
	picture = "\RH_hk416\inv\hk417seotech.paa";
	displayName = $STR_DZ_WPN_HK417C_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "HK417C_GL_Holo_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK417C_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class HK417C_GL_Holo_DZ : HK417C_GL_DZ
{
	model = "\RH_hk416\RH_hk417sgleotech.p3d";
	picture = "\RH_hk416\inv\hk417sgleotech.paa";
	displayName = $STR_DZ_WPN_HK417C_GL_HOLO_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'HK417C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK417C_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class HK417C_ACOG_DZ : HK417C_DZ
{
	model = "\RH_hk416\RH_hk417sacog.p3d";
	picture = "\RH_hk416\inv\hk417sacog.paa";
	displayName = $STR_DZ_WPN_HK417C_ACOG_NAME;
	
	HK417C_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "HK417C_GL_ACOG_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK417C_DZ'] call player_removeAttachment";
		};
	};
};

class HK417C_GL_ACOG_DZ : HK417C_GL_DZ
{
	model = "\RH_hk416\RH_hk417sglacog.p3d";
	picture = "\RH_hk416\inv\hk417sglacog.paa";
	displayName = $STR_DZ_WPN_HK417C_GL_ACOG_NAME;
	
	HK417_M203;
	HK417C_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'HK417C_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'HK417C_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class HK417_Sniper_DZ: HK417_DZ
{
	displayName = $STR_DZ_WPN_HK417_SNIPER_NAME;
	model = "\RH_hk416\RH_hk417sp.p3d";
	picture = "\RH_hk416\inv\hk417sp.paa";
	modelOptics = "\RH_hk416\fnc_875x_illum_round_mildot.p3d";
	optics = 1;
	weaponInfoType = "RscWeaponZeroing";
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin = 0.033574;
			opticsZoomMax = 0.087666;
			opticsZoomInit = 0.087666;
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			distanceZoomMin = 325;
			distanceZoomMax = 325;
			cameraDir = "";
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};
};

class HK417_Sniper_SD_DZ: HK417_SD_DZ
{
	displayName = $STR_DZ_WPN_HK417_SNIPER_SD_NAME;
	model = "\RH_hk416\RH_hk417sdsp.p3d";
	picture = "\RH_hk416\inv\hk417sdsp.paa";
	modelOptics = "\RH_hk416\fnc_875x_illum_round_mildot.p3d";
	optics = 1;
	weaponInfoType = "RscWeaponZeroing";
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin = 0.033574;
			opticsZoomMax = 0.087666;
			opticsZoomInit = 0.087666;
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			distanceZoomMin = 325;
			distanceZoomMax = 325;
			cameraDir = "";
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};
};

#undef HK417_M203
#undef HK417C_ACOG
