class RPK74_Kobra_DZ : RPK_74
{
	model = "z\addons\dayz_communityweapons\rpk74\rpk74_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_kobra_ca.paa";
	displayName = $STR_DZ_WPN_RPK74_KOBRA_NAME;
	
	magazines[] =
	{
		75Rnd_545x39_RPK,
		30Rnd_545x39_AK,
		30Rnd_545x39_AKSD
	};
	
	modes[] = {FullAuto,Single};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'RPK74_DZ'] call player_removeAttachment";
		};
	};
};

class RPK74_DZ : RPK74_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\rpk74\rpk74.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_ca.paa";
	displayName = $STR_DZ_WPN_RPK74_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		Attachment_Kobra = "RPK74_Kobra_DZ";
		Attachment_PSO1 = "RPK74_PSO1_DZ";
	};
	
	class ItemActions {};
};

class RPK74_PSO1_DZ : RPK74_Kobra_DZ
{
	model = "z\addons\dayz_communityweapons\rpk74\rpk74_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_pso_ca.paa";
	displayName = $STR_DZ_WPN_RPK74_PSO1_NAME;
	
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
			script = "; ['Attachment_PSO1',_id,'RPK74_DZ'] call player_removeAttachment";
		};
	};
};