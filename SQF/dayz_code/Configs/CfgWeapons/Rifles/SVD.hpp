class SVD_PSO1_DZ : SVD
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO.p3d";
	picture = "\ca\weapons\data\equip\w_svd_ca.paa";
	displayName = $STR_DZ_WPN_SVD_PSO1_NAME;
	
	begin1[] = {"\dayz_epoch_c\sounds\weapons\svd_shot",20,1,2000};
	soundBegin[] = {"begin1",1};
	
	magazines[] = {10Rnd_762x54_SVD};	
	
	class OpticsModes : OpticsModes
	{
		class Scope : Scope {};
		class Ironsights : Ironsights {};
	};
	
	class Attachments
	{
		Attachment_Ghillie = "SVD_PSO1_Gh_DZ";
		Attachment_Ghillie_Desert = "SVD_PSO1_Gh_DES_DZ";
	};
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_PSO1_Gh_DZ : SVD_PSO1_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_PSO1_Gh_ca.paa";
	displayName = $STR_DZ_WPN_SVD_PSO1_GH_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_PSO1_DZ'] call player_removeAttachment";
		};
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'SVD_Gh_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_DZ : SVD_PSO1_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_ca.paa";
	displayName = $STR_DZ_WPN_SVD_NAME;
	
	weaponInfoType = "RscWeaponZeroing";
	
	class OpticsModes : OpticsModes
	{
		class Ironsights : Ironsights
		{
			opticsID = 1;
			discreteDistanceInitIndex = 2;
		};
	};
	
	class Attachments
	{
		Attachment_Ghillie = "SVD_Gh_DZ";
		Attachment_PSO1 = "SVD_PSO1_DZ";
		Attachment_NSPU = "SVD_NSPU_DZ";
	};
	
	class ItemActions {};
};

class SVD_Gh_DZ : SVD_DZ
{
	model = "z\addons\dayz_communityweapons\SVD\SVD_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_Gh_ca.paa";
	displayName = $STR_DZ_WPN_SVD_GH_NAME;
	
	class Attachments 
	{
		Attachment_PSO1 = "SVD_PSO1_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_PSO1_Gh_DES_DZ : SVD_PSO1_Gh_DZ
{
	model = "\CorePatch\CorePatch_CCP_63107\models\SVD_des_EP1";
	picture = "\CA\weapons_E\Data\icons\svd_desert_CA.paa";
	displayName = $STR_DZ_WPN_SVD_PSO1_DES_NAME;
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie_Desert',_id,'SVD_PSO1_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_NSPU_DZ : SVD_PSO1_DZ {
	model = "\ca\weapons_E\SVD\SVD_nspu.p3d";
	displayname = "$STR_EP1_DN_SVD_NSPU_EP1";
	picture = "\CA\weapons_E\Data\icons\w_svd_nspu_CA.paa";
	modelOptics = "\Ca\weapons_E\NV_nspu_optic.p3d";
	class OpticsModes
	{
		class NSPU
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsZoomMin = 0.07082153;
			opticsZoomMax = 0.07082153;
			opticsZoomInit = 0.07082153;
			opticsPPEffects[] = {};
			opticsDisablePeripherialVision = 1;
			memoryPointCamera = "opticView";
			visionMode[] = {"NVG"};
			opticsFlare = 1;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			cameraDir = "";
		};
		class Ironsights: NSPU
		{
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = 0;
			opticsDisablePeripherialVision = 0;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			memoryPointCamera = "eye";
			visionMode[] = {};
		};
	};	
	
	class ItemActions
	{
		class RemoveNSPU
		{
			text = $STR_DZ_ATT_NSPU_RMVE;
			script = "; ['Attachment_NSPU',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};

class SVD_Gold_DZ : SVD_PSO1_DZ {
	displayname = $STR_DZ_WPN_SVD_GOLD_NAME;
	model = "\RH_aks\RH_svdg.p3d";
	picture = "\RH_aks\inv\svdg.paa";
	
	class ItemActions {};
};