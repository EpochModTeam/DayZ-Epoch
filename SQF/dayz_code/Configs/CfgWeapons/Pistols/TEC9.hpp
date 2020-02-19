class TEC9_DZ : glock17_EP1
{
	displayName = $STR_DZ_WPN_TEC9_NAME;
	descriptionShort = $STR_DZ_WPN_TEC9_DESC;	
	model = "\RH_de\RH_tec9.p3d";
	picture = "\RH_de\inv\tec9.paa";
	reloadMagazineSound[] = {"\RH_de\sound\tec9_reload.wss",0.056234,1,25};
	modes[] = {"Single","Fullauto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_de\Sound\tec9.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.015;
		reloadTime = 0.07;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
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
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.5;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_de\Sound\tec9.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		burst = 1;
		dispersion = 0.015;
		reloadTime = 0.07;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
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
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.2;
	};
	
	magazines[] = {"32Rnd_9x19_TEC9"};
};