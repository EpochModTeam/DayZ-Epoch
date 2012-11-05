private["_characterID","_minutes","_newObject","_playerID","_playerName","_playerID","_myGroup","_group"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_characterID = 	_this select 0;
_minutes =		_this select 1;
_newObject = 	_this select 2;
_playerID = 	_this select 3;
_playerName = 	_this select 4;

dayz_disco = dayz_disco - [_playerID];
_newObject setVariable["processedDeath",time];

/*
diag_log ("DW_DEBUG: (isnil _characterID): " + str(isnil "_characterID"));
if (isnil "_characterID") then {
diag_log ("DW_DEBUG: _newObject: " + str(_newObject));	
	};
*/

if !(isnil "_characterID") then {
	
if (_characterID != "0") then {
	_key = format["CHILD:202:%1:%2:",_characterID,_minutes];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
} else {
	deleteVehicle _newObject;
};

} else {
	deleteVehicle _newObject;
};

diag_log ("PDEATH: Player Died " + _playerID);

/*
_eh = [_newObject] spawn {
	_body = _this select 0;
	_method = _body getVariable["deathType","unknown"];
	_name = _body getVariable["bodyName","unknown"];
	waitUntil{!isPlayer _body;sleep 1};
	_body setVariable["deathType",_method,true];
	_body setVariable["bodyName",_name,true];
	diag_log ("PDEATH: Player Left Body " + _name);
};
*/
//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];