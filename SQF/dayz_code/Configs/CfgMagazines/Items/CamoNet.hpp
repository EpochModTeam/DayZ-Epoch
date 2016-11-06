/*class ItemCamoNet : CA_Magazine //Duplicate of Epoch forest_net_kit
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	displayName = $STR_ITEM_NAME_CAMONET;
	descriptionShort = $STR_ITEM_DESC_CAMONET;

	class ItemActions
	{
		class Build
		{
			text = $STR_BUILD_CAMONET;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemCamoNet"};
			create = "CamoNet_DZ";
		};
	};
};*/

/*class ItemCamoNetGrey : ItemCamoNet
{
	model = "\z\addons\dayz_communityassets\models\packed_net_gray.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_gray_ca.paa";
	displayName = $STR_ITEM_NAME_CAMONET;
	descriptionShort = $STR_ITEM_DESC_CAMONET;

	class ItemActions
	{
		class Build
		{
			text = $STR_BUILD_CAMONET;
			script = "; ['ItemCamoNetGrey','Build'] spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemCamoNetGrey"};
			create = "CamoNet_DZ";
		};
	};
};*/