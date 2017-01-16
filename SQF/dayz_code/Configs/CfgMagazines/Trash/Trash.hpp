class ItemSodaEmpty : HandGrenade
{
	scope = public;
	
	model = "\dayz_equip\models\soda_coke_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	displayName = $STR_EQUIP_NAME_35;
	descriptionShort = $STR_EQUIP_DESC_35;
	
	ammo = "SodaCan";
	
	class ItemActions
	{
		class Drink
		{
			text = $STR_ACTIONS_DRINK2;
			script = ";[_id] spawn player_fillWater;";
		};
		class Crafting {
			text = "Melt into Bars";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemAluminumBar",1}};
			input[] = {{"ItemSodaEmpty",6}};
		};
	};
};
	
class TrashTinCan : HandGrenade
{
	scope = public;
	
	model = "\dayz_equip\models\trash_tincan.p3d";
	picture = "\dayz_equip\textures\equip_tincan_ca.paa";
	displayName = $STR_EQUIP_NAME_33;
	descriptionShort = $STR_EQUIP_DESC_33;
	
	ammo = "TinCan";
	
	class ItemActions
	{
		class Drink
		{
			text = $STR_ACTIONS_DRINK2;
			script = ";[_id] spawn player_fillWater;";
		};
		class Crafting {
			text = "Melt into Bars";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemTinBar",1}};
			input[] = {{"TrashTinCan",6}};
		};
	};
};

#include "SodaCan.hpp"
#include "TinCan.hpp"
#include "Misc.hpp"