/*
[netID _activatingPlayer,netID _obj,dayz_authKey] call server_deleteObj;
For PV calls from the client use this function, otherwise if calling directly from the server use server_deleteObjDirect
*/
if (count _this < 3) exitWith {diag_log "Server_DeleteObj error: Improper parameter format";};

local _activatingPlayer = objectFromNetID(_this select 0);
local _obj = objectFromNetID(_this select 1);
local _clientKey = _this select 2;
local _playerUID = getPlayerUID _activatingPlayer;

local _exitReason = [_this,"DeleteObj",_obj,_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
if (_exitReason != "") exitWith {diag_log _exitReason};

local _id = _obj getVariable ["ObjectID","0"];
local _uid = _obj getVariable ["ObjectUID","0"];
_type = typeOf _obj;

local _processDelete = [true,_this select 3] select (count _this > 3);
if (_processDelete) then {deleteVehicle _obj};

//remove from database
if (parseNumber _id > 0) then {
	//Send request
	_key = format["CHILD:304:%1:",_id];
	_key call server_hiveWrite;
	diag_log format["DELETE: Player %1(%2) deleted %4 with ID: %3",(_activatingPlayer call fa_plr2str), _playerUID, _id, _type];
} else  {
	//Send request
	_key = format["CHILD:310:%1:",_uid];
	_key call server_hiveWrite;
	diag_log format["DELETE: Player %1(%2) deleted %4 with UID: %3",(_activatingPlayer call fa_plr2str), _playerUID, _uid, _type];
};
