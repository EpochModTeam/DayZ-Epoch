/*class Sandbag1_DZ : BuiltItems { //Duplicate of Epoch item in DZE\Prop_Defs.hpp
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	model = "\ca\misc2\BagFenceLong.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_SANDBAG;
	vehicleClass = "Fortifications";
	class dismantle {
		requiredtools[] = 
		{
			//{"Item","Chance","ReturnedPart"}
			{"ItemShovel",0.02,"ItemShovelBroken"}
		}; //Tools needed
		dismantleToo = "ItemSandbag"; //Returned magazine item
		attemps = 4; //Random number
	};
	class UserActions {
		class Dismantle {
			displayNameDefault = $STR_BUILT_SANDBAG_Dismantle;
			showWindow = 0;
			hideOnUse = 1;
			displayName = $STR_BUILT_SANDBAG_Dismantle;
			position="action";
			radius = 3.0;
			onlyForPlayer = 1;
			condition = "alive this";
			statement = "this spawn object_dismantle;";
		};
	};
};*/