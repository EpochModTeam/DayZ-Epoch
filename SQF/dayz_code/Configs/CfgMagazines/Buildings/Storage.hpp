class outhouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_OUTHOUSE;
	descriptionShort = $STR_EPOCH_OUTHOUSE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "OutHouse_DZ";
		};
	};
};

class wooden_shed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NICEWOODSHED;
	descriptionShort = $STR_EPOCH_NICEWOODSHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Wooden_shed_DZ";
		};
	};
};

class wooden_shed_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	descriptionShort = $STR_EPOCH_NICEWOODSHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "Wooden_shed2_DZ";
		};
	};
};

class wood_shack_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSHACK;
	descriptionShort = $STR_EPOCH_WOODSHACK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WoodShack_DZ";
		};
	};
};

class wood_shack_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSHACK2;
	descriptionShort = $STR_EPOCH_WOODSHACK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "WoodShack2_DZ";
		};
	};
};

class storage_shed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGESHED;
	descriptionShort = $STR_EPOCH_STORAGESHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "StorageShed_DZ";
		};
	};
};

class storage_shed_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGESHED2;
	descriptionShort = $STR_EPOCH_STORAGESHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemEtool","ItemToolbox"};
			create = "StorageShed2_DZ";
		};
	};
};

class ItemGunRackKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GUNRACK;
	descriptionShort = $STR_EPOCH_GUNRACKKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "GunRack_DZ";
		};
	};
};

class ItemGunRackKit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GUNRACK2;
	descriptionShort = $STR_EPOCH_GUNRACKKIT2_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "GunRack2_DZ";
		};
	};
};


class ItemWoodCrateKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODCRATE;
	descriptionShort = $STR_EPOCH_WOODCRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodCrate_DZ";
		};
	};
};

class ItemWoodCrateKit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODCRATE2;
	descriptionShort = $STR_EPOCH_WOODCRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodCrate2_DZ";
		};
	};
};

class ItemVault: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE;
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "VaultStorageLocked";
		};
	};
};

class ItemLockbox: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageLocked";
		};
	};
};

class StashSmall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_VEH_NAME_STASH;
	descriptionShort = $STR_VEH_NAME_STASH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemShovel"};
			create = "StashSmall";
		};
	};
};