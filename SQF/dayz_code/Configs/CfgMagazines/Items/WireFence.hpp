class ItemWire : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\dayz_equip\models\Fence_wire_kit.p3d";
	picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
	displayName = $STR_EQUIP_NAME_23;
	descriptionShort = $STR_EQUIP_DESC_23;

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTION_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			consume[] = {"ItemWire"};
			create = "Fort_RazorWire"; // 1.8.7 uses Wire_cat1
			byPass = "byPassRoadCheck";
		};
	};
};