class Vehicle_ammo_base: CA_Magazine {
	scope = 0; 
	reloadAction = "";
	maxLeadSpeed = 100;
	type = 256;
};

class 6Rnd_HE_M203_heli: 6Rnd_HE_M203
{
	displayName = $STR_DZ_MAG_6RND_M32_HELI_NAME; 
	descriptionShort = $STR_DZ_MAG_6RND_M32_HELI_DESC;
	maxLeadSpeed = 170;
};

class 200Rnd_762x51_M240 : 100Rnd_762x51_M240 {
	displayName = $STR_DZ_MAG_200RND_M240_NAME; 
	count = 200;
	descriptionShort = $STR_DZ_MAG_200RND_M240_DESC;
	
	class ItemActions
	{
		delete CombineMag;
	};
};
class 460Rnd_762x51_M240_ACR: 200Rnd_762x51_M240
{
	displayName = $STR_DZ_MAG_460RND_M240_NAME; 
	descriptionShort = $STR_DZ_MAG_460RND_M240_DESC;	
	count = 460;
};

class 1200Rnd_762x51_M240: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1200RND_M240_NAME; 
	descriptionShort = $STR_DZ_MAG_1200RND_M240_DESC;
	count = 1200;
	ammo = "B_762x51_Ball";
	initSpeed = 834;
	maxLeadSpeed = 200;
	tracersEvery = 4;
	nameSound = "mgun";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
};
class 1200Rnd_20mm_M621: 1200Rnd_762x51_M240
{
	displayName = $STR_DZ_MAG_1200RND_M621_NAME; 
	descriptionShort = $STR_DZ_MAG_1200RND_M621_DESC;	
	ammo = "B_20mm_AP";
	displayNameShort = "HE";
	nameSound = "cannon";
	tracersEvery = 2;	
};
class 1500Rnd_762x54_PKT: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1500RND_PKT_NAME; 
	descriptionShort = $STR_DZ_MAG_1500RND_PKT_DESC;
	count = 1500;
	ammo = "B_762x54_Ball";
	initSpeed = 855;
	maxLeadSpeed = 200;
	tracersEvery = 4;
	nameSound = "mgun";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
};
class 2000Rnd_762x54_PKT: 1500Rnd_762x54_PKT
{
	displayName = $STR_DZ_MAG_2000RND_PKT_NAME; 
	descriptionShort = $STR_DZ_MAG_2000RND_PKT_DESC;
	count = 2000;
};
class 200Rnd_762x54_PKT: 1500Rnd_762x54_PKT
{
	displayName = $STR_DZ_MAG_200RND_PKT_NAME; 
	descriptionShort = $STR_DZ_MAG_200RND_PKT_DESC;
	count = 200;
	picture = "\CA\weapons\data\equip\m_pk_ca.paa";
	model = "\CorePatch\CorePatch_Magazines\models\mag_pk";
};
class 250Rnd_762x54_PKT_T90: 1500Rnd_762x54_PKT
{
	displayName = $STR_DZ_MAG_250RND_PKT_NAME; 
	descriptionShort = $STR_DZ_MAG_250RND_PKT_DESC;	
	count = 250;
	picture = "\CA\weapons\data\equip\m_pk_ca.paa";
	model = "\CorePatch\CorePatch_Magazines\models\mag_pk";
};
class 200Rnd_762x54_GPMG: 200Rnd_762x54_PKT
{
	displayName = "$STR_BAF_CFGMAGAZINES_200RND_762X54_GPMG0";
	descriptionShort = "$STR_DSS_200RND_762X51_GPMG_CP";
	ammo = "B_762x51_Ball";
};
class 29Rnd_30mm_AGS30 : Vehicle_ammo_base { 
	scope = 2; 
	displayName = $STR_DZ_MAG_29RND_AGS30_NAME; 
	descriptionShort = $STR_DZ_MAG_29RND_AGS30_DESC;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
	ammo = "G_30mm_HE"; 
	count = 29; 	
	initSpeed = 185; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
};
class 29Rnd_30mm_AGS30_heli: 29Rnd_30mm_AGS30
{
	displayName = $STR_DZ_MAG_29RND_AGS30_HELI_NAME; 
	descriptionShort = $STR_DZ_MAG_29RND_AGS30_HELI_DESC;	
	ammo = "G_30mm_HE_heli";
};	
class 400Rnd_30mm_AGS17: 29Rnd_30mm_AGS30
{
	displayName = $STR_DZ_MAG_400RND_AGS17_NAME; 
	descriptionShort = $STR_DZ_MAG_400RND_AGS17_DESC;
	count = 400;
};

class 48Rnd_40mm_MK19 : Vehicle_ammo_base { 
	scope = 2; 
	displayName = $STR_DZ_MAG_48RND_MK19_NAME; 
	descriptionShort = $STR_DZ_MAG_48RND_MK19_DESC;
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	ammo = "G_40mm_HE"; 
	count = 48; 
	initSpeed = 240; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
};
class 32Rnd_40mm_GMG: 48Rnd_40mm_MK19
{
	count = 32;
	displayName = "$STR_BAF_CFGMAGAZINES_32RND_40MM_GMG0";
	descriptionShort = "$STR_BAF_CFGMAGAZINES_32RND_40MM_GMG0_0";
};

class 4000Rnd_762x51_M134 : Vehicle_ammo_base { 
	count = 4000; 
	scope = 2; 
	displayName = $STR_DZ_MAG_4000RND_M134_NAME; 
	descriptionShort = $STR_DZ_MAG_4000RND_M134_DESC;	
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
	ammo = "B_762x51_3RndBurst"; 
	maxLeadSpeed = 200; 
	tracersEvery = 5; 
	nameSound = "mgun";
	initSpeed = 869;
};

class 2000Rnd_762x51_M134 : 4000Rnd_762x51_M134 { 
	count = 2000; 
	displayName = $STR_DZ_MAG_2000RND_M134_NAME; 
	descriptionShort = $STR_DZ_MAG_2000RND_M134_DESC;
};
class 2000Rnd_762x51_L94A1: 2000Rnd_762x51_M134
{
	displayName = $STR_DZ_MAG_2000RND_L94A1_NAME; 
	descriptionShort = $STR_DZ_MAG_2000RND_L94A1_DESC;
	ammo = "B_762x51_Ball";
	tracersEvery = 4;	
};

class 100Rnd_127x99_M2 : Vehicle_ammo_base { 
	scope = 2; 
	displayName = $STR_DZ_MAG_100RND_M2_NAME; 
	descriptionShort = $STR_DZ_MAG_100RND_M2_DESC;
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";
	ammo = "B_127x99_Ball"; 
	count = 100; 
	initSpeed = 930; 
	maxLeadSpeed = 200; 
	tracersEvery = 3; 
	lastRoundsTracer = 5; 
	nameSound = "mgun"; 
};

class 50Rnd_127x107_DSHKM : Vehicle_ammo_base { 
	scope = 2; 
	displayName = $STR_DZ_MAG_50RND_DSHKM_NAME; 
	descriptionShort = $STR_DZ_MAG_50RND_DSHKM_DESC;
	picture = "\z\addons\dayz_epoch\pictures\equip_Dshkm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\dshkm_mag.p3d";
	ammo = "B_127x107_Ball"; 
	count = 50; 
	initSpeed = 850; 
	maxLeadSpeed = 200; 
	tracersEvery = 3; 
	lastRoundsTracer = 5; 
	nameSound = "mgun"; 
};

class 150Rnd_127x107_DSHKM : 50Rnd_127x107_DSHKM { 
	scope = 2; 
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
class pook_1300Rnd_762x51_M60: Vehicle_ammo_base
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
};

class pook_250Rnd_762x51: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_250RND_POOKM60_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_POOKM60_DESC;
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	count = 250;
	ammo = "B_762x51_Ball";
	initSpeed = 900;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
};

class 6Rnd_Grenade_Camel: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_6RND_CAMELGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_CAMELGRENADE_DESC;	
	ammo = "G_Camel_HE";
	count = 6;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
};

class pook_12Rnd_Grenade_Camel: Vehicle_ammo_base
{
	scope = 2;
	ammo = "pook_camel_HE";
	count = 12;
	displayName = $STR_DZ_MAG_12RND_POOKGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_POOKGRENADE_DESC;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";	
};

//mozzie
class 3Rnd_GyroGrenade: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_3RND_MOZZIEGRENADE_NAME;
	descriptionShort = $STR_DZ_MAG_3RND_MOZZIEGRENADE_DESC;
	ammo = "GyroGrenade";
	count = 3;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
};

class 500Rnd_TwinVickers: Vehicle_ammo_base
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
};

//Flares
class 60Rnd_CMFlareMagazine: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_60RND_DECOYFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_60RND_DECOYFLARES_DESC;	
	count = 60;
	ammo = "CMflareAmmo";
	initSpeed = 30;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
};
class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
{
	displayName = $STR_DZ_MAG_120RND_DECOYFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_120RND_DECOYFLARES_DESC;	
	count = 120;
};
class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
{
	displayName = $STR_DZ_MAG_240RND_DECOYFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_240RND_DECOYFLARES_DESC;	
	count = 240;
};
class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
{
	displayName = $STR_DZ_MAG_60RND_CHAFFFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_60RND_CHAFFFLARES_DESC;	
	ammo = "CMflare_Chaff_Ammo";
};
class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	displayName = $STR_DZ_MAG_120RND_CHAFFFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_120RND_CHAFFFLARES_DESC;		
	count = 120;
};
class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	displayName = $STR_DZ_MAG_240RND_CHAFFFLARES_NAME;
	descriptionShort = $STR_DZ_MAG_240RND_CHAFFFLARES_DESC;	
	count = 240;
};
class SmokeLauncherMag: 60Rnd_CMFlareMagazine
{
	displayName = $STR_DZ_MAG_2RND_SMOKEGRENADES_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_SMOKEGRENADES_DESC;		
	scope = 2;
	ammo = "SmokeLauncherAmmo";
	count = 2;
	nameSound = "smokeshell";
};

class 500Rnd_145x115_KPVT: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_500RND_KPVT_NAME;
	descriptionShort = $STR_DZ_MAG_500RND_KPVT_DESC;	
	ammo = "B_145x115_AP";
	count = 500;
	initSpeed = 1000;
	maxLeadSpeed = 100;
	tracersEvery = 2;
	nameSound = "mgun";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};

class 230Rnd_30mmHE_2A42: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_230RND_2A42_NAME;
	descriptionShort = $STR_DZ_MAG_230RND_2A42_DESC;	
	ammo = "B_30mm_HE";
	count = 230;
	initSpeed = 960;
	maxLeadSpeed = 200;
	tracersEvery = 2;
	lastRoundsTracer = 5;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";	
};
class 250Rnd_30mmHE_2A42: 230Rnd_30mmHE_2A42
{
	displayName = $STR_DZ_MAG_250RND_2A42_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_2A42_DESC;		
	count = 250;
};
class 150Rnd_30mmHE_2A42: 230Rnd_30mmHE_2A42
{
	displayName = $STR_DZ_MAG_150RND_2A42_NAME;
	descriptionShort = $STR_DZ_MAG_150RND_2A42_DESC;	
	count = 150;
};
class 230Rnd_30mmAP_2A42: 230Rnd_30mmHE_2A42
{
	displayName = $STR_DZ_MAG_230RND_2A42AP_NAME;
	descriptionShort = $STR_DZ_MAG_230RND_2A42AP_DESC;	
	ammo = "B_30mm_AP";
	nameSound = "sabot";
};
class 250Rnd_30mmAP_2A42: 230Rnd_30mmAP_2A42
{	
	displayName = $STR_DZ_MAG_250RND_2A42AP_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_2A42AP_DESC;	
	count = 250;
};
class 150Rnd_30mmAP_2A42: 230Rnd_30mmAP_2A42
{
	displayName = $STR_DZ_MAG_150RND_2A42AP_NAME;
	descriptionShort = $STR_DZ_MAG_150RND_2A42AP_DESC;	
	count = 150;
};
class 250Rnd_30mmHE_2A72: 250Rnd_30mmHE_2A42
{
	displayName = $STR_DZ_MAG_250RND_2A72HE_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_2A72HE_DESC;	
};
class 250Rnd_30mmAP_2A72: 250Rnd_30mmAP_2A42
{
	displayName = $STR_DZ_MAG_250RND_2A72AP_NAME;
	descriptionShort = $STR_DZ_MAG_250RND_2A72AP_DESC;	
};
class 1904Rnd_30mmAA_2A38M: 230Rnd_30mmHE_2A42
{
	ammo = "B_30mm_AA";
	count = 1904;
	displayName = $STR_DZ_MAG_1904RND_2A38MAA_NAME;
	descriptionShort = $STR_DZ_MAG_1904RND_2A38MAA_DESC;	
	maxLeadSpeed = 500;
	tracersEvery = 3;
	lastRoundsTracer = 0;
};
class 1470Rnd_127x108_YakB: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1470RND_YAKB_NAME;
	descriptionShort = $STR_DZ_MAG_1470RND_YAKB_DESC;	
	ammo = "B_127x108_APHE";
	count = 1470;
	initSpeed = 830;
	maxLeadSpeed = 600;
	tracersEvery = 4;
	nameSound = "mgun";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";	
};

class 750Rnd_M197_AH1: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_750RND_M197_NAME;
	descriptionShort = $STR_DZ_MAG_750RND_M197_DESC;	
	ammo = "B_20mm_AP";
	count = 750;
	initSpeed = 1036;
	maxLeadSpeed = 200;
	tracersEvery = 2;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};
class 2100Rnd_20mm_M168: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_2100RND_M168_NAME;
	descriptionShort = $STR_DZ_MAG_2100RND_M168_DESC;	
	ammo = "B_20mm_AA";
	count = 2100;
	initSpeed = 1036;
	maxLeadSpeed = 200;
	tracersEvery = 2;
	nameSound = "cannon";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";		
};
class 2000Rnd_23mm_AZP85: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_2000RND_AZP85_NAME;
	descriptionShort = $STR_DZ_MAG_2000RND_AZP85_DESC;
	ammo = "B_23mm_AA";
	count = 2000;
	initSpeed = 980;
	maxLeadSpeed = 600;
	tracersEvery = 3;
	nameSound = "cannon";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";		
};
class 40Rnd_23mm_AZP85: 2000Rnd_23mm_AZP85
{
	displayName = $STR_DZ_MAG_40RND_AZP85_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_AZP85_DESC;	
	count = 40;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
	
};
class 1000Rnd_23mm_2A14_HE: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1000RND_2A14HE_NAME;
	descriptionShort = $STR_DZ_MAG_1000RND_2A14HE_DESC;	
	ammo = "B_23mm_HE";
	count = 1000;
	initSpeed = 980;
	maxLeadSpeed = 300;
	tracersEvery = 3;
	nameSound = "cannon";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";		
};
class 1000Rnd_23mm_2A14_AP: 1000Rnd_23mm_2A14_HE
{
	displayName = $STR_DZ_MAG_1000RND_2A14AP_NAME;
	descriptionShort = $STR_DZ_MAG_1000RND_2A14AP_DESC;	
	ammo = "B_23mm_AP";
};
class 520Rnd_23mm_GSh23L: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_520RND_GSh23L_NAME;
	descriptionShort = $STR_DZ_MAG_520RND_GSh23L_DESC;	
	ammo = "B_23mm_APHE";
	count = 520;
	initSpeed = 830;
	maxLeadSpeed = 600;
	tracersEvery = 2;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};
class 300Rnd_25mm_GAU12: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_300RND_GAU12_NAME;
	descriptionShort = $STR_DZ_MAG_300RND_GAU12_DESC;	
	ammo = "B_25mm_HE";
	count = 300;
	initSpeed = 1040;
	maxLeadSpeed = 300;
	tracersEvery = 2;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};
class 210Rnd_25mm_M242_HEI: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_210RND_M242HE_NAME;
	descriptionShort = $STR_DZ_MAG_210RND_M242HE_DESC;	
	ammo = "B_25mm_HEI";
	count = 240;
	initSpeed = 1400;
	maxLeadSpeed = 300;
	tracersEvery = 1;
	lastRoundsTracer = 4;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};
class 210Rnd_25mm_M242_APDS: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_210RND_M242AP_NAME;
	descriptionShort = $STR_DZ_MAG_210RND_M242AP_DESC;	
	ammo = "B_25mm_APDS";
	count = 240;
	initSpeed = 1400;
	maxLeadSpeed = 300;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\50cal_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_50cal_mag_ca.paa";		
};

class 1350Rnd_30mmAP_A10: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1350RND_GAU8_NAME;
	descriptionShort = $STR_DZ_MAG_1350RND_GAU8_DESC;	
	ammo = "B_30mmA10_AP";
	count = 1350;
	initSpeed = 1067;
	tracersEvery = 1;
	maxLeadSpeed = 500;
	nameSound = "cannon";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";		
};
class 180Rnd_30mm_GSh301: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_180RND_GSh301_NAME;
	descriptionShort = $STR_DZ_MAG_180RND_GSh301_DESC;	
	ammo = "B_30mm_HE";
	count = 180;
	initSpeed = 820;
	tracersEvery = 2;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 750Rnd_30mm_GSh301: 180Rnd_30mm_GSh301
{
	displayName = $STR_DZ_MAG_750RND_GSh301_NAME;
	descriptionShort = $STR_DZ_MAG_750RND_GSh301_DESC;	
	count = 750;	
};
class 30Rnd_105mmHE_M119: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_30RND_M119HE_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119HE_DESC;	
	ammo = "Sh_105_HE";
	count = 30;
	initSpeed = 370;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 30Rnd_105mmWP_M119: 30Rnd_105mmHE_M119
{
	displayName = $STR_DZ_MAG_30RND_M119WP_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119WP_DESC;	
	ammo = "Sh_105_WP";
};
class 30Rnd_105mmSADARM_M119: 30Rnd_105mmHE_M119
{
	displayName = $STR_DZ_MAG_30RND_M119SADARM_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119SADARM_DESC;	
	ammo = "Sh_105_SADARM";
};
class 30Rnd_105mmLASER_M119: 30Rnd_105mmHE_M119
{
	displayName = $STR_DZ_MAG_30RND_M119LASER_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119LASER_DESC;	
	ammo = "Sh_105_LASER";
};
class 30Rnd_105mmSMOKE_M119: 30Rnd_105mmHE_M119
{
	displayName = $STR_DZ_MAG_30RND_M119SMOKE_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119SMOKE_DESC;	
	ammo = "Sh_105_SMOKE";
};
class 30Rnd_105mmILLUM_M119: 30Rnd_105mmHE_M119
{
	displayName = $STR_DZ_MAG_30RND_M119ILLUM_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_M119ILLUM_DESC;
	ammo = "Sh_105_ILLUM";
};
class 6RND_105mm_APDS: 30Rnd_105mmHE_M119
{
	initSpeed = 1100;
	displayName = "$STR_EP1_DN_6RND_105MM_APDS";
	descriptionShort = "$STR_EP1_DSS_6RND_105MM_APDS";
	ammo = "Sh_105_APDS";
	nameSound = "sabot";
	count = 6;
	tracersEvery = 1;
	displayNameShort = "$STR_EP1_SN_AP";
};
class 12RND_105mm_HESH: 30Rnd_105mmHE_M119
{
	initSpeed = 1100;
	displayName = "$STR_EP1_DN_12RND_105mm_HESH";
	descriptionShort = "$STR_EP1_DSS_12RND_105mm_HESH";
	ammo = "Sh_105_HESH";
	count = 12;
	tracersEvery = 1;
	displayNameShort = "$STR_EP1_SN_HE";
};	
class 20Rnd_120mmHE_M1A2: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_20RND_M1A2HE_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_M1A2HE_DESC;	
	ammo = "Sh_120_HE";
	count = 20;
	initSpeed = 1100;
	maxLeadSpeed = 100;
	nameSound = "heat";
	tracersEvery = 1;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 20Rnd_120mmSABOT_M1A2: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_20RND_M1A2SABOT_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_M1A2SABOT_DESC;	
	ammo = "Sh_120_SABOT";
	count = 20;
	initSpeed = 1676;
	maxLeadSpeed = 100;
	nameSound = "sabot";
	tracersEvery = 1;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 30Rnd_122mmHE_D30: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_30RND_D30HE_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30HE_DESC;
	ammo = "Sh_122_HE";
	count = 30;
	initSpeed = 389;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 30Rnd_122mmWP_D30: 30Rnd_122mmHE_D30
{
	displayName = $STR_DZ_MAG_30RND_D30WP_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30WP_DESC;
	ammo = "Sh_122_WP";
};
class 30Rnd_122mmSADARM_D30: 30Rnd_122mmHE_D30
{
	displayName = $STR_DZ_MAG_30RND_D30SADARM_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30SADARM_DESC;
	ammo = "Sh_122_SADARM";
};
class 30Rnd_122mmLASER_D30: 30Rnd_122mmHE_D30
{
	displayName = $STR_DZ_MAG_30RND_D30LASER_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30LASER_DESC;
	ammo = "Sh_122_LASER";
};
class 30Rnd_122mmSMOKE_D30: 30Rnd_122mmHE_D30
{
	displayName = $STR_DZ_MAG_30RND_D30SMOKE_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30SMOKE_DESC;
	ammo = "Sh_122_SMOKE";
};
class 30Rnd_122mmILLUM_D30: 30Rnd_122mmHE_D30
{
	displayName = $STR_DZ_MAG_30RND_D30ILLUM_NAME;
	descriptionShort = $STR_DZ_MAG_30RND_D30ILLUM_DESC;
	ammo = "Sh_122_ILLUM";
};
class 22Rnd_125mmHE_T72: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_22RND_T72HE_NAME;
	descriptionShort = $STR_DZ_MAG_22RND_T72HE_DESC;
	ammo = "Sh_125_HE";
	count = 22;
	initSpeed = 905;
	maxLeadSpeed = 100;
	nameSound = "heat";
	tracersEvery = 1;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 22Rnd_100mm_HE_2A70: 22Rnd_125mmHE_T72
{
	displayName = $STR_DZ_MAG_22RND_2A70HE_NAME;
	descriptionShort = $STR_DZ_MAG_22RND_2A70HE_DESC;
	ammo = "Sh_100_HE";
};
class 23Rnd_125mmSABOT_T72: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_23RND_T72SABOT_NAME;
	descriptionShort = $STR_DZ_MAG_23RND_T72SABOT_DESC;
	ammo = "Sh_125_SABOT";
	count = 23;
	initSpeed = 1750;
	maxLeadSpeed = 100;
	nameSound = "sabot";
	tracersEvery = 1;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 22Rnd_125mmSABOT_IMI: 23Rnd_125mmSABOT_T72
{
	displayName = $STR_DZ_MAG_22RND_IMISABOT_NAME;
	descriptionShort = $STR_DZ_MAG_22RND_IMISABOT_DESC;	
	ammo = "Sh_125_IMI";
	count = 22;
};
class 15Rnd_125mmHE_T72CZ: 22Rnd_125mmHE_T72
{
	displayName = $STR_DZ_MAG_15RND_T72SABOT_NAME;
	descriptionShort = $STR_DZ_MAG_15RND_T72SABOT_DESC;
	count = 15;
};
class 33Rnd_85mmHE: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_33RND_85mmHE_NAME;
	descriptionShort = $STR_DZ_MAG_33RND_85mmHE_DESC;
	ammo = "Sh_85_HE";
	count = 33;
	initSpeed = 800;
	maxLeadSpeed = 100;	
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 10Rnd_85mmAP: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_10RND_85mmAP_NAME;
	descriptionShort = $STR_DZ_MAG_10RND_85mmAP_DESC;
	ammo = "Sh_85_AP";
	count = 10;
	initSpeed = 800;
	maxLeadSpeed = 100;
	nameSound = "sabot";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};

/* Is not visible in the inventory for some reason 
class 8Rnd_AT5_BMP2: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_AT5_BMP2_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_AT5_BMP2_DESC;
	ammo = "M_AT5_AT";
	count = 8;
	initSpeed = 80;
	maxLeadSpeed = 100;
	nameSound = "missiles";
	sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.1622777,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
*/
class 5Rnd_AT5_BRDM2: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_5RND_AT5_BRDM2_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_AT5_BRDM2_DESC;	
	count = 5;
	ammo = "M_AT5_AT";
	initSpeed = 80;
	maxLeadSpeed = 100;
	nameSound = "missiles";
	sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.1622777,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 8Rnd_AT10_BMP3: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_AT5_BMP3_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_AT5_BMP3_DESC;	
	count = 8;
	ammo = "M_AT10_AT";
	initSpeed = 370;
	maxLeadSpeed = 100;
	nameSound = "missiles";
	sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.1622777,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 5Rnd_AT11_T90: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_5RND_AT5_T90_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_AT5_T90_DESC;	
	ammo = "M_AT11_AT";
	count = 5;
	initSpeed = 340;
	maxLeadSpeed = 100;
	nameSound = "missiles";
	sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.1622777,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};

class 4Rnd_AT9_Mi24P: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_4RND_AT9_Mi24P_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_AT9_Mi24P_DESC;	
	count = 4;
	ammo = "M_AT9_AT";
	initSpeed = 55;
	maxLeadSpeed = 200;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 8Rnd_AT9_Mi24V: 4Rnd_AT9_Mi24P
{
	displayName = $STR_DZ_MAG_8RND_AT9_Mi24V_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_AT9_Mi24V_DESC;		
	count = 8;
};
class 4Rnd_AT6_Mi24V: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_4RND_AT6_Mi24V_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_AT6_Mi24V_DESC;	
	count = 4;
	ammo = "M_AT6_AT";
	initSpeed = 55;
	maxLeadSpeed = 100;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 4Rnd_AT2_Mi24D: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_4RND_AT2_Mi24D_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_AT2_Mi24D_DESC;	
	ammo = "M_AT2_AT";
	initSpeed = 55;
	count = 4;
	maxLeadSpeed = 25;
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 6Rnd_AT13: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_6RND_AT13_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_AT13_DESC;	
	ammo = "M_AT13_AT";
	initSpeed = 80;
	count = 6;
	maxLeadSpeed = 10;
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 6Rnd_TOW_HMMWV: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_6RND_TOW_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_TOW_DESC;	
	ammo = "M_TOW_AT";
	initSpeed = 55.1688;
	count = 6;
	maxLeadSpeed = 10;
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 2Rnd_TOW: 6Rnd_TOW_HMMWV
{
	displayName = $STR_DZ_MAG_2RND_TOW_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_TOW_DESC;	
	count = 2;
};
class 2Rnd_Spike_ACR: 2Rnd_TOW
{
	displayName = $STR_DZ_MAG_2RND_ATGM_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_ATGM_DESC;	
	ammo = "M_Javelin_AT";
	maxLeadSpeed = 100;
};
class 6Rnd_TOW2: 6Rnd_TOW_HMMWV
{
	displayName = $STR_DZ_MAG_6RND_TOW2_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_TOW2_DESC;		
	ammo = "M_TOW2_AT";
};
class 2Rnd_TOW2: 6Rnd_TOW2
{
	displayName = $STR_DZ_MAG_2RND_TOW2_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_TOW2_DESC;		
	count = 2;
};
class 8Rnd_Hellfire: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_HELLFIRE_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_HELLFIRE_DESC;
	count = 8;
	ammo = "M_Hellfire_AT";
	initSpeed = 0;
	maxLeadSpeed = 200;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 4Rnd_Hellfire: 8Rnd_Hellfire
{
	displayName = $STR_DZ_MAG_4RND_HELLFIRE_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_HELLFIRE_DESC;	
	count = 4;
};
class 12Rnd_Vikhr_KA50: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_12RND_Vikhr_KA52_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_Vikhr_KA52_DESC;
	count = 12;
	ammo = "M_Vikhr_AT";
	initSpeed = 0;
	maxLeadSpeed = 220;
	sound[] = {"\ca\Sounds\weapons\cannon\vikhr",31.622776,1,1100};
	soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.1,700};
	soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 4Rnd_Sidewinder_AV8B: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_4RND_Sidewinder_AV8B_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_Sidewinder_AV8B_DESC;
	ammo = "M_Sidewinder_AA";
	count = 4;
	initSpeed = 0;
	maxLeadSpeed = 1000;
	sound[] = {"\ca\weapons\Data\Sound\rocket1",1.0,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 8Rnd_Sidewinder_AH64: 4Rnd_Sidewinder_AV8B
{
	displayName = $STR_DZ_MAG_8RND_Sidewinder_AH64_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_Sidewinder_AH64_DESC;	
	count = 8;
};
class 2Rnd_Sidewinder_F35: 4Rnd_Sidewinder_AV8B
{
	displayName = $STR_DZ_MAG_2RND_F35_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_F35_DESC;	
	count = 2;
	ammo = "M_Sidewinder_AA_F35";
};
class 2Rnd_Sidewinder_AH1Z: 4Rnd_Sidewinder_AV8B
{
	displayName = $STR_DZ_MAG_2RND_AH1Z_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_AH1Z_DESC;		
	count = 2;
};
class 14Rnd_FFAR: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_14RND_FFAR_NAME;
	descriptionShort = $STR_DZ_MAG_14RND_FFAR_DESC;	
	ammo = "R_Hydra_HE";
	count = 14;
	initSpeed = 1;
	maxLeadSpeed = 200;
	nameSound = "rockets";
	sound[] = {"\ca\weapons\Data\Sound\rockets\rocketLauncher_Shot21",3.1622777,1};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 28Rnd_FFAR: 14Rnd_FFAR
{
	displayName = $STR_DZ_MAG_28RND_FFAR_NAME;
	descriptionShort = $STR_DZ_MAG_28RND_FFAR_DESC;	
	count = 28;
};
class 38Rnd_FFAR: 14Rnd_FFAR
{
	displayName = $STR_DZ_MAG_38RND_FFAR_NAME;
	descriptionShort = $STR_DZ_MAG_38RND_FFAR_DESC;	
	count = 38;
};
class 12Rnd_FFAR: 38Rnd_FFAR
{
	count = 12;
	displayName = $STR_DZ_MAG_12RND_FFAR_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_FFAR_DESC;	
};
class 12Rnd_CRV7: 38Rnd_FFAR
{
	count = 12;
	ammo = "M_CRV7_AT";
	displayName = $STR_DZ_MAG_12RND_CRV7_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_CRV7_DESC;
};
class 38Rnd_CRV7: 12Rnd_CRV7
{
	displayName = $STR_DZ_MAG_38RND_CRV7_NAME;
	descriptionShort = $STR_DZ_MAG_38RND_CRV7_DESC;
	count = 38;
};
class 6Rnd_CRV7_HEPD: 38Rnd_FFAR
{
	count = 19;
	ammo = "M_CRV7_HEPD";
	displayName = $STR_DZ_MAG_19RND_CRV7_HEPD_NAME;
	descriptionShort = $STR_DZ_MAG_19RND_CRV7_HEPD_DESC;
};
class 6Rnd_CRV7_FAT: 38Rnd_FFAR
{
	count = 19;
	ammo = "M_CRV7_FAT";
	displayName = $STR_DZ_MAG_19RND_CRV7_FAT_NAME;
	descriptionShort = $STR_DZ_MAG_19RND_CRV7_FAT_DESC;
};
class 40Rnd_80mm: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_40RND_80mm_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_80mm_DESC;	
	ammo = "R_80mm_HE";
	initSpeed = 1;
	maxLeadSpeed = 200;
	count = 40;
	nameSound = "rockets";
	sound[] = {"\ca\Weapons\Data\Sound\Rockets\rocketLauncher_Shot21",1.0,1};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
};
class 80Rnd_80mm: 40Rnd_80mm
{
	displayName = $STR_DZ_MAG_80RND_80mm_NAME;
	descriptionShort = $STR_DZ_MAG_80RND_80mm_DESC;	
	count = 80;
};
class 40Rnd_GRAD: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_40RND_GRAD_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_GRAD_DESC;	
	ammo = "R_GRAD";
	initSpeed = 445;
	maxLeadSpeed = 200;
	count = 40;
	nameSound = "rockets";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 40Rnd_GRAD_ACR: 40Rnd_GRAD
{
	displayName = $STR_DZ_MAG_40RND_RM70_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_RM70_DESC;	
	ammo = "R_GRAD_ACR";
};
class 12Rnd_MLRS: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_12RND_MLRS_NAME;
	descriptionShort = $STR_DZ_MAG_12RND_MLRS_DESC;	
	ammo = "R_MLRS";
	initSpeed = 445;
	maxLeadSpeed = 400;
	count = 12;
	nameSound = "rockets";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 40Rnd_S8T: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_40RND_S8T_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_S8T_DESC;	
	ammo = "R_S8T_AT";
	count = 40;
	initSpeed = 1;
	nameSound = "rockets";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 80Rnd_S8T: 40Rnd_S8T
{
	displayName = $STR_DZ_MAG_80RND_S8T_NAME;
	descriptionShort = $STR_DZ_MAG_80RND_S8T_DESC;	
	count = 80;
};
class 64Rnd_57mm: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_64RND_57mm_NAME;
	descriptionShort = $STR_DZ_MAG_64RND_57mm_DESC;	
	ammo = "R_57mm_HE";
	initSpeed = 1;
	maxLeadSpeed = 200;
	nameSound = "rockets";
	sound[] = {"\ca\Weapons\Data\Sound\Rockets\rocketLauncher_Shot21",1.0,1};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
	count = 64;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 14Rnd_57mm: 64Rnd_57mm
{
	displayName = $STR_DZ_MAG_14RND_57mm_NAME;
	descriptionShort = $STR_DZ_MAG_14RND_57mm_DESC;	
	count = 14;
};
class 128Rnd_57mm: 64Rnd_57mm
{
	displayName = $STR_DZ_MAG_128RND_57mm_NAME;
	descriptionShort = $STR_DZ_MAG_128RND_57mm_DESC;	
	count = 128;
};
class 192Rnd_57mm: 64Rnd_57mm
{
	displayName = $STR_DZ_MAG_192RND_57mm_NAME;
	descriptionShort = $STR_DZ_MAG_192RND_57mm_DESC;	
	count = 192;
};

class 6Rnd_GBU12_AV8B: Vehicle_ammo_base
{
	displayName = $STR_DZ_MAG_6RND_GBU12_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_GBU12_DESC;		
	scope = 2;
	ammo = "Bo_GBU12_LGB";
	initSpeed = 0;
	maxLeadSpeed = 1000;
	sound[] = {"",1.0,1};
	reloadSound[] = {"",0.00031622776,1};
	count = 6;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 2Rnd_GBU12: 6Rnd_GBU12_AV8B
{
	displayName = $STR_DZ_MAG_2RND_GBU12_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_GBU12_DESC;			
	count = 2;
	ammo = "Bo_GBU12_LGB_F35";
};
class 4Rnd_GBU12: 6Rnd_GBU12_AV8B
{
	displayName = $STR_DZ_MAG_4RND_GBU12_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_GBU12_DESC;	
	count = 4;
};
class 2Rnd_FAB_250: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_2RND_FAB_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_FAB_DESC;	
	ammo = "Bo_FAB_250";
	initSpeed = 0;
	maxLeadSpeed = 0;
	sound[] = {"\ca\Sounds\weapons\cannon\ch-29",31.622776,1,1100};
	soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.1,700};
	count = 2;
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 4Rnd_FAB_250: 2Rnd_FAB_250
{
	displayName = $STR_DZ_MAG_4RND_FAB_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_FAB_DESC;	
	count = 4;
};
class 6Rnd_Mk82: 2Rnd_FAB_250
{
	ammo = "Bo_Mk82";
	displayName = $STR_DZ_MAG_6RND_Mk82_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_Mk82_DESC;	
	count = 6;	
};
class 3Rnd_Mk82: 6Rnd_Mk82
{
	displayName = $STR_DZ_MAG_3RND_Mk82_NAME;
	descriptionShort = $STR_DZ_MAG_3RND_Mk82_DESC;	
	count = 3;
};
class 4Rnd_R73: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_4RND_R73_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_R73_DESC;	
	count = 4;
	ammo = "M_R73_AA";
	initSpeed = 0;
	maxLeadSpeed = 1500;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1300};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,10};
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 2Rnd_R73: 4Rnd_R73
{
	displayName = $STR_DZ_MAG_2RND_R73_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_R73_DESC;	
	count = 2;
};
class 4Rnd_Ch29: Vehicle_ammo_base
{
	displayName = $STR_DZ_MAG_4RND_Ch29_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_Ch29_DESC;
	scope = 2;
	ammo = "M_Ch29_AT";
	initSpeed = 0;
	nameSound = "missiles";
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	reloadSound[] = {"",0.00031622776,1};
	count = 4;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 6Rnd_Ch29: 4Rnd_Ch29
{
	displayName = $STR_DZ_MAG_6RND_Ch29_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_Ch29_DESC;	
	count = 6;
};
class 8Rnd_Ch29: 4Rnd_Ch29
{
	displayName = $STR_DZ_MAG_8RND_Ch29_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_Ch29_DESC;	
	count = 8;
};
class 2Rnd_Maverick_A10: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_2RND_Maverick_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_Maverick_DESC;	
	count = 2;
	ammo = "M_Maverick_AT";
	initSpeed = 0;
	delete initTime;
	delete irLock;
	delete maneuvrability;
	delete maxSpeed;
	delete reloadSound;
	delete sideAirFriction;
	delete simulationStep;
	delete sound;
	delete timeToLive;
	delete thrust;
	delete thrustTime;
	delete trackLead;
	delete trackOversteer;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 4Rnd_Maverick_L159: 2Rnd_Maverick_A10
{
	displayName = $STR_DZ_MAG_4RND_Maverick_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_Maverick_DESC;		
	count = 4;
};
class 8Rnd_9M311: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_9M311_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_9M311_DESC;	
	ammo = "M_9M311_AA";
	count = 8;
	initSpeed = 0;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,10};
	nameSound = "rockets";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 8Rnd_Stinger: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_STINGER_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_STINGER_DESC;	
	ammo = "M_Stinger_AA";
	count = 8;
	initSpeed = 40;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1600};
	soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	nameSound = "missiles";
	maxLeadSpeed = 320;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 4Rnd_Stinger: 8Rnd_Stinger
{
	displayName = $STR_DZ_MAG_4RND_STINGER_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_STINGER_DESC;	
	count = 4;
};
class 2Rnd_Stinger: 8Rnd_Stinger
{
	displayName = $STR_DZ_MAG_2RND_STINGER_NAME;
	descriptionShort = $STR_DZ_MAG_2RND_STINGER_DESC;	
	count = 2;
};
class 21Rnd_100mmHEAT_D10: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_21RND_T55HEAT_NAME;
	descriptionShort = $STR_DZ_MAG_21RND_T55HEAT_DESC;	
	ammo = "Sh_100_HEAT";
	count = 21;
	initSpeed = 1045;
	maxLeadSpeed = 100;
	nameSound = "heat";
	displayNameShort = "$STR_SN_HEAT";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 24Rnd_120mmHE_M120: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_24RND_M120HE_NAME;
	descriptionShort = $STR_DZ_MAG_24RND_M120HE_DESC;	
	ammo = "ARTY_Sh_120_HE";
	count = 24;
	initSpeed = 650;
	nameSound = "heat";
	displayNameShort = "$STR_EP1_SN_HE";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 24Rnd_120mmHE_M120_02: 24Rnd_120mmHE_M120
{
	ammo = "120mmHE_M120";
	initSpeed = 266;
};
class 8Rnd_81mmHE_M252: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_M252HE_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_M252HE_DESC;	
	ammo = "Sh_81_HE";
	count = 8;
	initSpeed = 243;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";		
};
class 8Rnd_81mmWP_M252: 8Rnd_81mmHE_M252
{
	ammo = "Sh_81_WP";
	displayName = $STR_DZ_MAG_8RND_M252WP_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_M252WP_DESC;	
};
class 8Rnd_81mmILLUM_M252: 8Rnd_81mmHE_M252
{
	ammo = "Sh_81_ILLUM";
	displayName = $STR_DZ_MAG_8RND_M252ILLUM_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_M252ILLUM_DESC;	
};
class 8Rnd_82mmHE_2B14: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_8RND_2B14HE_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_2B14HE_DESC;	
	ammo = "Sh_82_HE";
	count = 8;
	initSpeed = 200;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";			
};
class 8Rnd_82mmWP_2B14: 8Rnd_82mmHE_2B14
{
	ammo = "Sh_82_WP";
	displayName = $STR_DZ_MAG_8RND_2B14WP_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_2B14WP_DESC;	
};
class 8Rnd_82mmILLUM_2B14: 8Rnd_82mmHE_2B14
{
	ammo = "Sh_82_ILLUM";
	displayName = $STR_DZ_MAG_8RND_2B14ILLUM_NAME;
	descriptionShort = $STR_DZ_MAG_8RND_2B14ILLUM_DESC;	
};
class 200Rnd_40mmHE_FV510: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_200RND_FV510HE_NAME;
	descriptionShort = $STR_DZ_MAG_200RND_FV510HE_DESC;	
	ammo = "Sh_40_HE";
	count = 200;
	initSpeed = 1100;
	maxLeadSpeed = 100;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "heat";
	displayNameShort = "HEAT";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 200Rnd_40mmSABOT_FV510: 200Rnd_40mmHE_FV510
{
	displayName = $STR_DZ_MAG_200RND_FV510SABOT_NAME;
	descriptionShort = $STR_DZ_MAG_200RND_FV510SABOT_DESC;	
	ammo = "Sh_40_SABOT";
	count = 200;
	initSpeed = 1040;
	maxLeadSpeed = 300;
	nameSound = "cannon";
	displayNameShort = "APDS";
};
class 1Rnd_Bolide: Vehicle_ammo_base
{
	scope = 2;
	count = 1;
	ammo = "M_Bolide_AA";
	displayName = $STR_DZ_MAG_1RND_Bolide_NAME;
	descriptionShort = $STR_DZ_MAG_1RND_Bolide_DESC;	
	initSpeed = 50;
	maxLeadSpeed = 600;
	sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
	nameSound = "missiles";
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 210Rnd_20mm_ZPL_20: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_210RND_ZPL_20_NAME;
	descriptionShort = $STR_DZ_MAG_210RND_ZPL_20_DESC;
	ammo = "B_20mm_AP";
	count = 210;
	initSpeed = 1020;
	maxLeadSpeed = 200;
	tracersEvery = 10;
	nameSound = "cannon";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 140Rnd_30mm_ATKMK44_HE_ACR: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_140RND_ATKMK44_NAME;
	descriptionShort = $STR_DZ_MAG_140RND_ATKMK44_DESC;
	ammo = "B_30mm_HE";
	count = 140;
	initSpeed = 1080;
	maxLeadSpeed = 200;
	tracersEvery = 2;
	lastRoundsTracer = 5;
	nameSound = "heat";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 60Rnd_30mm_ATKMK44_AP_ACR: 140Rnd_30mm_ATKMK44_HE_ACR
{
	displayName = $STR_DZ_MAG_60RND_ATKMK44_NAME;
	descriptionShort = $STR_DZ_MAG_60RND_ATKMK44_DESC;
	ammo = "B_30mm_AP";
	count = 60;
	nameSound = "sabot";
};
class PG15V: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1RND_PG15V_NAME;
	descriptionShort = $STR_DZ_MAG_1RND_PG15V_DESC;	
	reloadAction = "";
	maxLeadSpeed = 200;
	nameSound = "heat";
	ammo = "PG15V";
	tracersEvery = 1;
	lastRoundsTracer = 1;
	initSpeed = 435;
	count = 1;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 40rnd_PG15V: PG15V
{
	displayName = $STR_DZ_MAG_40RND_PG15V_NAME;
	descriptionShort = $STR_DZ_MAG_40RND_PG15V_DESC;		
	count = 40;
};
class AT3: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1RND_AT3_NAME;
	descriptionShort = $STR_DZ_MAG_1RND_AT3_DESC;
	nameSound = "missiles";
	ammo = "M_AT3_AT";
	count = 1;
	initSpeed = 80;
	sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.162278,1};
	reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.000316,1};
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 4rnd_AT3: AT3
{
	displayName = $STR_DZ_MAG_4RND_AT3_NAME;
	descriptionShort = $STR_DZ_MAG_4RND_AT3_DESC;	
	count = 4;
};
class 1Rnd_AT3 : Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1RND_AT3_NAME;
	descriptionShort = $STR_DZ_MAG_1RND_AT3_DESC;	
	ammo = "M_AT3_AT";
	count = 1;
	initSpeed = 80;
	nameSound = "missiles";
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};

class 400Rnd_20mm_M621 : Vehicle_ammo_base
{
	displayName = $STR_DZ_MAG_400RND_M621_NAME;
	descriptionShort = $STR_DZ_MAG_400RND_M621_DESC;	
	ammo = "B_20mm_AP";
	count = 400;
	initSpeed = 1036;
	maxLeadSpeed = 200;
	nameSound = "cannon";
	scope = 2;
	tracersEvery = 2;
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";	
};
class 1200Rnd_30x113mm_M789_HEDP: Vehicle_ammo_base
{
	scope = 2;
	displayName = $STR_DZ_MAG_1200RND_M789_NAME;
	descriptionShort = $STR_DZ_MAG_1200RND_M789_DESC;	
	ammo = "B_30x113mm_M789_HEDP";
	count = 1200;
	initSpeed = 805;
	tracersEvery = 1;
	maxLeadSpeed = 500;
	nameSound = "cannon";
	airLock = 1;
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";	
};