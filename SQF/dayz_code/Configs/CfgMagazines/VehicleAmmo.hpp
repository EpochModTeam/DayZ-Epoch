class 29Rnd_30mm_AGS30 : CA_Magazine { 
	scope = public; 
	displayName = $STR_DZ_MAG_29RND_AGS30_NAME; 
	descriptionShort = $STR_DZ_MAG_29RND_AGS30_DESC;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
	ammo = "G_30mm_HE"; 
	count = 29; 
	type = "256";
	initSpeed = 185; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
};

class 48Rnd_40mm_MK19 : CA_Magazine { 
	scope = public; 
	displayName = $STR_DZ_MAG_48RND_MK19_NAME; 
	descriptionShort = $STR_DZ_MAG_48RND_MK19_DESC;
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	ammo = "G_40mm_HE"; 
	count = 48; 
	type = "256";
	initSpeed = 240; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
};

class 2000Rnd_762x51_M134 : CA_Magazine { 
	count = 2000; 
	scope = public; 
	displayName = $STR_DZ_MAG_2000RND_M134_NAME; 
	descriptionShort = $STR_DZ_MAG_2000RND_M134_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
	ammo = "B_762x51_3RndBurst"; 
	type = "256";
	maxLeadSpeed = 200; 
	tracersEvery = 5; 
	nameSound = "mgun";
};

class 4000Rnd_762x51_M134 : 2000Rnd_762x51_M134 { 
	count = 4000; 
	displayName = $STR_DZ_MAG_4000RND_M134_NAME; 
	descriptionShort = $STR_DZ_MAG_4000RND_M134_DESC;
};

class 100Rnd_127x99_M2 : CA_Magazine { 
	scope = public; 
	displayName = $STR_DZ_MAG_100RND_M2_NAME; 
	descriptionShort = $STR_DZ_MAG_100RND_M2_DESC;
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";
	ammo = "B_127x99_Ball"; 
	count = 100; 
	type = "256";
	initSpeed = 930; 
	maxLeadSpeed = 200; 
	tracersEvery = 3; 
	lastRoundsTracer = 5; 
	nameSound = "mgun"; 
};

class 50Rnd_127x107_DSHKM : CA_Magazine { 
	scope = public; 
	displayName = $STR_DZ_MAG_50RND_DSHKM_NAME; 
	descriptionShort = $STR_DZ_MAG_50RND_DSHKM_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_Dshkm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\dshkm_mag.p3d";
	ammo = "B_127x107_Ball"; 
	count = 50; 
	type = "256";
	initSpeed = 850; 
	maxLeadSpeed = 200; 
	tracersEvery = 3; 
	lastRoundsTracer = 5; 
	nameSound = "mgun"; 
};

class 150Rnd_127x107_DSHKM : 50Rnd_127x107_DSHKM { 
	scope = public; 
	displayName = $STR_DZ_MAG_150RND_DSHKM_NAME; 
	descriptionShort = $STR_DZ_MAG_150RND_DSHKM_DESC;
	count = 150; 
};

class 50Rnd_127x108_KORD : 50Rnd_127x107_DSHKM { 
	displayName = $STR_DZ_MAG_50RND_KORD_NAME; 
	descriptionShort = $STR_DZ_MAG_50RND_KORD_DESC;
};

class 150Rnd_127x108_KORD : 150Rnd_127x107_DSHKM { 
	displayName = $STR_DZ_MAG_150RND_KORD_NAME; 
	descriptionShort = $STR_DZ_MAG_150RND_KORD_DESC;
};

//Pook stuff
class pook_1300Rnd_762x51_M60: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_1300RND_TWINM60_NAME;
	descriptionShort = $STR_DZ_MAG_1300RND_TWINM60_DESC;
	ammo = "pook_762x51_M60";
	count = 1300;
	tracersEvery = 5;
	maxLeadSpeed = 200;
	nameSound = "mgun";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
	type = "256";
};

class pook_250Rnd_762x51: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_250RND_POOKM60_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_POOKM60_DESC;
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	count = 250;
	type = "256";
	ammo = "B_762x51_Ball";
	initSpeed = 900;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
};

class 6Rnd_Grenade_Camel: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_6RND_CAMELGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_CAMELGRENADE_DESC;	
	ammo = "G_Camel_HE";
	count = 6;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	type = "256";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
};

class pook_12Rnd_Grenade_Camel: CA_Magazine
{
	scope = 2;
	ammo = "pook_camel_HE";
	count = 12;
	displayName = $STR_DZ_MAG_12RND_POOKGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_POOKGRENADE_DESC;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	type = "256";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
	
};

//mozzie
class 3Rnd_GyroGrenade: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_3RND_MOZZIEGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_3RND_MOZZIEGRENADE_DESC;
	ammo = "GyroGrenade";
	count = 3;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	type = "256";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
};

class 500Rnd_TwinVickers: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_500RND_TWINVICKERS_NAME;
	descriptionShort = $STR_DZ_MAG_500RND_TWINVICKERS_DESC;
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";	
	ammo = "B_77x56_Ball";
	count = 500;
	initSpeed = 740;
	maxLeadSpeed = 200;
	tracersEvery = 3;
	nameSound = "mgun";
	type = "256";
};