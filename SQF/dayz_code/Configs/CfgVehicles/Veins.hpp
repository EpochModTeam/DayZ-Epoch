class MiningItems: NonStrategic {
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Vein/Supply Crate";
	
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
	model = "\z\addons\dayz_epoch\models\gold_vein.p3d";
	armor = 70;
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
	
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
	model = "\z\addons\dayz_epoch\models\silver_vein.p3d";
	armor = 60;
	displayName = $STR_ORE_VEIN_WRECK_SILVER;

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
	model = "\z\addons\dayz_epoch\models\iron_vein.p3d";
	armor = 50;
	displayName = $STR_ORE_VEIN_WRECK_IRON;

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

class Land_iron_vein_wreck: ruins {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_IRON;
	vehicleClass = "DayZ Epoch Vein/Supply Crate";
};

class Land_silver_vein_wreck: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_SILVER;
	vehicleClass = "DayZ Epoch Vein/Supply Crate";
};

class Land_gold_vein_wreck: ruins {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
	vehicleClass = "DayZ Epoch Vein/Supply Crate";
};