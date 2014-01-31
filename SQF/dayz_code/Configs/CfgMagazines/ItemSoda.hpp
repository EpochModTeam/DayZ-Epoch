class HandGrenade; //External class reference
class ItemSodaEmpty: HandGrenade {
	scope = 2;
	displayName = $STR_EQUIP_NAME_35;
	model = "\dayz_equip\models\soda_coke_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_35;
	ammo = "SodaCan";
	class ItemActions {
		class Crafting {
			text = "Melt into Bars";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemAluminumBar",1}};
			input[] = {{"ItemSodaEmpty",6}};
		};
	};
};
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