private ["_activatingPlayer","_object","_worldspace","_location","_dir","_class","_uid","_key","_keySelected","_characterID","_donotusekey","_result","_outcome","_oid","_objectID","_objectUID","_newobject","_weapons","_magazines","_backpacks","_clientKey","_exitReason","_playerUID"];
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (count _this < 7) exitWith {
	diag_log "Server_PublishVehicle3 error: Wrong parameter format";
	dze_waiting = "fail";
	(owner (_this select 5)) publicVariableClient "dze_waiting";
};

_object = 		_this select 0;
_worldspace = 	_this select 1;
_class = 		_this select 2;
_donotusekey =	_this select 3;
_keySelected =  _this select 4;
_activatingPlayer =  _this select 5;
_clientKey = _this select 6;
_playerUID = getPlayerUID _activatingPlayer;
_characterID = _keySelected;

_exitReason = [_this,"PublishVehicle3",(_worldspace select 1),_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
if (_exitReason != "") exitWith {
	diag_log _exitReason;
	dze_waiting = "fail";
	(owner _activatingPlayer) publicVariableClient "dze_waiting";
};

if (!(isClass(configFile >> "CfgVehicles" >> _class)) || isNull _object) exitWith {
	diag_log ("HIVE-PublishVehicle3 Error: Vehicle does not exist: "+ str(_class));
	dze_waiting = "fail";
	(owner _activatingPlayer) publicVariableClient "dze_waiting";
};

#ifdef OBJECT_DEBUG
diag_log ("PUBLISH: Attempt " + str(_object));
#endif

_dir = 		_worldspace select 0;
_location = _worldspace select 1;
_uid = _worldspace call dayz_objectUID2;

_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _characterID, _worldspace, [], [], 1,_uid];
#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key)); 
#endif

_key call server_hiveWrite;
_objectID 	= _object getVariable ["ObjectID","0"];
_objectUID	= _object getVariable ["ObjectUID","0"];
_location = [_object] call fnc_getPos;

// GET DB ID
_key = format["CHILD:388:%1:",_uid];
#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key));
#endif
_result = _key call server_hiveReadWrite;
_outcome = _result select 0;

if (_outcome != "PASS") then {
	diag_log("HIVE-pv3: failed to get id for : " + str(_uid));
	_key = format["CHILD:310:%1:",_uid];
	_key call server_hiveWrite;
	dze_waiting = "fail";
	(owner _activatingPlayer) publicVariableClient "dze_waiting";
} else {
	_oid = _result select 1;
	#ifdef OBJECT_DEBUG
	diag_log("CUSTOM: Selected " + str(_oid));
	#endif

	// add items from previous vehicle here
	_weapons = getWeaponCargo _object;
	_magazines = getMagazineCargo _object;
	_backpacks = getBackpackCargo _object;

	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearBackpackCargoGlobal _object;

	deleteVehicle _object;
	[_objectID,_objectUID] call server_deleteObjDirect;

	//_newobject = createVehicle [_class, [0,0,0], [], 0, "CAN_COLLIDE"];
	_newobject = _class createVehicle [0,0,0];

	// switch var to new vehicle at this point.
	_object = _newobject;

	_object setVariable ["ObjectID", _oid, true];
	_object setVariable ["lastUpdate",diag_tickTime];
	_object setVariable ["CharacterID", _characterID, true];
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	_object setDir _dir;
	_object setPosATL _location;
	_object setVectorUp surfaceNormal _location;

	[_weapons,_magazines,_backpacks,_object] call fn_addCargo;

	_object call fnc_veh_ResetEH;
	// for non JIP users this should make sure everyone has eventhandlers for vehicles.
	PVDZE_veh_Init = _object;
	publicVariable "PVDZE_veh_Init";

	dze_waiting = "success";
	(owner _activatingPlayer) publicVariableClient "dze_waiting";

	diag_log format["PUBLISH: %1(%2) upgraded %3 with UID %4 @%5",(_activatingPlayer call fa_plr2str),_playerUID,_class,_uid,(_location call fa_coor2str)];
};
