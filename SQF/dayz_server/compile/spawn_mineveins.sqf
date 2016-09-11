private ["_position","_veh","_istoomany","_spawnveh","_positions"];
	
_position = [getMarkerPos "center",0,(((getMarkerSize "center") select 1)*0.75),10,0,2000,0] call BIS_fnc_findSafePos;

if ((count _position) == 2) then {
	_positions = selectBestPlaces [_position, 500, "(1 + forest) * (1 + hills) * (1 - houses) * (1 - sea)", 10, 5];
	_position = (_positions call BIS_fnc_selectRandom) select 0;
	_istoomany = _position nearObjects ["All",10];
	if (((count _istoomany) > 0) or (isOnRoad _position)) exitWith {};
	
	_spawnveh = ["Iron_Vein_DZE","Iron_Vein_DZE","Iron_Vein_DZE","Iron_Vein_DZE","Iron_Vein_DZE","Silver_Vein_DZE","Silver_Vein_DZE","Silver_Vein_DZE","Gold_Vein_DZE","Gold_Vein_DZE"] call BIS_fnc_selectRandom;	
	//diag_log("DEBUG: Spawning a crashed " + _spawnveh + " with " + _spawnloot + " at " + str(_position));
	//_veh = createVehicle [_spawnveh,_position, [], 0, "CAN_COLLIDE"];
	_veh = _spawnveh createVehicle [0,0,0];
	_veh enableSimulation false;
	_veh setDir round(random 360);
	_veh setPos _position;
	_veh setVariable ["ObjectID","1",true];
};