class MR43_DZ : Rifle
{
	scope = public;
	
	model = "\dayz_weapons\models\mr43.p3d";
	picture = "\dayz_weapons\textures\equip_mr43_CA.paa";
	displayname = $STR_WPN_NAME_5;
	descriptionShort = $STR_WPN_DESC_5;
	
	magazines[] =
	{
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};
	
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
	
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	
	modes[] = {"Single"};
	
	class Single : Mode_SemiAuto
	{
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.01;
		reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload", 0.316228, 1, 20};
		DB_shotgun_1[] = {"dayz_weapons\sounds\DB_shotgun_1", 1.77828, 1, 1000};
		soundBegin[] = {"DB_shotgun_1", 1};
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.01, 1, 10};
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
	};
};