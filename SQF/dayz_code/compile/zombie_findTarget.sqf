private ["_group","_target","_targetMen","_targetDis","_c","_man","_manDis","_targets","_lead","_rnd","_assigned","_fires","_range"];
_group = _this;
_target = objNull;
_lead = leader _group;
_targetMen = [];
_targetDis = [];
_range = 500;

_assigned = _group getVariable ["targets",[]];
{
	_group reveal [_x,4];
} forEach _assigned;

//Find targets
_targets = _lead nearTargets _range;
{
	private["_obj","_dis"];
	_obj = _x select 4;
	_dis = _obj distance _lead;
	if (_obj isKindOf "Man" and ((speed _obj) < 15)) then {
		if (!(_obj isKindOf "zZombie_Base") and !(_obj in _targetMen)) then {
			//process man targets
			_targetMen set [count _targetMen,_obj];
			_targetDis set [count _targetDis,_dis];
		};
	};
} forEach _targets;

//Search for fires
if (count _targetMen == 0) then {
	_fires = nearestObjects [_lead,["Land_Fire","SmokeShell","Generator_DZ"],_range];
	{
		private["_dis"];
		_dis = _x distance _lead;
		if ((_dis < _range) and !(_x in _targetMen)) then {
			_rnd = random 1;
			if (_rnd < 0.5) then {
				if ((inflamed _x) or (_x isKindOf "SmokeShell")) then {
					_targetMen set [count _targetMen,_x];
					_targetDis set [count _targetDis,_dis];
				} else {
					if (_x isKindOf "Generator_DZ") then {
						if (alive _x and (_x getVariable ["GeneratorRunning", false])) then {
							_targetMen set [count _targetMen,_x];
							_targetDis set [count _targetDis,_dis];
						};
					};
				};
			};
		};
	} forEach _fires;
};

//Find best target
if (count _targetMen > 0) then {
	_man = _targetMen select 0;
	_manDis = _targetDis select 0;
	_c = 0;
	{
		private["_dis"];
		_dis =  _targetDis select _c;
		if (_dis < _manDis) then {
			_man = _x;
			_manDis = _dis;
		};
		if (_x isKindOf "SmokeShell") then {
			_man = _x;
			_manDis = _dis;
		};
		_c = _c + 1;
	} forEach _targetMen;
	_target = _man;
};

//Check if too far
if (_manDis > _range) then {
	_target = objNull;
};
_target;