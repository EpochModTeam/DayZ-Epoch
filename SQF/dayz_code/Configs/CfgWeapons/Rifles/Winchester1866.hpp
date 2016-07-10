class Winchester1866_DZ : Rifle
{
	scope = public;
	
	model = "\dayz_weapons\models\Winchester1866.p3d";
	picture = "\dayz_weapons\textures\equip_winchester1866_CA.paa";
	displayname = $STR_DZ_WPN_W1866_NAME;
	descriptionShort = $STR_DZ_WPN_W1866_DESC;
	
	magazines[] = {15Rnd_W1866_Slug};
	
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
	
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	modes[] = {"Single"};
	
	class Single : Mode_SemiAuto
	{
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.5;
		reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload", 0.316228, 1, 20};
		begin1[] = {"dayz_weapons\sounds\shotgun_0", 1.77828, 1, 1000};
		begin2[] = {"dayz_weapons\sounds\shotgun_1", 1.77828, 1, 1000};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.01, 1, 10};
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
	};
};