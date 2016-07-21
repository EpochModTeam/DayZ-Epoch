class ItemHatchet : ItemCore
{
	scope = public;
	
	model = "\dayz_equip\models\hatchet.p3d";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_EQUIP_NAME_HATCHET;
	descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
	class ItemActions
	{
		/* class Use
		{
			text = $STR_ACTIONS_CHOPWOOD;
			script = "spawn player_chopWood;";
		}; */ //removed in favor of actually needing to use the hatchet as a weapon
		
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] = {"ItemHatchet"};
			output[] = {"MeleeHatchet"};
		};
		
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
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
			text = $STR_ACTIONS_FIX_HATCHET;
			script="spawn player_fixHatchet;";
		};
	};
};