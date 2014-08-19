/*
	File: plant_getInfo.sqf 0.1
	Author: Legodev

	Description: Returns Informations about the Object if it is a Plant.

	Usage: [_obj] call plant_getInfo;

	Input: Object

	Output: Array containing
	_plantType = Type of Plant in English
	_plantGrownUp = True if the Plant can be Harvested
	_plantObjects = Array of Objects that represent the Plants Stages
	_plantOutput = Array of Items including their count the received by harvesting

	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
*/

private ["_object","_plantObject","_plantType","_plantGrownUp","_plantObjects","_plantOutput","_return","_lastObject"];

/********** Begin Plant Informations **********/
DZE_PlantingPumpkinObjects = ["Grave","MAP_pumpkin2","MAP_pumpkin"];
DZE_PlantingPumpkinOutput = [["FoodPumpkin",2]];

DZE_PlantingSunFlowerObjects = ["MAP_p_heracleum"];
DZE_PlantingSunFlowerOutput = [["FoodSunFlowerSeed",1]];

DZE_PlantingHempObjects = ["MAP_c_fern","MAP_p_heracleum","fiberplant"];
DZE_PlantingHempOutput = [["ItemKiloHemp",1]];

DZE_PlantingPoppyObjects = ["papaver"];
DZE_PlantingPoppyOutput = [["ItemPoppyTears",1],["ItemPoppySeed",2]];

DZE_PlantingWheatObjects = ["wheat"];
DZE_PlantingWheatOutput = [["ItemWheatCereal",1]];
/*********** End Plant Informations ***********/

_object = _this select 0;
_plantObject = typeOf _object;

// return values
_plantType = "undef";
_plantGrownUp = False;
_plantObjects = [];
_plantOutput = [];

// get ObjectClass for map plants
if (_plantObject == "") then {
	_objName = _object call DZE_getModelName;
	switch (_objName) do {
		case "pumpkin.p3d": { _plantObject = "MAP_pumpkin" };
		case "p_helianthus.p3d": { _plantObject = "MAP_p_heracleum" };
		case "p_fiberplant_ep1.p3d": { _plantObject = "fiberplant" };
		case "p_papaver_ep1.p3d": { _plantObject = "papaver" };
		case "p_wheat_ep1.p3d": { _plantObject = "wheat" };
	};
};

if (_plantObject in DZE_PlantingPumpkinObjects) then {
	_plantType = "Pumpkin";
	_plantObjects = DZE_PlantingPumpkinObjects;
	_plantOutput = DZE_PlantingPumpkinOutput;
};

if (_plantObject in DZE_PlantingSunFlowerObjects) then {
	_plantType = "SunFlower";
	_plantObjects = DZE_PlantingSunFlowerObjects;
	_plantOutput = DZE_PlantingSunFlowerOutput;
};

if (_plantObject in DZE_PlantingHempObjects) then {
	_plantType = "Hemp";
	_plantObjects = DZE_PlantingHempObjects;
	_plantOutput = DZE_PlantingHempOutput;
};

if (_plantObject in DZE_PlantingPoppyObjects) then {
	_plantType = "Poppy";
	_plantObjects = DZE_PlantingPoppyObjects;
	_plantOutput = DZE_PlantingPoppyOutput;
};

if (_plantObject in DZE_PlantingWheatObjects) then {
	_plantType = "Wheat";
	_plantObjects = DZE_PlantingWheatObjects;
	_plantOutput = DZE_PlantingWheatOutput;
};

if (_plantType != "undef" && count _plantObjects > 0) then {
	_lastObject = _plantObjects select ((count _plantObjects) - 1);
	if (_plantObject == _lastObject) then {
		_plantGrownUp = True;
	};
};

_return = [_plantType,_plantGrownUp,_plantObjects,_plantOutput];
_return;