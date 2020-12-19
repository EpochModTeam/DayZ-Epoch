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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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
			require[] = {"ItemToolbox"};
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

class ItemVault2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_SAFE+";
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
			create = "VaultStorage2Locked";
		};
	};
};

class ItemTallSafe: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE;
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "TallSafeLocked";
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
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
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

class ItemLockbox2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorage2Locked";
		};
	};
};

class ItemLockboxWinter: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageWinterLocked";
		};
	};
};

class ItemLockboxWinter2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageWinter2Locked";
		};
	};
};

class ItemVaultBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE_BROKEN;
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
			create = "VaultStorageBroken";
		};
	};
};

class ItemVault2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
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
			create = "VaultStorageBroken2";
		};
	};
};

class ItemTallSafeBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE_BROKEN;
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "TallSafeBroken";
		};
	};
};

class ItemLockboxBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageBroken";
		};
	};
};

class ItemLockbox2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorage2Broken";
		};
	};
};

class ItemLockboxWinterBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageWinterBroken";
		};
	};
};

class ItemLockboxWinter2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "LockboxStorageWinter2Broken";
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

class cook_tripod_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	descriptionShort = $STR_ITEM_DESC_COOKINGTRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "CookTripod_DZ";
		};
	};    
};

class stoneoven_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_STONEOVEN;
	descriptionShort = $STR_EPOCH_STONEOVEN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Stoneoven_DZ";
		};
	};    
};

class commode_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_COMMODE;
	descriptionShort = $STR_EPOCH_COMMODE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Commode_DZ";
		};
	};    
};

class wardrobe_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_WARDROBE;
	descriptionShort = $STR_EPOCH_WARDROBE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Wardrobe_DZ";
		};
	};    
};

class fridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_FRIDGE;
	descriptionShort = $STR_EPOCH_FRIDGE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Fridge_DZ";
		};
	};    
};

class washing_machine_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_WASHINGMACHINE;
	descriptionShort = $STR_EPOCH_WASHINGMACHINE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Washing_Machine_DZ";
		};
	};    
};

class server_rack_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_SERVERRACK;
	descriptionShort = $STR_EPOCH_SERVERRACK_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Server_Rack_DZ";
		};
	};    
};

class atm_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ATM;
	descriptionShort = $STR_EPOCH_ATM_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "ATM_DZ";
		};
	};    
};

class armchair_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ARMCHAIR;
	descriptionShort = $STR_EPOCH_ARMCHAIR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Armchair_DZ";
		};
	};    
};

class sofa_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_SOFA;
	descriptionShort = $STR_EPOCH_SOFA_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Sofa_DZ";
		};
	};    
};

class arcade_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	descriptionShort = $STR_ITEM_DESC_COOKINGTRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Arcade_DZ";
		};
	};    
};

class vendmachine1_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_VENDINGMACHINE1;
	descriptionShort = $STR_EPOCH_VENDINGMACHINE1_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Vendmachine1_DZ";
		};
	};    
};

class vendmachine2_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_VENDINGMACHINE2;
	descriptionShort = $STR_EPOCH_VENDINGMACHINE2_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {};
			create = "Vendmachine2_DZ";
		};
	};    
};