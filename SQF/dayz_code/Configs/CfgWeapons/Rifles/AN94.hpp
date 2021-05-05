class AN94_DZ: AK_74
{
	scope = 2;
	opticsZoomInit = 0.375;
	model = "\RH_aks\RH_an94.p3d";
	picture = "\RH_aks\inv\an94.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	modelOptics = "-";
	optics = 1;
	dexterity = 1.7;
	displayName = $STR_DZ_WPN_AN94_NAME;
	reloadMagazineSound[] = {"\RH_aks\sound\an94_reload.wss",0.056234,1,20};
	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};
	modes[] = {"Single","Burst","Fullauto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_aks\sound\an94.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		recoil = "AN94_Recoil";
		recoilProne = "AN94_RecoilProne";
		multiplier = 1;
		burst = 1;
		dispersion = 0.002;
		reloadTime = 0.087;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 0;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 500;
		minRange = 2;
		minRangeProbab = 0.6;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 500;
		maxRangeProbab = 0.2;
	};
	class Burst: Mode_Burst
	{
		begin1[] = {"\RH_aks\sound\an942.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		recoil = "AN94_BurstRecoil";
		recoilProne = "AN94_BurstRecoilProne";
		soundBurst = 1;
		multiplier = 1;
		burst = 2;
		dispersion = 0.002;
		reloadTime = 0.03;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 0;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 200;
		minRange = 1;
		minRangeProbab = 0.6;
		midRange = 150;
		midRangeProbab = 0.9;
		maxRange = 230;
		maxRangeProbab = 0.6;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_aks\sound\an94.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.002;
		reloadTime = 0.087;
		recoil = "AN94_Recoil";
		recoilProne = "AN94_RecoilProne";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 100;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 80;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.3;
	};
	class Library
	{
		libTextDesc = "The AN-94 Abakan is a modern Russian assault rifle. The acronym stands for Avtomat Nikonova (after Gennadiy Nikonov) Model 1994, and it was chosen over many other competing firearms in an extensive trial, including the AEK-971 design by a team led by the son of AK-47 designer Mikhail Kalashnikov, Sergey Koksharov. The AN-94 was designed at the Izhmash state factories, as a replacement for the AK-74 assault rifle currently in use in the Russian military. Currently, the Russian military is retaining the AK-74M as its standard shoulder arm and the AN-94 is only being issued to the elite forces of the Russian military, some Russian police forces, and the MVD.";
	};
	
	class Attachments
	{
		Attachment_GP25 = "AN94_GL_DZ";
	};	
};
class AN94_GL_DZ: AN94_DZ
{
	scope = 2;
	model = "\RH_aks\RH_an94gl.p3d";
	modelOptics = "-";
	optics = 1;
	dexterity = 1.4;
	displayName = $STR_DZ_WPN_AN94_GL_NAME;
	picture = "\RH_aks\inv\an94gl.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	reloadMagazineSound[] = {"\RH_aks\sound\an94_reload.wss",0.056234,1,20};
	muzzles[] = {this, GP25Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	
	class Attachments {};	
	
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AN94_DZ'] call player_removeAttachment";
		};
	};	
};