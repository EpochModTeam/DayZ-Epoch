class MeleeBaseBallBat : MeleeWeapon
{
	scope = public;
	
	model = "\z\addons\dayz_communityassets\models\baseball_bat_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_baseball_bat_ca.paa";
	displayName = $STR_EQUIP_NAME_BASEBALLBAT;
	descriptionShort = $STR_EQUIP_DESC_BASEBALLBAT;
	
	magazines[] = {"Bat_Swing"};
	
	droppeditem = "MeleeBaseBallBat";
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_BASEBALLBAT;
	};
	
	class ItemActions
	{
		class Crafting
		{
			text = $STR_CRAFTING_NAILEDBASEBALLBAT;
			script = ";['Crafting','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"MeleeBaseBallBatNails"};
			input[] = {{"equip_nails",1}};
			inputweapons[] = {"MeleeBaseBallBat"};
		};
		class Crafting1
		{
			text = $STR_CRAFTING_BASEBALLBATBARBED;
			script = ";['Crafting1','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {};
			outputweapons[] = {"MeleeBaseBallBatBarbed"};
			input[] = {{"equip_nails",1},{"ItemWire",1}};
			inputweapons[] = {"MeleeBaseBallBat"};
		};		
	};	
};

class MeleeBaseBallBatBarbed : MeleeWeapon
{
	scope = public;
	
	model="\z\addons\dayz_communityassets\models\baseball_bat_barbed_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_barbed_ca.paa";
	displayName=$STR_EQUIP_NAME_BASEBALLBATBARBED;
	descriptionShort=$STR_EQUIP_DESC_BASEBALLBATBARBED;
	
	magazines[] = {"BatBarbed_Swing"};
	
	droppeditem = "MeleeBaseBallBatBarbed";
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_BASEBALLBATBARBED;
	};
};

class MeleeBaseBallBatNails : MeleeWeapon
{
	scope = public;
	
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_ca.paa";
	displayName=$STR_EQUIP_NAME_BASEBALLBATNAILS;
	descriptionShort=$STR_EQUIP_DESC_BASEBALLBATNAILS;
	
	magazines[] = {"BatNails_Swing"};
	
	droppeditem = "MeleeBaseBallBatNails";
	
	class Library
	{
		libTextDesc = $STR_EQUIP_DESC_BASEBALLBATNAILS;
	};
};