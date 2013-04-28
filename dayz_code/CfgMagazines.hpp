class CfgMagazines {
	class CA_Magazine;	// External class reference

	class ItemTentDomed : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		
		class ItemActions {
			class Pitch {
				text = $STR_PITCH_TENT;
				script = "spawn player_tentPitch;";
				create = "TentStorageDomed";
			};
		};
	};
	class ItemTentDomed2 : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		
		class ItemActions {
			class Pitch {
				text = $STR_PITCH_TENT;
				script = "spawn player_tentPitch;";
				create = "TentStorageDomed2";
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
				text = "Build Sandbag";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
			};
			class Crafting
			{
				text = "Craft Large Sandbag";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbagLarge",1}};
				input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
			};
			class Crafting1
			{
				text = "Craft M240 Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandbag",4},{"ItemCanvas",1},{"PartWoodPlywood",4},{"PartWoodLumber",3}};
				// TODO add consume weapon
				consumeweapons[] = {"M240_DZ"};
			};
		};
	};

	class ItemSandbagLarge : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "H-barrier cube";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "Sacks made of hessian and wire that can be filled with sand or soil and used for military fortification.";
		
		class ItemActions {
			class Build {
				text = "Build H-barrier cube";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Land_HBarrier1_DZ";
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
				require[] = {"ItemToolbox"};
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
				require[] = {"ItemToolbox"};
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
				require[] = {"ItemToolbox"};
				create = "Fort_RazorWire";
			};
		};
	};
	
	class Quiver : CA_Magazine
	{
		scope = public;
		ammo = "WoodenArrow";
		count = 6;
		descriptionshort = "Small Quiver used with the Crossbow, Max arrows 6.";
		displayname = "Quiver";
		initSpeed = 150;
		model = "\z\addons\dayz_communityassets\models\quiver";
		picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
	};
	
	class WoodenArrow : CA_Magazine {
		scope = public;
		displayName = "Arrow"; //$STR_MAG_NAME_3;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
		ammo = "WoodenArrow";
		count = 1;
		initSpeed = 150;
		descriptionShort = "Arrow made out of wood, used with the Crossbow."; //$STR_MAG_DESC_3;
		
		class ItemActions {
			class ReloadMag {
				text = "Combine into Quiver";
				script = "spawn player_reloadMag;";
				use[] = {"WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow"};
				output[] = {"Quiver"};
			};
		};
	};
	
	class ItemSodaEmpty;//External class reference
	class ItemSodaCoke; //External class reference
	
	class ItemSodaCokeEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaPepsiEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_pepsi_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};
	class ItemSodaMdewEmpty : ItemSodaEmpty{
		model = "\dayz_equip\models\soda_mdew_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	};

	class ItemSodaMtngreen : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_0;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_0;
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_full_ca.paa";
	};
	class ItemSodaMtngreenEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_mtngreen_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mtngreen_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaR4z0r : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_1;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_1;
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_full_ca.paa";
	};
	class ItemSodaR4z0rEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_r4z0r_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_r4z0r_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaClays : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_2;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_2;
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_full_ca.paa";
	};
	class ItemSodaClaysEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_clays_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_clays_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaSmasht : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_3;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_3;
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_full_ca.paa";
	};
	class ItemSodaSmashtEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_smasht_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_smasht_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaDrwaste : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_4;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_4;
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_full_ca.paa";
	};
	class ItemSodaDrwasteEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_drwaste_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_drwaste_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaFranka : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_5;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_5;
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_full_ca.paa";
	};
	class ItemSodaFrankaEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_franka_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_franka_clean_empty_ca";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaLemonade : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_6;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_6;
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_full_ca.paa";
	};
	class ItemSodaLemonadeEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lemonade_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lemonade_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaLirik : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_7;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_7;
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_full.p3d";
		//picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_full_ca.paa";
	};
	class ItemSodaLirikEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lirik_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lirik_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaLvg : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_8;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_8;
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_full_ca.paa";
	};
	class ItemSodaLvgEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_lvg_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_lvg_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};

	class ItemSodaMzly : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_9;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_9;
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_full_ca.paa";
	};
	class ItemSodaMzlyEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_mzly_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_mzly_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
/*
	class ItemSodaPeppsy : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_10;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_10;
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_full_ca.paa";
	};
	class ItemSodaPeppsyEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_peppsy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_peppsy_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class ItemSodaRabbit : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_11;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_11;
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_full_ca.paa";
	};
	class ItemSodaRabbitEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_rabbit_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_rabbit_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";

	};
/*
	class ItemSodaSacrite : ItemSodaCoke {
		displayName = $STR_ITEMSODA_FULL_CLEAN_CODE_NAME_12;
		descriptionShort = $STR_ITEMSODA_FULL_CLEAN_CODE_DESC_12;
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_full_ca.paa";
	};
	class ItemSodaSacriteEmpty : ItemSodaEmpty{
		model = "z\addons\dayz_communityassets\models\soda_sacrite_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_soda_sacrite_clean_empty_ca.paa";
		//ammo = "SodaCanMtngreen";
	};
*/
	class FoodEdible;
	class FoodmeatRaw : FoodEdible {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_FOOD_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_0;
		bloodRegen = 100;
	};
	class FoodmuttonRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_1;
		bloodRegen = 100;
	};
	
	class FoodchickenRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_2;
		bloodRegen = 100;
	};
	
	class FoodrabbitRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_3;
		bloodRegen = 400;
	};
	
	class FoodbaconRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_raw.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_raw_CA.paa";
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_4;
		bloodRegen = 150;
	};
	class FoodbeefRaw : FoodmeatRaw {
		displayName = $STR_FOOD_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOOD_EQUIP_CODE_DESC_6;
		bloodRegen = 100;
			};
	
	class FoodmeatCooked : FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_0;
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_0;
		bloodRegen = 800;
	};
	class FoodmuttonCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_1;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_1;
		bloodRegen = 400;
	};
	
	class FoodchickenCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_2;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_2;
		bloodRegen = 400;
	};
	
	class FoodbaconCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_4;
		model = "z\addons\dayz_communityassets\models\bacon_fried.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_bacon_fried_CA.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_4;
		bloodRegen = 400;
	};
	class FoodrabbitCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_3;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_3;
		bloodRegen = 1600;
	};
	class FoodbeefCooked : FoodmeatCooked {
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_6;
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_6;
		bloodRegen = 600;
	};
	
	class AngelCookies : FoodEdible {
		scope = public;
		count = 1;
		displayName = $STR_FOODCOOKED_EQIP_CODE_NAME_5;
		model = "z\addons\dayz_communityassets\models\buiscits_box.p3d";
		picture = "z\addons\dayz_communityassets\pictures\i_buiscit_ca.paa";
		descriptionShort = $STR_FOODCOOKED_EQUIP_CODE_DESC_5;
		bloodRegen = 100;
	};
	class FoodMRE : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 800;
		displayName = $STR_FOOD_NAME_MRE;
		descriptionShort = $STR_FOOD_DESC_MRE;
		model = "z\addons\dayz_communityassets\models\mre.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_mre_CA.paa";
	};
	
	class FoodPistachio : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_PISTACHIO;
		descriptionShort = $STR_FOOD_DESC_PISTACHIO;
		model = "z\addons\dayz_communityassets\models\pistachio.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_pistachios_CA.paa";
	};
	class FoodNutmix : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 100;
		displayName = $STR_FOOD_NAME_NUTMIX;
		descriptionShort = $STR_FOOD_DESC_NUTMIX;
		model = "z\addons\dayz_communityassets\models\nutmix.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_nutmix_CA.paa";
	};
	
	class FoodCanGriff : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_GRIFF;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_full_ca.paa";
	};
	class FoodCanBadguy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BADGUY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_full_ca.paa";
	};
	class FoodCanBoneboy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_full_ca.paa";
	};
	class FoodCanCorn : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CORN;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_full_ca.paa";
	};
	class FoodCanCurgon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_CURGON;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_full_ca.paa";
	};
	class FoodCanDemon : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_DEMON;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_full_ca.paa";
	};
	class FoodCanFraggleos : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_full_ca.paa";
	};
	class FoodCanHerpy : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_HERPY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_full_ca.paa";
	};
	class FoodCanOrlok : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_ORLOK;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_full_ca.paa";
	};
	class FoodCanPowell : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_POWELL;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_full_ca.paa";
	};
	class FoodCanTylers : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_TYLERS;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_full_ca.paa";
	};
	class FoodCanUnlabeled : FoodEdible {
		scope = public;
		count = 1;
		bloodRegen = 200;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_full.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_full_ca.paa";
	};
	
	class TrashTinCan;
	class FoodCanGriffEmpty : TrashTinCan {
		scope = public;
		count = 1;
		model = "z\addons\dayz_communityassets\models\can_griff_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_griff_clean_empty_ca.paa";
		displayName = $STR_FOOD_NAME_CAN_GRIFF_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_GRIFF_EMPTY;
		ammo = "TinCan";
	};
	class FoodCanBadguyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BADGUY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BADGUY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_badguy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_badguy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanBoneboyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_BONEBOY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_BONEBOY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_boneboy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_boneboy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCornEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CORN_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CORN_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_corn_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_corn_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanCurgonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_CURGON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_CURGON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_curgon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_curgon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanDemonEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_DEMON_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_DEMON_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_demon_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_demon_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanFraggleosEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_FRAGGLEOS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_FRAGGLEOS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_fraggleos_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_fraggleos_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanHerpyEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_HERPY_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_HERPY_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_herpy_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_herpy_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanOrlokEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_ORLOK_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_ORLOK_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_orlok_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_orlok_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanPowellEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_POWELL_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_POWELL_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_powell_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_powell_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanTylersEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_TYLERS_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_TYLERS_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_tylers_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_tylers_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	class FoodCanUnlabeledEmpty : TrashTinCan {
		scope = public;
		count = 1;
		displayName = $STR_FOOD_NAME_CAN_UNLABELED_EMPTY;
		descriptionShort = $STR_FOOD_DESC_CAN_UNLABELED_EMPTY;
		model = "z\addons\dayz_communityassets\models\can_unlabeled_clean_empty.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_can_unlabeled_clean_empty_ca.paa";
		ammo = "TinCan";
	};
	
	class ItemWaterbottle;
	class ItemWaterbottleBoiled : ItemWaterbottle {
		displayName = $STR_ITEMWATERBOTTLEBOILED_CODE_NAME;
		descriptionShort = $STR_ITEMWATERBOTTLEBOILED_CODE_DESC;
	 };
	 class Hatchet_Swing;
	 class Machete_Swing : Hatchet_Swing {
		displayName = "Machete";
		displayNameMagazine = "Machete";
		shortNameMagazine = "Machete";
		ammo = "Machete_Swing_Ammo";
	};
	// Inventory Placeholder
	class DummyItem : Hatchet_Swing {
		displayName = "Dummy";
		displayNameMagazine = "Dummy";
		shortNameMagazine = "Dummy";
		ammo = "Dummy_Swing_Ammo";
	};
	
	class ItemTrashToiletpaper : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_TOILETPAPER;
		descriptionShort = $STR_JUNK_DESC_TOILETPAPER;
		model = "z\addons\dayz_communityassets\models\toiletpaper.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_toiletpaper_CA.paa";
		type = 256;
	};
	class ItemTrashRazor : CA_Magazine {
		scope = public;
		count = 1;
		displayName = $STR_JUNK_NAME_RAZOR;
		descriptionShort = $STR_JUNK_DESC_RAZOR;
		model = "z\addons\dayz_communityassets\models\razor.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_razor_CA.paa";
		type = 256;
	};

	class 8Rnd_B_Beneli_74Slug;
	class 8Rnd_B_Beneli_Pellets;
	
	class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
	{
		displayName="2Rnd. Slug";
		count=2;
		descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
		model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
		class ItemActions
		{
			class ReloadMag
			{
				text="Combine to 8 rounds";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug",
					"2Rnd_shotgun_74Slug"
				};
				output[]=
				{
					"8Rnd_B_Beneli_74Slug"
				};
			};
		};
	};
	class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
	{
		displayName="2Rnd. Pellets";
		count=2;
		descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
		model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
		picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
		class ItemActions
		{
			class ReloadMag
			{
				text="Combine to 8 rounds";
				script="spawn player_reloadMag;";
				use[]=
				{
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets",
					"2Rnd_shotgun_74Pellets"
				};
				output[]=
				{
					"8Rnd_B_Beneli_Pellets"
				};
			};
		};
	};
};