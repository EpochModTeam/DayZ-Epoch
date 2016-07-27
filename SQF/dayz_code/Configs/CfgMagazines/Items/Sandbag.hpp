class ItemSandbag : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	displayName = $STR_EQUIP_NAME_21;
	descriptionShort = $STR_EQUIP_DESC_21;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;"; //r_action_count = r_action_count + 1; set in sqf
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "Sandbag1_DZ";
			byPass = "byPassRoadCheck";
		};
		/*
		class Build2
		{
			text = $STR_CREATE_STASH;
			script = "; [_id,'Build2'] spawn player_build;"; //r_action_count = r_action_count + 1; set in sqf
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "StashSmall";
		}; 
		*/
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_273;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagLarge",1}};
			input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_274;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"sandbag_nest_kit",1}};
			input[] = {{"ItemSandbag",4},{"PartWoodPlywood",2},{"PartWoodLumber",4}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_298;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"BagFenceRound_DZ_kit",1}};
			input[] = {{"ItemSandbag",1}};
		};
		/*
		class Crafting3
		{
			text = "Craft M240 Nest";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
			output[] = {{"m240_nest_kit",1}};
			input[] = {{"ItemSandbag",4},{"ItemCanvas",1},{"PartWoodPlywood",4},{"PartWoodLumber",3}};
			inputweapons[] = {"M240_DZ"};
		};
		*/
	};
};




// EPOCH ADDITIONS

class BagFenceRound_DZ_kit : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Round Sandbag Fence";
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_21;

	class ItemActions {
		class Build {
			text = $STR_EPOCH_PLAYER_299;
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "BagFenceRound_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_195;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbag",1}};
			input[] = {{"BagFenceRound_DZ_kit",1}};
		};
	};
};

class sandbag_nest_kit: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = "Sandbag Nest";
	descriptionShort = "Sandbag Nest: A buildable fortification object, can be removed.";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
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

class ItemSandbagLarge : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "H-barrier cube";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
	weight = 50;
	class ItemActions {
		class Build {
			text = "Build H-barrier cube";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier1_DZ";
		};
		class Crafting
		{
			text = "Craft Triple H-barrier";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagExLarge",1}};
			input[] = {{"ItemSandbagLarge",3}};
		};
	};
};

class ItemSandbagExLarge : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "3 x H-barrier cube";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
	weight = 150;
	class ItemActions {
		class Build {
			text = "Build Triple H-barrier";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier3_DZ";
		};
		class Crafting
		{
			text = "Craft 5x H-barrier";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {};
			requiretools[] = {"ItemEtool","ItemToolbox"};
			output[] = {{"ItemSandbagExLarge5x",1}};
			input[] = {{"ItemSandbagExLarge",1},{"ItemSandbagLarge",2}};
		};
	};
};

class ItemSandbagExLarge5x : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "5 x H-barrier cube";
	model = "\dayz_equip\models\sandbags.p3d"; // TODO model
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	descriptionShort = "Hesco berrier: A buildable object that is used for fortification purposes.";
	weight = 200;
	class ItemActions {
		class Build {
			text = "Build 5x H-barrier";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "Land_HBarrier5_DZ";
		};
	};
};