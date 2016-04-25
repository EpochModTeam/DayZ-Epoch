#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_characterID","_minutes","_newObject","_playerID","_key","_pos","_infected","_killerName","_killerWeapon","_distance","_message","_killerMethod"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]

_characterID = _this select 0;
_minutes = _this select 1;
_newObject = _this select 2;
_playerID = _this select 3;
_playerName = toString (_this select 4); //Sent as array to avoid publicVariable value restrictions
_infected = _this select 5;
_killerName = toString (_this select 6);
_killerWeapon = toString (_this select 7);
_distance = _this select 8;
_killerMethod = toString (_this select 9);

//Mark player as dead so we bypass the ghost system
dayz_died set [count dayz_died, _playerID];

_newObject setVariable ["processedDeath",diag_tickTime];
_newObject setVariable ["bodyName",_playerName,true];
_pos = getPosATL _newObject;

// force to follow the terrain slope in sched_corpses.sqf
if (_pos select 2 < 0.1) then {_pos set [2,0];};
_newObject setVariable ["deathPos",_pos];

if (typeName _minutes == "STRING") then {_minutes = parseNumber _minutes;};

if (_characterID != "0") then {
	_key = format["CHILD:202:%1:%2:%3:",_characterID,_minutes,_infected];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
};

#ifdef PLAYER_DEBUG
diag_log format ["Player UID#%3 CID#%4 %1 as %5 died at %2", 
	_newObject call fa_plr2str, _pos call fa_coor2str,
	getPlayerUID _newObject,_characterID,
	typeOf _newObject
];
#endif


// EPOCH DEATH MESSAGES
if (_killerWeapon == "Throw") then {_killerWeapon = "Grenade";};
if (_killerMethod in ["starve","dehyd","sick","bled","crushed","rad","zombie"]) then {
	if (_killerMethod == "zombie") then {
		_message = format[localize "str_player_death_zombie",_playerName];
	} else {
		_methodStr = localize format["str_death_%1",_killerMethod];
		_message = format[localize "str_player_death_message",_playerName,_methodStr];
	};
} else {
	if (_killerName == _playerName) then {
		_message = format[localize "str_player_death_suicide",_playerName];
	} else {
		_message = format[localize "str_player_death_killed",_playerName,_killerName,_killerWeapon,_distance];
	};
};

if ((_killerWeapon != "unknown weapon") or {_killerMethod != "unknown"} or {_killerName != "unknown"}) then {
	diag_log _message;	
	if (toLower DZE_DeathMsgChat != "none" or DZE_DeathMsgCutText or DZE_DeathMsgDynamicText) then {
		PVDZE_deathMessage = _message;
		publicVariable "PVDZE_deathMessage";
	};
	// Store death messages to allow viewing at message board in trader citys.
	PlayerDeaths set [count PlayerDeaths,[_playerName,_killerName,_killerWeapon,_distance,ServerCurrentTime]];
};


_newObject setDamage 1;
_newObject setOwner 0;
//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];