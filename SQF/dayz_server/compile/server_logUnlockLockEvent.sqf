private ["_player","_obj","_objectID","_objectUID","_statusText","_puid","_status","_clientID","_type"];

_player = _this select 0;
_obj = _this select 1;
_status = _this select 2;
_type = typeOf _obj;

if (isNull _player) then {diag_log "ERROR: server_logUnlockLockEvent called with Null player object";};
_clientID = owner _player;
_puid = [_player] call FNC_GetPlayerUID;
_statusText = if (_status) then {"LOCKED"} else {"UNLOCKED"};

if (!isNull _obj) then {
	_objectID = _obj getVariable ["ObjectID","0"];
	_objectUID = _obj getVariable ["ObjectUID","0"];
	
	if (_status) then {[_obj,"gear"] call server_updateObject;};
	
	diag_log format["%6 %5: ID:%1 UID:%2 BY %3(%4)",_objectID,_objectUID,name _player,_puid,_statusText,_type];
	dze_waiting = "success";
	_clientID publicVariableClient "dze_waiting";
} else {
	diag_log format["ERROR: %4 BY %1(%2) IS NULL AND COULD NOT BE %3 (THIS SHOULD NOT HAPPEN)",name _player,_puid,_statusText,_type];
	dze_waiting = "fail";
	_clientID publicVariableClient "dze_waiting";
};