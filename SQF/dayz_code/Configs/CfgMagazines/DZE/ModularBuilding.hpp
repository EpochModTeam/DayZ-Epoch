class metal_floor_kit: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Metal Floor";
	descriptionShort = "Metal Floor";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 325;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalFloor_DZ";
		};
	};
};

class cinder_wall_kit: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Cinder Block Wall";
	descriptionShort = "Half height cinder block wall";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 325;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallHalf_DZ";
		};
	};
};
class cinder_door_kit: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Block Doorway";
	descriptionShort = "Cinder block doorway";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 325;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallSmallDoorway_DZ";
		};
	};
};
class cinder_garage_kit: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Block Garage Doorway";
	descriptionShort = "Cinder block garage doorway";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 325;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CinderWallDoorway_DZ";
		};
	};
};

class ItemWoodFloor: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Floor/Ceiling";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood Floor can also be used as a ceiling.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloor_DZ";
		};
	};
};
class ItemWoodFloorHalf: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Floor/Ceiling 1/2";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood Floor can also be used as a ceiling.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorHalf_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodFloor",1}};
			input[] = {{"ItemWoodFloorHalf",2}};

		};
	};
};
class ItemWoodFloorQuarter: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Floor/Ceiling 1/4";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood Floor can also be used as a ceiling.";
	weight = 10;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodFloorQuarter_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232a;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodFloorHalf",1}};
			input[] = {{"ItemWoodFloorQuarter",2}};

		};
	};
};

class ItemWoodStairs: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Stairs";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood stairs";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairsSans_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_233;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodStairsSupport",1}};
			input[] = {{"ItemWoodStairs",1},{"PartWoodLumber",2}};

		};
	};
};
class ItemWoodStairsSupport: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Stairs w/ supports";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood stairs with supports";
	weight = 30;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodStairs_DZ";
		};
	};
};

class ItemWoodLadder: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Ladder";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wood Ladder";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLadder_DZ";
		};
	};
};

class ItemWoodWall: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Wall";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWall_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallDoor",1}};
			input[] = {{"ItemWoodWall",1}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWindow",1}};
			input[] = {{"ItemWoodWall",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_236;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallLg",1}};
			input[] = {{"ItemWoodWall",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};
class ItemWoodWallThird: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Wall 1/3";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Third wall constucted out of plywood and lumber.";
	weight = 7;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallThird_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_237;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWall",1}};
			input[] = {{"ItemWoodWallThird",3}};
		};
	};
};
class ItemWoodWallWindow: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall w/ Window";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with Window constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallWin_DZ";
		};
	};
};

class ItemWoodWallDoor: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall w/ Doorway";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with doorway constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodSmallWallDoor_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoor",1}};
			input[] = {{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};
class ItemWoodWallWithDoor: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall w/ Door";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with door constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoor";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLocked",1}};
			input[] = {{"ItemWoodWallWithDoor",1},{"ItemComboLock",1}};
		};
	};
};
class ItemWoodWallWithDoorLocked: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall w/ Door Locked";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with door constucted out of plywood and lumber.";
	weight = 30;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_WoodDoorLocked";
		};
	};
};

class ItemWoodWallGarageDoor: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Garage Door";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Garage door constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoor";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallGarageDoorLocked",1}};
			input[] = {{"ItemWoodWallGarageDoor",1},{"ItemComboLock",1}};
		};
	};
};
class ItemWoodWallGarageDoorLocked: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Garage Door Locked";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Garage door with combination lock.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_GarageWoodDoorLocked";
		};
	};
};

class ItemWoodWallLg: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Large Wood Wall";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Large wall constucted out of plywood and lumber.";
	weight = 25;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
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
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_235;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWindowLg",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartGlass",1}};
		};
		class Crafting2 {
			text = $STR_EPOCH_PLAYER_240;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallGarageDoor",1}};
			input[] = {{"ItemWoodWallLg",1},{"PartWoodLumber",2}};
		};
	};
};
class ItemWoodWallWindowLg: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Large Wall w/ Window";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Large wall with doorway constucted out of plywood and lumber..";
	weight = 30;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallWin_DZ";
		};
	};
};

class ItemWoodWallDoorLg: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Large Wall w/ Doorway";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Large wall with doorway constucted out of plywood and lumber.";
	weight = 30;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodLargeWallDoor_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_238;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLg",1}};
			input[] = {{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}};
		};
	};
};
class ItemWoodWallWithDoorLg: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Large Wall w/ Door";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with door constucted out of plywood and lumber.";
	weight = 30;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoor";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_239;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodWallWithDoorLgLocked",1}};
			input[] = {{"ItemWoodWallWithDoorLg",1},{"ItemComboLock",1}};
		};
	};
};
class ItemWoodWallWithDoorLgLocked: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Large Wall w/ Door Locked";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wall with combination lock door constucted out of plywood and lumber.";
	weight = 35;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD_EPOCH;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Land_DZE_LargeWoodDoorLocked";
		};
	};
};