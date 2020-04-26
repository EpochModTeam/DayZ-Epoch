if (isServer || {player isKindOf "PZombie_VB"}) exitWith {};
/*
	Created exclusively for ArmA2:OA - DayZMod.
	Please request permission to use/alter from R4Z0R49.
*/
private["_holder","_type","_classname","_name"];

_holder = _this select 0;
_type = _this select 1;
_classname = _this select 2;

_name = getText (configFile >> _type >> _classname >> "displayName");

pickupInit = true;

if (_classname == "1Rnd_Arrow_Wood") then {
	[_holder,_type,_classname,_name] spawn actionMonitor;
} else {
	s_player_holderPickup = _holder addAction [format[(localize "str_init_take"),_name], "\z\addons\dayz_code\actions\pickupActions\object_pickup.sqf",[_type,_classname,_holder], 20, true, true];
	player reveal _holder;
	pickupInit = true;
};
