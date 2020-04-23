class equip_lever : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;	
	picture = "\dayz_equip\textures\equip_lever.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_handle.p3d";
	descriptionShort = $STR_EQUIP_DESC_LEVER;
	displayName = $STR_EQUIP_NAME_LEVER;
};

class ItemSledgeHead : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SLEDGEHAMMERHEAD;
	model = "\z\addons\dayz_epoch\models\sledge_head.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_head_ca.paa";
	descriptionShort = $STR_EPOCH_SLEDGEHAMMERHEAD_DESC;
	weight = 9;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_275;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"ItemSledge"};
			input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
		};
	};
};

class ItemSledgeHandle : CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SLEDGEHAMMERHANDLE;
	model = "\z\addons\dayz_epoch\models\sledge_handle.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_handle_ca.paa";
	descriptionShort = $STR_EPOCH_SLEDGEHAMMERHANDLE_DESC;
	weight = 1;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_275;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"ItemSledge"};
			input[] = {{"ItemSledgeHead",1},{"ItemSledgeHandle",1}};
		};
	};
};

class equip_Crossbow_Kit : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_CROSSBOW_KIT;
	descriptionShort = $STR_ITEM_DESC_CROSSBOW_KIT;
	model = "\z\addons\community_crossbow\models\Crossbow_kit.p3d";
	picture = "\z\addons\community_crossbow\textures\Crossbow_kit.paa";
	type = 256;
};

class equip_crossbow_stock : CA_Magazine {
	scope = public;
	count = 1;
	displayName = "Crossbow (Stock)";
	descriptionShort="You require a Crossbow String kit to craft this weapon";
	model = "z\addons\community_crossbow\models\crossbow_stock.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_stock.paa";
	type = 256;
};