class CfgConstruction {
	class Recipe {
		displayName = "Generic Recipe";
		input[] = {}; //Items consumed during crafting
		required[] = {}; //Items needed for but not consumed during crafting
	};
	
	class Blueprint_woodenFence : Recipe {
		displayName = "WoodenFence Foundation";
		input[] = 
		{
			{"ItemLog","CfgMagazines",2},
			{"ItemStone","CfgMagazines",3}
		};
		toolsRequired[] = 
		{
			{"ItemEtool","CfgWeapons",1}
		};
		orignalclass = "ItemDIY_wood";
	};
};
