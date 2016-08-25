class ItemGenerator : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	displayName = $STR_EQUIP_NAME_31;
	descriptionShort = $STR_EQUIP_DESC_31;
	weight = 30; // used in R3F weight
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemGenerator"};
			create = "Generator_DZ";
		};
	};
};