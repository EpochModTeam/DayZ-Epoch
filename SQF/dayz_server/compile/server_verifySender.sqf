/*
	PVEH does not provide any information about the sender in A2, so
	this is necessary to verify the sender was not spoofed.
	
	This is useful to hinder and identify cheaters who attempt mass deletion or creation of hive objects via PVS.
*/

private ["_clientKey","_exitReason","_function","_index","_objPos","_params","_player","_playerUID"];

_params = _this select 0;
_function = "Server_" + (_this select 1);
_objPos = _this select 2; //Can be object or position
_clientKey = _this select 3;
_playerUID = _this select 4;
_player = _this select 5;

_index = dayz_serverPUIDArray find _playerUID;

_exitReason = switch true do {
	//If object or player is null distance returns 9999+
	//If object or player was moved with setPos on client, position takes a second to update on server
	//Coordinates can be used in place of object
	case (_objPos distance _player > (Z_VehicleDistance + 10)): {
		format["%1 error: Verification failed, player is too far from object. PV ARRAY: %2",_function,_params]
	}; 
	case (_index < 0): {
		format["%1 error: PUID NOT FOUND ON SERVER. PV ARRAY: %2",_function,_params]
	};
	case (((dayz_serverClientKeys select _index) select 0 != owner _player) or ((dayz_serverClientKeys select _index) select 1 != _clientKey)): {
		format["%1 error: CLIENT AUTH KEY INCORRECT OR UNRECOGNIZED. PV ARRAY: %2",_function,_params]
	};
	default {""};
};

_exitReason