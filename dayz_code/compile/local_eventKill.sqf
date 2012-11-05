//[unit, selectionName, damage, source, projectile]
//will only run when local to the created object
//record any key hits to the required selection
private["_zed","_killer","_kills","_array","_type"];

_array = 		_this select 0;
_zed = 			_array select 0;
_killer = 		_array select 1;
_type = 		_this select 1;

if (local _zed) then {
	_kills = _killer getVariable[_type,0];
	_killer setVariable[_type,(_kills + 1),true];
};