class DesertEagle_DZ: Colt_Python_DZ
{
	scope = 2;
	model = "\z\addons\dayz_epoch_w\deagle\h4_deagle";
	modelOptics	= "-";
	picture	= "\z\addons\dayz_epoch_w\deagle\data\w_deagle_CA.paa";
	magazines[]	= {7Rnd_50AE_Deagle};
	displayName	= $STR_DZ_WPN_DESERT_EAGLE_NAME;
	descriptionShort = $STR_DZ_WPN_DESERT_EAGLE_DESC;
	begin1[] = {"rh_de\sound\desert_eagle_shot", db0, 1, 1000};
	begin2[] = {"rh_de\sound\desert_eagle_shot1", db0, 1, 1000};
	soundBegin[] = {begin1,0.5, begin2,0.5};
	reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\Glock17\reload1",db0,1, 20};
};

class DesertEagle_Gold_DZ: DesertEagle_DZ
{
	displayName	= $STR_DZ_WPN_DESERT_EAGLE_GOLD_NAME;
	model = "\RH_de\RH_deagleg.p3d";
	picture = "\RH_de\inv\deg.paa";
};

class DesertEagle_Silver_DZ: DesertEagle_DZ
{
	displayName	= $STR_DZ_WPN_DESERT_EAGLE_SILVER_NAME;
	model = "\RH_de\RH_deagles.p3d";
	picture = "\RH_de\inv\des.paa";
};

class DesertEagle_Modern_DZ: DesertEagle_DZ
{
	displayName	= $STR_DZ_WPN_DESERT_EAGLE_MODERN_NAME;
	model = "\RH_de\RH_deaglem.p3d";
	picture = "\RH_de\inv\dem.paa";
};