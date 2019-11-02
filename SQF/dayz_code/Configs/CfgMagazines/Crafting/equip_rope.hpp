class equip_rope : CA_Magazine {
	scope = public;
	count = 1;
	displayName = $STR_ITEM_NAME_equip_rope;
	descriptionShort = $STR_ITEM_DESC_equip_rope;
	model = "\z\addons\dayz_communityassets\models\rope.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rope_ca.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_BLD_craft_equip_rope;//"String"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemKnife"};
			output[] = {{"equip_string",2}};
			input[] = {{"equip_rope",1}};
		};
	};
};	
