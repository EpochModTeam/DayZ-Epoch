#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_characterID","_minutes","_newObject","_playerID","_playerName","_key","_pos","_infected","_sourceName","_sourceWeapon","_distance","_message","_method","_suicide","_bodyName","_type"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]

_characterID = _this select 0;
_minutes = _this select 1;
_newObject = _this select 2;
_playerID = _this select 3;
_playerName = toString (_this select 4); //Sent as array to avoid publicVariable value restrictions
_infected = _this select 5;
_sourceName = toString (_this select 6);
_sourceWeapon = toString (_this select 7);
_distance = _this select 8;
_method = _this select 9;

//Mark player as dead so we bypass the ghost system
dayz_died set [count dayz_died, _playerID];

_newObject setVariable ["bodyName",_playerName,true];
_pos = getPosATL _newObject;

// force to follow the terrain slope in sched_corpses.sqf
//if (_pos select 2 < 0.1) then {_pos set [2,0];};
//_newObject setVariable ["deathPos",_pos];

if (typeName _minutes == "STRING") then {_minutes = parseNumber _minutes;};

if (_characterID != "0") then {
	_key = format["CHILD:202:%1:%2:%3:",_characterID,_minutes,_infected];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
};

#ifdef PLAYER_DEBUG
diag_log format ["Player UID#%3 CID#%4 %1 as %5 died at %2", 
	_newObject call fa_plr2str, _pos call fa_coor2str,
	_playerID, _characterID,
	typeOf _newObject
];
#endif

// DEATH MESSAGES
_suicide = ((_sourceName == _playerName) or (_method == "suicide"));

if (_method in ["explosion","melee","shot","shothead","shotheavy","suicide"] && !(_method == "explosion" && (_suicide or _sourceName == "unknown"))) then {
	if (_suicide) then {
		_message = ["suicide",_playerName];
	} else {
		if (_sourceWeapon == "") then {_sourceWeapon = "unknown weapon";};
		_message = ["killed",_playerName,_sourceName,_sourceWeapon,_distance];
		// Store death messages to allow viewing at message board in trader citys.
		PlayerDeaths set [count PlayerDeaths,[_playerName,_sourceName,_sourceWeapon,_distance,ServerCurrentTime]];
	};
} else {
	// No source name, distance or weapon needed: "%1 died from %2" str_death_%1 (see stringtable)
	// Possible methods: ["bled","combatlog","crash","crushed","dehyd","eject","fall","starve","sick","rad","runover","unknown","zombie"]
	_message = ["died",_playerName,_method];
};

if (_playerName != "unknown" or _sourceName != "unknown") then {
	if (toLower DZE_DeathMsgChat != "none" or DZE_DeathMsgRolling or DZE_DeathMsgDynamicText) then {
		PVDZE_deathMessage = _message;
		//Don't use regular PV here since JIP clients don't need it
		owner _newObject publicVariableClient "PVDZE_deathMessage"; //Send to dead player (not in playableUnits)
		{
			if !(getPlayerUID _x in ["",_playerID]) then {
				owner _x publicVariableClient "PVDZE_deathMessage";
			};
		} count playableUnits;
	};
	
	_type = _message select 0;
	_bodyName = _message select 1;
	
	if (_type == "killed" && _sourceName == "AI") then {
		_message set [2, (localize "STR_PLAYER_AI")];
	};
	
	_message = switch _type do {
		case "died": {format [localize "str_player_death_died", _bodyName, localize format["str_death_%1",_message select 2]]};
		case "killed": {format [localize "str_player_death_killed", _bodyName, _message select 2, _message select 3, _message select 4]};
		case "suicide": {format [localize "str_player_death_suicide", _bodyName]};
	};
	diag_log format["DeathMessage: %1",_message];
};

_newObject setDamage 1;
_newObject setOwner 0;
//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];