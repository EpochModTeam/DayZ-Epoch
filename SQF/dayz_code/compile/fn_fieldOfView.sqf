// This function checks to see if a potential zombie spawn position is in the field of view of near players.

private ["_isOk","_zPos","_fov","_safeDistance","_farDistance","_xasl","_eye","_ed","_deg"];

_isOk = true;
_zPos = +(_this select 0);
if (count _zPos < 3) exitWith {
	diag_log format["%1::fn_fieldOfView illegal pos %2", __FILE__, _zPos];
	false
};
_zPos = ATLtoASL _zPos;
_fov = _this select 1; // players half field of view
_safeDistance = _this select 2; // minimum distance. closer is wrong
_farDistance = _this select 3; // distance further we won't check
_zPos set [2, (_zPos select 2) + 1.7];
{
	_xasl = getPosASL _x;
	if (_xasl distance _zPos < _farDistance) then {
		if (_xasl distance _zPos < _safeDistance) then {
			_isOk = false;
		} else {
			_eye = eyePos _x; // ASL
			_ed = eyeDirection _x;
			_ed = (_ed select 0) atan2 (_ed select 1);
			_deg = [_xasl, _zPos] call BIS_fnc_dirTo;
			_deg = (_deg - _ed + 720) % 360;
			if (_deg > 180) then { _deg = _deg - 360; };
			if ((abs(_deg) < _fov) && {( // in right angle sector?
					(!(terrainIntersectASL [_zPos, _eye]) // no terrain between?
					&& {(!(lineIntersects [_zPos, _eye]))}) // and no object between?
				)}) then {
				_isOk = false;
			};
		};
	};
	if (!_isOk) exitWith {false};
} forEach playableUnits;

_isOk