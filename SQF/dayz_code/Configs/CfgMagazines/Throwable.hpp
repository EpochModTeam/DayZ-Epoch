class HandRoadFlare : HandGrenade
{
	scope = public;
	
	picture = "\dayz_weapons\textures\equip_roadflare_ca.paa";
	model = "\dayz_weapons\models\roadflare";
	displayName = $STR_MAG_NAME_4;
	descriptionShort = $STR_MAG_DESC_4;
	
	ammo = "RoadFlare";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class HandChemBlue : HandGrenade
{
	scope = public;
	
	picture = "\dayz_weapons\textures\equip_chem_blue_ca.paa";
	model = "\dayz_weapons\models\chem_gear_blue";
	displayName = $STR_MAG_NAME_7;
	descriptionShort = $STR_MAG_DESC_5;
	
	ammo = "ChemBlue";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class HandChemGreen : HandGrenade
{
	scope = public;
	
	picture = "\dayz_weapons\textures\equip_chem_green_ca.paa";
	model = "\dayz_weapons\models\chem_gear_green";
	displayName = $STR_MAG_NAME_5;
	descriptionShort = $STR_MAG_DESC_5;
	
	ammo = "ChemGreen";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class HandChemRed : HandGrenade
{
	scope = public;
	
	picture = "\dayz_weapons\textures\equip_chem_red_ca.paa";
	model = "\dayz_weapons\models\chem_gear_red";
	displayName = $STR_MAG_NAME_6;
	descriptionShort = $STR_MAG_DESC_5;
	
	ammo = "ChemRed";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};