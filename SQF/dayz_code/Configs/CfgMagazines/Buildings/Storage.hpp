class advanced_workBench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	descriptionShort = $STR_EPOCH_WORKBENCH_ADVANCED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Advanced_WorkBench_DZ";
		};
	};
};

class ItemWorkBench_DZE : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemWorkBench;
	model = "z\addons\dayz_buildings\models\workbench_flat.p3d";
	picture = "\z\addons\dayz_buildings\equip\item_workbench.paa";
	descriptionShort = $STR_BLD_desc_ItemWorkBench;
	
	class ItemActions 
	{
		class Build 
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WorkBench_DZE";
		};
	};
};

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
			create = "Sofa_DZ";
		};
	};    
};

class arcade_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ARCADE;
	descriptionShort = $STR_EPOCH_ARCADE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
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
			create = "Vendmachine2_DZ";
		};
	};    
};

class storage_crate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGECRATE;
	descriptionShort = $STR_EPOCH_STORAGECRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "StorageCrate_DZ";
		};
	};
};

class camo_storage_crate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CAMO_STORAGE_CRATE;
	descriptionShort = $STR_EPOCH_CAMO_STORAGE_CRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CamoStorageCrate_DZ";
		};
	};
};

class ItemStorageBarrel1_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGEBARRELREDKIT;
    model = "\CA\misc\Barel1.p3d";           
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_STORAGEBARRELREDKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelRed1_DZ";
		};
	};
};

class ItemStorageBarrel2_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELEPOCHKIT;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELEPOCHKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelEpoch1_DZ";
		};
	};
};

class ItemStorageBarrel3_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELYELLOWKIT;
    model = "\CA\misc\Barel3.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELYELLOWKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelYellow1_DZ";
		};
	};
};

class ItemStorageBarrel4_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELBLACKKIT;
    model = "\CA\misc\Barel4.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELBLACKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelBlack1_DZ";
		};
	};
};

class ItemStorageBarrel5_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARKKIT;
    model = "\CA\misc\Barel5.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENDARKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelGreenDark1_DZ";
		};
	};
};

class ItemStorageBarrel6_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELMILKKIT;
    model = "\CA\misc\Barel6.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELMILKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelMilk1_DZ";
		};
	};
};

class ItemStorageBarrel7_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENKIT;
    model = "\CA\misc\Barel7.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelGreen1_DZ";
		};
	};
};

class ItemStorageBarrel8_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTYKIT;
    model = "\CA\misc\Barel8.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENRUSTYKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			create = "StorageBarrelGreenRusty1_DZ";
		};
	};
};

class rabbit_hutch_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_RABBIT_HUTCH;
	descriptionShort = $STR_EQUIP_DESC_RABBIT_HUTCH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Rabbit_Hutch_DZE";
		};
	};
};

class chicken_coop_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CHICKEN_COOP;
	descriptionShort = $STR_EQUIP_DESC_CHICKEN_COOP;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Chicken_Coop_DZE";
		};
	};
};

class doghouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DOG_HOUSE;
	descriptionShort = $STR_EQUIP_DESC_DOG_HOUSE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Doghouse_DZE";
		};
	};
};

class postbox_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_POSTBOX;
	descriptionShort = $STR_EQUIP_DESC_POSTBOX;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "Postbox_DZE";
		};
	};
};