class Binocular_VectorBroken : Default
{
	scope = 2;
	type = 4096;
	displayName = $STR_EQUIP_BROKEN_BINOCULARVECTOR;
	descriptionShort = $STR_EQUIP_BROKEN_BINOCULARVECTOR_DESC;
	model = "\ca\weapons_E\vector\vector21dt";
	picture = "\dayz_epoch_c\icons\tools\ItemBinocularVectorBroken.paa";
	
	class ItemActions
	{
		class Repair
		{
			text = $STR_ACTIONS_FIX_BIONCULARVECTOR;
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemSolder_DZE"};
			output[] = {};
			outputweapons[] = {"Binocular_Vector"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"Binocular_VectorBroken"};
		};		
	};		
};