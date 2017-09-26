/*
[_objectID,_objectUID,_activatingPlayer,_object,DZE_AuthKey] call server_deleteObj;
For PV calls from the client use this function, otherwise if calling directly from the server use server_deleteObjDirect
*/
private["_id","_uid","_key","_activatingPlayer","_object","_clientKey","_PlayerUID","_PUIDIndex","_processDelete"];

if (count _this < 5) exitWith {diag_log "Server_DeleteObj error: Improper parameter format";};
_id 	= _this select 0;
_uid 	= _this select 1;
_activatingPlayer 	= _this select 2;
_object = _this select 3;
_clientKey = _this select 4;
_processDelete = if (count _this > 5) then {_this select 5} else {true};
_PlayerUID = getPlayerUID _activatingPlayer;
_PUIDIndex = DZE_ServerPUIDArray find _PlayerUID;

if (_object distance _activatingPlayer > (Z_VehicleDistance + 10)) exitWith {diag_log format["Server_DeleteObj error: Delete verification failed, referenced player is too far away from object. PV ARRAY: %1", _this];};
if (_PUIDIndex < 0) exitWith {diag_log format["Server_DeleteObj error: PUID NOT FOUND ON SERVER. PV ARRAY: %1", _this];};
if ((((DZE_ServerClientKeys select _PUIDIndex) select 0) != (owner _activatingPlayer)) || (((DZE_ServerClientKeys select _PUIDIndex) select 1) != _clientKey)) exitWith {diag_log format["Server_DeleteObj error: CLIENT AUTH KEY INCORRECT OR UNRECOGNIZED. PV ARRAY: %1", _this];};

if (isServer) then {
	if (_processDelete) then {deleteVehicle _object};
	//remove from database
	if (parseNumber _id > 0) then {
		//Send request
		_key = format["CHILD:304:%1:",_id];
		_key call server_hiveWrite;
		diag_log format["DELETE: Player %1 with Player UID %2 deleted object with ID: %3",_activatingPlayer, _PlayerUID, _id];
	} else  {
		//Send request
		_key = format["CHILD:310:%1:",_uid];
		_key call server_hiveWrite;
		diag_log format["DELETE: Player %1 with Player UID %2 deleted object with UID: %3",_activatingPlayer, _PlayerUID, _uid];
	};
};