#define ACR_FLASHLIGHT class FlashLight\
{\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	position = "flash dir";\
	direction = "flash";\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define ACR_M203 muzzles[] = {this, M203Muzzle};\
handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_gl_anim.rtm"}

#define ACR_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

#define ACR_TWS modelOptics = "\ca\Weapons_baf\cws_optic";\
	weaponInfoType = "RscWeaponZeroing";\
	visionMode[] = {"Normal","Ti"};\
	thermalMode[] = {6};\
	discretefov[] = {0.0755,0.0249};\
	discreteInitIndex = 0;\
	discreteDistance[] = {100,200,300,400,500,600,700,800};\
	discreteDistanceInitIndex = 2;\
	class FlashLight\
	{\
		color[] = {0.9, 0.0, 0.0, 0.9};\
		ambient[] = {0.1, 0.0, 0.0, 1.0};\
		position = "flash dir";\
		direction = "flash";\
		angle = 30;\
		scale[] = {1, 1, 0.5};\
		brightness = 0.08;\
	}	

#define ACR_NV modelOptics = "\ca\Weapons_baf\cws_optic";\
	class OpticsModes {\
		class NV {\
			opticsID = 2;\
			useModelOptics = 1;\
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};\
			opticsZoomMin = 0.0623;\
			opticsZoomMax = 0.0623;\
			opticsZoomInit = 0.0623;\
			memoryPointCamera = "opticView";\
			weaponInfoType = "RscWeaponZeroing";\
			visionMode[] = {"Normal","NVG"};\
			discretefov[] = {0.0755,0.0249};\
			discreteInitIndex = 0;\
			discreteDistance[] = {100,200,300,400,500,600,700,800};\
			discreteDistanceInitIndex = 2;\
			opticsFlare = 1;\
			opticsDisablePeripherialVision = 1;\
			distanceZoomMin = 300;\
			distanceZoomMax = 300;\
			cameraDir = "";\
		};\
		class Holo: NV {\
			opticsID = 1;\
			useModelOptics = 0;\
			opticsFlare = 0;\
			opticsDisablePeripherialVision = 0;\
			discreteInitIndex = 2;\
			discreteDistance[] = {100,200,300};\
			discretefov[] = {};\
			discreteDistanceInitIndex = 2;\
			opticsZoomMin = 0.25;\
			opticsZoomMax = 1.1;\
			opticsZoomInit = 0.5;\
			memoryPointCamera = "eye";\
			visionMode[] = {};\
		};\
	};\
	class FlashLight\
	{\
		color[] = {0.9, 0.0, 0.0, 0.9};\
		ambient[] = {0.1, 0.0, 0.0, 1.0};\
		position = "flash dir";\
		direction = "flash";\
		angle = 30;\
		scale[] = {1, 1, 0.5};\
		brightness = 0.08;\
	}


class ACR_DZ_BASE: M4A1 {
	scope = private;
	ACR_FLASHLIGHT;
	magazines[] = {"ACR_30Rnd_680x43"};
	class Library
	{
		libTextDesc = "Remington ACR";
	};
	descriptionShort = $STR_DZ_WPN_ACR_DESC;
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single","FullAuto"};
	dexterity = 1.8;
	htMin = 1;
	htMax = 480;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	optics = 1;
	opticsDisablePeripherialVision = 1;
	value = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00562341,1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"fhq_remington\ACR\sfx\acr_single.ogg",1.77828,1,1000};
		begin2[] = {"fhq_remington\ACR\sfx\acr_single.ogg",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadTime = 0.09;
		dispersion = 0.00175;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"fhq_remington\ACR\sfx\acr_auto.ogg",1.77828,1,1000};
		begin2[] = {"fhq_remington\ACR\sfx\acr_auto.ogg",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
	};
	displayName = "ACR (Woodland)";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron.paa";
	model = "\fhq_remington\acr\acr_wdl_iron.p3d";
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_anim.rtm"};
};

class ACR_SD_DZ_BASE: M4A1_AIM_SD_camo {
	scope = private;
	ACR_FLASHLIGHT;
	magazines[] = {"ACR_30Rnd_680x43_SD"};
	fireLightDuration = 0;
	fireLightIntensity = 0;
	class Library
	{
		libTextDesc = "Remington ACR";
	};
	descriptionShort = $STR_DZ_WPN_ACR_SD_DESC;
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single","FullAuto"};
	dexterity = 1.8;
	htMin = 1;
	htMax = 480;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	optics = 1;
	opticsDisablePeripherialVision = 1;
	value = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00562341,1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	displayName = "ACR (Woodland)";
	model = "\fhq_remington\acr\acr_wdl_iron_sd.p3d";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_sd.paa";
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_anim.rtm"};
};


//ACR Woodland
class ACR_WDL_DZ : ACR_DZ_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_ACR_NAME;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;

	class Attachments
	{
		Attachment_CCO = "ACR_WDL_CCO_DZ";
		Attachment_Holo = "ACR_WDL_Holo_DZ";
		Attachment_ACOG = "ACR_WDL_ACOG_DZ";
		Attachment_M203 = "ACR_WDL_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_SD_DZ";
		Attachment_Tws = "ACR_WDL_TWS_DZ";
	};
};

class ACR_WDL_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	displayName = $STR_DZ_WPN_ACR_SD_NAME;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_CCO = "ACR_WDL_CCO_SD_DZ";
		Attachment_Holo = "ACR_WDL_Holo_SD_DZ";
		Attachment_ACOG = "ACR_WDL_ACOG_SD_DZ";
		Attachment_M203 = "ACR_WDL_GL_SD_DZ";
		Attachment_Tws = "ACR_WDL_TWS_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_GL_DZ : ACR_WDL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_iron_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_NAME;
		
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_WDL_CCO_GL_DZ";
		Attachment_Holo = "ACR_WDL_Holo_GL_DZ";
		Attachment_ACOG = "ACR_WDL_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_GL_SD_DZ";
		Attachment_Tws = "ACR_WDL_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_GL_SD_DZ : ACR_WDL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_iron_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_SD_NAME;	
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_WDL_CCO_GL_SD_DZ";
		Attachment_Holo = "ACR_WDL_Holo_GL_SD_DZ";
		Attachment_ACOG = "ACR_WDL_ACOG_GL_SD_DZ";
		Attachment_Tws = "ACR_WDL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_GL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_CCO_DZ : ACR_WDL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim.paa";
	model = "\fhq_remington\acr\acr_wdl_aim.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_CCO_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_CCO_SD_DZ : ACR_WDL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_WDL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_CCO_GL_DZ : ACR_WDL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_WDL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_CCO_GL_SD_DZ : ACR_WDL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_WDL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_CCO_GL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_Holo_DZ : ACR_WDL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws.paa";
	model = "\fhq_remington\acr\acr_wdl_hws.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_Holo_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_Holo_SD_DZ : ACR_WDL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_WDL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_Holo_GL_DZ : ACR_WDL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_WDL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_Holo_GL_SD_DZ : ACR_WDL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_WDL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_Holo_GL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_ACOG_DZ : ACR_WDL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco.paa";
	model = "\fhq_remington\acr\acr_wdl_rco.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};


class ACR_WDL_ACOG_SD_DZ : ACR_WDL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_WDL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_ACOG_GL_DZ : ACR_WDL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_WDL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_ACOG_GL_SD_DZ : ACR_WDL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_WDL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_ACOG_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_ACOG_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACR Woodland TWS
class ACR_WDL_TWS_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws.paa";
	model = "\fhq_remington\acr\acr_wdl_tws.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_TWS_SD_DZ";
		Attachment_M203 = "ACR_WDL_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_WDL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_WDL_TWS_GL_DZ : ACR_WDL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;

	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_WDL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_WDL_TWS_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_M203 = "ACR_WDL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_WDL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_WDL_TWS_GL_SD_DZ : ACR_WDL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_WDL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_TWS_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_TWS_SD_DZ'] call player_removeAttachment";
		};		
	};
};

//ACR Woodland NV
class ACR_WDL_NV_DZ : ACR_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33.paa";
	model = "\fhq_remington\acr\acr_wdl_g33.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_WDL_NV_GL_DZ";
		Attachment_Sup68 = "ACR_WDL_NV_SD_DZ";
	};
};

class ACR_WDL_NV_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_sd.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_WDL_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_NV_DZ'] call player_removeAttachment";
		};	
	};	
};

class ACR_WDL_NV_GL_DZ : ACR_WDL_GL_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_gl.p3d";

	class Attachments
	{
		Attachment_Sup68 = "ACR_WDL_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_NV_DZ'] call player_removeAttachment";
		};		
	};	
};

class ACR_WDL_NV_GL_SD_DZ : ACR_WDL_GL_SD_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_gl_sd.p3d";

	class Attachments
	{
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_WDL_NV_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_WDL_NV_SD_DZ'] call player_removeAttachment";
		};		
	};	
};



//ACR Black
class ACR_BL_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron.paa";
	model = "\fhq_remington\acr\acr_blk_iron.p3d";	
	displayName = $STR_DZ_WPN_ACR_NAME;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;

	class Attachments
	{
		Attachment_CCO = "ACR_BL_CCO_DZ";
		Attachment_Holo = "ACR_BL_Holo_DZ";
		Attachment_ACOG = "ACR_BL_ACOG_DZ";
		Attachment_M203 = "ACR_BL_GL_DZ";
		Attachment_Sup68 = "ACR_BL_SD_DZ";
		Attachment_Tws = "ACR_BL_TWS_DZ";
	};
};

class ACR_BL_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_sd.paa";
	model = "\fhq_remington\acr\acr_blk_iron_sd.p3d";	
	displayName = $STR_DZ_WPN_ACR_SD_NAME;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_CCO = "ACR_BL_CCO_SD_DZ";
		Attachment_Holo = "ACR_BL_Holo_SD_DZ";
		Attachment_ACOG = "ACR_BL_ACOG_SD_DZ";
		Attachment_M203 = "ACR_BL_GL_SD_DZ";
		Attachment_Tws = "ACR_BL_TWS_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_BL_GL_DZ : ACR_BL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_gl.paa";
	model = "\fhq_remington\acr\acr_blk_iron_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_NAME;
		
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_BL_CCO_GL_DZ";
		Attachment_Holo = "ACR_BL_Holo_GL_DZ";
		Attachment_ACOG = "ACR_BL_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_BL_GL_SD_DZ";
		Attachment_Tws = "ACR_BL_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_GL_SD_DZ : ACR_BL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_iron_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_SD_NAME;	
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_BL_CCO_GL_SD_DZ";
		Attachment_Holo = "ACR_BL_Holo_GL_SD_DZ";
		Attachment_ACOG = "ACR_BL_ACOG_GL_SD_DZ";
		Attachment_Tws = "ACR_BL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_GL_DZ'] call player_removeAttachment";
		};
	};
};

//CCO

class ACR_BL_CCO_DZ : ACR_BL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim.paa";
	model = "\fhq_remington\acr\acr_blk_aim.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_CCO_GL_DZ";
		Attachment_Sup68 = "ACR_BL_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_CCO_SD_DZ : ACR_BL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_sd.paa";
	model = "\fhq_remington\acr\acr_blk_aim_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_BL_CCO_GL_DZ : ACR_BL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_gl.paa";
	model = "\fhq_remington\acr\acr_blk_aim_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_BL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_CCO_GL_SD_DZ : ACR_BL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_aim_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_BL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_CCO_GL_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class ACR_BL_Holo_DZ : ACR_BL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws.paa";
	model = "\fhq_remington\acr\acr_blk_hws.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_Holo_GL_DZ";
		Attachment_Sup68 = "ACR_BL_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_Holo_SD_DZ : ACR_BL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_sd.paa";
	model = "\fhq_remington\acr\acr_blk_hws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_BL_Holo_GL_DZ : ACR_BL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_gl.paa";
	model = "\fhq_remington\acr\acr_blk_hws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_BL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_Holo_GL_SD_DZ : ACR_BL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_hws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_BL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_Holo_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACOG

class ACR_BL_ACOG_DZ : ACR_BL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco.paa";
	model = "\fhq_remington\acr\acr_blk_rco.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_BL_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};


class ACR_BL_ACOG_SD_DZ : ACR_BL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_sd.paa";
	model = "\fhq_remington\acr\acr_blk_rco_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_BL_ACOG_GL_DZ : ACR_BL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_gl.paa";
	model = "\fhq_remington\acr\acr_blk_rco_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_BL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_ACOG_GL_SD_DZ : ACR_BL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_rco_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_BL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_ACOG_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_ACOG_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACR Black TWS
class ACR_BL_TWS_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws.paa";
	model = "\fhq_remington\acr\acr_blk_tws.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_TWS_SD_DZ";
		Attachment_M203 = "ACR_BL_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_BL_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_BL_TWS_GL_DZ : ACR_BL_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_gl.paa";
	model = "\fhq_remington\acr\acr_blk_tws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;

	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_BL_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_BL_TWS_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_sd.paa";
	model = "\fhq_remington\acr\acr_blk_tws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_M203 = "ACR_BL_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_BL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_BL_TWS_GL_SD_DZ : ACR_BL_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_tws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_BL_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_TWS_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_TWS_SD_DZ'] call player_removeAttachment";
		};		
	};
};

//ACR Black NV
class ACR_BL_NV_DZ : ACR_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33.paa";
	model = "\fhq_remington\acr\acr_blk_g33.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_BL_NV_GL_DZ";
		Attachment_Sup68 = "ACR_BL_NV_SD_DZ";
	};
};

class ACR_BL_NV_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_sd.paa";
	model = "\fhq_remington\acr\acr_blk_g33_sd.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_BL_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_NV_DZ'] call player_removeAttachment";
		};	
	};	
};

class ACR_BL_NV_GL_DZ : ACR_BL_GL_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_gl.paa";
	model = "\fhq_remington\acr\acr_blk_g33_gl.p3d";

	class Attachments
	{
		Attachment_Sup68 = "ACR_BL_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_NV_DZ'] call player_removeAttachment";
		};		
	};	
};

class ACR_BL_NV_GL_SD_DZ : ACR_BL_GL_SD_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_g33_gl_sd.p3d";

	class Attachments
	{
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_BL_NV_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_BL_NV_SD_DZ'] call player_removeAttachment";
		};		
	};	
};

//ACR Desert
class ACR_DES_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron.paa";
	model = "\fhq_remington\acr\acr_tan_iron.p3d";
	displayName = $STR_DZ_WPN_ACR_NAME;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;

	class Attachments
	{
		Attachment_CCO = "ACR_DES_CCO_DZ";
		Attachment_Holo = "ACR_DES_Holo_DZ";
		Attachment_ACOG = "ACR_DES_ACOG_DZ";
		Attachment_M203 = "ACR_DES_GL_DZ";
		Attachment_Sup68 = "ACR_DES_SD_DZ";
		Attachment_Tws = "ACR_DES_TWS_DZ";
	};
};

class ACR_DES_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_sd.paa";
	model = "\fhq_remington\acr\acr_tan_iron_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_SD_NAME;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_CCO = "ACR_DES_CCO_SD_DZ";
		Attachment_Holo = "ACR_DES_Holo_SD_DZ";
		Attachment_ACOG = "ACR_DES_ACOG_SD_DZ";
		Attachment_M203 = "ACR_DES_GL_SD_DZ";
		Attachment_Tws = "ACR_DES_TWS_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_DES_GL_DZ : ACR_DES_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_gl.paa";
	model = "\fhq_remington\acr\acr_tan_iron_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_NAME;
		
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_DES_CCO_GL_DZ";
		Attachment_Holo = "ACR_DES_Holo_GL_DZ";
		Attachment_ACOG = "ACR_DES_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_DES_GL_SD_DZ";
		Attachment_Tws = "ACR_DES_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_GL_SD_DZ : ACR_DES_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_iron_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_SD_NAME;	
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_DES_CCO_GL_SD_DZ";
		Attachment_Holo = "ACR_DES_Holo_GL_SD_DZ";
		Attachment_ACOG = "ACR_DES_ACOG_GL_SD_DZ";
		Attachment_Tws = "ACR_DES_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_GL_DZ'] call player_removeAttachment";
		};
	};
};

//CCO

class ACR_DES_CCO_DZ : ACR_DES_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim.paa";
	model = "\fhq_remington\acr\acr_tan_aim.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_CCO_GL_DZ";
		Attachment_Sup68 = "ACR_DES_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_DES_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_CCO_SD_DZ : ACR_DES_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_sd.paa";
	model = "\fhq_remington\acr\acr_tan_aim_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_DES_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_DES_CCO_GL_DZ : ACR_DES_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_gl.paa";
	model = "\fhq_remington\acr\acr_tan_aim_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_DES_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_CCO_GL_SD_DZ : ACR_DES_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_aim_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_DES_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_CCO_GL_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class ACR_DES_Holo_DZ : ACR_DES_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws.paa";
	model = "\fhq_remington\acr\acr_tan_hws.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_Holo_GL_DZ";
		Attachment_Sup68 = "ACR_DES_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_DES_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_Holo_SD_DZ : ACR_DES_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_sd.paa";
	model = "\fhq_remington\acr\acr_tan_hws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_DES_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_Holo_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_DES_Holo_GL_DZ : ACR_DES_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_gl.paa";
	model = "\fhq_remington\acr\acr_tan_hws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_DES_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_Holo_GL_SD_DZ : ACR_DES_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_hws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_DES_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_Holo_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACOG

class ACR_DES_ACOG_DZ : ACR_DES_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco.paa";
	model = "\fhq_remington\acr\acr_tan_rco.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_DES_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_DES_DZ'] call player_removeAttachment";
		};
	};
};


class ACR_DES_ACOG_SD_DZ : ACR_DES_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_sd.paa";
	model = "\fhq_remington\acr\acr_tan_rco_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_DES_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_DES_ACOG_GL_DZ : ACR_DES_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_gl.paa";
	model = "\fhq_remington\acr\acr_tan_rco_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_DES_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_ACOG_GL_SD_DZ : ACR_DES_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_rco_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_DES_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_ACOG_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_ACOG_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACR Desert TWS
class ACR_DES_TWS_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws.paa";
	model = "\fhq_remington\acr\acr_tan_tws.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_TWS_SD_DZ";
		Attachment_M203 = "ACR_DES_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_DES_TWS_GL_DZ : ACR_DES_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_gl.paa";
	model = "\fhq_remington\acr\acr_tan_tws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;

	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_DES_TWS_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_sd.paa";
	model = "\fhq_remington\acr\acr_tan_tws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_M203 = "ACR_DES_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_DES_TWS_GL_SD_DZ : ACR_DES_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_tws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_TWS_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_TWS_SD_DZ'] call player_removeAttachment";
		};		
	};
};

//ACR Desert NV
class ACR_DES_NV_DZ : ACR_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33.paa";
	model = "\fhq_remington\acr\acr_tan_g33.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_DES_NV_GL_DZ";
		Attachment_Sup68 = "ACR_DES_NV_SD_DZ";
	};
};

class ACR_DES_NV_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_sd.paa";
	model = "\fhq_remington\acr\acr_tan_g33_sd.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_DES_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_NV_DZ'] call player_removeAttachment";
		};	
	};	
};

class ACR_DES_NV_GL_DZ : ACR_DES_GL_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_gl.paa";
	model = "\fhq_remington\acr\acr_tan_g33_gl.p3d";

	class Attachments
	{
		Attachment_Sup68 = "ACR_DES_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_NV_DZ'] call player_removeAttachment";
		};		
	};	
};

class ACR_DES_NV_GL_SD_DZ : ACR_DES_GL_SD_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;	
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_g33_gl_sd.p3d";

	class Attachments
	{
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_DES_NV_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_DES_NV_SD_DZ'] call player_removeAttachment";
		};		
	};	
};


//ACR Snow
class ACR_SNOW_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron.paa";
	model = "\fhq_remington\acr\acr_snw_iron.p3d";
	displayName = $STR_DZ_WPN_ACR_NAME;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;

	class Attachments
	{
		Attachment_CCO = "ACR_SNOW_CCO_DZ";
		Attachment_Holo = "ACR_SNOW_Holo_DZ";
		Attachment_ACOG = "ACR_SNOW_ACOG_DZ";
		Attachment_M203 = "ACR_SNOW_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_SD_DZ";
		Attachment_Tws = "ACR_SNOW_TWS_DZ";
	};
};

class ACR_SNOW_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_sd.paa";
	model = "\fhq_remington\acr\acr_snw_iron_sd.p3d";	
	displayName = $STR_DZ_WPN_ACR_SD_NAME;
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};	
	discreteDistanceInitIndex = 2;
	
	class Attachments
	{
		Attachment_CCO = "ACR_SNOW_CCO_SD_DZ";
		Attachment_Holo = "ACR_SNOW_Holo_SD_DZ";
		Attachment_ACOG = "ACR_SNOW_ACOG_SD_DZ";
		Attachment_M203 = "ACR_SNOW_GL_SD_DZ";
		Attachment_Tws = "ACR_SNOW_TWS_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_SNOW_GL_DZ : ACR_SNOW_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_gl.paa";
	model = "\fhq_remington\acr\acr_snw_iron_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_NAME;
		
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_SNOW_CCO_GL_DZ";
		Attachment_Holo = "ACR_SNOW_Holo_GL_DZ";
		Attachment_ACOG = "ACR_SNOW_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_GL_SD_DZ";
		Attachment_Tws = "ACR_SNOW_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_GL_SD_DZ : ACR_SNOW_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_iron_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_GL_SD_NAME;	
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_CCO = "ACR_SNOW_CCO_GL_SD_DZ";
		Attachment_Holo = "ACR_SNOW_Holo_GL_SD_DZ";
		Attachment_ACOG = "ACR_SNOW_ACOG_GL_SD_DZ";
		Attachment_Tws = "ACR_SNOW_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
	};
};

//CCO

class ACR_SNOW_CCO_DZ : ACR_SNOW_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim.paa";
	model = "\fhq_remington\acr\acr_snw_aim.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_CCO_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_CCO_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_CCO_SD_DZ : ACR_SNOW_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_sd.paa";
	model = "\fhq_remington\acr\acr_snw_aim_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_COO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_CCO_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_SNOW_CCO_GL_DZ : ACR_SNOW_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_gl.paa";
	model = "\fhq_remington\acr\acr_snw_aim_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_CCO_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_CCO_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_CCO_GL_SD_DZ : ACR_SNOW_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_aim_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_CCO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'ACR_SNOW_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_CCO_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_CCO_GL_DZ'] call player_removeAttachment";
		};
	};
};

//Holo

class ACR_SNOW_Holo_DZ : ACR_SNOW_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws.paa";
	model = "\fhq_remington\acr\acr_snw_hws.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_Holo_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_Holo_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_Holo_SD_DZ : ACR_SNOW_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_sd.paa";
	model = "\fhq_remington\acr\acr_snw_hws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_SD_NAME;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_Holo_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_SNOW_Holo_GL_DZ : ACR_SNOW_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_gl.paa";
	model = "\fhq_remington\acr\acr_snw_hws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_NAME;
	
	ACR_M203;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_Holo_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_Holo_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_Holo_GL_SD_DZ : ACR_SNOW_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_hws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_HOLO_GL_SD_NAME;
	
	ACR_M203;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'ACR_SNOW_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_Holo_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_Holo_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACOG

class ACR_SNOW_ACOG_DZ : ACR_SNOW_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco.paa";
	model = "\fhq_remington\acr\acr_snw_rco.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_ACOG_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_ACOG_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};


class ACR_SNOW_ACOG_SD_DZ : ACR_SNOW_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_sd.paa";
	model = "\fhq_remington\acr\acr_snw_rco_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class ACR_SNOW_ACOG_GL_DZ : ACR_SNOW_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_gl.paa";
	model = "\fhq_remington\acr\acr_snw_rco_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_ACOG_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_ACOG_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_ACOG_GL_SD_DZ : ACR_SNOW_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_rco_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_ACOG_GL_SD_NAME;
	
	ACR_ACOG;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'ACR_SNOW_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_ACOG_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_ACOG_GL_DZ'] call player_removeAttachment";
		};
	};
};

//ACR Snow TWS
class ACR_SNOW_TWS_DZ : ACR_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws.paa";
	model = "\fhq_remington\acr\acr_snw_tws.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_TWS_SD_DZ";
		Attachment_M203 = "ACR_SNOW_TWS_GL_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_DZ'] call player_removeAttachment";
		};
	};
};

class ACR_SNOW_TWS_GL_DZ : ACR_SNOW_GL_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_gl.paa";
	model = "\fhq_remington\acr\acr_snw_tws_gl.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_DESC;

	ACR_TWS;
	
	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_SNOW_TWS_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_sd.paa";
	model = "\fhq_remington\acr\acr_snw_tws_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_TWS_GL_SD_DZ";
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_TWS_DZ'] call player_removeAttachment";
		};		
	};
};

class ACR_SNOW_TWS_GL_SD_DZ : ACR_SNOW_GL_SD_DZ
{
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_tws_gl_sd.p3d";
	displayName = $STR_DZ_WPN_ACR_TWS_GL_SD_NAME;
	descriptionShort = $STR_DZ_WPN_ACR_TWS_SD_DESC;
	
	ACR_TWS;
	
	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveTWS
		{
			text = $STR_ATTACHMENT_RMVE_TWS;
			script = "; ['Attachment_Tws',_id,'ACR_SNOW_GL_SD_DZ'] call player_removeAttachment";
		};
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_TWS_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_TWS_SD_DZ'] call player_removeAttachment";
		};		
	};
};

//ACR Snow NV
class ACR_SNOW_NV_DZ : ACR_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33.paa";
	model = "\fhq_remington\acr\acr_snw_g33.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_NV_GL_DZ";
		Attachment_Sup68 = "ACR_SNOW_NV_SD_DZ";
	};
};

class ACR_SNOW_NV_SD_DZ : ACR_SD_DZ_BASE
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_sd.paa";
	model = "\fhq_remington\acr\acr_snw_g33_sd.p3d";

	class Attachments
	{
		Attachment_M203 = "ACR_SNOW_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_NV_DZ'] call player_removeAttachment";
		};	
	};	
};

class ACR_SNOW_NV_GL_DZ : ACR_SNOW_GL_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_gl.paa";
	model = "\fhq_remington\acr\acr_snw_g33_gl.p3d";

	class Attachments
	{
		Attachment_Sup68 = "ACR_SNOW_NV_GL_SD_DZ";
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_NV_DZ'] call player_removeAttachment";
		};		
	};	
};

class ACR_SNOW_NV_GL_SD_DZ : ACR_SNOW_GL_SD_DZ
{
	scope = public;
	ACR_NV;
	displayName = $STR_DZ_WPN_ACR_NV_GL_SD_NAME;	
	descriptionShort = $STR_DZ_WPN_ACR_NV_SD_DESC;
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_g33_gl_sd.p3d";

	class Attachments
	{
	};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup68',_id,'ACR_SNOW_NV_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_M203_RMVE;
			script = "; ['Attachment_M203',_id,'ACR_SNOW_NV_SD_DZ'] call player_removeAttachment";
		};		
	};	
};

#undef ACR_FLASHLIGHT
#undef ACR_M203
#undef ACR_ACOG
#undef ACR_TWS