private ["_playerID","_endMission","_0","_1","_timeleft","_doLoop","_key","_primary","_model","_inventory","_backpack","_survival","_CharacterCoins","_group","_playerCoins","_BankCoins","_hiveVer","_mags","_wpns","_bcpk","_config","_isInfected","_remaining","_playerObj","_playerName","_newPlayer","_isNew","_charID","_isHiveOk"];

#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

_playerID = _this select 0;
_playerObj = _this select 1;
_playerName = name _playerObj;
if (_playerName == '__SERVER__' || _playerID == '' || local player) exitWith {};

// Cancel any login until server_monitor terminates.
// This is mandatory since all vehicles must be spawned before the first players spawn on the map.
// Otherwise, all vehicle event handlers won't be created on players' client side.
if (isNil "sm_done") exitWith { diag_log ("Login cancelled, server is not ready. " + str(_playerObj)); };

_inventory = [];
_backpack = [];
_survival = [0,0,0];
_model = "";
_isInfected = 0;
_CharacterCoins = 0;
_group = [];
_playerCoins = 0;
_BankCoins = 0;

if (_playerID == "") then {
	_playerID = getPlayerUID _playerObj;
};

if ((_playerID == "") or (isNil "_playerID")) exitWith {
	diag_log ("LOGIN FAILED: Player [" + _playerName + "] has no login ID");
};

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
			dayz_activePlayers set [_forEachIndex, _0];
			dayz_activePlayers = dayz_activePlayers - [_0];
		} else {
			//if player is in died allow them passage.
			if (_playerID in dayz_died) then {
				dayz_died = dayz_died - [_playerID];
				dayz_ghostPlayers = dayz_ghostPlayers - [_0];
				dayz_activePlayers set [_forEachIndex, _0];
				dayz_activePlayers = dayz_activePlayers - [_0];
			} else {
				// Logoff time is not beyond ghost time and player didn't die
				_endMission = true;
			};
		};
	};
} forEach dayz_activePlayers;

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

if (isNull _playerObj or !isPlayer _playerObj) exitWith {
	diag_log ("LOGIN RESULT: Exiting, player object null: " + str(_playerObj));
};

if ((_primary select 0) == "ERROR") exitWith {
    diag_log format ["LOGIN RESULT: Exiting, failed to load _primary: %1 for player: %2 ",_primary,_playerID];
};

//Process request
_newPlayer = _primary select 1;
_isNew = count _primary < 10; //_result select 1;
_charID = _primary select 2;
//diag_log ("LOGIN RESULT: " + str(_primary));
/* PROCESS */
_hiveVer = 0;

if (!_isNew) then {
	//RETURNING CHARACTER
	_inventory = _primary select 4;
	_backpack = _primary select 5;
	_survival = _primary select 6;
	_CharacterCoins = _primary select 7;
	_model = _primary select 8;
	_group = _primary select 9;
	_playerCoins = _primary select 10;
	_BankCoins = _primary select 11;
	_hiveVer = _primary select 12;
	if !(_model in AllPlayers) then {_model = "Survivor2_DZ";};
} else {
	_isInfected = if (DZE_PlayerZed) then {_primary select 3} else {0};
	_model = _primary select 4;
	_group = _primary select 5;
	_playerCoins = _primary select 6;
	_BankCoins = _primary select 7;
	_hiveVer = _primary select 8;	
	if (isNil "_model") then {
		_model = "Survivor2_DZ";
	} else {
		if (_model == "") then {_model = "Survivor2_DZ";};
	};
	
	//Record initial inventory only if not player zombie 
	if (_isInfected != 1) then {
		_config = configFile >> "CfgSurvival" >> "Inventory" >> "Default";
		_mags = getArray (_config >> "magazines");
		_wpns = getArray (_config >> "weapons");
		_bcpk = getText (_config >> "backpack");
		if (!isNil "DefaultMagazines") then {_mags = DefaultMagazines;};
		if (!isNil "DefaultWeapons") then {_wpns = DefaultWeapons;};
		if (!isNil "DefaultBackpack") then {_bcpk = DefaultBackpack;};
	
		//Wait for HIVE to be free
		_key = format["CHILD:203:%1:%2:%3:",_charID,[_wpns,_mags],[_bcpk,[],[]]];
		_key call server_hiveWrite;
	};
};

_isHiveOk = (_hiveVer >= dayz_hiveVersionNo); //EDITED

/*
	if (count _inventory > 2 && {typeName (_inventory select 2) != "STRING"}) then {
		//Pre 1.0.6 character with Zupa 3.0 coins where dayz_onBack should be. Wipe coins and log playerID and amount to RPT.
		diag_log format["%1 - Updating pre 1.0.6 character inventory to add dayz_onBack. Coins have been wiped for PlayerID: %2  PreviousCoins:%3",__FILE__,_playerID,(_inventory select 2)];
		_inventory set [2,""];
	};
*/

PVCDZ_plr_Login = [_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer,_isInfected,_group,_CharacterCoins,_playerCoins,_BankCoins];
(owner _playerObj) publicVariableClient "PVCDZ_plr_Login";

//Make player wait until ghost timer is up.
if (_endMission) exitwith {
	_remaining = dayz_ghostTimer - _timeleft;
	
	//Log For GhostMode
	diag_log format["INFO - Player:%1(UID:%2/CID%3) Status: LOGIN CANCELLED, GHOSTMODE. Time remianing: %4",_playerName,_playerID,_charID,_remaining];

	PVCDZ_plr_Ghost = [_remaining];
	(owner _playerObj) publicVariableClient "PVCDZ_plr_Ghost";
};

//Sync chopped trees for JIP player
{_x setDamage 1} count dayz_choppedTrees;

//Sync active group invites to JIP player
if (count dayz_activeInvites > 0) then {
	(owner _playerObj) publicVariableClient "dayz_activeInvites";
};

//Record Player Login/LogOut
[_playerID,_charID,2,(_playerObj call fa_plr2str),((getPosATL _playerObj) call fa_coor2str)] call dayz_recordLogin;

PVCDZ_plr_PlayerAccepted = [_playerName,diag_ticktime];
(owner _playerObj) publicVariableClient "PVCDZ_plr_PlayerAccepted";