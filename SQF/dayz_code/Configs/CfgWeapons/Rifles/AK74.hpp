/* Kobra */

class AK74_Kobra_DZ : AK_74
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_kobra_ca.paa";
	displayName = $STR_DZ_WPN_AK74_KOBRA_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		30Rnd_545x39_AKSD
	};
	
	class Attachments
	{
		Attachment_GP25 = "AK74_GL_Kobra_DZ";
		Attachment_Sup545 = "AK74_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK74_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_Kobra_SD_DZ : AKS_74_UN_kobra
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_kobra_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_KOBRA_SD_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AKSD,
		30Rnd_545x39_AK
	};
	
	class Attachments
	{
		Attachment_GP25 = "AK74_GL_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK74_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_Kobra_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_Kobra_DZ : AK74_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_kobra_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_KOBRA_NAME;
	
	//GP-25
	muzzles[] = {this, GP25Muzzle};
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	
	class Attachments
	{
		Attachment_Sup545 = "AK74_GL_Kobra_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK74_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_Kobra_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_Kobra_SD_DZ : AK74_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_kobra_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_KOBRA_SD_NAME;
	
	//GP-25
	muzzles[] = {this, GP25Muzzle};
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK74_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_Kobra_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_GL_Kobra_DZ'] call player_removeAttachment";
		};
	};
};

/* Iron sight */

class AK74_DZ : AK74_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_ca.paa";
	displayName = $STR_DZ_WPN_AK74_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "AK74_Kobra_DZ";
		Attachment_PSO1 = "AK74_PSO1_DZ";
		Attachment_GP25 = "AK74_GL_DZ";
		Attachment_Sup545 = "AK74_SD_DZ";
	};
	
	class ItemActions {};
};

class AK74_SD_DZ : AK74_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_SD_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "AK74_Kobra_SD_DZ";
		Attachment_PSO1 = "AK74_PSO1_SD_DZ";
		Attachment_GP25 = "AK74_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_DZ : AK74_GL_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "AK74_GL_Kobra_DZ";
		Attachment_PSO1 = "AK74_GL_PSO1_DZ";
		Attachment_Sup545 = "AK74_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_SD_DZ : AK74_GL_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_SD.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_SD_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "AK74_GL_Kobra_SD_DZ";
		Attachment_PSO1 = "AK74_GL_PSO1_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_GL_DZ'] call player_removeAttachment";
		};
	};
};

/* PSO */

class AK74_PSO1_DZ : AK74_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_pso_ca.paa";
	displayName = $STR_DZ_WPN_AK74_PSO1_NAME;
	
	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={};
			cameraDir = "";
		};
	};
	//PSO-1 end
	
	class Attachments
	{
		Attachment_GP25 = "AK74_GL_PSO1_DZ";
		Attachment_Sup545 = "AK74_PSO1_SD_DZ";
	};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK74_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_PSO1_SD_DZ : AK74_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_pso_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_pso_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_PSO1_SD_NAME;
	
	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={};
			cameraDir = "";
		};
	};
	//PSO-1 end
	
	class Attachments
	{
		Attachment_GP25 = "AK74_GL_PSO1_SD_DZ";
	};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK74_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_PSO1_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_PSO1_DZ : AK74_GL_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_pso_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_PSO1_NAME;
	
	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={};
			cameraDir = "";
		};
	};
	//PSO-1 end
	
	class Attachments
	{
		Attachment_Sup545 = "AK74_GL_PSO1_SD_DZ";
	};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK74_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_PSO1_DZ'] call player_removeAttachment";
		};
	};
};

class AK74_GL_PSO1_SD_DZ : AK74_GL_Kobra_SD_DZ
{
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_pso_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_pso_sd_ca.paa";
	displayName = $STR_DZ_WPN_AK74_GL_PSO1_SD_NAME;
	
	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\optika_snpiere";
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes
	{
		class Scope
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Ironsights
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={};
			cameraDir = "";
		};
	};
	//PSO-1 end
	
	class Attachments {};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK74_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK74_PSO1_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup545',_id,'AK74_GL_PSO1_DZ'] call player_removeAttachment";
		};
	};
};