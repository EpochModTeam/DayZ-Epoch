class bulk: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BULK_NAME;
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crate.paa";
	descriptionShort = $STR_EPOCH_BULK_DESC;
};

class bulk_empty: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_EMPTY;
	descriptionShort = $STR_EPOCH_BULK_DESC_EMPTY;

	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_221;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaCoke",1}};
			input[] = {{"bulk_empty",1},{"ItemSodaCoke",6}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_222;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaPepsi",1}};
			input[] = {{"bulk_empty",1},{"ItemSodaPepsi",6}};
		};

		class Crafting2 
		{
			text = $STR_EPOCH_PLAYER_223;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_PartGenericHalf",1}};
			input[] = {{"bulk_empty",1},{"PartGeneric",6}};
		};
		class Crafting3 
		{
			text = $STR_EPOCH_PLAYER_224;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemTankTrapHalf",1}};
			input[] = {{"bulk_empty",1},{"ItemTankTrap",6}};
		};
		class Crafting4 
		{
			text = $STR_EPOCH_PLAYER_225;
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemWireHalf",1}};
			input[] = {{"bulk_empty",1},{"ItemWire",6}};
		};
		class Crafting5 
		{
			text = $STR_EPOCH_PLAYER_226;
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_FoodbaconCooked",1}};
			input[] = {{"bulk_empty",1},{"FoodbaconCooked",6}};
		};
	};
};

//Edibles
class bulk_ItemSodaCoke: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_SODACOKE_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODACOKE_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaCoke",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_221;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaCokeFull",1}};
			input[] = {{"bulk_ItemSodaCoke",1},{"ItemSodaCoke",6}};
		};
	};
};
class bulk_ItemSodaCokeFull: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_SODACOKE_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODACOKE_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaCoke",12,"magazine"};
		};
	};
};
class bulk_ItemSodaPepsi: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_SODAPEPSI_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODAPEPSI_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaPepsi",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_222;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSodaPepsiFull",1}};
			input[] = {{"bulk_ItemSodaPepsi",1},{"ItemSodaPepsi",6}};
		};
	};
};
class bulk_ItemSodaPepsiFull: bulk
{
	displayName = $STR_EPOCH_BULK_DISP_SODAPEPSI_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_SODAPEPSI_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSodaPepsi",12,"magazine"};
		};
	};
};
class bulk_FoodbaconCooked: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_BACON_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_BACON_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodbaconCooked",6,"magazine"};
		};
		class Crafting 
		{
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

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodbaconCooked",12,"magazine"};
		};
	};
};
class bulk_equip_garlic_bulbFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_garlic_bulb_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_garlic_bulb_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_garlic_bulb",12,"magazine"};
		};
	};
};
class bulk_FishCookedSeaBassFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FishCookedSeaBass_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FishCookedSeaBass_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FishCookedSeaBass",12,"magazine"};
		};
	};
};
class bulk_FishCookedTroutFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FishCookedTrout_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FishCookedTrout_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FishCookedTrout",12,"magazine"};
		};
	};
};
class bulk_FishCookedTunaFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FishCookedTuna_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FishCookedTuna_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FishCookedTuna",12,"magazine"};
		};
	};
};
class bulk_FoodBeefCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodBeefCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodBeefCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodBeefCooked",12,"magazine"};
		};
	};
};
class bulk_FoodCarrotFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodCarrot_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodCarrot_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodCarrot",12,"magazine"};
		};
	};
};
class bulk_FoodChickenCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodChickenCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodChickenCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodChickenCooked",12,"magazine"};
		};
	};
};
class bulk_FoodDogCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodDogCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodDogCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodDogCooked",12,"magazine"};
		};
	};
};
class bulk_FoodGoatCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodGoatCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodGoatCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodGoatCooked",12,"magazine"};
		};
	};
};
class bulk_FoodMuttonCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodMuttonCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodMuttonCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodMuttonCooked",12,"magazine"};
		};
	};
};
class bulk_FoodPotatoRawFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodPotatoRaw_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodPotatoRaw_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodPotatoRaw",12,"magazine"};
		};
	};
};
class bulk_FoodPumpkinFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodPumpkin_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodPumpkin_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodPumpkin",12,"magazine"};
		};
	};
};
class bulk_FoodRabbitCookedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_FoodRabbitCooked_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_FoodRabbitCooked_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"FoodRabbitCooked",12,"magazine"};
		};
	};
};

//Building items
class bulk_ItemSandbagHalf: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_SANDBAG_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_SANDBAG_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSandbag",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_332;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemSandbag",1}};
			input[] = {{"bulk_ItemSandbag",1},{"ItemSandbag",6}};
		};
	};
};
class bulk_ItemSandbag: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_SANDBAG;
	descriptionShort = $STR_EPOCH_BULK_DESC_SANDBAG;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemSandbag",12,"magazine"};
		};
	};
};

class bulk_ItemTankTrapHalf: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_TANKTRAP_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_TANKTRAP_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemTankTrap",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_224;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemTankTrap",1}};
			input[] = {{"bulk_ItemTankTrapHalf",1},{"ItemTankTrap",6}};
		};
	};
};
class bulk_ItemTankTrap: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_TANKTRAP_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_TANKTRAP_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemTankTrap",12,"magazine"};
		};
	};
};

class bulk_ItemWireHalf: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_WIREKIT_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_WIREKIT_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemWire",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_225;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_ItemWire",1}};
			input[] = {{"bulk_ItemWireHalf",1},{"ItemWire",6}};
		};
	};
};
class bulk_ItemWire: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_WIREKIT_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_WIREKIT_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemWire",12,"magazine"};
		};
	};
};

class bulk_PartGenericHalf: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_GENERIC_HALF;
	descriptionShort = $STR_EPOCH_BULK_DESC_GENERIC_HALF;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartGeneric",6,"magazine"};
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_223;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"bulk_PartGeneric",1}};
			input[] = {{"bulk_PartGenericHalf",1},{"PartGeneric",6}};
		};
	};
};
class bulk_PartGeneric: bulk
{
	displayName = $STR_EPOCH_BULK_DISP_GENERIC_FULL;
	descriptionShort = $STR_EPOCH_BULK_DESC_GENERIC_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartGeneric",12,"magazine"};
		};
	};
};
class bulk_ItemComboLockFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemComboLock_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemComboLock_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemComboLock",12,"magazine"};
		};
	};
};

//Misc
class bulk_equip_aa_batteryFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_aa_battery_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_aa_battery_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_aa_battery",12,"magazine"};
		};
	};
};
class bulk_equip_d_batteryFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_d_battery_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_d_battery_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_d_battery",12,"magazine"};
		};
	};
};
class bulk_equip_duct_tapeFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_duct_tape_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_duct_tape_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_duct_tape",12,"magazine"};
		};
	};
};
class bulk_equip_feathersFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_feathers_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_feathers_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_feathers",12,"magazine"};
		};
	};
};
class bulk_equip_floppywireFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_floppywire_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_floppywire_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_floppywire",12,"magazine"};
		};
	};
};
class bulk_equip_nailsFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_nails_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_nails_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_nails",12,"magazine"};
		};
	};
};
class bulk_equip_pvc_boxFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_pvc_box_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_pvc_box_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_pvc_box",12,"magazine"};
		};
	};
};
class bulk_equip_ragFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_rag_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_rag_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_rag",12,"magazine"};
		};
	};
};
class bulk_equip_ropeFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_rope_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_rope_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_rope",12,"magazine"};
		};
	};
};
class bulk_equip_scrapelectronicsFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_scrapelectronics_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_scrapelectronics_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_scrapelectronics",12,"magazine"};
		};
	};
};
class bulk_equip_stringFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_equip_string_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_equip_string_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"equip_string",12,"magazine"};
		};
	};
};
class bulk_HandChemBlueFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_HandChemBlue_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_HandChemBlue_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"HandChemBlue",12,"magazine"};
		};
	};
};
class bulk_HandChemGreenFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_HandChemGreen_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_HandChemGreen_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"HandChemGreen",12,"magazine"};
		};
	};
};
class bulk_HandChemRedFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_HandChemRed_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_HandChemRed_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"HandChemRed",12,"magazine"};
		};
	};
};
class bulk_HandRoadFlareFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_HandRoadFlare_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_HandRoadFlare_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"HandRoadFlare",12,"magazine"};
		};
	};
};
class bulk_ItemC4ChargeFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemC4Charge_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemC4Charge_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemC4Charge",12,"magazine"};
		};
	};
};
class bulk_ItemDogTagFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemDogTag_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemDogTag_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemDogTag",12,"magazine"};
		};
	};
};
class bulk_ItemHotwireKitFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemHotwireKit_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemHotwireKit_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemHotwireKit",12,"magazine"};
		};
	};
};
class bulk_ItemKosmosSmokesFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemKosmosSmokes_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemKosmosSmokes_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemKosmosSmokes",12,"magazine"};
		};
	};
};
class bulk_ItemLightBulbFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemLightBulb_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemLightBulb_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemLightBulb",12,"magazine"};
		};
	};
};
class bulk_ItemMixOilFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemMixOil_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemMixOil_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemMixOil",12,"magazine"};
		};
	};
};
class bulk_ItemScrewsFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemScrews_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemScrews_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemScrews",12,"magazine"};
		};
	};
};
class bulk_PartGlassFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_PartGlass_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_PartGlass_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartGlass",12,"magazine"};
		};
	};
};
class bulk_PartWheelFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_PartWheel_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_PartWheel_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PartWheel",12,"magazine"};
		};
	};
};
class bulk_PipeBombFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_PipeBomb_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_PipeBomb_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"PipeBomb",12,"magazine"};
		};
	};
};

//Planting
class bulk_ItemFertilizerFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemFertilizer_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemFertilizer_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemFertilizer",12,"magazine"};
		};
	};
};
class bulk_ItemKiloBlackTeaFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemKiloBlackTea_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemKiloBlackTea_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemKiloBlackTea",12,"magazine"};
		};
	};
};
class bulk_ItemKiloHempFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemKiloHemp_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemKiloHemp_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemKiloHemp",12,"magazine"};
		};
	};
};
class bulk_ItemKiloTobaccoFull: bulk {
	displayName = $STR_EPOCH_BULK_DISP_ItemKiloTobacco_FULL;
	descriptionshort = $STR_EPOCH_BULK_DESC_ItemKiloTobacco_FULL;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"ItemKiloTobacco",12,"magazine"};
		};
	};
};

// Ammo
class bulk_17Rnd_9x19_glock17: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_G17;
	descriptionShort = $STR_EPOCH_BULK_DESC_G17;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"17Rnd_9x19_glock17",12,"magazine"};
		};
	};
};
class bulk_15Rnd_9x19_M9SD: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_M9SD;
	descriptionShort = $STR_EPOCH_BULK_DESC_M9SD;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
		};
	};
};
class bulk_30Rnd_9x19_MP5SD: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_MP5SD;
	descriptionShort = $STR_EPOCH_BULK_DESC_MP5SD;

	class ItemActions 
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
		};
	};
};
class bulk_30Rnd_556x45_StanagSD: bulk 
{
	displayName = $STR_EPOCH_BULK_DISP_STANAGSD;
	descriptionShort = $STR_EPOCH_BULK_DESC_STANAGSD;

	class ItemActions
	{
		class CreateMags 
		{
			text = $STR_EPOCH_ACTIONS_OPEN;
			script = "spawn player_loadCrate;";
			output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
		};
	};
};