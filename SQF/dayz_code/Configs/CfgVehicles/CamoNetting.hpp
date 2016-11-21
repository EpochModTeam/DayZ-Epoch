/*class CamoNet_DZ: BuiltItems { //Duplicate of Epoch camo net in DZE\Prop_Defs.hpp
	armor = 3;
	destrtype = "DestructTent";
	displayName = $STR_ITEM_NAME_CAMONET;
	descriptionShort = $STR_ITEM_DESC_CAMONET;
	icon = "\Ca\misc3\data\Icons\icon_camoNet_ca.paa";
	mapsize = 13.5;
	model = "\Ca\misc3\CamoNet_EAST";
	scope = public;
	vehicleclass = "Military";
	class dismantle {
		requiredtools[] = 
		{
			//{"Item","Chance","ReturnedPart"}
			{"ItemShovel",0.08,"ItemShovelBroken"}
		}; //Tools needed
		dismantleToo = "ItemCamoNet"; //Returned magazine item
		attemps = 2; //Random number
	};
	
	class UserActions {
		class Dismantle {
			displayNameDefault = $STR_BUILT_CAMONET_Dismantle;
			showWindow = 0;
			hideOnUse = 1;
			displayName = $STR_BUILT_CAMONET_Dismantle;
			position="action";
			radius = 3.0;
			onlyForPlayer = 1;
			condition = "alive this";
			statement = "this spawn object_dismantle;";
		};
	};
};*/