class ItemGenerator : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem * 6;
	
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	displayName = $STR_EQUIP_NAME_31;
	descriptionShort = $STR_EQUIP_DESC_31;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemGenerator"};
			create = "Generator_DZ";
		};
	};
};