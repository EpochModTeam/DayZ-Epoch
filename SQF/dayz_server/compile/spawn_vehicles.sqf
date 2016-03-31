private ["_random","_lastIndex","_weights","_index","_vehicle","_velimit","_qty","_isAir","_isShip","_position","_dir","_istoomany","_veh","_objPosition","_iClass","_itemTypes","_cntWeights","_itemType","_num","_allCfgLoots"];

while {count AllowedVehiclesList > 0} do {
	// BIS_fnc_selectRandom replaced because the index may be needed to remove the element
	_index = floor random count AllowedVehiclesList;
	_random = AllowedVehiclesList select _index;
	_vehicle = _random select 0;
	_velimit = _random select 1;

	_qty = {_x == _vehicle} count serverVehicleCounter;
	if (_qty <= _velimit) exitWith {}; // If under limit allow to proceed

	// vehicle limit reached, remove vehicle from list
	// since elements cannot be removed from an array, overwrite it with the last element and cut the last element of (as long as order is not important)
	_lastIndex = (count AllowedVehiclesList) - 1;
	if (_lastIndex != _index) then {AllowedVehiclesList set [_index, AllowedVehiclesList select _lastIndex];};
	AllowedVehiclesList resize _lastIndex;
};

if (count AllowedVehiclesList == 0) then {
	diag_log "DEBUG: unable to find suitable vehicle to spawn";
} else {
	// add vehicle to counter for next pass
	serverVehicleCounter set [count serverVehicleCounter,_vehicle];

	// Find Vehicle Type to better control spawns
	_isAir = _vehicle isKindOf "Air";
	_isShip = _vehicle isKindOf "Ship";

	if (_isShip or _isAir) then {
		if (_isShip) then {
			// Spawn anywhere on coast on water
			waitUntil {!isNil "BIS_fnc_findSafePos"};
			_position = [dayz_centerMarker,0,DynamicVehicleArea,10,1,2000,1] call BIS_fnc_findSafePos;
			//diag_log("DEBUG: spawning boat near coast " + str(_position));
		} else {
			// Spawn air anywhere that is flat
			waitUntil {!isNil "BIS_fnc_findSafePos"};
			_position = [dayz_centerMarker,0,DynamicVehicleArea,10,0,2000,0] call BIS_fnc_findSafePos;
			//diag_log("DEBUG: spawning air anywhere flat " + str(_position));
		};
	} else {
		// Spawn around buildings and 50% near roads
		if ((random 1) > 0.5) then {	
			waitUntil {!isNil "BIS_fnc_selectRandom"};
			_position = roadList call BIS_fnc_selectRandom;	
			_position = _position modelToWorld [0,0,0];
		
			waitUntil {!isNil "BIS_fnc_findSafePos"};
			_position = [_position,0,10,10,0,2000,0] call BIS_fnc_findSafePos;	
			//diag_log("DEBUG: spawning near road " + str(_position));
		} else {
			waitUntil {!isNil "BIS_fnc_selectRandom"};
			_position = buildingList call BIS_fnc_selectRandom;	
			_position = _position modelToWorld [0,0,0];
		
			waitUntil {!isNil "BIS_fnc_findSafePos"};
			_position = [_position,0,40,5,0,2000,0] call BIS_fnc_findSafePos;	
			//diag_log("DEBUG: spawning around buildings " + str(_position));
		};
	};
	// only proceed if two params otherwise BIS_fnc_findSafePos failed and may spawn in air
	if ((count _position) == 2) then {
		_dir = round(random 180);
		_istoomany = _position nearObjects ["AllVehicles",50];
		if ((count _istoomany) > 0) exitWith {};
	
		_veh = createVehicle [_vehicle, _position, [], 0, "CAN_COLLIDE"];
		_veh setDir _dir;
		_veh setPos _position;
		_objPosition = getPosATL _veh;
	
		clearWeaponCargoGlobal  _veh;
		clearMagazineCargoGlobal  _veh;
		// _veh setVehicleAmmo DZE_vehicleAmmo;

		// Add 0-3 loots to vehicle using random cfgloots 
		_num = floor(random 4);
		_allCfgLoots = ["Trash","ZombieCivilian","Consumable","Generic","MedicalLow","Military","ZombiePolice","ZombieHunter","ZombieWorker","clothes","militaryclothes","specialclothes","Trash"];
		
		for "_x" from 1 to _num do {
			_iClass = _allCfgLoots call BIS_fnc_selectRandom;

			_itemTypes = [];
			if (DZE_MissionLootTable) then{
				{
					_itemTypes set [count _itemTypes, _x select 2]
				} count getArray(missionConfigFile >> "CfgLoot" >> "Groups" >> _iClass);
			}
			else {
				{
					_itemTypes set [count _itemTypes, _x select 2]
				} count getArray(configFile >> "CfgLoot" >> "Groups" >> _iClass);
			};
			// Need to use new loot chances format
			/*
			_index = dayz_CLBase find _iClass;
			_weights = dayz_CLChances select _index;
			_cntWeights = count _weights;
			
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_itemType = _itemTypes select _index;
			_veh addMagazineCargoGlobal [_itemType,1];
			//diag_log("DEBUG: spawed loot inside vehicle " + str(_itemType));
			*/
		};

		[_veh,[_dir,_objPosition],_vehicle,true,"0"] call server_publishVeh;
	};
};