//L115
class 5Rnd_86x70_L115A1: CA_Magazine
{
	displayName = $STR_DZ_MAG_5Rnd_86x70_L115A1_NAME;
	
	cartridgeName = "86x70";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 7Rnd_86x70_MSR: 5Rnd_86x70_L115A1
{
	displayName = $STR_DZ_MAG_7RND_MSR_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_MSR_DESC;	
	count = 7;
	picture = "\FHQ_Remington\ammo\ui\i_msr.paa";
	model = "\FHQ_Remington\XM2010\magazine.p3d";
};

class 7Rnd_86x70_MSR_SD: 7Rnd_86x70_MSR
{
	initSpeed = 850;
	displayName = $STR_DZ_MAG_7RND_MSRSD_NAME;
	descriptionShort = $STR_DZ_MAG_7RND_MSRSD_DESC;
};