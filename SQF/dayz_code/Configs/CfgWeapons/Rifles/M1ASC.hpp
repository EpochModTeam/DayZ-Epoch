#define M1A_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class M1A_SC16_BL_DZ: M14_EP1
{
	scope = 2;
	displayName = $STR_DZ_WPN_M1ASC16_NAME;
	descriptionShort = $STR_DZ_WPN_M1ASC16_DESC;
	reloadMagazineSound[] = {"\RH_m14\Sound\M14_Reload.wss",0.056234,1,20};
	model = "\RH_m14\RH_m1s.p3d";
	picture = "\RH_m14\inv\m1s.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_m14\Anim\RH_m14cs.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_m14\Sound\m14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundBurst = 1;
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 7.125e-005;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 550;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 650;
		maxRangeProbab = 0.05;
	};	
	
	class Attachments
	{
		Attachment_CCO = "M1A_SC16_BL_CCO_DZ";
		Attachment_Holo = "M1A_SC16_BL_HOLO_DZ";
		Attachment_ACOG = "M1A_SC16_BL_ACOG_DZ";
		Attachment_SCOPED = "M1A_SC16_BL_PU_DZ";
	};	
	
};

class M1A_SC16_BL_ACOG_DZ: M1A_SC16_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_ACOG_NAME;
	model = "\RH_m14\RH_m1sacog.p3d";
	picture = "\RH_m14\inv\m1sacog.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	M1A_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M1A_SC16_BL_DZ'] call player_removeAttachment";
		};
	};		
};

class M1A_SC16_BL_CCO_DZ: M1A_SC16_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_CCO_NAME;
	model = "\RH_m14\RH_m1saim.p3d";
	picture = "\RH_m14\inv\m1saim.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M1A_SC16_BL_DZ'] call player_removeAttachment";
		};
	};	
};

class M1A_SC16_BL_HOLO_DZ: M1A_SC16_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_HOLO_NAME;
	model = "\RH_m14\RH_m1seot.p3d";
	picture = "\RH_m14\inv\m1seot.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M1A_SC16_BL_DZ'] call player_removeAttachment";
		};
	};	
};

class M1A_SC16_BL_PU_DZ: M1A_SC16_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_PU_NAME;
	model = "\RH_m14\RH_m1sshd.p3d";
	picture = "\RH_m14\inv\m1sshd.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;	
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";
	optics = 1;
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'M1A_SC16_BL_DZ'] call player_removeAttachment";
		};
	};
};

class M1A_SC16_BL_Sniper_DZ: M1A_SC16_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_SNIPER_NAME;
	model = "\RH_m14\RH_m1ssp.p3d";
	picture = "\RH_m14\inv\m1ssp.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsZoomMin = 0.029624;
	opticsZoomMax = 0.08222;
	opticsZoomInit = 0.08222;
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	optics = 1;
	class Attachments {};
};

class M1A_SC16_TAN_DZ: M14_EP1
{
	scope = 2;
	displayName = $STR_DZ_WPN_M1ASC16_NAME;
	descriptionShort = $STR_DZ_WPN_M1ASC16_DESC;
	reloadMagazineSound[] = {"\RH_m14\Sound\M14_Reload.wss",0.056234,1,20};
	model = "\RH_m14\RH_m1st.p3d";
	picture = "\RH_m14\inv\m1st.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_m14\Anim\RH_m14cs.rtm"};
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_m14\Sound\m14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundBurst = 1;
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 7.125e-005;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 550;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 650;
		maxRangeProbab = 0.05;
	};	
	
	class Attachments
	{
		Attachment_CCO = "M1A_SC16_TAN_CCO_DZ";
		Attachment_Holo = "M1A_SC16_TAN_HOLO_DZ";
		Attachment_ACOG = "M1A_SC16_TAN_ACOG_DZ";
		Attachment_SCOPED = "M1A_SC16_TAN_PU_DZ";
	};		
	
};

class M1A_SC16_TAN_ACOG_DZ: M1A_SC16_TAN_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_ACOG_NAME;
	model = "\RH_m14\RH_m1stacog.p3d";
	picture = "\RH_m14\inv\m1stacog.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";	
	M1A_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M1A_SC16_TAN_DZ'] call player_removeAttachment";
		};
	};		
};

class M1A_SC16_TAN_CCO_DZ: M1A_SC16_TAN_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_CCO_NAME;
	model = "\RH_m14\RH_m1staim.p3d";
	picture = "\RH_m14\inv\m1staim.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M1A_SC16_TAN_DZ'] call player_removeAttachment";
		};
	};	
};

class M1A_SC16_TAN_HOLO_DZ: M1A_SC16_TAN_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_HOLO_NAME;
	model = "\RH_m14\RH_m1steot.p3d";
	picture = "\RH_m14\inv\m1steot.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M1A_SC16_TAN_DZ'] call player_removeAttachment";
		};
	};		
};

class M1A_SC16_TAN_PU_DZ: M1A_SC16_TAN_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_PU_NAME;
	model = "\RH_m14\RH_m1stshd.p3d";
	picture = "\RH_m14\inv\m1stshd.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;	
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";
	optics = 1;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'M1A_SC16_TAN_DZ'] call player_removeAttachment";
		};
	};
};

class M1A_SC16_TAN_Sniper_DZ: M1A_SC16_TAN_DZ
{
	displayName = $STR_DZ_WPN_M1ASC16_SNIPER_NAME;
	model = "\RH_m14\RH_m1stsp.p3d";
	picture = "\RH_m14\inv\m1stsp.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsZoomMin = 0.029624;
	opticsZoomMax = 0.08222;
	opticsZoomInit = 0.08222;
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	optics = 1;
	class Attachments {};
};

class M1A_SC2_BL_DZ: M14_EP1
{
	scope = 2;
	displayName = $STR_DZ_WPN_M1ASC2_NAME;
	descriptionShort = $STR_DZ_WPN_M1ASC2_DESC;
	reloadMagazineSound[] = {"\RH_m14\Sound\M14_Reload.wss",0.056234,1,20};
	model = "\RH_m14\RH_sc2.p3d";
	picture = "\RH_m14\inv\sc2.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_m14\Sound\m14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundBurst = 1;
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 7.125e-005;
		reloadTime = 0.1;
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 550;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 650;
		maxRangeProbab = 0.05;
	};	
	
	class Attachments
	{
		Attachment_CCO = "M1A_SC2_BL_CCO_DZ";
		Attachment_Holo = "M1A_SC2_BL_HOLO_DZ";
		Attachment_ACOG = "M1A_SC2_BL_ACOG_DZ";
		Attachment_SCOPED = "M1A_SC2_BL_PU_DZ";
	};	
};

class M1A_SC2_BL_ACOG_DZ: M1A_SC2_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC2_ACOG_NAME;
	model = "\RH_m14\RH_sc2acog.p3d";
	picture = "\RH_m14\inv\sc2acog.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	M1A_ACOG;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveACOG
		{
			text = $STR_DZ_ATT_ACOG_RMVE;
			script = "; ['Attachment_ACOG',_id,'M1A_SC2_BL_DZ'] call player_removeAttachment";
		};
	};	
};

class M1A_SC2_BL_CCO_DZ: M1A_SC2_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC2_CCO_NAME;
	model = "\RH_m14\RH_sc2aim.p3d";
	picture = "\RH_m14\inv\sc2aim.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M1A_SC2_BL_DZ'] call player_removeAttachment";
		};
	};		
};

class M1A_SC2_BL_HOLO_DZ: M1A_SC2_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC2_HOLO_NAME;
	model = "\RH_m14\RH_sc2eot.p3d";
	picture = "\RH_m14\inv\sc2eot.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M1A_SC2_BL_DZ'] call player_removeAttachment";
		};
	};		
};

class M1A_SC2_BL_PU_DZ: M1A_SC2_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC2_PU_NAME;
	model = "\RH_m14\RH_sc2shd.p3d";
	picture = "\RH_m14\inv\sc2shd.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;	
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;	
	modelOptics = "\ca\weapons\2Dscope_Hunter_12";
	optics = 1;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveScope
		{
			text = $STR_DZ_ATT_PU_RMVE;
			script = "; ['Attachment_SCOPED',_id,'M1A_SC2_BL_DZ'] call player_removeAttachment";
		};
	};	
};

class M1A_SC2_BL_Sniper_DZ: M1A_SC2_BL_DZ
{
	displayName = $STR_DZ_WPN_M1ASC2_SNIPER_NAME;
	model = "\RH_m14\RH_sc2sp.p3d";
	picture = "\RH_m14\inv\sc2sp.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsZoomMin = 0.029624;
	opticsZoomMax = 0.08222;
	opticsZoomInit = 0.08222;
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	optics = 1;
	class Attachments {};
};

#undef M1A_ACOG