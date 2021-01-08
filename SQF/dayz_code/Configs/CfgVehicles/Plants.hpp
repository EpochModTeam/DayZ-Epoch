class Plant_Base: WeaponHolder {
	scope = 0;
	icon = "";
	mapSize = 0;
	transportMaxWeapons = 0;
	accuracy = 1000;
	class DestructionEffects{};
	favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
	displayName = "$STR_ITEM_NAME_comfrey";
	class eventHandlers {
		init="(_this select 0)setVariable['permaLoot',true];";
	};
	supplyRadius = 1;
	vehicleClass = "DayZ Epoch Plants";
};
	

class Dayz_Plant3: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up_small.p3d";
	transportMaxMagazines = 1;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 1;
		};
	};
};

class Dayz_Plant2: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up_mid.p3d";
	transportMaxMagazines = 2;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 2;
		};
	};
};

class Dayz_Plant1: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up.p3d";
	transportMaxMagazines = 3;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 3;
		};
	};
};

class Plant_Patch_Base_DZE : NonStrategic {
	scope = 0;
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	armor = 100;
	mapsize = 2;
	vehicleClass = "DayZ Epoch Plants";
};	

class Plant_Patch_Pumpkin_DZE : Plant_Patch_Base_DZE {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_PUMPKIN;
};

class Plant_Patch_Sunflower_DZE : Plant_Patch_Base_DZE {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_SUNFLOWER;
};

class Plant_Patch_Carrot_DZE : Plant_Patch_Base_DZE {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_CARROT;
};

class Plant_Patch_Potato_DZE : Plant_Patch_Base_DZE {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_POTATO;
};