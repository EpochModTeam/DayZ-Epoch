class 15Rnd_10x22_p99: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_15RND_P99_NAME;
	picture = "\C1987_P99\equip\mag.paa";
	model = "\C1987_P99\mag.p3d";
	type = 16;
	ammo = "B_10x22_Ball";
	count = 15;
	initSpeed = 408;
	descriptionShort = $STR_DZ_MAG_15RND_P99_DESC;
	
	class ItemActions
	{
		COMBINE_MAG
	};		
};

class 15Rnd_10x22_p99_sd: 15Rnd_10x22_p99
{
	displayName = $STR_DZ_MAG_15RND_P99SD_NAME;
	picture = "\dayz_epoch_c\icons\magazines\mag_sd.paa";
	ammo = "B_10x22_SD";
	descriptionShort = $STR_DZ_MAG_15RND_P99SD_DESC;	
};