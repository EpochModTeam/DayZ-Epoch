///////////////////////////////////////////////////////////////////////////////////////////////////
//
//			Improve braking power of motorcycles and bicycles.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _bike	= _this select 0;
local _speed	= speed _bike;
local _slow	= 0.4;		// increase/decrease this value to adjust braking power. Must be > 0. Default: 0.4

while {player != (vehicle player)} do {
	if (DZE_isBraking && {_speed > 0}) then {
		local _vel = velocity _bike;
		local _dir = getDir _bike;

		_bike setVelocity [
			(_vel select 0) - (sin _dir * _slow),
			(_vel select 1) - (cos _dir * _slow),
			(_vel select 2)
		];

		DZE_isBraking = false;
	};
	uiSleep 0.01;
	_speed = speed _bike;
};
DZE_isOnBike = false;
