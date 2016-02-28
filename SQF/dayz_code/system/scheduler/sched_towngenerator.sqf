// (c) facoptere@gmail.com, licensed to DayZMod for the community

#include "scheduler.hpp"

// look for cells around this radius
#define NEARBYSIZE 380

// how many objects to create per frame
#define CHUNKSIZE 10 

// do nothing if player position is close from previous position, distance in meter.
#define TRESHOLD 50

sched_townGenerator_init = {
	private ["_maxX","_maxY","_townarray","_objectarray","_i","_object","_j","_position","_y","_type","_dir",
		"_onFire","_index","_cell", "_x","_farFromCenter"];

	sched_tg_state = -1;
	sched_tg_follow = {player}; //use some code here, could be useful for GCAM to change the character to follow
	sched_tg_newActive = [];
	sched_tg_currentActive = [];
	sched_tg_var1 = 0;
	sched_tg_var2 = 0;
	sched_tg_grid = [];
	sched_tg_grid resize 4096;
	sched_tg_minX=50000;
	sched_tg_minY=50000;
	sched_tg_ready=false;
	sched_tg_pos=getMarkerpos "respawn_west";
	_maxX=-50000;
	_maxY=-50000;
	_townarray = configFile >> "CfgTownGeneratorChernarus";
	// Compute the area size
	for "_i" from (count _townarray)-1 to 0 step -1 do {
		_objectarray = (_townarray select _i);
		for "_j" from ((count _objectarray) - 1) to 0 step -1 do {
			_object = _objectarray select _j;
			if (isClass(_object)) then {
				_position = [] + getArray (_object >> "position");
				_x = _position select 0;
				_y = _position select 1;
				sched_tg_minX = sched_tg_minX min _x;
				sched_tg_minY = sched_tg_minY min _y;
				_maxX = _maxX max _x;
				_maxY = _maxY max _y;
			};
		};
	};
	sched_tg_minX = floor sched_tg_minX;
	sched_tg_minY = floor sched_tg_minY;
	sched_tg_cellX = ceil((_maxX - sched_tg_minX) / 64);
	sched_tg_cellY = ceil((_maxY - sched_tg_minY) / 64);
	// Building the 4096 matrix...
	for "_i" from (count _townarray)-1 to 0 step -1 do {
		_objectarray = (_townarray select _i);
		for "_j" from (count _objectarray) - 1 to 0 step -1 do {
			_object = _objectarray select _j;
			if (isClass(_object)) then {
				_position = [] + getArray (_object >> "position");
				_type = getText (_object >> "type");
				_dir = getNumber (_object >> "direction");
				//_onFire = getNumber (_object >> "onFire");
				_x = _position select 0;
				_y = _position select 1;
				_index = floor((_x - sched_tg_minX) / sched_tg_cellX) + floor((_y - sched_tg_minY) / sched_tg_cellY) * 64;
				_farFromCenter = [0.5,0.5,0] distance [((_x - sched_tg_minX) / sched_tg_cellX) % 1, ((_y - sched_tg_minY) / sched_tg_cellY) % 1, 0];
				_cell = sched_tg_grid select _index;
				if (isNil "_cell") then { _cell = []; sched_tg_grid set [ _index, _cell]; };
				if (_farFromCenter > 0.6) then { // put objects far from cell center at the beginning of the array of object
					_cell = [[ objNull, _type, _position, _dir/*, _onFire*/ ]] + _cell;
				}
				else {
					_cell set [ count _cell, [ objNull, _type, _position, _dir/*, _onFire*/ ] ];
				}
			};
		};
	};

	objNull
};

sched_townGenerator_ready = {
	HIDE_FSM_VARS
	private "_character";
	_character = if (serverCommandAvailable "#kick") then { call sched_tg_follow } else { player };
	((!isNil "sched_tg_state") AND {(sched_tg_state == 2)}) AND ({sched_tg_pos distance visiblePositionASL _character <= TRESHOLD})
};

sched_townGenerator = {
	HIDE_FSM_VARS
	private ["_character","_position","_y","_velocity","_iy","_i","_j","_jx",
		"_index","_cell","_imax","_object","_onFire", "_x"];

	switch true do {
		case (sched_tg_state == 0): { // look for new cells to show and old cells to hide
				_character = if (serverCommandAvailable "#kick") then { call sched_tg_follow } else { player };
				_position = visiblePositionASL _character;
				if ((_position distance sched_tg_pos > TRESHOLD) /*AND {(_position select 0 > -NEARBYSIZE)}*/) then {
					sched_tg_pos = _position;
					_x = _position select 0;
					_y = _position select 1;
					// shift position to 1 second in the future:
					_velocity = velocity vehicle _character;
					_x = _x + (_velocity select 0);
					_y = _y + (_velocity select 1);
					sched_tg_newActive resize 0;
					for "_i" from (_y+NEARBYSIZE) to (_y-NEARBYSIZE) step -sched_tg_cellY do { 
						_iy = floor((_i - sched_tg_minY) / sched_tg_cellY);
						if ((_iy >= 0) AND {(_iy < 64)}) then {
							for "_j" from (_x-NEARBYSIZE) to (_x+NEARBYSIZE) step sched_tg_cellX do {
								//diag_log format [ "%1:  x y _i _j %1 %2 %3 %4", __FILE__, _x, _y, _i, _j ];
								_jx = floor((_j - sched_tg_minX) / sched_tg_cellX);
								if ((_jx >= 0) AND {(_jx < 64)}) then {
									if (abs((_j-_x)*(_i-_y)) < NEARBYSIZE * NEARBYSIZE) then {
										_index = _jx + _iy * 64;
										//diag_log format [ "%1:                            -> index=%2", __FILE__, _index ];
										_cell = sched_tg_grid select _index;
										if ((!isNil "_cell") AND {!(_index IN sched_tg_newActive)}) then {
											sched_tg_newActive set [ count sched_tg_newActive, _index ];
										};
									};
								};
							};
						};
					};
					sched_tg_state = 1;
					sched_tg_ready = false;
					sched_tg_var1 = 0;
					//sched_tg_var2 = 0;
					//sched_tg_fps = diag_fpsmin;
					//sched_tg_newSpawned = 0;
					//sched_tg_newTextureSpawned = 0;
				};
			};
		case (sched_tg_state == 1): { // show new cells, per shunk of CHUNKSIZE objects
				if (sched_tg_var1 >= count sched_tg_newActive) then {
					sched_tg_state = 2;
					sched_tg_ready = true;
					sched_tg_var1 = 0;
					sched_tg_var2 = 0;
					sched_tg_deleted = 0;
				}
				else {
					_index = -1;
					// don't wait to next frame to find a new cell to show
					while {sched_tg_var1 < count sched_tg_newActive} do {
						_index = sched_tg_newActive select sched_tg_var1;
						if !(_index IN sched_tg_currentActive) exitWith {};
						sched_tg_var1 = sched_tg_var1 +1;
						_index = -1;
						//sched_tg_var2 = 0;
					};
					if (_index >= 0) then {
						// create objects from cell index _index
						_cell = sched_tg_grid select _index;
						_imax = (count _cell) min (sched_tg_var2 + CHUNKSIZE);
						//diag_log format ["%1: spawn cell #%2, %4 objects from #%3", __FILE__, _index, sched_tg_var2, _imax-sched_tg_var2 ];
						for "_i" from sched_tg_var2 to _imax-1 do {
							_x = _cell select _i;
							//sched_tg_newSpawned = sched_tg_newSpawned + 1;
							if ("" != (_x select 1)) then {
								_object = (_x select 1) createVehicleLocal [0,0,0];
								_position = _x select 2;
								_object setDir (_x select 3);
								_object setPos [_position select 0,_position select 1,0];
								_object setPosATL _position;
								_object allowDamage false;
								//_onFire ...
								_object setVariable ["", true]; // SV used by player_spawnCheck, exists if object is local
								_x set [ 0, _object ]; // object reference for faster delete
							};
						};
						sched_tg_var2 = _imax;
						if (_imax == count _cell) then {
							sched_tg_var1 = sched_tg_var1 +1;
							sched_tg_var2 = 0;
						};
					};
				};
			};	
		case (sched_tg_state == 2): { // hide whole cells
				if (sched_tg_var1 >= count sched_tg_currentActive) then {
					sched_tg_currentActive = +(sched_tg_newActive);
					sched_tg_state = 0;
					sched_tg_var1 = 0;
	// 				if ((sched_tg_newSpawned > 0) or (diag_fpsmin < 10)) then {
	// 					diag_log format [ "%1: spawned:%2 newTexture:%3 deleted:%4  fps: %5 -> %6%7", __FILE__,
	// 						sched_tg_newSpawned, sched_tg_newTextureSpawned, sched_tg_deleted, sched_tg_fps, diag_fpsmin, if (diag_fpsmin < 10) then {"!! <<<<<<<<<<<<<<<<<<<"} else {""} ];
	// 				};
				}
				else {
					_index = -1;
					// don't wait to next frame to find a new cell to hide
					while {sched_tg_var1 < count sched_tg_currentActive} do {
						_index = sched_tg_currentActive select sched_tg_var1;
						if !(_index IN sched_tg_newActive) exitWith {};
						sched_tg_var1 = sched_tg_var1 +1;
						_index = -1;
						//sched_tg_var2 = 0;
					};
					if (_index >= 0) then {
						//diag_log format ["%1: despawn cell #%2", __FILE__, _index ];
						// delete objects from cell index _x
						{
							deleteVehicle (_x select 0);
							_x set [ 0, objNull ];
							sched_tg_deleted = sched_tg_deleted +1;
						} count (sched_tg_grid select _index);
						//sched_tg_currentActive = sched_tg_currentActive - [_x];
					};
					sched_tg_var1 = sched_tg_var1 +1;
				};
			};
		default { // -1
			//diag_log [ diag_tickTime, __FILE__, "waiting for plantSpawner" ];
			if ((!isNil "dayz_plantSpawner_done") and {(dayz_plantSpawner_done == 2)}) then {
					sched_tg_state = 0; // ready to start the loop
			};

		};
	}; // switch
	//diag_log format ["%1: state:%2 cellWidth:%3 cellHeight:%4 var1:%5 var2:%6 currentActive:%7 newActive:%8", __FILE__,
	//	sched_tg_state, sched_tg_cellX, sched_tg_cellY, sched_tg_var1, sched_tg_var2, sched_tg_currentActive, sched_tg_newActive ];

	objNull
};
