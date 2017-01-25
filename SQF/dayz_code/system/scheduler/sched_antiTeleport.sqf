/*
	Anti-Teleport
	Created By Razor
	Refactored By Alby
	Refactored By facoptere@gmail.com
*/

sched_antiTP_init = {
	diag_log [ diag_ticktime, __FILE__, "Anti Teleport inited"];
	[true, [], 0, 0, objNull, respawn_west_original]
};

sched_antiTP = {
	private ["_lastpos","_lastheight","_lasttime","_lastVehicle","_debug","_curpos","_distance","_curtime","_difftime",
		"_curheight","_speed","_topSpeed","_terrainHeight","_safetyVehicle","_curPos"];

	_lastpos = _this select 1;
	_lastheight = _this select 2;
	_lasttime = _this select 3;
	_lastVehicle = _this select 4;
	_debug = _this select 5;

	if (typeName player == "OBJECT" && {(player in playableUnits) && (alive player)}) then {
		if (count _lastpos != 3) then {
			_lastpos = getPosATL (vehicle player);
			_lastheight = (ATLtoASL _lastpos) select 2;
			_lasttime = diag_ticktime;
			_lastVehicle = vehicle player;
		};
		_curpos = getPosATL (vehicle player);
		_distance = _lastpos distance _curpos;
		_curtime = diag_ticktime;
		_difftime = _curtime - _lasttime;

		if ((_distance > 10) OR {(_difftime > 1)}) then {
			_curheight = (ATLtoASL _curpos) select 2;
			_speed = _distance / _difftime;
			_topSpeed = 10;

			if (vehicle player != player) then {
				_topSpeed = (getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed")) min 500;
			};

			_terrainHeight = getTerrainHeightASL [_curpos select 0, _curpos select 1];
			_safetyVehicle = vehicle player;

			if (_lastVehicle == vehicle player) then {
				if ((_speed > _topSpeed) && (alive player) && ((driver (vehicle player) == player) or (isNull (driver (vehicle player)))) && (_debug distance _lastpos > 3000) && !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1))) then {
					(vehicle player) setposATL  _lastpos;
					PVDZ_sec_atp = toArray (format["TELEPORT REVERT for player UID#%1 from %2 to %3, %4 meters, now at %5", getPlayerUID player, _lastpos, _curPos, round(_lastpos distance _curpos), getPosATL player]);
					publicVariableServer "PVDZ_sec_atp";
				} else {
					_lastpos = _curpos;
					_lastheight = _curheight;
				};
				_lasttime = _curtime;
			};

			if (_safetyVehicle == vehicle player) then {
				_lastVehicle = vehicle player;
			};
		};
	};

	["", _lastpos, _lastheight, _lasttime, _lastVehicle, _debug]
};
 