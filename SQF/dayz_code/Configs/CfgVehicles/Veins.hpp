class MiningItems: NonStrategic{
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrMine";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};

		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};

		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class Gold_Vein_DZE: MiningItems {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\gold_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 70;
	displayName = "Rock with Gold";
	vehicleClass = "DayZ Epoch Buildings";
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
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\silver_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 60;
	displayName = "Rock with Silver";
	vehicleClass = "DayZ Epoch Buildings";
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
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	model="\z\addons\dayz_epoch\models\iron_vein.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 50;
	displayName = "Rock with Iron";
	vehicleClass = "DayZ Epoch Buildings";
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

class Land_iron_vein_wreck: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_IRON;
	vehicleClass = "DayZ Epoch Buildings";
};
class Land_silver_vein_wreck: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_SILVER;
	vehicleClass = "DayZ Epoch Buildings";
};
class Land_gold_vein_wreck: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
	vehicleClass = "DayZ Epoch Buildings";
};