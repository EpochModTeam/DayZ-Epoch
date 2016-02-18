class 20Rnd_762x51_FNFAL : CA_Magazine
{
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_DMR : CA_Magazine
{
	model = "\dayz_equip\models\mag20.p3d";
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = "Split into 4 x M24";
			script = "spawn player_reloadMag;";
			use[] = {"20Rnd_762x51_DMR"};
			output[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
		};
	};
};

class 5Rnd_762x51_M24 : CA_Magazine
{
	model = "\dayz_equip\models\mag5rnd.p3d";
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = "Combine for DMR";
			script = "spawn player_reloadMag;";
			use[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			output[] = {"20Rnd_762x51_DMR"};
		};
	};
};

class 100Rnd_762x51_M240: CA_Magazine
{
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};