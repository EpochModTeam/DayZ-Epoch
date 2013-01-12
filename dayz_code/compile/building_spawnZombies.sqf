private["_obj","_type","_config","_canLoot","_originalPos","_unitTypes","_min","_max","_num","_clean","_positions","_zombieChance","_rnd","_iPos","_nearBy","_nearByPlayer"];_obj = 			_this select 0;
_obj = _this select 0;
_type = 		typeOf _obj;
_config = 		configFile >> "CfgBuildingLoot" >> _type;
_canLoot = 		isClass (_config);
_originalPos = 	getPosATL _obj;

if (_canLoot) then {
//Get zombie class
	_unitTypes = 	getArray (_config >> "zombieClass");
	_min = 			getNumber (_config >> "maxRoaming");
	_max = 			getNumber (_config >> "minRoaming");
//Walking Zombies
	_num = round(random _max) max _min;
	_config = 		configFile >> "CfgBuildingLoot" >> _type;
//Get zombie class
	_zombieChance =	getNumber (_config >> "zombieChance");
	_rnd = random 0.5;
	_chance =	round(random 20);

	//if (_rnd < _zombieChance) then {
	if ((_chance % 2) == 0) then {
	
	_noPlayerNear = (count ((getPosATL _obj) nearEntities ["CAManBase",30])) == 0;
	
	if (_noPlayerNear) then {
	
		_position = _obj buildingExit 0;
		if ((_position select 0) == 0) then {
			_position = getPosATL _obj;
		};
	
	//diag_log ("Class: " + _type + " / Zombies: " + str(_unitTypes) + " / Walking: " + str(_num));
		for "_i" from 1 to _num do
		{
				[_position,_unitTypes] call zombie_generate;
		};
		
	};
};

	//Add Internal Zombies
	_clean = {alive _x} count ((getPosATL _obj) nearEntities ["zZombie_Base",(sizeOf _type)]) == 0;
	if (_clean) then {
		_positions =	getArray (_config >> "lootPos");
		_zombieChance =	getNumber (_config >> "zombieChance");
		//diag_log format["Building: %1 / Positions: %2 / Chance: %3",_type,_positions,_zombieChance];
		{
			_rnd = random 1;
			if (_rnd < _zombieChance) then {
				_iPos = _obj modelToWorld _x;
				
				_nearBy = {alive _x} count nearestObjects [_iPos , ["zZombie_Base"],3] > 0;
				_nearByPlayer = ({isPlayer _x} count (_iPos  nearEntities ["CAManBase",30])) > 0;
				//diag_log ("BUILDING: " + _type + " / " + str(_nearBy) + " / " + str(_nearByPlayer));
				
				if (!_nearByPlayer and !_nearBy) then {
					[_iPos,_unitTypes] call zombie_generate;
				};
			};
		} forEach _positions;
	};
	dayz_buildingMonitor set [count dayz_buildingMonitor,_obj];
};