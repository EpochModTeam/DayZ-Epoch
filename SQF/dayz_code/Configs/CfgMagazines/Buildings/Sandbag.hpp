class ItemSandbag : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	displayName = $STR_EQUIP_NAME_SANDBAGS;
	descriptionShort = $STR_EQUIP_DESC_SANDBAGS;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "Sandbag1_DZ";
			//bypass RoadCheck
			byPass = "byPassRoadCheck";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_273;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagLarge",1}};
			input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_274;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"sandbag_nest_kit",1}};
			input[] = {{"ItemSandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_298;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"BagFenceRound_DZ_kit",1}};
			input[] = {{"ItemSandbag",1}};
		};
	};
};

class BagFenceRound_DZ_kit : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_21_ROUND;
	descriptionShort = $STR_EQUIP_DESC_21;
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_EPOCH_PLAYER_299;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "BagFenceRound_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_195;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbag",1}};
			input[] = {{"BagFenceRound_DZ_kit",1}};
		};
	};
};

class ItemSandbagLarge : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_21_HBARRIER;
	descriptionShort = $STR_EQUIP_DESC_21_HBARRIER;
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_EPOCH_PLAYER_273_3;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier1_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_273_1;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagExLarge",1}};
			input[] = {{"ItemSandbagLarge",3}};
		};
	};
};

class ItemSandbagExLarge : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_21_3XHBARRIER;
	descriptionShort = $STR_EQUIP_DESC_21_HBARRIER;
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_EPOCH_PLAYER_273_4;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier3_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_273_2;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagExLarge5x",1}};
			input[] = {{"ItemSandbagExLarge",1},{"ItemSandbagLarge",2}};
		};
	};
};

class ItemSandbagExLarge5x : CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_21_5XHBARRIER;
	descriptionShort = $STR_EQUIP_DESC_21_HBARRIER;
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_EPOCH_PLAYER_273_5;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier5_DZ";
		};
	};
};

class sandbag_nest_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_21_NEST;
	descriptionShort = $STR_EQUIP_DESC_21_NEST;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "SandNest_DZ";
		};
	};
};