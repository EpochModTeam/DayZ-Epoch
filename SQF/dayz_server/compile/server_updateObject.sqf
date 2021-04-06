// [_object,_type] spawn server_updateObject;
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"
//if (isNil "sm_done") exitWith {diag_log "sm_done is nil";};

local _object = _this select 0;
if ((isNil "_object") || isNull _object) exitWith {diag_log "server_updateObject.sqf _object null or nil, could not update object"};

local _type = _this select 1;
local _forced = if (count _this > 2) then {_this select 2} else {false};
local _totalDmg = if (count _this > 3) then {_this select 3} else {false};
local _isNotOk = false;
local _objectID = "0";
local _objectUID = "0";

_objectID = _object getVariable ["ObjectID","0"];
_objectUID = _object getVariable ["ObjectUID","0"];
local _class = typeOf _object;

if (typeName _objectID != "STRING" || {typeName _objectUID != "STRING"}) then {
	#ifdef OBJECT_DEBUG
		diag_log (format["Non-string Object: ID %1 UID %2", _objectID, _objectUID]);
	#endif
	//force fail
	_objectID = nil;
	_objectUID = nil;
};

if (!(_class in DZE_safeVehicle) && {!locked _object}) then {
	//diag_log format["Object: %1, ObjectID: %2, ObjectUID: %3",_object,_objectID,_objectUID];
	if (!(_objectID in dayz_serverIDMonitor) && {isNil "_objectUID"}) then {
		//force fail
		_objectID = nil;
		_objectUID = nil;
	};
	if (isNil "_objectID" && {isNil "_objectUID"}) then {
		#ifdef OBJECT_DEBUG
			diag_log format["Object %1 with invalid ID at pos %2",_class,getPosATL _object];
		#endif
		_isNotOk = true;
	};
};

if (_isNotOk) exitWith {
	//deleteVehicle _object;
};

call {
	if (_type == "all") exitwith {
		[_object,_objectID,_class] call server_obj_pos;
		[_object,_objectID,_objectUID,_class] call server_obj_inv;
		[_object,_objectID,_objectUID,_forced,_totalDmg] call server_obj_dam;
	};
	if (_type == "position") exitwith {
		[_object,_objectID,_class] call server_obj_pos;
	};
	if (_type == "gear") exitwith {
		[_object,_objectID,_objectUID,_class] call server_obj_inv;
	};
	if (_type == "damage" || _type == "repair") exitwith {
		[_object,_objectID,_objectUID,_forced,_totalDmg] call server_obj_dam;
	};
	if (_type == "killed") exitwith {
		if (count _this != 6) exitWith {
			diag_log "Server_UpdateObject error: wrong parameter format";
		};

		local _playerUID = _this select 4;
		local _clientKey = _this select 5;
		[_object,_objectID,_objectUID,_playerUID,_clientKey,_class] call server_obj_killed;
	};
	if (_type == "coins") exitwith {
		_object setVariable ["lastInventory",["forceUpdate"]];
		[_object,_objectID,_objectUID,_class] call server_obj_inv;
	};
	"";
};