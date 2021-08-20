#define G3_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class G3_DZ: FNFAL_DZ
{
	scope = 2;
	model = "\z\addons\dayz_epoch_w\g3\h4g3.p3d";
	picture	= "\z\addons\dayz_epoch_w\g3\data\w_g3_ca.paa";
	displayName	= $STR_DZ_WPN_G3_NAME;
	descriptionShort = $STR_DZ_WPN_G3_DESC;
	magazines[] = {20Rnd_762x51_G3};
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	fireLightDuration = 0.000;
	fireLightIntensity = 0.000;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",db-50,1,10};
	reloadMagazineSound[] = {"\C1987_G3\sound\G3_Reload.wss",0.056234,1,20};
	distanceZoomMin	= 50;
	distanceZoomMax	= 50;
	handAnim[] = {"OFP2_ManSkeleton"};
	modes[] = {Single, FullAuto};
	class Single : Mode_SemiAuto
	{
		begin1[] = {"\C1987_G3\sound\G3.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
	};
	class FullAuto : Mode_FullAuto
	{
		begin1[] = {"\C1987_G3\sound\G3.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		aiRateOfFire = 0.001;
		dispersion = 0.003; //0.007;
		minRange = 0;
		minRangeProbab = 0.20;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class Attachments {};	
};

class G3A3_DZ: G3_DZ
{
	displayName = $STR_DZ_WPN_G3A3_NAME;
	model = "\C1987_G3\g3.p3d";
	picture = "\C1987_G3\equip\g3.paa";

	class Attachments
	{
		Attachment_CCO = "G3A3_CCO_DZ";
		Attachment_Holo = "G3A3_HOLO_DZ";
		Attachment_ACOG = "G3A3_ACOG_DZ";
	};		
};

class G3A3_CCO_DZ: G3A3_DZ
{
	displayName = $STR_DZ_WPN_G3A3_CCO_NAME;
	model = "\C1987_G3\g3_aimshot.p3d";
	picture = "\C1987_G3\equip\g3_aim.paa";
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'G3A3_DZ'] call player_removeAttachment";
		};
	};	
};

class G3A3_Holo_DZ: G3A3_DZ
{
	displayName = $STR_DZ_WPN_G3A3_HOLO_NAME;
	model = "\C1987_G3\g3_eotech.p3d";
	picture = "\C1987_G3\equip\g3_eotech.paa";
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'G3A3_DZ'] call player_removeAttachment";
		};
	};	
};

class G3A3_ACOG_DZ: G3A3_DZ
{
	displayName = $STR_DZ_WPN_G3A3_ACOG_NAME;
	model = "\C1987_G3\g3_acog.p3d";
	picture = "\C1987_G3\equip\g3_acog.paa";
	class Attachments {};
	G3_ACOG;
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'G3A3_DZ'] call player_removeAttachment";
		};
	};	
};

class G3_SG1_DZ: G3A3_DZ
{
	displayName = $STR_DZ_WPN_G3_SG1_NAME;
	model = "\C1987_G3\g3sg1.p3d";
	picture = "\C1987_G3\equip\g3sg1.paa";
	modelOptics = "\ca\weapons\2Dscope_MilDot_10";
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	opticsZoomMin = 0.029624;
	opticsZoomMax = 0.09222;
	opticsZoomInit = 0.09222;
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	optics = 1;
	class Single : Mode_SemiAuto
	{
		begin1[] = {"\C1987_G3\sound\G3.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};
	class FullAuto : Mode_FullAuto
	{
		begin1[] = {"\C1987_G3\sound\G3.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		aiRateOfFire = 0.001;
		dispersion = 0.003; //0.007;
		minRange = 0;
		minRangeProbab = 0.20;
		midRange = 350;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.05;
	};
	class Attachments {};
};

class G3_SG1_Bipod_DZ: G3_SG1_DZ
{
	displayName = $STR_DZ_WPN_G3_SG1_BIPOD_NAME;
	model = "\C1987_G3\g3sg1_bipod.p3d";
	picture = "\C1987_G3\equip\g3sg1_bipod.paa";
	class Single : Single
	{
		recoilProne = "recoil_single_primary_prone_1outof10";
	};
	class FullAuto : FullAuto
	{
		recoilProne = "recoil_auto_primary_prone_2outof10";
	};
};

#undef G3_ACOG