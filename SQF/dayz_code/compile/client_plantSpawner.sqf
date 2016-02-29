private ["_a","_b","_c","_plantcount","_roads","_road","_offset","_type","_angle","_i","_index", "_pos", "_forbid ", "_insideloop", "_ix", "_iy", "_rnd", "_maxperspot" ];


//diag_log [ diag_tickTime, __FILE__, "Waiting dependency..." ];

waitUntil { !isNil "PVCDZ_plr_plantSpawner" };
waitUntil { !isNil "sched_tg_grid" };
// avoid called twice (don't know why...)
waitUntil { isNil "dayz_plantSpawner_done" };
dayz_plantSpawner_done = 1;

_a = PVCDZ_plr_plantSpawner select 0;  // random generator for road segment to pick on map
_b = PVCDZ_plr_plantSpawner select 1;  // random generator for plant position around the road segment
_c = PVCDZ_plr_plantSpawner select 2;  // random generator for plant type 0..2 and plant orientation 0..360
_blacklist = PVCDZ_plr_plantSpawner select 3; 
_plantcount = 0;
_maxperspot = ceil (dayz_maxGlobalPlants / 2048 * 5);
[] spawn { sleep 90; dayz_plantSpawner_done = 2; }; // force dayz_plantSpawner_done to unlock player on login page
//diag_log [ diag_tickTime, __FILE__, "Starting plantmax/a/b/c/blacklist/_maxperspot: ", dayz_maxGlobalPlants, _a, _b, _c, _blacklist , _maxperspot];

_insideloop = {
	_rnd = _this select 2;  // a random number from _a PSRND
	_this set [2,0];
//	diag_log _this;
	_roads = _this nearRoads 100;
	for "_j" from _maxperspot min (count _roads) to 1 step -1 do {
		private [ "_cell", "_plantpos"];
		_offset = _b call psrnd;
		_type = _c call psrnd; // WARNING: call all these psrnd ouside any "if" statement. pseudo random must be exhausted the same way on all clients.
		_angle = _type select 1;
		_type = _type select 0;
		_rnd = _rnd + (_offset select 2); // add to another random number from _b PSRND
		_road = _roads select (_rnd mod (count _roads)); // take a random segment if several ones are available
		_this = getPosATL _road;
		_plantpos = [ (_this select 0) + (_offset select 0), (_this select 1) + (_offset select 1), 0 ];
		if ((!(isOnRoad _plantpos) 
			and {!(surfaceIsWater _plantpos)}) 
			and {( ((surfaceType _plantpos) in ["#CRGrass1","#CRGrass2","CRGrassW1"]) 
			and {(0 == count (nearestObjects [_plantpos, [], 3]))} )} ) then {
			_forbid = (1==0);
			{
				if ((_x distance _plantpos) < 3 ) exitWith { _forbid = (1==1); }; 
			} forEach _blacklist;
			// insert in NEW TOWN GENERATOR grid
			_ix = floor(((_plantpos select 0) - sched_tg_minX) / sched_tg_cellX);
			_ix = 0 max (63 min _ix);
			_iy = floor(((_plantpos select 1) - sched_tg_minY) / sched_tg_cellY);
			_iy = 0 max (63 min _iy);
			_index = _ix + _iy * 64;
			_cell = sched_tg_grid select _index;
			if (isNil "_cell") then { _cell = []; sched_tg_grid set [ _index, _cell]; };
			if (!_forbid) then { // don't spawn the plant because it has been gathered by another player
				_cell set [ count _cell, [ objNull, Dayz_plants select _type, _plantpos, _angle ] ]; //_plantpos set [2, 0.5];
				//diag_log [ diag_tickTime, __FILE__, "new plant at", _plantpos];
			};
			_cell set [ count _cell, [ objNull, "ClutterCutter_small_2_EP1", +(_plantpos), _angle ] ];//"Sign_sphere100cm_EP1"
			_plantcount = _plantcount + 1;
		};
		_roads = _roads - [_road];
		if (_plantcount >= dayz_maxGlobalPlants) exitWith {};
	};
};

for "_i" from 1 to 2048 do {
	_pos = _a call psrnd;
	_pos call _insideloop;	
	if (_plantcount >= dayz_maxGlobalPlants) exitWith {};
};
//diag_log [ diag_tickTime, __FILE__,"done! number/wanted", _plantcount, dayz_maxGlobalPlants ];

"PVDZ_objgather_Delete" addPublicVariableEventHandler {
	private ["_plantpos","_ix","_iy","_index","_cell","_nearest","_distance","_d","_entry", "_x"];

	_plantpos = (_this select 1);
	diag_log [ diag_tickTime, __FILE__, _this, _plantpos];
	_ix = floor(((_plantpos select 0) - sched_tg_minX) / sched_tg_cellX);
	_ix = 0 max (63 min _ix);
	_iy = floor(((_plantpos select 1) - sched_tg_minY) / sched_tg_cellY);
	_iy = 0 max (63 min _iy);
	_index = _ix + _iy * 64;
	_cell = sched_tg_grid select _index;
	if (!isNil "_cell") then {
		_nearest = -1;
		_distance = sched_tg_cellX;
		{
			if ((_x select 1) in Dayz_plants) then {
				_d = _plantpos distance (_x select 2);
				if (_d < _distance) then {
					_distance = _d;
					_nearest = _forEachIndex;
				};
			};
		} forEach _cell;
		diag_log [ "found... cellindex/objectindex/distance/this", _index, _nearest, _d, _this ];
		if (_distance < 1) then {
			_entry = _cell select _nearest;
			if (!isNull (_entry select 0)) then {
				deleteVehicle (_entry select 0);
				diag_log "plant object deleted";
				_entry set [0, objNull];
			};
			_entry set [1, ""]; // object won't spawn anymore
			diag_log "plant wont spawn anymore";
		};
	}
	else {
		diag_log [ "no plant found", _this];
	};
};	

dayz_plantSpawner_done = 2;

