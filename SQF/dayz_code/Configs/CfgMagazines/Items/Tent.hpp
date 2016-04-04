class ItemTent : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 3;
	
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	displayName = $STR_EQUIP_NAME_20;
	descriptionShort = $STR_EQUIP_DESC_20;

	class ItemActions
	{
		class Build
		{
			text = $STR_PITCH_TENT;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {};
			consume[] = {"ItemTent"};
			create = "TentStorage";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_270;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"desert_net_kit",1}};
			input[] = {{"ItemTent",2},{"ItemPole",2}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_271;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"forest_net_kit",1}};
			input[] = {{"ItemTent",2},{"ItemPole",2}};
		};
	};
};

class ItemDomeTent : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 3;
	
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	displayName = $STR_VEH_NAME_DOME_TENT;
	descriptionShort = $STR_EQUIP_DESC_20;

	class ItemActions
	{
		class Build
		{
			text = $STR_PITCH_DOME_TENT;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {};
			consume[] = {"ItemDomeTent"};
			create = "DomeTentStorage";
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_271;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"forest_net_kit",1}};
			input[] = {{"ItemDomeTent",2},{"ItemPole",2}};
		};
	};
};



// EPOCH ADDITION

class ItemDesertTent : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 3;
	
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	displayName = "Desert Dome Tent";
	descriptionShort = $STR_EQUIP_DESC_20;

	class ItemActions
	{
		class Build
		{
			text = "Pitch Desert Dome Tent";
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {};
			consume[] = {"ItemDesertTent"};
			create = "DesertTentStorage";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_270;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem; r_action_count = r_action_count + 1;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"desert_net_kit",1}};
			input[] = {{"ItemDesertTent",2},{"ItemPole",2}};
		};
	};
};