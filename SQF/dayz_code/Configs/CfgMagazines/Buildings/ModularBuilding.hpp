class metal_floor_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_METALFLOOR;
	descriptionShort = $STR_EPOCH_METALFLOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor_DZ";
		};
	};
};

class half_cinder_wall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	descriptionShort = $STR_EPOCH_CINDERBLOCKWALL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallHalf_DZ";
		};
	};
};

class full_cinder_wall_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	descriptionShort = $STR_EPOCH_FULLCINDERBLOCKWALL_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWall_DZ";
		};
	};
};

class cinder_door_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	descriptionShort = $STR_EPOCH_BLOCKDOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallSmallDoorway_DZ";
		};
	};
};

class cinder_door_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKDOORLOCKED;
	descriptionShort = $STR_EPOCH_BLOCKDOORWAY_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorSmallLocked_DZ";
		};
	};
};

class cinder_garage_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	descriptionShort = $STR_EPOCH_BLOCKGARAGEDOORWAY_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorway_DZ";
		};
	};
};

class cinder_garage_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORLOCKED;
	descriptionShort = $STR_EPOCH_BLOCKGARAGEDOORWAY_LOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorLocked_DZ";
		};
	};
};

class cinder_gate_frame_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	descriptionShort = $STR_EPOCH_CINDERGATEFRAME_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGateFrame_DZ";
		};
	};
};


class cinder_gate_kit: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATE;
	descriptionShort = $STR_EPOCH_CINDERGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGate_DZ";
		};
	};
};

class cinder_gate_kit_locked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERGATELOCKED;
	descriptionShort = $STR_EPOCH_CINDERGATELOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderGateLocked_DZ";
		};
	};
};


class ItemWoodFloor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILING;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloor_DZ";
		};
	};
};

class ItemWoodFloorHalf: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorHalf_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodFloor",1}};
			input[] = {{"ItemWoodFloorHalf",2}};
		};
	};
};

class ItemWoodFloorQuarter: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_FLOORCEILING_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorQuarter_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_232a;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodFloorHalf",1}};
			input[] = {{"ItemWoodFloorQuarter",2}};
		};
	};
};

class ItemWoodStairs: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSTAIRS;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODSTAIRS;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairsSans_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_233;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodStairsSupport",1}};
			input[] = {{"ItemWoodStairs",1},{"PartWoodLumber",2}};
		};
	};
};

class ItemWoodStairsSupport: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairs_DZ";
		};
	};
};

class ItemWoodLadder: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODLADDER;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODLADDER;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLadder_DZ";
		};
	};
};

class ItemWoodWall: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODWALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODWALL_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWall_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallDoor",1}};
			input[] = {{"ItemWoodWall",1}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWindow",1}};
			input[] = {{"ItemWoodWall",1},{"PartGlass",1}};
		};
		class Crafting2 
		{
			text = $STR_EPOCH_PLAYER_236;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallLg",1}};
			input[] = {{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallThird: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODWALLTHIRDPART_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallThird_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_237;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWall",1}};
			input[] = {{"ItemWoodWallThird",3}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_237_1;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodGateFrame",1}};
			input[] = {{"ItemWoodWallThird",6}};
		};		
	};
};

class ItemWoodWallWindow: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHWINDOW_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallWin_DZ";
		};
	};
};

class ItemWoodWallDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOORWAY_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallDoor_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoor",1}};
			input[] = {{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLocked",1}};
			input[] = {{"ItemWoodWallWithDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WALLWITHDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WALLWITHDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoorLocked";
		};
	};
};

class ItemWoodWallGarageDoor: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGARAGEDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODGARAGEDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallGarageDoorLocked",1}};
			input[] = {{"ItemWoodWallGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallGarageDoorLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGARAGEDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_WOODGARAGEDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoorLocked";
		};
	};
};

class ItemWoodWallLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWOODWALL_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWall_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallDoorLg",1}};
			input[] = {{"ItemWoodWallLg",1}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWindowLg",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartGlass",1}};
		};
		class Crafting2 
		{
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};
	};
};

class ItemWoodWallWindowLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHWINDOW_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallWin_DZ";
		};
	};
};

class ItemWoodWallDoorLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOORWAY_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallDoor_DZ";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLg",1}};
			input[] = {{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};

class ItemWoodWallWithDoorLg: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOOR;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOOR_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoor";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLgLocked",1}};
			input[] = {{"ItemWoodWallWithDoorLg",1},{"ItemComboLock",1}};
		};
	};
};

class ItemWoodWallWithDoorLgLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORLOCKED;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_LARGEWALLWITHDOORLOCKED_DESC;

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoorLocked";
		};
	};
};

class ItemWoodGateFrame: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	descriptionShort = $STR_EPOCH_WOODGATEFRAME_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodGateFrame_DZ";
		};
	};
};


class ItemWoodGate: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATE;
	descriptionShort = $STR_EPOCH_WOODGATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodGate";
		};
	};
};

class ItemWoodGateLocked: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODGATELOCKED;
	descriptionShort = $STR_EPOCH_WOODGATELOCKED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodGateLocked";
		};
	};
};
