private ["_object","_version","_PID"];

_object = _this select 0;
_version = productVersion select 3;
if (DayZ_UseSteamID) then {
	_PID = GetPlayerUID _object;
} else {
	if (_version >= 125548) then {
		_PID = call (compile "GetPlayerUIDOld _object");
	} else {
		_PID = GetPlayerUID _object;
		diag_log format["Your game version, %1, is less than the required for the old UID system; using Steam ID system instead. Update to 1.63.125548 (or latest steam beta)", _version];
	};
};

_PID