private ["_isInfected","_doLoop","_hiveVer","_isHiveOk","_playerID","_playerObj","_primary","_key","_charID","_playerName","_backpack","_isNew","_inventory","_survival","_model","_mags","_wpns","_bcpk","_config","_newPlayer"];
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"
#ifdef DZE_SERVER_DEBUG
diag_log ("STARTING LOGIN: " + str(_this));
#endif

_playerID = _this select 0;
_playerObj = _this select 1;
_playerName = name _playerObj;
_worldspace = [];
if (_playerName == '__SERVER__' || _playerID == '' || local player) exitWith {};

if (isNil "sm_done") exitWith { 
#ifdef DZE_SERVER_DEBUG
	diag_log ("Login cancelled, server is not ready. " + str(_playerObj)); 
#endif
};
// Cancel any login until server_monitor terminates.
// This is mandatory since all vehicles must be spawned before the first players spawn on the map.
// Otherwise, all vehicle event handlers won't be created on players' client side.
if (isNil "sm_done") exitWith { diag_log ("Login cancelled, server is not ready. " + str(_playerObj)); };

if (count _this > 2) then {
	dayz_players = dayz_players - [_this select 2];
};

//Variables
_inventory =	[];
_backpack = 	[];
_items = 		[];
_magazines = 	[];
_weapons = 		[];
_medicalStats =	[];
_survival =		[0,0,0];
_isInfected =   0;
_tent =			[];
_state = 		[];
_direction =	0;
_model =		"";
_newUnit =		objNull;
if (_playerID == "") then {
	_playerID = [_playerObj] call FNC_GetPlayerUID;
};

if ((_playerID == "") || (isNil "_playerID")) exitWith {
#ifdef DZE_SERVER_DEBUG
	diag_log ("LOGIN FAILED: Player [" + _playerName + "] has no login ID");
#endif
};

#ifdef DZE_SERVER_DEBUG
diag_log ("LOGIN ATTEMPT: " + str(_playerID) + " " + _playerName);
#endif

_endMission = false;
_timeleft = 0;
{
	//if ((_playerID select _i) in activePlayers) exitWith { diag_log ("Login cancelled, player has logged out within the past 2 mins. " + str(_playerObj)); };
	_0 = _x select 0;
	_1 = _x select 1;
	_timeleft = diag_ticktime - _1;

	if (_playerID == _0) then {
		//If players last logoff is about the ghost timer remove player from ghost que.
		if ((_timeleft > dayz_ghostTimer) or (_timeleft < 0)) then {
			dayz_ghostPlayers = dayz_ghostPlayers - [_0];
			dayz_activePlayers set[_forEachIndex, _0];
			dayz_activePlayers = dayz_activePlayers - [_0];
		} else {
			//if player is in died allow them passage.
			if (_playerID in dayz_died) then {
				dayz_died = dayz_died - [_playerID];
				dayz_ghostPlayers = dayz_ghostPlayers - [_0];
				dayz_activePlayers set[_forEachIndex, _0];
				dayz_activePlayers = dayz_activePlayers - [_0];
			} else {
				// Logoff time is not beyond ghost time and player didn't die
				_endMission = true;
			};
		};
	};
}forEach dayz_activePlayers;

//Do Connection Attempt
_doLoop = 0;
while {_doLoop < 5} do {
	_key = format["CHILD:101:%1:%2:%3:",_playerID,dayZ_instance,_playerName];
	_primary = _key call server_hiveReadWrite;
	if (count _primary > 0) then {
		if ((_primary select 0) != "ERROR") then {
			_doLoop = 9;
		};
	};
	_doLoop = _doLoop + 1;
};

if (isNull _playerObj || !isPlayer _playerObj) exitWith {
#ifdef DZE_SERVER_DEBUG
	diag_log ("LOGIN RESULT: Exiting, player object null: " + str(_playerObj));
#endif
};

if ((_primary select 0) == "ERROR") exitWith {
#ifdef DZE_SERVER_DEBUG
    diag_log format ["LOGIN RESULT: Exiting, failed to load _primary: %1 for player: %2 ",_primary,_playerID];
#endif
};

//Process request
_newPlayer = 	_primary select 1;
_isNew = 		count _primary < 7; //_result select 1;
_charID = 		_primary select 2;
_randomSpot = false;
#ifdef DZE_SERVER_DEBUG
diag_log ("LOGIN RESULT: " + str(_primary));
#endif

/* PROCESS */
_hiveVer = 0;

if (!_isNew) then {
	//RETURNING CHARACTER		
	_inventory = 	_primary select 4;
	_backpack = 	_primary select 5;
	_survival =		_primary select 6;
	_model =		_primary select 7;
	_hiveVer =		_primary select 8;
	
	if (!(_model in AllPlayers)) then {
		_model = "Survivor2_DZ";
	};
	
} else {
	if (DZE_PlayerZed) then {
		_isInfected = _primary select 3;
	} else {
		_isInfected = 0;
	};
	_model =		_primary select 4;
	_hiveVer =		_primary select 5;
	
	if (isNil "_model") then {
		_model = "Survivor2_DZ";
	} else {
		if (_model == "") then {
			_model = "Survivor2_DZ";
		};
	};

	
	//Record initial inventory only if not player zombie 
	if(_isInfected != 1) then {
		_config = (configFile >> "CfgSurvival" >> "Inventory" >> "Default");
		_mags = getArray (_config >> "magazines");
		_wpns = getArray (_config >> "weapons");
		_bcpk = getText (_config >> "backpack");
		_randomSpot = true;
		if(!isNil "DefaultMagazines") then {
			_mags = DefaultMagazines;
		};
		if(!isNil "DefaultWeapons") then {
			_wpns = DefaultWeapons;
		};
		if(!isNil "DefaultBackpack") then {
			_bcpk = DefaultBackpack;
		};
		//_randomSpot = true;
	
		//Wait for HIVE to be free
		_key = format["CHILD:203:%1:%2:%3:",_charID,[_wpns,_mags],[_bcpk,[],[]]];
		_key call server_hiveWrite;
	};
};

#ifdef DZE_SERVER_DEBUG
diag_log ("LOGIN LOADED: " + str(_playerObj) + " Type: " + (typeOf _playerObj) + " at location: " + (getPosATL _playerObj));
#endif

_isHiveOk = false;
if (_hiveVer >= dayz_hiveVersionNo) then {
	_isHiveOk = true;
};

if (worldName == "chernarus") then {
	([4654,9595,0] nearestObject 145259) setDamage 1;
	([4654,9595,0] nearestObject 145260) setDamage 1;
};

PVCDZ_plr_Login = [_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer,_isInfected];
#ifdef DZE_SERVER_DEBUG
diag_log format["%1, %2, %3, %4, %5, %6, %7, %8, %9, %10",_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer,_isInfected];
#endif

(owner _playerObj) publicVariableClient "PVCDZ_plr_Login";

//Make player wait till ghost timer is up.
if (_endMission) exitwith {
	_remaining = dayz_ghostTimer - _timeleft;
	diag_log format["LOGIN CANCELLED: player: %1 is in ghost mode. Time remianing: %2 before login!!",_playerObj,_remaining];
	PVCDZ_plr_Ghost = [_remaining];
	(owner _playerObj) publicVariableClient "PVCDZ_plr_Ghost";
};

[_playerID,_charID,1] call dayz_recordLogin;

PVCDZ_plr_PlayerAccepted = [_playerName,diag_ticktime];
(owner _playerObj) publicVariableClient "PVCDZ_plr_PlayerAccepted";