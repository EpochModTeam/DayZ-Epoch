class VaultStorage: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 200;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 10;
	lockedClass = "VaultStorageLocked";
	packedClass = "WeaponHolder_ItemVault";
};	

class VaultStorageLocked: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0};
	lockable = 4;
	unlockedClass = "VaultStorage";
	requireplot = 0;
	nounderground = 0;
	upgradeBuilding[] = {"VaultStorage2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",4},{"ItemScrews",2},{"equip_scrapelectronics",4},{"equip_floppywire",2}}};
};

class VaultStorage2: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE+";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	lockedClass = "VaultStorage2Locked";
	packedClass = "WeaponHolder_ItemVault2";
};
	
class VaultStorage2Locked: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_LOCKED+";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0};
	lockable = 4;
	unlockedClass = "VaultStorage2";
	requireplot = 0;
	nounderground = 0;
};

class TallSafe: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	destrType = "DestructNo";
	armor = 2600;
	transportMaxMagazines = 600;
	transportMaxWeapons = 75;
	transportMaxBackpacks = 30;
	lockedClass = "TallSafeLocked";
	packedClass = "WeaponHolder_TallSafe";
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0; 
		};
	};
};
	
class TallSafeLocked: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	destrType = "DestructNo";
	armor = 2600;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,2.5,0};
	lockable = 4;
	unlockedClass = "TallSafe";
	requireplot = 0;
	nounderground = 0;
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0; 
		};
	};	
};

class LockboxStorage: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	lockedClass = "LockboxStorageLocked";
	packedClass = "WeaponHolder_ItemLockbox";
};

class LockboxStorageLocked: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,1.5,0.5};
	lockable = 2;
	unlockedClass = "LockboxStorage";
	nounderground = 0;
	requireplot = 0;
	upgradeBuilding[] = {"LockboxStorage2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class LockboxStorage2: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	lockedClass = "LockboxStorage2Locked";
	packedClass = "WeaponHolder_ItemLockbox2";
};

class LockboxStorage2Locked: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,1.5,0.5};
	lockable = 2;
	unlockedClass = "LockboxStorage2";
	nounderground = 0;
	requireplot = 0;
};

class LockboxStorageWinter: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	lockedClass = "LockboxStorageWinterLocked";
	packedClass = "WeaponHolder_ItemLockboxWinter";
};

class LockboxStorageWinterLocked: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,1.5,0.5};
	lockable = 2;
	unlockedClass = "LockboxStorageWinter";
	nounderground = 0;
	requireplot = 0;
	upgradeBuilding[] = {"LockboxStorageWinter2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class LockboxStorageWinter2: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	lockedClass = "LockboxStorageWinter2Locked";
	packedClass = "WeaponHolder_ItemLockboxWinter2";
};

class LockboxStorageWinter2Locked: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	armor = 1600;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,1.5,0.5};
	lockable = 2;
	unlockedClass = "LockboxStorageWinter2";
	nounderground = 0;
	requireplot = 0;
};

//	Broken Versions

class VaultStorageBroken: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	offset[] = {0,2.5,0};
	armor = 800;
	transportMaxMagazines = 200;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 10;
	packedClass = "WeaponHolder_ItemVaultBroken";
};

class VaultStorageBroken2: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	destrType = "DestructNo";
	offset[] = {0,2.5,0};
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemVaultBroken2";
};

class TallSafeBroken: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	destrType = "DestructNo";
	offset[] = {0,2.5,0};
	armor = 2600;
	transportMaxMagazines = 600;
	transportMaxWeapons = 75;
	transportMaxBackpacks = 30;
	packedClass = "WeaponHolder_ItemTallSafeBroken";
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0; 
		};
		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0; 
		};
	};
};

class LockboxStorageBroken: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	offset[] = {0,1.5,0.5};
	armor = 800;
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	packedClass = "WeaponHolder_ItemLockboxBroken";
};

class LockboxStorage2Broken: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	offset[] = {0,1.5,0.5};
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemLockbox2Broken";
};

class LockboxStorageWinterBroken: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	offset[] = {0,1.5,0.5};
	armor = 800;
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	packedClass = "WeaponHolder_ItemLockboxWinterBroken";
};

class LockboxStorageWinter2Broken: Land_A_tent {
	vehicleClass = "DayZ Epoch Lockables";
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	destrType = "DestructNo";
	offset[] = {0,1.5,0.5};
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemLockboxWinter2Broken";
};