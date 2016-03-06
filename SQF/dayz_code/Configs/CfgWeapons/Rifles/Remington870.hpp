class Remington870_DZ : Rifle
{
	scope = public;
	
	model = "\dayz_weapons\models\Remington870.p3d";
	picture = "\dayz_weapons\textures\equip_remington870_CA.paa";
	displayname = $STR_WPN_NAME_2;
	descriptionShort = $STR_WPN_DESC_2;
	
	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
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

class Remington870_FL_DZ : Remington870_DZ
{
	model = "\dayz_weapons\models\Remington870_lamp.p3d";
	displayname = $STR_WPN_NAME_3;
	descriptionShort = $STR_WPN_DESC_3;
	
	class FlashLight
	{
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
};