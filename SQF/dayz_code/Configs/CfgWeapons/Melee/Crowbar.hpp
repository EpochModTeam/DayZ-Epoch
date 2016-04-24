class MeleeCrowbar : MeleeWeapon
{
	scope = public;
	
	model = "\dayz_weapons\models\crowbar_weaponized";
	picture = "\dayz_weapons\textures\equip_crowbar_CA.paa";
	displayName = $STR_EQUIP_NAME_CROWBAR;
	descriptionShort = $STR_EQUIP_DESC_CROWBAR; 
	
	magazines[] = {"Crowbar_Swing"};
	
	droppeditem = "ItemCrowbar";
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt";
			use[] = {"MeleeCrowbar"};
			output[] = {"ItemCrowbar"};
		};
		
		class Drop
		{
			text = $STR_ACTIONS_DROP;
			script = "spawn player_dropWeapon; r_action_count = r_action_count + 1;";
			use[] = {"Crowbar_Swing"};
		};
	};
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_CROWBAR;
	};
};