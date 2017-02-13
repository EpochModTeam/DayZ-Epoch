// [_object,_type] spawn server_updateObject;
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"
if (isNil "sm_done") exitWith {};
private ["_objectID","_objectUID","_object_position","_isNotOk","_object","_type","_recorddmg","_forced","_lastUpdate","_needUpdate","_object_inventory","_object_damage","_objWallDamage","_object_killed","_object_maintenance","_object_variables","_totalDmg"];

_object = _this select 0;
_type = _this select 1;
_recorddmg = false;
_isNotOk = false;
_forced = if (count _this > 2) then {_this select 2} else {false};
_totalDmg = if (count _this > 3) then {_this select 3} else {false};
_objectID = "0";
_objectUID = "0";

if ((isNil "_object") || {isNull _object}) exitWith {diag_log "server_updateObject.sqf _object null or nil, could not update object"};
_objectID = _object getVariable ["ObjectID","0"];
_objectUID = _object getVariable ["ObjectUID","0"];


if ((typeName _objectID == "SCALAR") || (typeName _objectUID == "SCALAR")) then { 
	#ifdef OBJECT_DEBUG
		diag_log (format["Non-string Object: ID %1 UID %2", _objectID, _objectUID]);
	#endif
	//force fail
	_objectID = nil;
	_objectUID = nil;
};

if (!((typeOf _object) in DZE_safeVehicle) && !locked _object) then {
	//diag_log format["Object: %1, ObjectID: %2, ObjectUID: %3",_object,_objectID,_objectUID];
	if (!(_objectID in dayz_serverIDMonitor) && isNil {_objectUID}) then { 
		//force fail
		_objectID = nil;
		_objectUID = nil;		
	};
	if ((isNil {_objectID}) && (isNil {_objectUID})) then {
		_object_position = getPosATL _object;
		#ifdef OBJECT_DEBUG
			diag_log format["Object %1 with invalid ID at pos %2",typeOf _object,_object_position];
		#endif
		_isNotOk = true;
	};
};

if (_isNotOk) exitWith {
	//deleteVehicle _object;
};

_lastUpdate = _object getVariable ["lastUpdate",diag_tickTime];
_needUpdate = _object in needUpdate_objects;

// TODO ----------------------
_object_position = {
	private ["_position","_worldspace","_fuel","_key"];
	_position = getPosATL _object;
	//_worldspace = [round (direction _object),_position];
	_worldspace = [getDir _object, _position] call AN_fnc_formatWorldspace; // Precise Base Building 1.0.5
	_fuel = if (_object isKindOf "AllVehicles") then {fuel _object} else {0};
	
	_key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
	_key call server_hiveWrite;	

	#ifdef OBJECT_DEBUG
		diag_log ("HIVE: WRITE: "+ str(_key));
	#endif
};

_object_inventory = {
	private ["_inventory","_key","_isNormal","_coins","_forceUpdate"];
	_forceUpdate = false;
	if (_object isKindOf "TrapItems") then {
		_inventory = [["armed",_object getVariable ["armed",false]]];
	} else {
		_isNormal = true;
		
		if (DZE_permanentPlot && (typeOf (_object) == "Plastic_Pole_EP1_DZ")) then {
			_isNormal = false;
			_inventory = _object getVariable ["plotfriends", []]; //We're replacing the inventory with UIDs for this item
		};
		
		if (DZE_doorManagement && (typeOf (_object) in DZE_DoorsLocked)) then {
			_isNormal = false;
			_inventory = _object getVariable ["doorfriends", []]; //We're replacing the inventory with UIDs for this item
		};
		
		if (Z_SingleCurrency && {typeOf (_object) in DZE_MoneyStorageClasses}) then { _forceUpdate = true; };
		
		if (_isNormal) then {
			_inventory = [getWeaponCargo _object, getMagazineCargo _object, getBackpackCargo _object];
		};
	};
	
	_previous = str(_object getVariable["lastInventory",[]]);
	if ((str _inventory != _previous) || {_forceUpdate}) then {
		_object setVariable["lastInventory",_inventory];
		if (_objectID == "0") then {
			_key = format["CHILD:309:%1:",_objectUID] + str _inventory + ":";
		} else {
			_key = format["CHILD:303:%1:",_objectID] + str _inventory + ":";
		};
		if (Z_SingleCurrency) then {
			_coins = _object getVariable [Z_MoneyVariable, -1]; //set to invalid value if getVariable fails to prevent overwriting of coins in DB
			_key = _key + str _coins + ":";
		};
		
		#ifdef OBJECT_DEBUG
			diag_log ("HIVE: WRITE: "+ str(_key));
		#endif
		
		_key call server_hiveWrite;
	};
};

_object_damage = {
	//Allow dmg process
	private ["_hitpoints","_array","_hit","_selection","_key","_damage","_allFixed"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;
	_array = [];
	_allFixed = true;
	
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {
			_allFixed = false;
			_array set [count _array,[_selection,_hit]];
			//diag_log format ["Section Part: %1, Dmg: %2",_selection,_hit]; 
		} else {
			_array set [count _array,[_selection,0]]; 
		};
	} forEach _hitpoints;
	
	if (_allFixed && !_totalDmg) then {_object setDamage 0;};
	
	if (_forced) then {        
		if (_object in needUpdate_objects) then {needUpdate_objects = needUpdate_objects - [_object];};
		_recorddmg = true;	       
	} else {
		//Prevent damage events for the first 10 seconds of the servers live.
		if (diag_ticktime - _lastUpdate > 10) then {
			if !(_object in needUpdate_objects) then {
				//diag_log format["DEBUG: Monitoring: %1",_object];
				needUpdate_objects set [count needUpdate_objects, _object];
				_recorddmg = true;
			};
		};
	};
	
	if (_recorddmg) then {
		if (_objectID == "0") then {
			_key = format["CHILD:306:%1:",_objectUID] + str _array + ":" + str _damage + ":";
		} else {
			_key = format["CHILD:306:%1:",_objectID] + str _array + ":" + str _damage + ":";
		};
		#ifdef OBJECT_DEBUG
		diag_log ("HIVE: WRITE: "+ str(_key));
		#endif
		
		_key call server_hiveWrite;   
	};
};

//Walls
_objWallDamage = {
	private ["_key","_damage"];
	_damage = (damage _object);

	if (_objectID == "0") then {
		_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],_damage];
	} else {
		_key = format["CHILD:306:%1:%2:%3:",_objectID,[],_damage];
	};
	#ifdef OBJECT_DEBUG
	diag_log ("HIVE: WRITE: "+ str(_key));
	#endif
	
	_key call server_hiveWrite;
};

_object_killed = {
	private "_key";
	_object setDamage 1;
	
	if (_objectID == "0") then {
		//Need to update hive to make a new call to allow UID to be updated for a killed event
		//_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],1];
		_key = format["CHILD:310:%1:",_objectUID];
	} else {
		_key = format["CHILD:306:%1:%2:%3:",_objectID,[],1];
	};
	_key call server_hiveWrite;
	
	#ifdef OBJECT_DEBUG
	diag_log format["DELETE: Deleted by KEY: %1",_key];
	#endif
	
	if (((typeOf _object) in DayZ_removableObjects) or ((typeOf _object) in DZE_isRemovable)) then {[_objectID,_objectUID,"__SERVER__"] call server_deleteObj;};
};

_object_maintenance = {
	private ["_ownerArray","_key"];

	_ownerArray = _object getVariable ["ownerArray",[]];
	_accessArray = _object getVariable ["dayz_padlockCombination",[]];
	_variables set [count _variables, ["ownerArray", _ownerArray]];
	_variables set [count _variables, ["padlockCombination", _accessArray]];

	if (_objectID == "0") then {
		//_key = format["CHILD:309:%1:%2:",_objectUID,_ownerArray];
		_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],0]; //Wont work just now.
	} else {
		//_key = format["CHILD:303:%1:%2:",_objectID,_ownerArray];
		_key = format["CHILD:306:%1:%2:%3:",_objectID,[],0];
	};

//	#ifdef OBJECT_DEBUG
		diag_log ("HIVE: WRITE: Maintenance, "+ str(_key));
//	#endif
	_key call server_hiveWrite;
};

_object_variables = {
	private ["_ownerArray","_key","_accessArray","_variables","_coins"];

	_ownerArray = _object getVariable ["ownerArray",[]];
	_accessArray = _object getVariable ["dayz_padlockCombination",[]];
	_lockedArray = _object getVariable ["BuildLock",false];
	
	//diag_log format ["[%1,%2]",_ownerArray,_accessArray];
	_variables = [];
	_variables set [count _variables, ["ownerArray", _ownerArray]];
	_variables set [count _variables, ["padlockCombination", _accessArray]];
	_variables set [count _variables, ["BuildLock", _lockedArray]];

	if (_objectID == "0") then {
		_key = format["CHILD:309:%1:%2:",_objectUID,_variables];
	} else {
		_key = format["CHILD:303:%1:%2:",_objectID,_variables];
	};
	if (Z_SingleCurrency) then {
		_coins = _object getVariable [Z_MoneyVariable, -1];
		_key = _key + str _coins + ":";
	};
	_key call server_hiveWrite;
};

_object setVariable ["lastUpdate",diag_ticktime,true];
switch (_type) do {
	case "all": {
		call _object_position;
		call _object_inventory;
		call _object_damage;
	};
	case "position": {
		call _object_position;
	};
	case "gear": {
		call _object_inventory;
	};
	case "maintenance": {
		call _object_maintenance;
	};
	case "damage"; case "repair" : {
		call _object_damage;
	};
	case "killed": {
		call _object_killed;
	};
	case "accessCode"; case "buildLock" : {
		call _object_variables;
	};
	case "objWallDamage": {
		call _objWallDamage;
	};
};
