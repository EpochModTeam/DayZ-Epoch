class HandRoadFlare : HandGrenade
{
	scope = 2;	
	picture = "\dayz_weapons\textures\equip_roadflare_ca.paa";
	model = "\dayz_weapons\models\roadflare";
	displayName = $STR_MAG_NAME_ROAD_FLARE;
	descriptionShort = $STR_MAG_DESC_ROAD_FLARE;	
	ammo = "RoadFlare";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag;";
		};
	};
};

class HandChemBlue : HandGrenade
{
	scope = 2;	
	picture = "\dayz_weapons\textures\equip_chem_blue_ca.paa";
	model = "\dayz_weapons\models\chem_gear_blue";
	displayName = $STR_MAG_NAME_CHEMLIGHT_BLUE;
	descriptionShort = $STR_MAG_DESC_CHEMLIGHT;	
	ammo = "ChemBlue";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag;";
		};
	};
};

class HandChemGreen : HandGrenade
{
	scope = 2;	
	picture = "\dayz_weapons\textures\equip_chem_green_ca.paa";
	model = "\dayz_weapons\models\chem_gear_green";
	displayName = $STR_MAG_NAME_CHEMLIGHT_GREEN;
	descriptionShort = $STR_MAG_DESC_CHEMLIGHT;	
	ammo = "ChemGreen";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag;";
		};
	};
};

class HandChemRed : HandGrenade
{
	scope = 2;	
	picture = "\dayz_weapons\textures\equip_chem_red_ca.paa";
	model = "\dayz_weapons\models\chem_gear_red";
	displayName = $STR_MAG_NAME_CHEMLIGHT_RED;
	descriptionShort = $STR_MAG_DESC_CHEMLIGHT;	
	ammo = "ChemRed";
	count = 10;
	
	class ItemActions
	{
		class CombineMag
		{
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag;";
		};
	};
};