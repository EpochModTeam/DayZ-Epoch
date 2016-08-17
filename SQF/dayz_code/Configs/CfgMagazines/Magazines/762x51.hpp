class 20Rnd_762x51_FNFAL : CA_Magazine
{
	displayName = $STR_DZ_MAG_20RND_762X51_FNFAL_NAME;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_DMR : CA_Magazine
{
	model = "\dayz_equip\models\mag20.p3d";
	displayName = $STR_DZ_MAG_20RND_762X51_DMR_NAME;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_SPLIT_4X5M24;
			script = "spawn player_reloadMag;";
			use[] = {"20Rnd_762x51_DMR"};
			output[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
		};
	};
};

class 5Rnd_762x51_M24 : CA_Magazine
{
	model = "\dayz_equip\models\mag5rnd.p3d";
	displayName = $STR_DZ_MAG_5RND_762X51_M24_NAME;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_M24_DMR;
			script = "spawn player_reloadMag;";
			use[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			output[] = {"20Rnd_762x51_DMR"};
		};
	};
};

class 100Rnd_762x51_M240: CA_Magazine
{
	displayName = $STR_DZ_MAG_100RND_762X51_M240_NAME;
	
	cartridgeName = "762x51";
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 200Rnd_762x51_M240 : 100Rnd_762x51_M240 {
	displayName = "200Rnd. M240";
	count = 200;
	descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 200 <br/>Used in: M240, Mk 48 Mod 0";
};

class 20Rnd_762x51_B_SCAR : CA_Magazine
{
	displayName = $STR_DZ_MAG_20Rnd_762x51_B_SCAR_NAME;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_SB_SCAR : CA_Magazine
{
	displayName = $STR_DZ_MAG_20Rnd_762x51_SB_SCAR_NAME;
	
	cartridgeName = "762x51_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};
