class Gold_Vein_DZE: MiningItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\gold_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 70;
	displayName = "Rock with Gold";
	vehicleClass = "Fortifications";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class Silver_Vein_DZE: MiningItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\silver_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 60;
	displayName = "Rock with Silver";
	vehicleClass = "Fortifications";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class Iron_Vein_DZE: MiningItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\iron_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 50;
	displayName = "Rock with Iron";
	vehicleClass = "Fortifications";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};