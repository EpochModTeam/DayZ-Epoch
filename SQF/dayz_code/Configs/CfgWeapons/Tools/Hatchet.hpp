class ItemHatchet : ItemCore
{
	scope = public;
	
	model = "\dayz_equip\models\hatchet.p3d";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_EQUIP_NAME_HATCHET;
	descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_ACTIONS_CHOPWOOD;
			script = "spawn player_chopWood;";
		};
		
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] = {"ItemHatchet"};
			output[] = {"MeleeHatchet"};
		};
		
		class Toolbelt
		{
			text = "Remove from Toolbelt";
			script = "spawn player_addToolbelt;";
			use[] = {"ItemHatchet"};
			output[] = {"MeleeHatchet"};
		};
	};
};

class ItemHatchetBroken : ItemCore
{
	scope = public;
	
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_name_ItemHatchetBroken;
	descriptionShort = $STR_desc_ItemHatchetBroken;
	
	fixedTool = "ItemHatchet";
	
	class ItemActions
	{
		class Repair
		{
			text = "Fix Hatchet"; //TODO: move to stringtable
			script="spawn player_fixHatchet;";
		};
	};
};