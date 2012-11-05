private["_pos","_objects"];
_pos = _this select 0;

{
	[_x, "gear"] call server_updateObject;
} forEach nearestObjects [_pos, ["Car", "Helicopter", "Motorcycle", "Ship", "TentStorage"], 10];
