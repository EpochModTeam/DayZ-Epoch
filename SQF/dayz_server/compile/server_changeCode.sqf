/*
	changeCode - Safe, Lockbox and Door code changing script by salival (https://github.com/oiad)
*/

private ["_isZSC","_backpacks","_charID","_characterID","_clientID","_coins","_dir","_holder","_inventory","_key","_lockedClass","_magazines","_message","_name","_object","_objectID","_objectUID","_ownerID","_ownerPUID","_player","_playerUID","_pos","_typeOf","_vector","_weapons","_worldSpace","_clientKey","_exitReason"];

if (count _this < 4) exitWith {diag_log "server_changeCode error: Improper parameter format";};

_player = _this select 0;
_object = _this select 1;
_characterID = _this select 2;
_clientKey = _this select 3;

_typeOf = typeOf _object;
if !(_typeOf in DZE_unlockedStorage) exitWith {diag_log "server_changeCode called with invalid storage object!"};

_lockedClass = getText (configFile >> "CfgVehicles" >> _typeOf >> "lockedClass");
_pos = _object getVariable ["OEMPos",getPosATL _object];
_dir = getDir _object;
_vector = [vectorDir _object, vectorUp _object];
_charID = _object getVariable ["CharacterID","0"];
_objectID = _object getVariable ["ObjectID","0"];
_objectUID = _object getVariable ["ObjectUID","0"];
_ownerID = _object getVariable ["ownerPUID","0"];
_name = ["unknown player",name _player] select (alive _player);
_clientID = owner _player;
_playerUID = getPlayerUID _player;

if (isNull _player) then {diag_log "ERROR: server_changeCode called with Null player object";};
if (isNull _object) exitWith {diag_log format["ERROR: server_changeCode called with Null object by %1 (%2).",_name,_playerUID];};

_exitReason = [_this,"changeCode",_pos,_clientKey,_PlayerUID,_player] call server_verifySender;
if (_exitReason != "") exitWith {diag_log _exitReason};

_weapons = getWeaponCargo _object;
_magazines = getMagazineCargo _object;
_backpacks = getBackpackCargo _object;
_isZSC = false;
if (Z_singleCurrency) then {
	_isZSC = _typeOf in DZE_MoneyStorageClasses && _lockedClass in DZE_MoneyStorageClasses;
};	
if (_isZSC) then {_coins = _object getVariable ["cashMoney",0];};

[_objectID,_objectUID,_object] call server_deleteObjDirect;

_holder = _lockedClass createVehicle [0,0,0];
//_holder setDir _dir; // setdir is incompatible with setVectorDirAndUp and should not be used together on the same object https://community.bistudio.com/wiki/setVectorDirAndUp
_holder setVariable ["memDir",_dir,true];
_holder setVectorDirAndUp _vector;
_holder setPosATL _pos;
_holder setVariable ["CharacterID",_characterID,true];
_holder setVariable ["OEMPos",_pos,true];

if (DZE_permanentPlot) then {
	_ownerPUID = if (_charID == "0000" || _charID == "10000") then {_playerUID} else {_ownerID};
	_worldSpace = [_dir,_pos,_ownerPUID,_vector];
	_holder setVariable ["ownerPUID",_ownerPUID,true];
} else {
	_worldSpace = [_dir,_pos];
};

if (_isZSC) then {_holder setVariable ["cashMoney",_coins,true];};

_objectUID = _worldSpace call dayz_objectUID2;
_holder setVariable ["ObjectUID",_objectUID,true];

deleteVehicle _object;

_inventory = [_weapons,_magazines,_backpacks];
_holder setVariable ["WeaponCargo",_weapons,false];
_holder setVariable ["MagazineCargo",_magazines,false];
_holder setVariable ["BackpackCargo",_backpacks,false];

[_characterID,_holder,_worldSpace,_inventory,_player,_clientKey] call server_publishObj;

if (_isZSC) then {
	_key = format["CHILD:309:%1:",_objectUID] + str _inventory + ":" + str _coins + ":";
	_key call server_hiveWrite;
};

_message = format ["CHANGE CODE: %1 (%2) changed the code for %3 to %4 @%5 %6",_name,_playerUID,_lockedClass,_characterID,mapGridPosition _player,_pos];
diag_log _message;