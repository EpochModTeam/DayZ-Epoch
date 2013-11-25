private ["_holder","_type","_classname","_name","_actionSet"];
_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;

// Exit if player zombie
if(player isKindOf "PZombie_VB") exitWith {};

_name = getText (configFile >> _type >> _classname >> "displayName");

_actionSet = _holder getVariable["actionSet", false];

if (!_actionSet) then {
	s_player_holderPickup = _holder addAction [format[(localize "STR_DAYZ_CODE_1"),_name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
	player reveal _holder;
	_holder setVariable["actionSet", true];
};