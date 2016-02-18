class ItemSandbag : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\sandbags.p3d";
	picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
	displayName = $STR_EQUIP_NAME_21;
	descriptionShort = $STR_EQUIP_DESC_21;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "; [_id,'Build'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "Sandbag1_DZ";
			byPass = "byPassRoadCheck";
		};
		
		class Build2
		{
			text = $STR_CREATE_STASH;
			script = "; [_id,'Build2'] spawn player_build; r_action_count = r_action_count + 1;";
			require[] = {"ItemEtool"};
			consume[] = {"ItemSandbag"};
			create = "StashSmall";
		};
	};
};