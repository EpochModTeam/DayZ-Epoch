// (c) facoptere@gmail.com, licensed to DayZMod for the community

sched_bloodStains_init = {
	[] // _bloodpool init
};

sched_bloodStains = {
	private ["_end","_lastpos","_stain", "_plpos"];

	_bloodpool = _this;
	_plpos = visiblePosition player; //ATL
	if (r_player_injured and {(dayz_bleedingeffect % 2 == 1)}) then {
		// add a fresh blood stain
		if (((vehicle player == player) and (!dayz_isSwimming)) AND {((_plpos select 2 < 0.3) AND {((getTerrainHeightASL _plpos) > 1.5)})}) then {
			_end = count _bloodpool -1;
			_lastpos = if (_end >= 0) then { getPosATL (_bloodpool select _end) } else { getMarkerpos "respawn_west" };
			if (_plpos distance _lastpos > 3) then { // don't repeat blood stains on the same spot
				_stain = createVehicle ["Blood_Trail_DZ", _plpos, [], 0, "CAN_COLLIDE"];
				//_stain setDir (direction player);
				_bloodpool set [ _end+1, _stain ];
				if (_end == 59) then {
					// remove the oldest blood stain, to limit total amount to 60 stains
					_stain = _bloodpool select 0;
					_bloodpool = _bloodpool - [_stain];
					deleteVehicle _stain;
				};
			};
		};
	}
	else { 
		// remove the oldest blood stain
		if (count _bloodpool > 0) then {
			_stain = _bloodpool select 0;
			_bloodpool = _bloodpool - [_stain];
			deleteVehicle _stain;
		};
	};

	_bloodpool
};