class desert_large_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	descriptionShort = $STR_EPOCH_LARGECAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DesertLargeCamoNet_DZ";
		};
	};
};
class forest_large_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	descriptionShort = $STR_EPOCH_LARGECAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "ForestLargeCamoNet_DZ";
		};
	};
};
class desert_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_DESERTCAMONET;
	descriptionShort = $STR_EPOCH_CAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "DesertCamoNet_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_229;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"desert_large_net_kit",1}};
			input[] = {{"desert_net_kit",3}};
		};
	};
};
class forest_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_FORESTCAMONET;
	descriptionShort = $STR_EPOCH_CAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "ForestCamoNet_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_229;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"forest_large_net_kit",1}};
			input[] = {{"forest_net_kit",3}};
		};
	};
};

class winter_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WINTERCAMONET;
	descriptionShort = $STR_EPOCH_CAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WinterCamoNet_DZ";
		};
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_229;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"winter_large_net_kit",1}};
			input[] = {{"winter_net_kit",3}};
		};		
	};
};
class winter_large_net_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LARGEWINTERCAMONET;
	descriptionShort = $STR_EPOCH_LARGECAMONET_DESC;
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WinterLargeCamoNet_DZ";
		};
	};
};
