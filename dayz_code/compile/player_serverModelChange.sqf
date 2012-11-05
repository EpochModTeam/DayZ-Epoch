private["_int","_newModel","_wait","_playerID","_playerObj","_randomSpot","_publishTo","_primary","_secondary","_key","_result","_charID","_playerObj","_playerName","_finished","_spawnPos","_spawnDir","_items","_counter","_magazines","_weapons","_group","_backpack","_worldspace","_direction","_newUnit","_score","_position","_isNew","_inventory","_backpack","_medical","_survival","_stats","_state"];
//Set Variables
_playerID = _this select 0;
_playerObj = _this select 1;
_playerName = name _playerObj;
_worldspace = [];

waitUntil{allowConnection};

//Variables
_inventory =	[];
_backpack = 	[];
_items = 		[];
_magazines = 	[];
_weapons = 		[];
_medicalStats =	[];
_survival =		[0,0,0];
_tent =			[];
_state = 		[];
_direction =	0;
_newUnit =		objNull;

if (_playerID == "") then {
	_playerID = getPlayerUID _playerObj;
};

endLoadingScreen;
diag_log ("LOGIN ATTEMPT: " + str(_playerID) + " " + _playerName);

//Wait for HIVE to be free
waitUntil{!hiveInUse};
hiveInUse = true;
//Send request
_key = format["CHILD:101:%1:%2:%3:",_playerID,dayZ_instance,_playerName];
_primary = [_key,true] call fnc_motherrequest;
//Release HIVE
hiveInUse = false;

//Process request
_isNew = 		count _primary < 4; //_result select 1;
_charID = 		_primary select 2;
_randomSpot = false;

diag_log ("LOGIN OBJ: " + str(_playerObj) + " Type: " + (typeOf _playerObj) + " ID: " + str(_charID));

/* PROCESS */

if (!_isNew) then {
	//RETURNING CHARACTER		
	_inventory = 	_primary select 4;
	_backpack = 	_primary select 5;
	_survival =		_primary select 6;
	_model =		_primary select 7;
} else {
	_model =		_primary select 3;
	//Record initial inventory
	_config = (configFile >> "CfgSurvival" >> "Inventory" >> "Default");
	_mags = getArray (_config >> "magazines");
	_wpns = getArray (_config >> "weapons");
	_bcpk = getText (_config >> "backpack");
	_randomSpot = true;
	
	//Wait for HIVE to be free
	waitUntil{!hiveInUse};
	hiveInUse = true;
	//Send request
	_key = format["CHILD:203:%1:%2:%3:",_charID,[_wpns,_mags],[_bcpk,[],[]]];
	_result = [_key,false] call fnc_motherrequest;
	//Release HIVE
	hiveInUse = false;
};
diag_log ("LOGIN LOADED: " + str(_playerObj) + " Type: " + (typeOf _playerObj));

//Server publishes variable to clients and WAITS
_playerObj setVariable ["publish",[_charID,_inventory,_backpack,_survival,_isNew,dayz_versionNo,_model],true];