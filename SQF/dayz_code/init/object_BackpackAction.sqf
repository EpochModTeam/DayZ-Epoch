if (player isKindOf "PZombie_VB") exitWith {};
_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;

_name = getText (configFile >> _type >> _classname >> "displayName");

if ((!isNil "_holder") and {(!isNull _holder)}) then {
	_actionSet = _holder getVariable["actionSet", false];

	if ((isNil "_actionSet") or {(!_actionSet)}) then {
		s_player_holderPickup = _holder addAction [format [localize "str_init_take", _name], "\z\addons\dayz_code\actions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
		player reveal _holder;
		_holder setVariable["actionSet", true];
	};
};