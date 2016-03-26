private ["_position","_veh","_istoomany","_spawnveh"];

waitUntil {!isNil "BIS_fnc_selectRandom"};
_position = RoadList call BIS_fnc_selectRandom;
_position = _position modelToWorld [0,0,0];

waitUntil {!isNil "BIS_fnc_findSafePos"};
_position = [_position,0,10,5,0,2000,0] call BIS_fnc_findSafePos;

if ((count _position) == 2) then {
	_istoomany = _position nearObjects ["All",5];
	if ((count _istoomany) > 0) exitWith {};
	
	waitUntil {!isNil "BIS_fnc_selectRandom"};
	_spawnveh = DZE_isWreck call BIS_fnc_selectRandom;

	_veh = createVehicle [_spawnveh,_position, [], 0, "CAN_COLLIDE"];
	_veh enableSimulation false;
	_veh setDir round(random 360);
	_veh setPos _position;
	_veh setVariable ["ObjectID","1",true];
};