private ["_coins","_activatingPlayer","_object","_worldspace","_location","_dir","_class","_uid","_key","_keySelected"
,"_characterID","_result","_outcome","_oid","_objectID","_objectUID","_newobject","_weapons","_magazines","_backpacks"
,"_clientKey","_exitReason","_playerUID","_isAir","_fuel","_selection","_dam","_hitpoints","_newHitpoints","_damage"
,"_hit","_inv"];
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (count _this < 6) exitWith {
	diag_log "Server_PublishVehicle3 error: Wrong parameter format";
	dze_waiting = "fail";
	(owner (_this select 4)) publicVariableClient "dze_waiting";
};

_object = _this select 0;
_worldspace = _this select 1;
_class = _this select 2;
_keySelected = _this select 3;
_activatingPlayer = _this select 4;
_clientKey = _this select 5;
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

_objectID = _object getVariable ["ObjectID","0"];
_objectUID = _object getVariable ["ObjectUID","0"];
_location = [_object] call fnc_getPos;
_fuel = fuel _object;
_hitpoints = _object call vehicle_getHitpoints;
_newHitpoints = [];
_damage = damage _object;

// add items from previous vehicle here
_weapons = getWeaponCargo _object;
_magazines = getMagazineCargo _object;
_backpacks = getBackpackCargo _object;
_inv = [_weapons,_magazines,_backpacks];

if (Z_SingleCurrency && {ZSC_VehicleMoneyStorage}) then {
	_coins = _object getVariable ["cashMoney",0];
};

{
	_hit = [_object,_x] call object_getHit;
	if ((_hit select 0) > 0) then {
		_newHitpoints set [count _newHitpoints,[(_hit select 1),(_hit select 0)]];
	} else {
		_newHitpoints set [count _newHitpoints,[(_hit select 1),0]];
	};
} count _hitpoints;

#ifdef OBJECT_DEBUG
diag_log ("PUBLISH: Attempt " + str(_object));
#endif

_dir = _worldspace select 0;
_uid = _worldspace call dayz_objectUID2;

_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, _damage , _characterID, _worldspace, _inv, _newHitpoints, _fuel,_uid];
#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key));
#endif

_key call server_hiveWrite;

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

	deleteVehicle _object;
	[_objectID,_objectUID,_object] call server_deleteObjDirect;

	uiSleep 3;

	_newobject = _class createVehicle [0,0,0];

	// switch var to new vehicle at this point.
	_object = _newobject;

	_object setVariable ["ObjectID", _oid];
	_object setVariable ["lastUpdate",diag_tickTime];
	_object setVariable ["CharacterID", _characterID, [false,true] select (_characterID != "0")];

	if (Z_SingleCurrency && {ZSC_VehicleMoneyStorage && (_coins > 0)}) then {
		_object setVariable ["cashMoney",_coins,true];
	};

	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearBackpackCargoGlobal _object;

	_object setDir _dir;
	_object setPosATL _location;
	_object setVectorUp surfaceNormal _location;
	_object setDamage _damage;

	[_weapons,_magazines,_backpacks,_object] call fn_addCargo;

	_object setFuel _fuel;	
	
	[_object,_newHitpoints] call server_setHitpoints;

	[_object,"all",true] call server_updateObject;
	
	[_object,DZE_clearVehicleAmmo,false] call fn_vehicleAddons;

	_object call fnc_veh_ResetEH;
	// for non JIP users this should make sure everyone has eventhandlers for vehicles.
	PVDZE_veh_Init = _object;
	publicVariable "PVDZE_veh_Init";

	dze_waiting = "success";
	(owner _activatingPlayer) publicVariableClient "dze_waiting";

	diag_log format["PUBLISH: %1(%2) upgraded %3 with UID %4 @%5",(_activatingPlayer call fa_plr2str),_playerUID,_class,_uid,(_location call fa_coor2str)];
};
