class G18_DZ : glock17_EP1
{
	displayName = $STR_DZ_WPN_G18_NAME;
	descriptionShort = $STR_DZ_WPN_G18_DESC;	
	model = "\RH_de\RH_g18.p3d";
	picture = "\RH_de\inv\g18.paa";	
	reloadMagazineSound[] = {"\RH_de\sound\glock_reload.wss",0.1,1,20};
	modes[] = {"Single","Fullauto"};
	
	class Single: Mode_SemiAuto
	{
		begin1[] = {"\RH_de\sound\glock.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		dispersion = 0.011;
		reloadTime = 0.05;
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
		aiRateOfFire = 1.5;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.4;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"\RH_de\sound\glock.wss",0.794328,1,700};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.011;
		reloadTime = 0.05;
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		ffCount = 3;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flash = "gunfire";
		flashSize = 0.1;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		aiRateOfFire = 0.001;
		aiRateOfFireDistance = 50;
		minRange = 2;
		minRangeProbab = 0.7;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.2;
	};
	
	magazines[] = {"33Rnd_9x19_G18"};
};