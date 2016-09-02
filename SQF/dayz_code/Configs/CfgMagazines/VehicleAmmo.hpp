class 29Rnd_30mm_AGS30 : CA_Magazine { 
	scope = public; 
	displayName = "HE Rounds"; 
	model = "\z\addons\dayz_epoch\models\30mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_30mm_mag_ca.paa";
	ammo = "G_30mm_HE"; 
	count = 29; 
	type = "256";
	initSpeed = 185; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
	weight = 16;
};
class 48Rnd_40mm_MK19 : CA_Magazine { 
	scope = public; 
	displayName = "Mk. 19 40mm"; 
	model = "\z\addons\dayz_epoch\models\40mm_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_40mm_mag_ca.paa";
	ammo = "G_40mm_HE"; 
	count = 48; 
	type = "256";
	initSpeed = 240; 
	maxLeadSpeed = 100; 
	nameSound = "grenadelauncher"; 
	weight = 25;
};
class 2000Rnd_762x51_M134 : CA_Magazine { 
	count = 2000; 
	scope = public; 
	displayName = "M134 7.62 Nato"; 
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
	ammo = "B_762x51_3RndBurst"; 
	type = "256";
	maxLeadSpeed = 200; 
	tracersEvery = 5; 
	nameSound = "mgun";
	weight = 50;
};
class 100Rnd_127x99_M2 : CA_Magazine { 
	scope = public; 
	displayName = "M2 Machine Gun"; 
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
	weight = 8;
};
class 50Rnd_127x107_DSHKM : CA_Magazine { 
	scope = public; 
	displayName = "DShKM"; 
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
	weight = 4;
};
//Pook stuff
class pook_1300Rnd_762x51_M60: CA_Magazine
{
	scope = 2;
	displayName = "Pook 1300Rnd. 7.62";
	descriptionShort = "Caliber: 7.62x51mm <br/>Rounds: 1300 <br/>Used in: Pook H13 Gunship";
	ammo = "pook_762x51_M60";
	count = 1300;
	tracersEvery = 5;
	maxLeadSpeed = 200;
	nameSound = "mgun";
	picture = "\z\addons\dayz_epoch\pictures\equip_m134_mag_ca.paa";
	model = "\z\addons\dayz_epoch\models\m134_mag.p3d";
	type = "256";
	weight = 20;
	
};
class pook_250Rnd_762x51: CA_Magazine
{
	scope = 2;
	displayName = "Pook 250Rnd. M240";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	count = 250;
	type = "256";
	ammo = "B_762x51_Ball";
	initSpeed = 900;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 250 <br/>Used in: Pook H13 Transport";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
	weight = 8;
};
class pook_12Rnd_Grenade_Camel: CA_Magazine
{
	scope = 2;
	ammo = "pook_camel_HE";
	count = 12;
	displayName = "12Rnd. Pook Grenade";
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	type = "256";
	picture = "\CA\weapons_E\Data\icons\m_6x40mmHP_CA.paa";
};
//mozzie
class 3Rnd_GyroGrenade: CA_Magazine
{
	scope = 2;
	displayName = "3Rnd. Autogyro Grenade";
	ammo = "GyroGrenade";
	count = 3;
	initSpeed = 3;
	maxLeadSpeed = 200;
	nameSound = "grenade";
	type = "256";
	picture = "\CA\weapons_E\Data\icons\m_6x40mmHP_CA.paa";
};