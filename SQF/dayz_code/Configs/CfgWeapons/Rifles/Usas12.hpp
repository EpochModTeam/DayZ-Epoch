class USAS12_DZ: Saiga12K
{
	scope = 2;		
	displayName = $STR_DZ_WPN_USAS12_NAME;
	descriptionShort = $STR_DZ_WPN_USAS12_DESC;
	model = "\z\addons\dayz_epoch_w\usas12\h4_usas12.p3d";
	picture	="\z\addons\dayz_epoch_w\usas12\data\w_usas_ca.paa";
	magazines[] = {20Rnd_B_Usas12_74Slug, 20Rnd_B_Usas12_Pellets};
	optics = 1;
	modelOptics = "-";
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	bullet1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_1", db-20, 1,15};
	bullet2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_2", db-20, 1,15};
	bullet3[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_3", db-15, 1,15};
	bullet4[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_4", db-15, 1,15};
	bullet5[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1", db-20, 1,15};
	bullet6[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2", db-20, 1,15};
	bullet7[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3", db-20, 1,15};
	bullet8[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4", db-20, 1,15};
	bullet9[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1", db-40, 1,15};
	bullet10[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2", db-40, 1,15};
	bullet11[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3", db-40, 1,15};
	bullet12[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4", db-40, 1,15};
	soundBullet[] = {bullet1, 0.083, bullet2, 0.083, bullet3, 0.083, bullet4, 0.083, bullet5, 0.083, bullet6, 0.083, bullet7, 0.083, bullet8, 0.083, bullet9, 0.083, bullet10, 0.083, bullet11, 0.083, bullet12, 0.083};
	fireSpreadAngle = 0.7848246;
	modes[] = {"Single", "FullAuto"};
	class Single: Mode_SemiAuto
	{
		begin1[] = {"dayz_epoch_c\sounds\weapons\spas12_shot", db5, 1,1200};
		soundBegin[] = {begin1,1};
		dispersion = 0.002;
		reloadTime = 0.2;
		recoil = "recoil_single_primary_6outof10";
		recoilProne = "recoil_single_primary_prone_6outof10";
		minRange = 0;
		minRangeProbab = 0.50;
		midRange = 60;
		midRangeProbab = 0.20;
		maxRange = 100; 
		maxRangeProbab = 0.03;
	};
	class FullAuto: Mode_FullAuto
	{
		begin1[] = {"dayz_epoch_c\sounds\weapons\spas12_shot", db5, 1,1200};
		soundBegin[] = {begin1,1};
		dispersion = 0.003;
		reloadTime = 0.2;
		recoil = "recoil_single_primary_6outof10";
		recoilProne = "recoil_single_primary_prone_6outof10";
		minRange = 0; 
		minRangeProbab = 0.60;
		midRange = 40; 
		midRangeProbab = 0.15;
		maxRange = 70; 
		maxRangeProbab = 0.02;
	};		
};