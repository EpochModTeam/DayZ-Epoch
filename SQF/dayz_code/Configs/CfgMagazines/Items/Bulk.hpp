class bulk: CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BULK_NAME;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EPOCH_BULK_DESC;
	weight = 5;
};
class bulk_empty: bulk {
	displayName = $STR_EPOCH_BULK_DISP_EMPTY;
	descriptionShort = $STR_EPOCH_BULK_DESC_EMPTY;
	weight = 5;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_221;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaCoke",1}};
			input[] = {{"bulk_empty",1},{"ItemSodaCoke",6}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_222;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaPepsi",1}};
			input[] = {{"bulk_empty",1},{"ItemSodaPepsi",6}};
		};

		class Crafting2 {
			text = $STR_EPOCH_PLAYER_223;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_PartGenericHalf",1}};
			input[] = {{"bulk_empty",1},{"PartGeneric",6}};
		};
		class Crafting3 {
			text = $STR_EPOCH_PLAYER_224;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemTankTrapHalf",1}};
			input[] = {{"bulk_empty",1},{"ItemTankTrap",6}};
		};
		class Crafting4 {
			text = $STR_EPOCH_PLAYER_225;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemWireHalf",1}};
			input[] = {{"bulk_empty",1},{"ItemWire",6}};
		};
		class Crafting5 {
			text = $STR_EPOCH_PLAYER_226;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_FoodbaconCooked",1}};
			input[] = {{"bulk_empty",1},{"FoodbaconCooked",6}};
		};
	};
};

class bulk_ItemSodaCoke: bulk {
	displayName = $STR_EPOCH_BULK_DISP_SODACOKE_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODACOKE_HALF;
	weight = 6;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaCoke",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_221;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaCokeFull",1}};
			input[] = {{"bulk_ItemSodaCoke",1},{"ItemSodaCoke",6}};
		};
	};
};
class bulk_ItemSodaCokeFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_SODACOKE_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODACOKE_FULL;
	weight = 7;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaCoke",12,"magazine"};
		};
	};
};

class bulk_ItemSodaPepsi: bulk {
	displayName = $STR_EPOCH_BULK_DISP_SODAPEPSI_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODAPEPSI_HALF;
	weight = 6;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaPepsi",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_222;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaPepsiFull",1}};
			input[] = {{"bulk_ItemSodaPepsi",1},{"ItemSodaPepsi",6}};
		};
	};
};
class bulk_ItemSodaPepsiFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_SODAPEPSI_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODAPEPSI_FULL;
	weight = 7;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaPepsi",12,"magazine"};
		};
	};
};

class bulk_FoodbaconCooked: bulk {
	displayName = $STR_EPOCH_BULK_DISP_BACON_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_BACON_HALF;
	weight = 5;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodbaconCooked",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_227;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_FoodbaconCookedFull",1}};
			input[] = {{"bulk_FoodbaconCooked",1},{"FoodbaconCooked",6}};
		};
	};
};
class bulk_FoodbaconCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_BACON_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_BACON_FULL;
	weight = 5;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodbaconCooked",12,"magazine"};
		};
	};
};

// Ammo
class bulk_17Rnd_9x19_glock17: bulk {
	displayName = $STR_EPOCH_BULK_DISP_G17;
	descriptionShort = $STR_EPOCH_BULK_DESC_G17;
	weight = 17;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"17Rnd_9x19_glock17",12,"magazine"};
		};
	};
};
class bulk_15Rnd_9x19_M9SD: bulk {
	displayName = $STR_EPOCH_BULK_DISP_M9SD;
	descriptionShort = $STR_EPOCH_BULK_DESC_M9SD;
	weight = 17;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
		};
	};
};
class bulk_30Rnd_9x19_MP5SD: bulk {
	displayName = $STR_EPOCH_BULK_DISP_MP5SD;
	descriptionShort = $STR_EPOCH_BULK_DESC_MP5SD;
	weight = 18;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
		};
	};
};
class bulk_30Rnd_556x45_StanagSD: bulk {
	displayName = $STR_EPOCH_BULK_DISP_STANAGSD;
	descriptionShort = $STR_EPOCH_BULK_DESC_STANAGSD;
	weight = 20;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
		};
	};
};

class bulk_ItemSandbag: bulk {
	displayName = $STR_EPOCH_BULK_DISP_SANDBAG;
	descriptionShort = $STR_EPOCH_BULK_DESC_SANDBAG;
	weight = 60;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSandbag",12,"magazine"};
		};
	};
};

class bulk_ItemTankTrap: bulk {
	displayName = $STR_EPOCH_BULK_DISP_TANKTRAP_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_TANKTRAP_FULL;
	weight = 25;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemTankTrap",12,"magazine"};
		};
	};
};
class bulk_ItemTankTrapHalf: bulk {
	displayName = $STR_EPOCH_BULK_DISP_TANKTRAP_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_TANKTRAP_HALF;
	weight = 12.5;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemTankTrap",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_224;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemTankTrap",1}};
			input[] = {{"bulk_ItemTankTrapHalf",1},{"ItemTankTrap",6}};
		};
	};
};

class bulk_ItemWire: bulk {
	displayName = $STR_EPOCH_BULK_DISP_WIREKIT_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_WIREKIT_FULL;
	weight = 25;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemWire",12,"magazine"};
		};
	};
};
class bulk_ItemWireHalf: bulk {
	displayName = $STR_EPOCH_BULK_DISP_WIREKIT_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_WIREKIT_HALF;
	weight = 12.5;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemWire",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_225;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemWire",1}};
			input[] = {{"bulk_ItemWireHalf",1},{"ItemWire",6}};
		};
	};
};

class bulk_PartGeneric: bulk {
	displayName = $STR_EPOCH_BULK_DISP_GENERIC_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_GENERIC_FULL;
	weight = 60;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartGeneric",12,"magazine"};
		};
	};
};
class bulk_PartGenericHalf: bulk {
	displayName = $STR_EPOCH_BULK_DISP_GENERIC_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_GENERIC_HALF;
	weight = 30;
	class ItemActions {
		class CreateMags {
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartGeneric",6,"magazine"};
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_223;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_PartGeneric",1}};
			input[] = {{"bulk_PartGenericHalf",1},{"PartGeneric",6}};
		};
	};
};
