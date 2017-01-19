private ["_bodyName","_root","_sourceName","_type","_weapon"];

_message = _this;
_type = _message select 0;
_bodyName = _message select 1;

_message = switch _type do {
	case "died": {format [localize "str_player_death_died",_bodyName,localize format["str_death_%1",_message select 2]]};
	case "killed": {
		_sourceName = _message select 2;
		_weapon = _message select 3;
		
		if (_sourceName == "AI") then {
			_sourceName = localize "STR_PLAYER_AI";
		};
		
		_root = switch true do {
			case (_weapon in ["PipeBomb","Mine","MineE"]): {"CfgMagazines"}; // isClass in both
			case (isClass (configFile >> "CfgWeapons" >> _weapon)): {"CfgWeapons"};
			case (isClass (configFile >> "CfgVehicles" >> _weapon)): {"CfgVehicles"};
			case (isClass (configFile >> "CfgMagazines" >> _weapon)): {"CfgMagazines"};
			default {""};
		};
		
		if (_root == "") then {
			_message set [5,""];
		} else {
			_message set [3,getText (configFile >> _root >> _weapon >> "displayName")];
			_message set [5,getText (configFile >> _root >> _weapon >> "picture")];
		};
		
		if (DZE_DeathMsgDynamicText) then {
			_message call dayz_killFeed;
		};
		
		format [localize "str_player_death_killed",_bodyName,_sourceName,_message select 3,_message select 4]
	};
	case "suicide": {format [localize "str_player_death_suicide",_bodyName]};
};

switch (toLower DZE_DeathMsgChat) do {
	// Sending from logic (FunctionsManager) or agent (zombie, animal, trader) object shows message without side i.e. "BLUFOR" or quotes
	case "global": {BIS_functions_mainscope globalChat _message;};
	case "side": {BIS_functions_mainscope sideChat _message;};
	case "system": {systemChat _message;};
};

if (DZE_DeathMsgRolling) then {
	_message call dayz_rollingMessages;
};

diag_log format["DeathMessage: %1",_message];