class AKM_DZ : AK_47_M
{
	model = "z\addons\dayz_communityweapons\akm\akm.p3d";
	picture = "\z\addons\dayz_communityweapons\akm\data\w_akm_ca.paa";
	displayName = $STR_DZ_WPN_AKM_NAME;
	
	magazines[] = {30Rnd_762x39_AK47};
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 2;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "AKM_Kobra_DZ";
		Attachment_PSO1 = "AKM_PSO1_DZ";
	};
};

class AKM_Kobra_DZ : AKM_DZ
{
	model = "z\addons\dayz_communityweapons\akm\akm_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\akm\data\w_akm_kobra_ca.paa";
	displayName = $STR_DZ_WPN_AKM_KOBRA_NAME;
	
	//kobra zeroing
	weaponInfoType = "RscWeaponEmpty";
	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	//kobra zeroing end
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AKM_DZ'] call player_removeAttachment";
		};
	};
};

class AKM_PSO1_DZ : AKM_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\akm\akm_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\akm\data\w_akm_pso_ca.paa";
	displayName = $STR_DZ_WPN_AKM_PSO1_NAME;

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
	
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AKM_DZ'] call player_removeAttachment";
		};
	};
};