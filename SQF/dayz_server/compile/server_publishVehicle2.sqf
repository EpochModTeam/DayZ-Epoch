private ["_activatingPlayer","_isOK","_worldspace","_location","_dir","_class","_uid","_key","_keySelected","_characterID","_donotusekey","_object","_result","_outcome","_oid","_object_para","_clientKey","_exitReason","_playerUID"];
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (count _this < 6) exitWith {diag_log "Server_PublishVehicle2 error: Wrong parameter format";};

_worldspace = 	_this select 0;
_class = 		_this select 1;
_donotusekey =	_this select 2;
_keySelected =  _this select 3;
_activatingPlayer =  _this select 4;
_clientKey = _this select 5;
_playerUID = getPlayerUID _activatingPlayer;

_exitReason = [_this,"PublishVehicle2",(_worldspace select 1),_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
if (_exitReason != "") exitWith {diag_log _exitReason};

if(_donotusekey) then {
	_isOK = true;
} else {
	_isOK = isClass(configFile >> "CfgWeapons" >> _keySelected);
};

if(!_isOK) exitWith {diag_log ("HIVE: CARKEY DOES NOT EXIST: "+ str(_keySelected));};

if(_donotusekey) then {
	_characterID = _keySelected;
} else {
	_characterID = str(getNumber(configFile >> "CfgWeapons" >> _keySelected >> "keyid"));
};

_dir = 		_worldspace select 0;
_location = _worldspace select 1;
_uid = _worldspace call dayz_objectUID2;

_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _characterID, _worldspace, [], [], 1,_uid];

#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key)); 
#endif

_key call server_hiveWrite;

_key = format["CHILD:388:%1:",_uid];

#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key));
#endif

_result = _key call server_hiveReadWrite;
_outcome = _result select 0;

if (_outcome != "PASS") then {
	diag_log("CUSTOM: failed to get id for : " + str(_uid));
} else {
	_oid = _result select 1;

	#ifdef OBJECT_DEBUG
	diag_log("CUSTOM: Selected " + str(_oid));
	#endif

	if(DZE_TRADER_SPAWNMODE) then {
		_object_para = "ParachuteMediumWest" createVehicle [0,0,0];
		_object_para setPos [_location select 0, _location select 1,(_location select 2) + 65];
		_object = _class createVehicle [0,0,0];
	} else {
		// Don't use setPos or CAN_COLLIDE here. It will spawn inside other vehicles
		_object = _class createVehicle _location;
		if (surfaceIsWater _location && {({_x != _object} count (_location nearEntities ["Ship",8])) == 0}) then {
			//createVehicle "NONE" is especially inaccurate in water
			_object setPos _location;
		};
	};

	if(!_donotusekey) then {
		_object setvehiclelock "locked";
	};

	clearWeaponCargoGlobal  _object;
	clearMagazineCargoGlobal  _object;
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];
	_object setVariable ["ObjectID", _oid];
	_object setVariable ["lastUpdate",diag_tickTime];
	_object setVariable ["CharacterID", _characterID,[true,false] select (_donotusekey)];	//	Set CharacterID global only for vehicles with a key.

	if(DZE_TRADER_SPAWNMODE) then {
		_object attachTo [_object_para, [0,0,-1.6]];
		[_object,_object_para] spawn {
			_object = _this select 0;
			_object_para = _this select 1;
			uiSleep 1;
			waitUntil {([_object] call fnc_getPos) select 2 < 0.1};
			detach _object;
			deleteVehicle _object_para;
		};
	};
	
	[_object,DZE_clearVehicleAmmo,DZE_addVehicleAmmo] call fn_vehicleAddons;

	_object call fnc_veh_ResetEH;

	PVDZE_veh_Init = _object;
	publicVariable "PVDZE_veh_Init";

	diag_log format["PUBLISH: %1(%2) bought %3 with UID %4 @%5",(_activatingPlayer call fa_plr2str),_playerUID,_class,_uid,(_location call fa_coor2str)];
};
