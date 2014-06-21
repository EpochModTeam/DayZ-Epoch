/*
Build Snapping - Extended v1.6

Idea and first code:
Maca

Reworked by: OtterNas3
01/11/2014
Last update 02/20/2014
*/

private ["_currentDistanceDiff","_distanceDiff","_search_range","_spot_positionA","_spot_positionB","_object", "_config", "_type", "_attachToPlayer", "_object_types", "_target_spots","_height_diff","_object_height","_target_height","_distance_diff","_object_pos","_target_pos","_best_distance_object","_best_height_object","_position", "_nearest_objects", "_closest_spot", "_closest_distance","_spot_marker","_target_object","_pos","_offsetDir","_possible_targets","_current_distance_diff","_current_height_diff","_spot_position", "_distance","_calculated_pos","_best_spot_position","_best_spot"];

_object = _this select 0;
_type = _this select 1;
_config = (missionConfigFile >> "SnapPoints" >> _type);
SnappingAttachedToPlayer = false;

ON_fnc_getSpotPosition = {
	private ["_closest_test_spot_position","_closest_test_distance","_closest_test_spot","_spot_test_position","_test_distance","_on_water","_test_object","_test_position"];
	_closest_test_spot_position = [];
	_test_object = _this select 0;
	_test_position = _this select 1;
	_on_water = _this select 2;
	_closest_test_distance = 0;
	{
		_spot_test_position = _test_object modelToWorld (_x select 0);
		_test_distance = _test_position distance _spot_test_position;
		if (_on_water) then {
			_spot_test_position = [(_spot_test_position) select 0, (_spot_test_position) select 1, (getPosASL _test_object) select 2];
		};
		if ((_closest_test_distance == 0 or _test_distance < _closest_test_distance or _test_distance == 0) && (SnappingDir == (_x select 1) || (_x select 1) == 90 || (_x select 1) == 270)) then {
			_closest_test_spot_position = _spot_test_position;
			_closest_test_distance = _test_distance;
			_closest_test_spot = _x;
		};
	} forEach _target_spots;
	[_closest_test_spot_position, _closest_test_spot];
};

_attachToPlayer = {
	if (!SnappingAttachedToPlayer) then {
		detach _this;
		_this attachTo [player, SnappingOffset];
		_this setDir SnappingDir;
		SnappingAttachedToPlayer = true;
	};
};

if (!(isClass _config)) then {
	cutText ["Snapping not available for this object.", "PLAIN DOWN"];
};

_object_types = getArray(_config >> "snap");
_target_spots = getArray(_config >> "points");

if ((count _target_spots) > 0) then {
	_currentDistanceDiff = 0;
	_search_range = 0;
	{
		_distanceDiff = [0,0,0] distance [(_x select 0) select 0, (_x select 0) select 1, 0];
		if ((_distanceDiff) > 0 && (_distanceDiff) > _currentDistanceDiff) then {
			_currentDistanceDiff = _distanceDiff;
			_search_range = ((_distanceDiff) + 2);
		};
	} forEach _target_spots;
} else {_search_range = 10;};

diag_log format["Building Object: %1", typeOf _object];

while {true} do {
	private ["_isWater"];
	_isWater = (surfaceIsWater position _object);
	if (isClass _config and SnappingEnabled) then {
		_position = player modelToWorld SnappingOffset;
		if (!_isWater) then {
			_position = [(_position) select 0, (_position) select 1, (getPosATL _object) select 2];
		} else {
			_position = [(_position) select 0, (_position) select 1, (getPosASL _object) select 2];
		};	

		_nearest_objects = nearestObjects [_position, _object_types, _search_range] - [_object];
		_current_distance_diff = 20;
		_best_distance_object = objNull;
		_target_object = objNull;
		_possible_targets = [];
		{
			if (_x != _object) then {
				_object_pos = _position;
				_spot_position_array = [];
				_closest_spot_position = [];
				_closest_spot = [];
				_spot_position_array = [_x, _object_pos, _isWater] call ON_fnc_getSpotPosition;
				_closest_spot_position = _spot_position_array select 0;
				_closest_spot = _spot_position_array select 1;
				_distance_diff = _closest_spot_position distance _object_pos;
				if (_distance_diff < _current_distance_diff && _distance_diff < _search_range) then {
					_current_distance_diff = _distance_diff;
					_best_distance_object = _x;
					_closest_spot_position_array = [_best_distance_object, _object_pos, _isWater] call ON_fnc_getSpotPosition;
					_best_spot_position = _closest_spot_position_array select 0;
					_best_spot = _closest_spot_position_array select 1;
				};
			};
		} forEach _nearest_objects;
		if (!isNull _best_distance_object) then {
			_possible_targets set [(count _possible_targets), _best_distance_object];
		};
		if (count _possible_targets > 0) then {
			_target_object = _possible_targets select 0;
		};
		if (!isNull _target_object) then {
			_closest_distance = 0;
			_distance = (_position distance _best_spot_position);
			if (_closest_distance == 0 or _distance < _closest_distance) then {
				_closest_distance = _distance;
			};
			if (_closest_distance <= 2) then {
				if (SnappingAttachedToPlayer) then {
					detach _object;
					if ((_best_spot select 1) != 90 && (_best_spot select 1) != 270) then {
						_offsetDir = (getDir _target_object) + (_best_spot select 1);
						if (SnappingDir == 180) then {
							_offsetDir = (getDir _target_object) + SnappingDir; 
						};
						if ((getDir player - getDir _target_object) >= 50 || (getDir player - getDir _target_object) <= -50) then {
							_offsetDir = _offsetDir - 180;
						};
					} else {
						_offsetDir = (getDir _target_object) + (_best_spot select 1);
						if ((_best_spot select 1) == 90) then {
							if (SnappingDir == 180) then {
								_offsetDir = _offsetDir + 180;
							};
						} else {
							_offsetDir = _offsetDir - 180;
							if (SnappingDir == 180) then {
								_offsetDir = _offsetDir + 180;
							};
						};
						if ((getDir player - getDir _target_object - 90)  >= 90 || (getDir player - getDir _target_object - 90) <= -90) then {
							_offsetDir = _offsetDir -180;
						};
					};
					_offsetDir = if (_offsetDir > 360) then { _offsetDir - 360 } else { _offsetDir };
					_offsetDir = if (_offsetDir < 0) then { _offsetDir + 360 } else { _offsetDir };
					_object setDir _offsetDir;
					
					SnappingAttachedToPlayer = false;
					SnappingResetPos = true;
				};	
				if (SnappingResetPos) then {
					if (_isWater) then {
						_object setPosASL _best_spot_position;
					} else {
						_object setPosATL _best_spot_position;
					};
					SnappingResetPos = false;
				};
			} else {
				_object call _attachToPlayer;
			};
		} else {
			_object call _attachToPlayer;
		};
	} else {
		_object call _attachToPlayer;		
	};
	sleep 1;
};