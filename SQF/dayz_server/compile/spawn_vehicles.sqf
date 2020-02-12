private ["_random","_lastIndex","_index","_vehicle","_velimit","_qty","_isCessna","_isMV22","_isShip","_isHeli","_isC130","_isPlane","_position","_dir","_istoomany","_veh","_objPosition","_iClass","_num","_allCfgLoots"];
// do not make _roadList, _buildingList or _serverVehicleCounter private in this function
#include "\z\addons\dayz_code\loot\Loot.hpp"

while {count AllowedVehiclesList > 0} do {
	// BIS_fnc_selectRandom replaced because the index may be needed to remove the element
	_index = floor random count AllowedVehiclesList;
	_random = AllowedVehiclesList select _index;
	_vehicle = _random select 0;
	_velimit = _random select 1;

	_qty = {_x == _vehicle} count _serverVehicleCounter;
	if (_qty <= _velimit) exitWith {}; // If under limit allow to proceed

	// vehicle limit reached, remove vehicle from list
	// since elements cannot be removed from an array, overwrite it with the last element and cut the last element of (as long as order is not important)
	_lastIndex = (count AllowedVehiclesList) - 1;
	if (_lastIndex != _index) then {AllowedVehiclesList set [_index, AllowedVehiclesList select _lastIndex];};
	AllowedVehiclesList resize _lastIndex;
};

if (count AllowedVehiclesList == 0) then {
	diag_log "DEBUG: unable to find suitable random vehicle to spawn";
} else {
	// add vehicle to counter for next pass
	_serverVehicleCounter set [count _serverVehicleCounter,_vehicle];

	// Find Vehicle Type to better control spawns
	_isShip = _vehicle isKindOf "Ship"; // Any type of watercraft.
	_isMV22 = _vehicle == "MV22_DZ"; // MV-22 is classified as a plane but it can take off vertically, so it is treated as a helicopter.
	_isHeli = _vehicle isKindOf "Helicopter"; // All helicopters.
	_isC130 = _vehicle == "C130J_US_EP1_DZ"; // C130s are too large to spawn in hangars.
	_isCessna = _vehicle in ["GNT_C185C_DZ","GNT_C185R_DZ","GNT_C185_DZ","GNT_C185U_DZ"]; // Cessna models are unstable and should not spawn in hangars.
	_isPlane = (_vehicle isKindOf "Plane" && {!_isCessna} && {!_isMV22} && {!_isC130}); // Cessna, MV-22, and C130 not allowed to spawn in hangars.
	
	call {
		// Spawn boats anywhere on coast on water
		if (_isShip) exitWith {_position = [getMarkerPos "center",0,((getMarkerSize "center") select 1),10,1,2000,1] call BIS_fnc_findSafePos;};
		// Spawn helicopters anywhere that is relatively flat
		if (_isHeli || {_isMV22}) exitWith {_position = [getMarkerPos "center",0,((getMarkerSize "center") select 1),10,0,.15,0] call BIS_fnc_findSafePos;};
		// Spawn AN2 and GyroCopter in hangar and runway positions
		if (_isPlane) exitWith {
			if (count DZE_AllAircraftPositions > 0) then { // Custom airfield positions available
				_position = DZE_AllAircraftPositions call BIS_fnc_selectRandom; _dir = _position select 1; _position = _position select 0;
			} else {
				_position = [getMarkerPos "center",0,((getMarkerSize "center") select 1),10,0,.15,0] call BIS_fnc_findSafePos;
			};
		};
		// Spawn C130 and Cessna on runway positions
		if (_isCessna || {_isC130}) exitWith {
			if (count DZE_Runway_Positions > 0) then { // Custom airfield positions available
				_position = DZE_Runway_Positions call BIS_fnc_selectRandom; _dir = _position select 1; _position = _position select 0;
			} else {
				_position = [getMarkerPos "center",0,((getMarkerSize "center") select 1),10,0,.15,0] call BIS_fnc_findSafePos;
			};
		};
		// Spawn land vehicles around buildings and 50% near roads
		if ((random 1) > 0.5) then {	
			_position = _roadList call BIS_fnc_selectRandom;	
			_position = _position modelToWorld [0,0,0];	
			_position = [_position,0,10,10,0,2000,0] call BIS_fnc_findSafePos;	
			//diag_log("DEBUG: spawning near road " + str(_position));
		} else {
			_position = _buildingList call BIS_fnc_selectRandom;	
			_position = _position modelToWorld [0,0,0];
			_position = [_position,0,40,5,0,2000,0] call BIS_fnc_findSafePos;	
			//diag_log("DEBUG: spawning around buildings " + str(_position));
		};
	};
	
	// only proceed if two params otherwise BIS_fnc_findSafePos failed and may spawn in air
	if ((count _position) == 2) then {
		_position set [2,0];
		if (isNil "_dir") then {
			_dir = round(random 180);
		};
		_istoomany = _position nearObjects ["AllVehicles",50];
		if ((count _istoomany) > 0) exitWith {};
	
		//_veh = createVehicle [_vehicle, _position, [], 0, "CAN_COLLIDE"];
		//_veh setPos _position;
		_veh = _vehicle createVehicle [0,0,0];
		_veh setDir _dir;
		_veh setPos _position;
		_objPosition = getPosATL _veh;
	
		clearWeaponCargoGlobal  _veh;
		clearMagazineCargoGlobal  _veh;
		
		// Add 0-3 loots to vehicle using random loot groups
		_num = floor(random 4);
		_allCfgLoots = ["Trash","Trash","Consumable","Consumable","Generic","Generic","MedicalLow","MedicalLow","clothes","tents","backpacks","Parts","pistols","AmmoCivilian"];
		
		for "_x" from 1 to _num do {
			_iClass = _allCfgLoots call BIS_fnc_selectRandom;
			_lootGroupIndex = dz_loot_groups find _iClass;
			Loot_InsertCargo(_veh, _lootGroupIndex, 1);
		};

		[_veh,[_dir,_objPosition],_vehicle,true,"0"] call server_publishVeh;
		
		if (_num > 0) then {
			_vehiclesToUpdate set [count _vehiclesToUpdate,_veh];
		};
	};
};
