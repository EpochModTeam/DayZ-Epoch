class ModularItems: NonStrategic {
	scope = 0;
	destrType = "DestructBuilding";
	placement = "vertical";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Buildables";
	
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
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

#include "ModularWrecks.hpp"	
#include "ModularBuildMetal.hpp"
#include "ModularBuildCinder.hpp"
#include "ModularBuildWood.hpp"
#include "ModularPreviews.hpp"
