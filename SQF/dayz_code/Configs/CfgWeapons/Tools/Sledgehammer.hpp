class ItemSledge: ItemCore // Epoch class
{
	scope = public;
	
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa";
	displayName=$STR_EQUIP_NAME_SledgeHammer;
	descriptionShort=$STR_EQUIP_SLEDGE_DESC;
	
	class ItemActions
	{
		class ToBack
		{
			text = $STR_ACTIONS_2BACK;
			script = "spawn player_addtoBack;";
			use[] = {"ItemSledge"};
			output[] = {"MeleeSledge"};
		};
		
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] = {"ItemSledge"};
			output[] = {"MeleeSledge"};
		};

		/* Lets take this out for now and see how it goes.
		class MineOre
		{
			text="Mine Ore";
			script="spawn player_mineOre;";
		};
		*/
	};
};

//Vanilla sledge is using a different model.
//All scripts have been changed to use Epoch ItemSledge, but leave this defined in case admins want to use it for something.
class ItemSledgeHammer : ItemCore
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.paa";
	displayName = $STR_EQUIP_NAME_SledgeHammer;
	descriptionShort = $STR_EQUIP_DESC_SledgeHammer;
};

class ItemSledgeHammerBroken : ItemCore
{
	scope = public;
	
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.paa";
	displayName = $STR_name_ItemSledgeHammerBroken;
	descriptionShort = $STR_desc_ItemSledgeHammerBroken;
	
	fixedTool = "ItemSledgeHammer";
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_FIX_SLEDGE_HAMMER;
			script = "spawn player_fixHatchet;";
		};
	};
};