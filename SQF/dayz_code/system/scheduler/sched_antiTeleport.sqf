/*
	Anti-Teleport
	Created By Razor
	Refactored By Alby
	Refactored By facoptere@gmail.com
*/

sched_antiTP_init = {
	if (DZE_schedDebug == 1) then {diag_log [ diag_ticktime, __FILE__, "Anti Teleport inited"];};
	[true, [], 0, 0, objNull, respawn_west_original]
};

sched_antiTP = {
	local _lastpos = _this select 1;
	local _lastheight = _this select 2;
	local _lasttime = _this select 3;
	local _lastVehicle = _this select 4;
	local _debug = _this select 5;

	if (typeName player == "OBJECT" && {(player in playableUnits) && (alive player)}) then {
		if (count _lastpos != 3) then {
			_lastpos = getPosATL (vehicle player);
			_lastheight = (ATLtoASL _lastpos) select 2;
			_lasttime = diag_ticktime;
			_lastVehicle = vehicle player;
		};
		local _curpos = getPosATL (vehicle player);
		local _distance = _lastpos distance _curpos;
		local _curtime = diag_ticktime;
		local _difftime = _curtime - _lasttime;

		if ((_distance > 10) OR {(_difftime > 1)}) then {
			local _curheight = (ATLtoASL _curpos) select 2;
			local _speed = _distance / _difftime;
			local _topSpeed = 10;

			if (vehicle player != player) then {
				_topSpeed = (getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed")) min 500;
			};

			local _terrainHeight = getTerrainHeightASL [_curpos select 0, _curpos select 1];
			local _safetyVehicle = vehicle player;

			if (_lastVehicle == vehicle player) then {
				if ((_speed > _topSpeed) && (alive player) && ((driver (vehicle player) == player) or (isNull (driver (vehicle player)))) && (_debug distance _lastpos > 3000) && !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1))) then {
					(vehicle player) setposATL  _lastpos;
					PVDZ_sec_atp = format["TELEPORT REVERT for play3r UID#%1 from %2 to %3, %4 meters", getPlayerUID player, mapGridPosition _lastpos, mapGridPosition _curPos, round(_lastpos distance _curpos)];
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
 