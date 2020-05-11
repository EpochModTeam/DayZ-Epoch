class TrapBear : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\bear_trap_gear.p3d";
	picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
	displayName = $STR_EQUIP_NAME_BEARTRAP;
	descriptionShort = $STR_EQUIP_DESC_BEARTRAP;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"TrapBear"};
			create = "BearTrap_DZ";
		};
		class Crafting
		{
			text = $STR_ITEM_NAME_BEAR_TRAP_FLARE;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapBearTrapFlare",1}};
			input[] = {{"equip_string",1},{"TrapBear",1},{"PartWoodPile",1},{"equip_duct_tape",1},{"HandRoadFlare",1}};
		};
		class Crafting1
		{
			text = $STR_ITEM_NAME_BEAR_TRAP_SMOKE;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTrapBearTrapSmoke",1}};
			input[] = {{"equip_string",1},{"TrapBear",1},{"PartWoodPile",1},{"equip_duct_tape",1},{"SmokeShell",1}};
		};		
	};
};

class ItemTrapBearTrapFlare : TrapBear
{
	model = "z\addons\dayz_communityassets\models\trap_beartrap_dropped_flare.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_beartrap_dropped_flare.paa";
	displayName = $STR_ITEM_NAME_BEAR_TRAP_FLARE;
	descriptionShort = $STR_ITEM_DESC_BEAR_TRAP_FLARE;

	class ItemActions : ItemActions
	{
		class Build : Build
		{
			consume[] = {"ItemTrapBearTrapFlare"};
			create = "TrapBearTrapFlare";
		};
	};
};

class ItemTrapBearTrapSmoke : TrapBear
{
	model = "z\addons\dayz_communityassets\models\trap_beartrap_dropped_smoke.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_beartrap_dropped_smoke.paa";
	displayName = $STR_ITEM_NAME_BEAR_TRAP_SMOKE;
	descriptionShort = $STR_ITEM_DESC_BEAR_TRAP_SMOKE;

	class ItemActions : ItemActions
	{
		class Build : Build
		{
			consume[] = {"ItemTrapBearTrapSmoke"};
			create = "TrapBearTrapSmoke";
		};
	};
};