//CZ550
class 5x_22_LR_17_HMR;
class 5Rnd_17HMR : 5x_22_LR_17_HMR
{
	displayName = $STR_DZ_MAG_5RND_17HMR_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_17HMR_DESC;	
	model = "\dayz_equip\models\mag5rnd.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Lee-Enfield
class 10x_303;
class 10Rnd_303British : 10x_303
{
	model = "\dayz_equip\models\mag10rnd.p3d";
	displayName = $STR_DZ_MAG_10RND_303BRITISH_NAME;
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//KSVK
class 5Rnd_127x108_KSVK : CA_Magazine
{
	displayName = $STR_DZ_MAG_5Rnd_127x108_KSVK_NAME;	
	cartridgeName = "127x108";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Sa61
class 10Rnd_B_765x17_Ball: CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_sa61_mag.p3d";
	displayName = "$STR_EP1_DN_10RND_B_765X17_BALL";	
	cartridgeName = "765x17";
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};
//Sa61
class 20Rnd_B_765x17_Ball: 10Rnd_B_765x17_Ball
{
	displayName = "$STR_EP1_DN_20RND_B_765X17_BALL";	
};

//Red Ryder
class 350Rnd_BB_Magazine;
class 350Rnd_BB_GUN: 350Rnd_BB_Magazine
{
	displayName = $STR_DZ_MAG_350RND_BB_GUN_NAME;	
	descriptionShort = $STR_DZ_MAG_350RND_BB_GUN_DESC;	
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};
