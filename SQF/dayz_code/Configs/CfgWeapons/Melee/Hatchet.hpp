class MeleeHatchet : MeleeWeapon
{
	scope = public;
	
	model = "\dayz_weapons\models\Hatchet_weaponized";
	picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
	displayName = $STR_EQUIP_NAME_HATCHET;
	descriptionShort = $STR_EQUIP_DESC_HATCHET;
	
	magazines[] = {"Hatchet_Swing"};
	
	droppeditem = "ItemHatchet";
	
	class ItemActions
	{		
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt";
			use[] = {"MeleeHatchet"};
			output[] = {"ItemHatchet"};
		};
		
		class Drop
		{
			text = $STR_ACTIONS_DROP;
			script = "spawn player_dropWeapon;";
			use[] = {"Hatchet_Swing"};	
		};
	};
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_HATCHET;
	};
};