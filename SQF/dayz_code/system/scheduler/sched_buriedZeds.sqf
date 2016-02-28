// (c) facoptere@gmail.com, licensed to DayZMod for the community

sched_buriedZeds_init = {
	[] // it's _buriedZeds
};

sched_buriedZeds = {
	private ["_a","_c","_b","_node","_foot","_head","_z","_x","_pos", 
				"_config", "_zedPos", "_elevation","_buriedZeds", "_checkInsideBuilding"];

	_checkInsideBuilding = {
		private ["_building","_this","_point","_inside","_offset","_relPos","_boundingBox","_min","_max","_myX","_myY"];
	        _building = _this select 0;
	        _point = _this select 1;
	        _inside = false;
	        _offset = 1; // shrink building boundingbox by this length.

	        _relPos = _building worldToModel _point;
	        _boundingBox = boundingBox _building;

	        _min = _boundingBox select 0;
	        _max = _boundingBox select 1;
	        _myX = _relPos select 0;
	        _myY = _relPos select 1;

	        if ((_myX > (_min select 0)+_offset) and {(_myX < (_max select 0)-_offset)}) then {
				if ((_myY > (_min select 1)+_offset) and {(_myY < (_max select 1)-_offset)}) then {
					_inside = (1==1);
				};
	        };
	        _inside
	};

	_buriedZeds = _this;
	_c = count _buriedZeds;
	if (_c > 0) then { // give a zombie a little pitch if necessary
		_c = _c - 1;
		_node = _buriedZeds select _c;
		_foot = _node select 0;
		_head = _node select 1;
		_z = _node select 2;
		_elevation = _node select 3;
		if (lineIntersects [_head, _foot,_z]) then {
			_pos = getPosATL _z;
			_pos set [2, _elevation];
			_z setPosATL _pos;
			_z setVelocity [0,0,0.5];
			//diag_log  [ __FILE__, "node", _node, "moveto:", _pos ];
		};
		_buriedZeds resize _c;
	}
	else { // find potential buried Zeds
		{
			_z = _x;
			_pos = (getPosATL _z);
			if ((alive _z) AND {(_pos select 2 < 0.05)}) then {
				//_a = _a + 1;
				_b = nearestBuilding _z;
				if (!isNull _b) then {
					_config = configFile >> "CfgLoot" >> "Buildings" >> (typeOf _b) >> "zedPos";
					_zedPos = [] + getArray _config;
					if ((count _zedPos > 0) and {([_b, _pos] call _checkInsideBuilding)}) then {
						_elevation = (_b modelToWorld (_zedPos select 0)) select 2; // ATL
						_foot = ATLtoASL _pos;
						_foot set [ 2, (_foot select 2) + 0.1 ];
						_head = +(_foot);
						_head set [ 2, (_foot select 2) + 1.5 ];
						if (_elevation < _head select 2) then { // don't handle if lootpos is quite high inside the building.
							_buriedZeds set [ count _buriedZeds, [_foot, _head, _z, _elevation] ];
						};
					};
				};
			};
		} count ((getPosATL player) nearEntities ["zZombie_Base", 30]);
	};
	//diag_log format [ "alive+ground: %1, inbuilding: %2  plr in:%3 %4", _a, _c, [_b, getPosATL player] call _checkInsideBuilding, _b  ];

	_buriedZeds
};
