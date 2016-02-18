class SkinBase : CA_Magazine
{
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\cloth_parcel.p3d";
	picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
	
	Craftoutput = "equip_rag";
	
	class ItemActions
	{
		class Use
		{
			text = $STR_EQUIP_TEXT_CLOTHES;
			script = "spawn player_wearClothes;";
		};
		
		class tearClothes
		{
			text = "Tear Clothes";
			script = "spawn player_tearClothes;";
		};
	};
};

#include "Ghillie.hpp"
#include "Camo.hpp"
#include "Soldier.hpp"
#include "Survivor.hpp"