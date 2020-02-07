// Ammo is organized in matching groups US,RU,CZ,EU, and Residential.
// 45Rnd_545x39_RPK removed due to 1.64 patch

AmmoCivilian[] =
{
	// Pistols
	{Loot_MAGAZINE,		7,		8Rnd_9x18_Makarov},
	{Loot_MAGAZINE,		5,		7Rnd_45ACP_1911},
	{Loot_MAGAZINE,		3,		6Rnd_45ACP},
	
	// Rifles
	{Loot_MAGAZINE,		3,		15Rnd_W1866_Slug},
	{Loot_MAGAZINE,		2,		5Rnd_762x54_Mosin},
	{Loot_MAGAZINE,		2,		10Rnd_303British},
	{Loot_MAGAZINE,		1,		5Rnd_17HMR},
	
	//  Shotgun
	{Loot_MAGAZINE,		1,		8Rnd_12Gauge_Buck},
	{Loot_MAGAZINE,		1,		8Rnd_12Gauge_Slug},
	{Loot_MAGAZINE,		1,		2Rnd_12Gauge_Buck},
	{Loot_MAGAZINE,		1,		2Rnd_12Gauge_Slug}
};

militaryVehicleAmmo[] = { //DZE
	{Loot_MAGAZINE,		1,		2000Rnd_762x51_M134},
	{Loot_MAGAZINE,		1,		29Rnd_30mm_AGS30},
	{Loot_MAGAZINE,		1,		50Rnd_127x107_DSHKM},
	{Loot_MAGAZINE,		1,		48Rnd_40mm_MK19},
	{Loot_MAGAZINE,		1,		100Rnd_127x99_M2}
};

// This ammo spawns on zombies near military buildings
AmmoMilitaryZed[] = {
	{Loot_GROUP,		1,		AmmoCZ},
	{Loot_GROUP,		1,		AmmoRU},
	{Loot_GROUP,		1,		AmmoUS},
	{Loot_GROUP,		1,		AmmoEU}
};

AmmoCZ[] = {
	
	// Sniper rifles
	{Loot_MAGAZINE,		1,		10Rnd_762x51_CZ750},
	{Loot_MAGAZINE,		3,		20Rnd_762x51_B_SCAR},
	
	// Submachine guns
	{Loot_MAGAZINE,		3,		20Rnd_9x19_EVO},
	{Loot_MAGAZINE,		3,		20Rnd_9x19_EVOSD},
	{Loot_MAGAZINE,		3,		20Rnd_B_765x17_Ball},
	
	// Pistols
	{Loot_MAGAZINE,		5,		18Rnd_9x19_Phantom},
	{Loot_MAGAZINE,		5,		18Rnd_9x19_PhantomSD},
	
	// Assault rifles
	{Loot_MAGAZINE,		3,		30Rnd_556x45_G36},
	{Loot_MAGAZINE,		3,		30Rnd_556x45_G36SD},
	{Loot_MAGAZINE,		3,		30Rnd_762x39_SA58},
	
	// Machine gun
	{Loot_MAGAZINE,		1,		50Rnd_762x54_UK59}
};

AmmoRU[] =
{
	// Pistols
	{Loot_MAGAZINE,		8,		8Rnd_9x18_Makarov},
	{Loot_MAGAZINE,		8,		8Rnd_9x18_MakarovSD},
	
	// Submachine guns
	{Loot_MAGAZINE,		6,		64Rnd_9x19_Bizon},
	{Loot_MAGAZINE,		6,		64Rnd_9x19_SD_Bizon},
	{Loot_MAGAZINE,		3,		20Rnd_9x39_SP5_VSS},
	
	// Assault rifles
	{Loot_MAGAZINE,		10,		30Rnd_545x39_AK},
	{Loot_MAGAZINE,		8,		30Rnd_545x39_AKSD},
	{Loot_MAGAZINE,		10,		30Rnd_762x39_AK47},
	
	// Sniper rifles
	{Loot_MAGAZINE,		5,		10Rnd_762x54_SVD},
	{Loot_MAGAZINE,		3,		5Rnd_127x108_KSVK},
	{Loot_MAGAZINE,		1,		3rnd_Anzio_20x102mm},
	
	// Machine guns
	{Loot_MAGAZINE,		3,		75Rnd_545x39_RPK},
	{Loot_MAGAZINE,		3,		75Rnd_762x39_RPK},
	{Loot_MAGAZINE,		3,		100Rnd_762x54_PK},
	
	// Grenade launchers
	{Loot_MAGAZINE,		2,		1Rnd_HE_GP25},
	{Loot_MAGAZINE,		2,		FlareWhite_GP25},
	{Loot_MAGAZINE,		2,		FlareGreen_GP25},
	{Loot_MAGAZINE,		2,		1Rnd_Smoke_GP25},
	
	// Hand grenades
	{Loot_MAGAZINE,		1,		SmokeShell},
	{Loot_MAGAZINE,		1,		SmokeShellRed},
	{Loot_MAGAZINE,		1,		SmokeShellGreen},
	{Loot_MAGAZINE,		1,		HandGrenade_East}
};

AmmoUS[] =
{
	// Pistols
	{Loot_MAGAZINE,		8,		15Rnd_9x19_M9},
	{Loot_MAGAZINE,		8,		15Rnd_9x19_M9SD},
	
	// Submachine guns
	{Loot_MAGAZINE,		6,		30Rnd_9x19_UZI},
	{Loot_MAGAZINE,		6,		30Rnd_9x19_UZI_SD},
	
	// Assault rifles
	{Loot_MAGAZINE,		10,		30Rnd_556x45_Stanag},
	{Loot_MAGAZINE,		8,		30Rnd_556x45_StanagSD},
	{Loot_MAGAZINE,		6,		ACR_30Rnd_680x43},
	{Loot_MAGAZINE,		4,		ACR_30Rnd_680x43_SD},	
	
	// Sniper rifles
	{Loot_MAGAZINE,		7,		5Rnd_762x51_M24},
	{Loot_MAGAZINE,		1,		10Rnd_127x99_m107},
	{Loot_MAGAZINE,		4,		20Rnd_762x51_DMR},
	
	// Machine guns
	{Loot_MAGAZINE,		3,		100Rnd_556x45_M249},
	{Loot_MAGAZINE,		3,		100Rnd_762x51_M240},
	{Loot_MAGAZINE,		3,		200Rnd_556x45_M249},
	
	// Grenade launchers
	{Loot_MAGAZINE,		1,		1Rnd_HE_M203},
	{Loot_MAGAZINE,		1,		FlareWhite_M203},
	{Loot_MAGAZINE,		1,		FlareGreen_M203},
	{Loot_MAGAZINE,		1,		1Rnd_Smoke_M203},
	
	// Hand grenades
	{Loot_MAGAZINE,		1,		SmokeShell},
	{Loot_MAGAZINE,		1,		SmokeShellRed},
	{Loot_MAGAZINE,		1,		SmokeShellGreen},
	{Loot_MAGAZINE,		1,		HandGrenade_West}
};

AmmoEU[] =
{
	// Pistols
	{Loot_MAGAZINE,		8,		17Rnd_9x19_glock17},
	{Loot_MAGAZINE,		8,		17Rnd_9x19_glock17SD},
	
	// Submachine guns
	{Loot_MAGAZINE,		6,		30Rnd_9x19_MP5},
	{Loot_MAGAZINE,		6,		30Rnd_9x19_MP5SD},
	
	// Assault rifles
	{Loot_MAGAZINE,		10,		30Rnd_556x45_G36},
	{Loot_MAGAZINE,		8,		30Rnd_556x45_G36SD},
	{Loot_MAGAZINE,		6,		30Rnd_556x45_Stanag},
	{Loot_MAGAZINE,		3,		30Rnd_556x45_StanagSD},
	
	// Battle rifles
	{Loot_MAGAZINE,		4,		20Rnd_762x51_FNFAL},
	{Loot_MAGAZINE,		5,		20Rnd_762x51_B_SCAR},
	{Loot_MAGAZINE,		3,		20Rnd_762x51_SB_SCAR},
	
	//Sniper rifle
	{Loot_MAGAZINE,		3,		5Rnd_86x70_L115A1},
	{Loot_MAGAZINE,		1,		5Rnd_127x99_as50},
	
	// Machine guns
	{Loot_MAGAZINE,		3,		100Rnd_556x45_BetaCMag},
	{Loot_MAGAZINE,		3,		100Rnd_556x45_M249},
	{Loot_MAGAZINE,		3,		100Rnd_762x51_M240},
	{Loot_MAGAZINE,		3,		200Rnd_556x45_M249},
	
	//Grenade launchers
	{Loot_MAGAZINE,		1,		1Rnd_HE_M203},
	{Loot_MAGAZINE,		1,		FlareWhite_M203},
	{Loot_MAGAZINE,		1,		FlareGreen_M203},
	{Loot_MAGAZINE,		1,		1Rnd_Smoke_M203},
	
	// Hand grenades
	{Loot_MAGAZINE,		1,		SmokeShell},
	{Loot_MAGAZINE,		1,		SmokeShellRed},
	{Loot_MAGAZINE,		1,		SmokeShellGreen},
	{Loot_MAGAZINE,		1,		HandGrenade_West}
};

