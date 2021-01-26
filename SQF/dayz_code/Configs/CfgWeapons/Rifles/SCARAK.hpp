class SCAR_H_AK_DZ: AKM_DZ
{
	displayName = $STR_DZ_WPN_SCARAK_NAME;
	descriptionShort = $STR_DZ_WPN_SCARAK_DESC;
	model = "\RH_mgswp\RH_scarAk.p3d";
	picture = "\RH_mgswp\inv\scarAk.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	opticsZoomMin = 0.33333;
	opticsZoomMax = 1;
	opticsZoomInit = "0.33333*2";
	discretefov[] = {};
	discreteInitIndex = 0;
	reloadMagazineSound[] = {"\RH_mgswp\sound\scar_Reload",0.0316228,1,20};
	dexterity = "3.75/(3.6+ 0.1) + 0.5 + 0.1*(1)";
	class Single: Single
	{
		begin1[] = {"\RH_mgswp\sound\scarAk",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00175;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_5outof10";
		aiRateOfFire = 2;
		aiRateOfFireDistance = 400;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 200;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.03;
	};
	class FullAuto: FullAuto
	{
		begin1[] = {"\RH_mgswp\sound\scarAk",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00175;
		reloadTime = 0.1;
		recoil = "recoil_auto_primary_5outof10";
		recoilProne = "recoil_auto_primary_prone_5outof10";
		aiRateOfFire = 2;
		aiRateOfFireDistance = 100;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};
	
	class Attachments
	{
		Attachment_CCO = "SCAR_H_AK_CCO_DZ";
		Attachment_Holo = "SCAR_H_AK_HOLO_DZ";
		Attachment_ACOG = "SCAR_H_AK_ACOG_DZ";
	};
};
class SCAR_H_AK_CCO_DZ: SCAR_H_AK_DZ
{
	displayName = $STR_DZ_WPN_SCARAK_CCO_NAME;
	model = "\RH_mgswp\RH_scarAkaim.p3d";
	picture = "\RH_mgswp\inv\scarAkaim.paa";
	irDistance = 150;
	dexterity = "3.75/(3.6+ 0.2+ (0.4)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	weaponInfoType = "RscWeaponEmpty";
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'SCAR_H_AK_DZ'] call player_removeAttachment";
		};
	};
};

class SCAR_H_B_AK_CCO_DZ: SCAR_H_AK_CCO_DZ
{
	model = "\RH_mgswp\RH_scarAkBaim.p3d";
	picture = "\RH_mgswp\inv\scarAkbaim.paa";
	class ItemActions {};
};

class SCAR_H_AK_HOLO_DZ: SCAR_H_AK_CCO_DZ
{
	displayName = $STR_DZ_WPN_SCARAK_HOLO_NAME;
	model = "\RH_mgswp\RH_scarAkeotech.p3d";
	picture = "\RH_mgswp\inv\scarAkeotech.paa";
	dexterity = "3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'SCAR_H_AK_DZ'] call player_removeAttachment";
		};
	};
};

class SCAR_H_AK_ACOG_DZ: SCAR_H_AK_CCO_DZ
{
	displayName = $STR_DZ_WPN_SCARAK_ACOG_NAME;
	model = "\RH_mgswp\RH_scarAkacog.p3d";
	picture = "\RH_mgswp\inv\scarAkacog.paa";
	modelOptics = "\RH_mgswp\NWD_acog_ta31RMR";
	class OpticsModes
	{
		class ACOG
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			distanceZoomMin = 189;
			distanceZoomMax = 189;
			cameraDir = "";
			opticsZoomMin = "0.28778/4";
			opticsZoomMax = "0.28778/4";
			opticsZoomInit = "0.28778/4";
			discretefov[] = {};
			discreteInitIndex = 0;
		};
		class CQB: ACOG
		{
			opticsID = 2;
			useModelOptics = 0;
			opticsPPEffects[] = {};
			opticsFlare = 0;
			opticsDisablePeripherialVision = 0;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsZoomMin = 0.33333;
			opticsZoomMax = 1;
			opticsZoomInit = "0.33333*2";
			discretefov[] = {};
			discreteInitIndex = 0;
		};
	};
	dexterity = "3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	class Single: Single
	{
		aiRateOfFire = 3;
		aiRateOfFireDistance = 700;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 300;
		midRangeProbab = 0.6;
		maxRange = 700;
		maxRangeProbab = 0.03;
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'SCAR_H_AK_DZ'] call player_removeAttachment";
		};
	};	
};