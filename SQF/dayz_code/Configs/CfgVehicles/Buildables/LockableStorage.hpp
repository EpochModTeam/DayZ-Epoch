class VaultStorage: Land_A_tent {
	placement = "vertical";
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EPOCH_SAFE;
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
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EPOCH_SAFE_LOCKED;
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
};

class LockboxStorageLocked: Land_A_tent {
	vehicleClass = "DayZ Epoch Buildables";
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
};
class LockboxStorage: Land_A_tent {
	vehicleClass = "DayZ Epoch Buildables";
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