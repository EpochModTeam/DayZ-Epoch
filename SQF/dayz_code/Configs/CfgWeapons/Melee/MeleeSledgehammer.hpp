class MeleeSledge: MeleeWeapon
{
	scope = public;

	model = "\z\addons\dayz_epoch\models\sledge_weaponized";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa"; // todo icon
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	descriptionShort = $STR_EQUIP_SLEDGE_DESC;
	
	magazines[] = {"Sledge_Swing"};
	
	droppeditem = "ItemSledge";
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeSledge"};
			output[] = {"ItemSledge"};
		};
		
		class Drop
		{
			text = $STR_ACTIONS_DROP;
			script = "spawn player_dropWeapon;";
			use[] = {"Sledge_Swing"};
		};
	};
	class Library
	{
		libTextDesc=$STR_EQUIP_SLEDGE_DESC;
	};
};
