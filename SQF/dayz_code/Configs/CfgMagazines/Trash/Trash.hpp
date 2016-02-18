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
			text = "Drink";//TODO: move to stringtable
			script = "spawn player_drinkWater;";
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
			text = "Drink";//TODO: move to stringtable
			script = "spawn player_drinkWater;";
		};
	};
};

#include "SodaCan.hpp"
#include "TinCan.hpp"
#include "Misc.hpp"