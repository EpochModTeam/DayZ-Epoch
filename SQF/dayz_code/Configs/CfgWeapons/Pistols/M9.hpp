class M9_DZ: M9
{
	displayName = $STR_DZ_WPN_M9_NAME;
	
	begin1[] = {"\RH_de\Sound\m93r.wss",0.794328,1,700};
	soundBegin[] = {"begin1",1};
	magazines[] = {"15Rnd_9x19_M9"};
	
	class Attachments
	{
		Attachment_Sup9 = "M9_SD_DZ";
	};
};

class M9_SD_DZ: M9SD
{
	//model = "z\addons\dayz_communityweapons\m9\m9_sd.p3d";
	displayName = $STR_DZ_WPN_M9_SD_NAME;
	descriptionShort = $STR_DZ_WPN_M9_SD_DESC;	
	
	begin1[] = {"\RH_de\Sound\m9sd.wss",0.316228,1,200};
	soundBegin[] = {"begin1",1};
	magazines[] = {"15Rnd_9x19_M9SD"};
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'M9_DZ'] call player_removeAttachment";
		};
	};
};

class M9_Camo_DZ: M9_DZ
{
	model = "\RH_de\RH_m9c.p3d";
	picture = "\RH_de\inv\m9c.paa";
	
	class Attachments
	{
		Attachment_Sup9 = "M9_Camo_SD_DZ";
	};
};

class M9_Camo_SD_DZ:  M9_SD_DZ
{
	model = "\RH_de\RH_m9csd.p3d";
	picture = "\RH_de\inv\m9csd.paa";	
	
	class ItemActions
	{
		class RemoveSuppressor
		{
			text = $STR_ATTACHMENT_RMVE_Silencer;
			script = "; ['Attachment_Sup9',_id,'M9_Camo_DZ'] call player_removeAttachment";
		};
	};
};

class M93R_DZ: M9
{
	displayName = $STR_DZ_WPN_M93R_NAME;
	descriptionShort = $STR_DZ_WPN_M93R_DESC;		
	model = "\RH_de\RH_m93r.p3d";
	picture = "\RH_de\inv\m93.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modes[] = {"Single","Burst"};
	
	magazines[] = {"20Rnd_9x19_M93R","15Rnd_9x19_M9"};	
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_de\Sound\m93r.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.011;
		reloadTime = 0.055;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst
	{
		begin1[] = {"\RH_de\Sound\m93r.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		autofire = 0;
		soundBurst = 0;
		soundContinuous = 0;
		burst = 3;
		dispersion = 0.011;
		reloadTime = 0.055;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		ffCount = 3;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.055;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.6;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.2;
	};
};