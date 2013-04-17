private["_pos"];
_pos = _this select 0;

{
	[_x, "gear"] call server_updateObject;
} forEach nearestObjects [_pos, dayz_updateObjects, 10];
