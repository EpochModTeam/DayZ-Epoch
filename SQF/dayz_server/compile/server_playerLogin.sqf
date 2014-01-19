private ["_isInfected","_doLoop","_hiveVer","_isHiveOk","_playerID","_playerObj","_primary","_key","_charID","_playerName","_backpack","_isNew","_inventory","_survival","_model","_mags","_wpns","_bcpk","_config","_newPlayer"];

#ifdef DZE_SERVER_DEBUG
diag_log ("STARTING LOGIN: " + str(_this));
#endif

_playerID = _this select 0;
_playerObj = _this select 1;
_playerName = name _playerObj;

if (_playerName == '__SERVER__' || _playerID == '' || local player) exitWith {};

if (isNil "sm_done") exitWith { 
#ifdef DZE_SERVER_DEBUG
	diag_log ("Login cancelled, server is not ready. " + str(_playerObj)); 
#endif
};

if (count _this > 2) then {
	dayz_players = dayz_players - [_this select 2];
};

//Variables
_inventory =	[];
_backpack = 	[];
_survival =		[0,0,0];
_isInfected =   0;
_model =		"";

if (_playerID == "") then {
	_playerID = getPlayerUID _playerObj;
};

if ((_playerID == "") or (isNil "_playerID")) exitWith {
#ifdef DZE_SERVER_DEBUG
	diag_log ("LOGIN FAILED: Player [" + _playerName + "] has no login ID");
#endif
};

#ifdef DZE_SERVER_DEBUG
diag_log ("LOGIN ATTEMPT: " + str(_playerID) + " " + _playerName);
#endif

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

dayzPlayerLogin = [_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model,_isHiveOk,_newPlayer,_isInfected];
(owner _playerObj) publicVariableClient "dayzPlayerLogin";
