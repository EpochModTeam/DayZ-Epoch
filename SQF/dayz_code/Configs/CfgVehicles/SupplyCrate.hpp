class Supply_Crate_DZE: MiningItems
{
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;

	model="\z\addons\dayz_epoch\models\ammo_supply.p3d";
	icon = "\ca\data\data\Unknown_object.paa";

	mapSize = 2;
	armor = 40;
	displayName = $STR_EPOCH_BULK_NAME;

	vehicleClass = "DayZ Epoch Buildings";

	class DestructionEffects : DestructionEffects
	{
		class Ruin1
		{
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class Land_ammo_supply_wreck: ruins	{
	scope = public;
	model = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
	displayName = $STR_EPOCH_BULK_NAME;
	vehicleClass = "DayZ Epoch Buildings";
};