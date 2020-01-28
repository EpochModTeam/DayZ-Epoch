class 40Rnd_46x30_mp7: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_40RND_MP7_NAME;
	picture = "\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model = "\C1987_Mp7\mp7_40_mag.p3d";
	ammo = "B_46x30_Ball";
	count = 40;
	initSpeed = 735;
	descriptionShort = $STR_DZ_MAG_40RND_MP7_DESC;
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};
class 40Rnd_46x30_sd_mp7: CA_Magazine
{
	scope = 2;
	displayName = $STR_DZ_MAG_40RND_MP7SD_NAME;
	picture = "\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model = "\C1987_Mp7\mp7_40_mag.p3d";
	ammo = "B_46x30_SD_Ball";
	count = 40;
	initSpeed = 700;
	descriptionShort = $STR_DZ_MAG_40RND_MP7SD_DESC;
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};