class CfgVehicles
{
	class Wreck_Base;	// External class reference
	
	class Body1 : Wreck_Base
	{
		scope = public;
		mapSize = 2;
		displayName = "Dead Body 1";
		model = "\dayz\objects\dead_soldier_0";
	};
	
	class Body2 : Wreck_Base
	{
		scope = public;
		mapSize = 2;
		displayName = "Dead Body 2";
		model = "\dayz\objects\dead_soldier_1";
	};
	
	class Strategic;	// External class reference
	
	class Rubbish1 : Strategic
	{
		scope = public;
		model = "\CA\misc\garbage_paleta";
		mapSize = 2;
		displayName = "Garbage1";
		vehicleClass = "Survival";
	};
	
	class Rubbish2 : Strategic
	{
		scope = public;
		model = "\CA\misc\garbage_misc";
		mapSize = 2;
		displayName = "Garbage2";
		vehicleClass = "Survival";
	};
	
	class Rubbish3 : Strategic
	{
		scope = public;
		model = "\CA\misc\ground_garbage_square5";
		mapSize = 2;
		displayName = "Garbage3";
		vehicleClass = "Survival";
	};
	
	class Rubbish4 : Strategic
	{
		scope = public;
		model = "\CA\misc\ground_garbage_square3";
		mapSize = 2;
		displayName = "Garbage4";
		vehicleClass = "Survival";
	};
	
	class Rubbish5 : Strategic
	{
		scope = public;
		model = "\CA\misc\junkpile";
		mapSize = 2;
		displayName = "Garbage5";
		vehicleClass = "Survival";
	};
};