/*
	DayZ Epoch Ground Fog Effects by JasonTM
	Credit to Yac for the particle array definitions: http://www.armaholic.com/page.php?id=7122
*/

private ["_dist","_pos","_list","_option","_isOK","_i","_sp","_sl","_size","_col","_CC","_angle","_radius","_minRadius","_maxRadius","_type","_count","_num","_veh"];

_option = _this select 0;
_dist = _this select 1;
_height = -0.4;

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Ground fog started at %1",(diag_tickTime - DZE_WeatherDebugTime)];};

// Fog spawns on nearby buildings
while {!DZE_WeatherEndThread} do {
	_isOK = true;
	_veh = vehicle player;
	_pos = getPos _veh;
	if (_option in [3,4]) then {_isOK = count (nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal"],_dist]) > 0;};
	if (_veh != player && (speed _veh > 30 || {(_pos select 2) > 30})) then {_isOK = false;}; // Player is driving a vehicle or airborne.
	if (_isOK) then {
		_list = nearestObjects [_pos, ["House"], _dist];
		_count = 0;
		{
			if (_count == 15) exitWith {}; // Only spawn fog on the nearest 15 buildings.
			_type = typeOf _x;
			_maxRadius = sizeOf _type;
			// Skip small objects like dog houses. Add specific objects to blacklist like power lines and runway lights.
			if (_maxRadius > 10 && {!(_type in ["Land_sloup_vn_dratZ","Land_sloup_vn_drat","Land_sloup_vn","Land_NavigLight"])}) then {
				_pos = getPos _x;
				_minRadius = _maxRadius / 2.5;
				_num = round (_maxRadius * 1.25) min 75; // Adjust the number of ground fog spawns based on the size of the building.
				//diag_log text format ["DEBUG Number of fog particles to spawn: %1, for building type %2.",_num,_type];
				_i = 0;
				while {_i < _num} do {
					_radius = _minRadius + random (_maxRadius - _minRadius);
					_angle = random 360;
					_size = 3 + random 2;
					drop ["\ca\data\cl_basic" , "", "Billboard", 8 + random 1, 8 + random 1,  [(_pos select 0)+_radius*(sin(_angle)),(_pos select 1)+_radius*(cos(_angle)),_height],[0,0,0],5 , 0.2, 0.1568, 0,[_size], [[1,1,1,0.3],[1,1,1,.7],[1,1,1,.7],[1,1,1,.7],[1,1,1,.7],[1,1,1,.7],[1,1,1,.7],[1,1,1,0.3]], [0],0,0,"", "",""];
					_i = _i + 1;
				};
				_count = _count + 1;
			};
		} count _list;
	};
	uiSleep .5;
};

/*
// Fog spawns on player object
_height = -0.4;
_isOK = true;
_pvar = 50;

while {!DZE_WeatherEndThread} do {
	_i = 0;
	_sp = speed vehicle player;
	_pos = getPos vehicle player;
	if (_option in [3,4]) then {_isOK = count (nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal"],500]) > 0;}; // Count check of locations within 500 meters.};
	if (_sp < 25 && _isOK) then { // No fog if a player is in a moving vehicle or not near a city if "near locations" is enabled.
		_sl = [.001,.005] select (_sp < 3); // If the player is moving slowly, then sleep for longer between particle spawns.
		while {_i < 500} do {
			_pos = getPos vehicle player; // It's important to keep an accurate position on the player if he is running full speed.
			_size = 4 + random 2;
			_col = .7 + random .3;
			_CC=[_col,_col,_col,.3];
			drop ["\ca\data\cl_basic" , "", "Billboard", 5 + random 2,5 + random 2,  [(_pos select 0) - _pvar + random (_pvar * 2),(_pos select 1) - _pvar + random (_pvar * 2),random (_height)],[0,0,0],5 , 0.2, 0.1565, 0.001,[_size], [[_col,_col,_col,0],_CC,_CC,_CC,[_col,_col,_col,0]], [0],0,0,"", "",""];
			_i = _i + 1;
			uiSleep _sl;
		};
	};
	uiSleep 1;
};
*/

if !(isNil "DZE_WeatherDebugTime") then {diag_log format ["Ground fog ended at %1",(diag_tickTime - DZE_WeatherDebugTime)];};