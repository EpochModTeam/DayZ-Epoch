// This function checks to see if a potential zombie spawn position is in the field of view of near players.

local _zASL = +(_this select 0);	// zombie position ATL

if (count _zASL < 3) exitWith {
	//diag_log format["%1::fn_fieldOfView illegal pos %2", __FILE__, _zASL];
	false
};
_zASL set [2, ((ATLtoASL _zASL) select 2) + 1.7];	// approximate eyePos of zombie

local _isOk		= true;
local _fov		= _this select 1;	//  30 // players half field of view
local _safeDistance	= _this select 2;	//  10 // minimum distance
local _farDistance	= _this select 3;	// 200 // ignore anything beyond this distance

scopeName "exit";
{
	local _pASL = getPosASL _x;		// player position ASL
	local _dist = _pASL distance _zASL;

	if (_dist < _safeDistance) exitWith {_isOk = false};	// zombie is too close

	if (_dist < _farDistance) then {			// zombie is within range

		local _dir = eyeDirection _x;						// only x,y coords are useful here
		_dir = (((_dir select 0) atan2 (_dir select 1)) + 360) % 360;;		// convert vector to CW direction

		if ([_pASL, _dir, _fov * 2, _zASL] call fnc_inAngleSector) then {	// zombie within player's FOV
			local _eye = eyePos _x;

			if (!(lineIntersects [_eye, _zASL]) && {!(terrainIntersectASL [_eye, _zASL])}) then {	// clear line of sight from player to zombie
				_isOk = false;
				breakTo "exit";
			};
		};
	};
} count playableUnits;

_isOk
