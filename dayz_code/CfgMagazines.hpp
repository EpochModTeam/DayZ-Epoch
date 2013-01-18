class CfgMagazines {
	class CA_Magazine;	// External class reference

	class ItemTent : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		
		class ItemActions {
			class Pitch {
				text = $STR_PITCH_TENT;
				script = "spawn player_tentPitch;";
			};
		};
	};
	
	class ItemSandbag : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;
		
		class ItemActions {
			class Build {
				text = "Build me";
				script = "spawn player_build;";
				require = "ItemEtool";
				create = "Sandbag1_DZ";
			};
		};
	};
	
	class ItemTankTrap : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_22;
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_22;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require = "ItemToolbox";
				create = "Hedgehog_DZ";
			};
		};
	};
	
	class TrapBear : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";
		
		class ItemActions {
			class Build {
				text = "Place Trap";
				script = "spawn player_setTrap;";
				require = "ItemToolbox";
				create = "BearTrap_DZ";
			};
		};
	};
	
	class ItemWire : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_23;
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_23;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require = "ItemToolbox";
				create = "Wire_cat1";
			};
		};
	};
	
	class FoodmuttonRaw : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_1;
		model = "\z\addons\dayz_communityassets\models\boar_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\icon_boar_steak_raw_ca.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_1;
	};
	
	class FoodchickenRaw : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_2;
		model = "\z\addons\dayz_communityassets\models\chicken_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\icon_chicken_raw_ca.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_2;
	};
	
	class FoodrabbitRaw : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_3;
		model = "\z\addons\dayz_communityassets\models\rabbit_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\i_rabbit_raw_co.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_3;
	};
	
	class FoodbaconRaw : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_4;
		model = "\z\addons\dayz_communityassets\models\bacon_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\i_bacon_raw.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_4;
	};
	
	class DayZ_Code_FoodEdible : CA_Magazine {
		isFood = 1;
		count = 1;
		type = 256;
		class ItemActions {
			class Eat {
				text = $STR_EAT_FOOD;
				script = "spawn player_eat;";
			};
		};
	};
	
	
	class FoodmuttonCooked : DayZ_Code_FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_1;
		model = "\z\addons\dayz_communityassets\models\boar_geo.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\icon_boar_steak_cooked_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
		bloodRegen = 200;
	};
	
	class FoodchickenCooked : DayZ_Code_FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_2; //$STR_EQUIP_NAME_25
		model = "\z\addons\dayz_communityassets\models\chicken_cooked.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\icon_chicken_cooked_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
		bloodRegen = 400;
	};
	
	class FoodBaconCooked : DayZ_Code_FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_4;
		model = "\z\addons\dayz_communityassets\models\bacon_cooked.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\i_bacon_cooked.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
		bloodRegen = 800;
	};
	class FoodRabbitCooked : DayZ_Code_FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_3;
		model = "\z\addons\dayz_communityassets\models\rabbit_cooked.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\i_rabbit_cooked_co.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
		bloodRegen = 100;
	};
	class AngelCookies : DayZ_Code_FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_5;
		model = "\z\addons\dayz_communityassets\models\buiscits_box.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\i_buiscit_cai_buiscit_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_5;
		bloodRegen = 100;
	};
};