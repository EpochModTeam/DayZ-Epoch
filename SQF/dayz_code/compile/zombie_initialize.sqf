private ["_unit","_position"];
_unit = _this select 0;
if (isServer) then {
	_unit addEventHandler ["local", {_this call zombie_findOwner}];
} else {
	_position = getPosATL _unit;
	_unit addEventHandler ["local", {_this call eh_zombieInit}];
};