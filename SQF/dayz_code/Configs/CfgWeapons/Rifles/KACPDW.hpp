class KAC_PDW_DZ: Rifle
{
	scope = public;
	displayName = $STR_DZ_WPN_KACPDW_NAME;
	descriptionShort = $STR_DZ_WPN_KACPDW_DESC;
	model = "\RH_pdw\RH_pdw.p3d";
	picture = "\RH_pdw\inv\w_pdw_iron_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_pdw\Anim\RH_PDW.rtm"};
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	magazines[] = {"30Rnd_6x35_KAC"};
	modes[] = {"Single","FullAuto"};
	dexterity = 2.4;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.000316228,1,10};
	class Single: Mode_SemiAuto
	{
		reloadTime = 0.0857;
		recoil = "RH_PDWRecoil";
		recoilProne = "RH_pdwassaultRiflesBaseProne";
		dispersion = 0.0025;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 300;
		maxRangeProbab = 0.05;
		begin1[] = {"\RH_pdw\sound\pdw_fire1",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime = 0.0857;
		recoil = "RH_PDWRecoil";
		recoilProne = "RH_pdwassaultRiflesBaseProne";
		dispersion = 0.0025;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
		begin1[] = {"\RH_pdw\sound\pdw_fire1",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
	};
	class Library
	{
		libTextDesc = "The Knight's Armament Company 6x35mm PDW is an experimental personal defense weapon designed by KAC, firing a new 6mm cartridge optimized for short barrel weapons.";
	};
	
	class Attachments
	{
		Attachment_CCO = "KAC_PDW_CCO_DZ";
		Attachment_Holo = "KAC_PDW_HOLO_DZ";
		Attachment_ACOG = "KAC_PDW_ACOG_DZ";
	};
};

class KAC_PDW_CCO_DZ: KAC_PDW_DZ
{
	displayName = $STR_DZ_WPN_KACPDW_CCO_NAME;
	picture = "\RH_pdw\inv\w_pdw_aim_ca.paa";
	model = "\RH_pdw\RH_pdw_aim.p3d";
	dexterity = 2.2;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'KAC_PDW_DZ'] call player_removeAttachment";
		};
	};	
};

class KAC_PDW_HOLO_DZ: KAC_PDW_DZ
{
	displayName = $STR_DZ_WPN_KACPDW_HOLO_NAME;
	picture = "\RH_pdw\inv\w_pdw_eotech_ca.paa";
	model = "\RH_pdw\RH_pdw_eotech.p3d";
	dexterity = 2.1;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'KAC_PDW_DZ'] call player_removeAttachment";
		};
	};	
};

class KAC_PDW_ACOG_DZ: KAC_PDW_DZ
{
	displayName = $STR_DZ_WPN_KACPDW_ACOG_NAME;
	picture = "\RH_pdw\inv\w_pdw_acog_ca.paa";
	model = "\RH_pdw\RH_pdw_acog.p3d";
	modelOptics = "\RH_pdw\fnc_acog_ta31rco.p3d";
	dexterity = 2.1;
	
	class OpticsModes
	{
		class ACOG
		{
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
			cameraDir = "";
		};
		
		class Iron
		{
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[] = {};
			cameraDir = "";
		};
	};
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'KAC_PDW_DZ'] call player_removeAttachment";
		};
	};	
};