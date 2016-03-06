class MeleeMachete: MeleeWeapon
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\machete_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
	displayName = $STR_EQUIP_NAME_MACHETE;
	descriptionShort = $STR_EQUIP_DESC_MACHETE;
	
	magazines[] = {"Machete_Swing"};
	
	droppeditem = "MeleeMachete";
	
	class ItemActions
	{		
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeMachete"};
			output[] = {"ItemMachete"};
		};
		
		class Drop
		{
			text = $STR_ACTIONS_DROP;
			script = "spawn player_dropWeapon; r_action_count = r_action_count + 1;";
			use[] = {"Machete_Swing"};
		};
	};
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_MACHETE;
	};
};	