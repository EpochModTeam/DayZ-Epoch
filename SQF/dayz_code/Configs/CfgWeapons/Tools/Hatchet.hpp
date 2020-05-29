class ItemHatchet : ItemCore
{
	scope = 2;	
	model = "\dayz_equip\models\hatchet.p3d";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_EQUIP_NAME_HATCHET;
	descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
	class ItemActions
	{		
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
	scope = 2;	
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