private["_pos"];
_pos = _this select 0;
#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"


{
	[_x, "gear"] call server_updateObject;
} forEach nearestObjects [_pos, DayZ_GearedObjects, 10];

