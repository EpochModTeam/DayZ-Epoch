class ItemTankTrap : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\tank_trap_kit.p3d";
	picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_22;
	descriptionShort = $STR_EQUIP_DESC_22;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemTankTrap"};
			create = "Hedgehog_DZ";
			byPass = "byPassRoadCheck";
		};
	};
};