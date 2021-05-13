#define RH95_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class RK95_DZ: AKM_DZ
{
	scope = 2;
	opticsZoomInit = 0.375;
	model = "\RH_aks\RH_rk95.p3d";
	picture = "\RH_aks\inv\rk95.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	modelOptics = "-";
	optics = 1;
	dexterity = 1.6;
	displayName = $STR_DZ_WPN_RK95_NAME;
	distanceZoomMin = 400;
	distanceZoomMax = 400;
	reloadMagazineSound[] = {"\RH_aks\sound\rk95_reload.wss",0.056234,1,20};
	magazines[] = {"30Rnd_762x39_RK95"};
	
	modes[] = {"Single","Fullauto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_aks\sound\rk95.wss",1.778279,1,1000};
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		soundBegin[] = {"begin1",1};
		multiplier = 1;
		burst = 1;
		dispersion = 0.0025;
		reloadTime = 0.092;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 0;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 5.5;
		aiRateOfFireDistance = 400;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.2;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_aks\sound\rk95.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.0025;
		reloadTime = 0.092;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 70;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.2;
	};
	class Library
	{
		libTextDesc = "The 7.62 RK 95 TP (Rynnäkkökivääri 95 Taittoperä, Assault rifle 95, Folding stock) is an assault rifle that was produced by the Sako company based in Finland. A relatively small quantity was purchased by the Finnish Defence Forces. The weapon is a further development of the Rk 62 which was based on the Soviet AK-47 assault rifle. It fires the same 7.62 x 39 mm ammunition as the AK-47, but a few samples were made in 5.56 x 45 mm NATO. It is considered to be the best AK-47 variant in the world by many experts, due to the superior quality of materials and workmanship. A civilian semi-automatic version with a fixed buttstock was manufactured under the name Sako M92S.";
	};
	
	class Attachments
	{
		Attachment_CCO = "RK95_CCO_DZ";
		Attachment_Sup762 = "RK95_SD_DZ";
		Attachment_ACOG = "RK95_ACOG_DZ";
	};
};

class RK95_SD_DZ: RK95_DZ
{
	fireLightDuration = 0;
	fireLightIntensity = 0;
	displayName = $STR_DZ_WPN_RK95_SD_NAME;
	descriptionShort = $STR_DZ_WPN_RK95_DESC;
	model = "\RH_aks\RH_rk95sd.p3d";
	picture = "\RH_aks\inv\rk95sd.paa";
	opticsDisablePeripherialVision = 1;
	magazines[] = {"30Rnd_762x39_RK95SD"};
	
	modes[] = {"Single","FullAuto"};
	class Single: Single
	{
		begin1[] = {"\RH_aks\sound\rk95_sd.wss",1.778279,1,150};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: FullAuto
	{
		begin1[] = {"\RH_aks\sound\rk95_sd.wss",1.778279,1,150};
		soundBegin[] = {"begin1",1};
	};
	
	class Attachments
	{
		Attachment_CCO = "RK95_CCO_SD_DZ";
		Attachment_ACOG = "RK95_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'RK95_DZ'] call player_removeAttachment";
		};
	};	
};

class RK95_CCO_SD_DZ: RK95_SD_DZ
{
	displayName = $STR_DZ_WPN_RK95_CCO_SD_NAME;
	model = "\RH_aks\RH_rk95sdaim.p3d";
	picture = "\RH_aks\inv\rk95sdaim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	
	class Attachments {};

	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'RK95_CCO_DZ'] call player_removeAttachment";
		};
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'RK95_SD_DZ'] call player_removeAttachment";
		};
	};	
};

class RK95_ACOG_SD_DZ: RK95_SD_DZ
{
	RH95_ACOG;
	
	displayName = $STR_DZ_WPN_RK95_ACOG_SD_NAME;
	model = "\RH_aks\RH_rk95sdag.p3d";
	picture = "\RH_aks\inv\rk95sdag.paa";
	opticsZoomMin = 0.08222;
	opticsZoomMax = 0.08222;
	distanceZoomMin = 164;
	distanceZoomMax = 164;
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup762',_id,'RK95_ACOG_DZ'] call player_removeAttachment";
		};
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'RK95_SD_DZ'] call player_removeAttachment";
		};		
	};	
};

class RK95_CCO_DZ: RK95_DZ
{
	displayName = $STR_DZ_WPN_RK95_CCO_NAME;
	model = "\RH_aks\RH_rk95aim.p3d";
	picture = "\RH_aks\inv\rk95aim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 322;
	distanceZoomMax = 322;
	
	class Attachments
	{
		Attachment_Sup762 = "RK95_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'RK95_DZ'] call player_removeAttachment";
		};	
	};	
};

class RK95_ACOG_DZ: RK95_DZ
{
	RH95_ACOG;
	
	displayName = $STR_DZ_WPN_RK95_ACOG_NAME;
	model = "\RH_aks\RH_rk95ag.p3d";
	picture = "\RH_aks\inv\rk95ag.paa";
	opticsZoomMin = 0.08222;
	opticsZoomMax = 0.08222;
	distanceZoomMin = 164;
	distanceZoomMax = 164;
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	
	class Attachments
	{
		Attachment_Sup762 = "RK95_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'RK95_DZ'] call player_removeAttachment";
		};		
	};		
};

#undef RH95_ACOG