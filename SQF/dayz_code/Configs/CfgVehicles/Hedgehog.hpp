/*class Hedgehog_DZ : BuiltItems { //Duplicate of Epoch item in DZE\Prop_Defs.hpp
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc\jezek_kov";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_HEDGEHOG;
	vehicleClass = "Fortifications";
	class dismantle {
		requiredtools[] = 
		{
			//{"Item","Chance","ReturnedPart"}
			{"ItemSledgeHammer",0.02,"ItemSledgeHammerBroken"},
			{"ItemCrowbar",0.04,"ItemCrowbarBent"}
		}; //Tools needed
		dismantleToo = "ItemTankTrap"; //Returned magazine item
		attemps = 3; //Random number
	};
	
	class UserActions {
		class Dismantle {
			displayNameDefault = $STR_BUILT_HEDGEHOG_Dismantle;
			showWindow = 0;
			hideOnUse = 1;
			displayName = $STR_BUILT_HEDGEHOG_Dismantle;
			position="action";
			radius = 2.7;
			onlyForPlayer = 1;
			condition = "alive this";
			statement = "this spawn object_dismantle;";
		};
	};
};*/