// Map fixes - objectA2 fall hazards and elevated Northern Army Base barracks entrances that you must vault to enter.

local _obj = objNull;

{
	_obj = (_x select 0) createVehicle [0,0,0];			
	_obj setVectorDirAndUp (_x select 2);
	_obj setPosATL (_x select 1);
	_obj enableSimulation false;
} count [
	["WoodFloorQuarter_DZ",[4990.341,6614.789,42.487],[[0.034,-0.999,0],[0,0,1]]],
	["WoodFloorQuarter_DZ",[4990.185,6616.587,41.549],[[-0.02,0.573,-0.819],[-0.028,0.819,0.574]]],
	["WoodFloorQuarter_DZ",[4991.7,6617.526,40.687],[[-0.98,0.199,0],[0,0,1]]],
	["WoodFloorQuarter_DZ",[4965.494,6613.854,23.28],[[-0.78,-0.62,0.087],[0.068,0.054,0.996]]],
	["WoodFloorQuarter_DZ",[4803.953,10802.216,-0.267],[[-0.85,0.459,0.259],[0.228,-0.123,0.966]]],
	["WoodFloorQuarter_DZ",[4809.562,10811.947,-0.118],[[-0.844,0.469,0.259],[0.226,-0.126,0.966]]],
	["WoodFloorQuarter_DZ",[4990.31,6612.955,41.728],[[-0.024,0.707,0.707],[0.024,-0.707,0.707]]]
];