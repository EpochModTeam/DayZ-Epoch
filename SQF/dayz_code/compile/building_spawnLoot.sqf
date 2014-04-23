/*
        Created exclusively for ArmA2:OA - DayZMod
        Please request permission to use/alter/distribute from project leader (R4Z0R49)
		Modified for DayZ Epoch by [VB]AWOL vbawol@veteranbastards.com.
*/
private ["_lootChance"];
_obj = _this;

// lower case to prevent issues with differing case for buildings from map to map.
_type = toLower(typeOf _obj);

_config = 		configFile >> "CfgBuildingLoot" >> _type;
if (DZE_MissionLootTable) then {
	_config = missionConfigFile >> "CfgBuildingLoot" >> _type;
};

_pos = [] + getArray (_config >> "lootPos");
_itemTypes = [] + getArray (_config >> "lootType");
_lootChance = getNumber (_config >> "lootChance");

//_countPositions = count _pos;
_qty = 0; // effective quantity of spawned weaponholder
_lootSpawnBias = 67; //67 between 50 and 100. The lower it is, the lower chance some of the lootpiles will spawn


// shuffles an array
// parameters: array
// example: _myrandomarray = _myNormalArray call _ShuffleArray;
_ShuffleArray = {
	private ["_ar","_rand_array","_rand"];
	_ar = _this;
	_rand_array = [];
	while {count _ar > 0} do {
		_rand = (count _ar);
		_rand = floor (random _rand);
		_rand_array set [count _rand_array, _ar select _rand];
		_ar set [_rand, "randarray_del"];
		_ar = _ar - ["randarray_del"];
	};
	_rand_array;
};
_positions = _pos call _ShuffleArray;

// bias for this building. The lower it is, the lower chance some of the lootpiles will spawn
_bias = 50 max _lootSpawnBias;
_bias = 100 min _bias;
_bias = (_bias + random(100 - _bias)) / 100;
//diag_log(format["BIAS:%1 LOOTCHANCE:%2", _bias, _lootChance]);

{
	if (count _x == 3) then {
		_rnd = (random 1) / _bias;
		_iPos = _obj modelToWorld _x;
		_nearBy = nearestObjects [_iPos, ["ReammoBox"], 2];

		if (count _nearBy > 0) then {
			_lootChance = _lootChance + 0.05;
		};

		if (dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders) then {
			if (_rnd <= _lootChance) then {
				if (count _nearBy == 0) then {
					_index = dayz_CBLBase find _type;
					_weights = dayz_CBLChances select _index;
					_cntWeights = count _weights;
					_index = floor(random _cntWeights);
					_index = _weights select _index;
					_itemType = _itemTypes select _index;
					[_itemType select 0, _itemType select 1 , _iPos, 0.0] call spawn_loot;
	//				diag_log (format["SpawnLoot: Pos: %1, LootType: %2/%3,",_iPos,_itemType select 0,_itemType select 1]);
					dayz_currentWeaponHolders = dayz_currentWeaponHolders +1;
					//loclout system
					_obj setVariable ["looted",diag_tickTime + dayz_tickTimeOffset];
				};
			};
		};
	};
} forEach _positions;

// small loot
_posSmall =	 [] + getArray (_config >> "lootPosSmall");
_itemTypesSmall =	[] + getArray (_config >> "itemTypeSmall");

_positionsSmall = _posSmall call _ShuffleArray;

{
	if (count _x == 3) then {
		_rnd = (random 1) / _bias;
		_iPos = _obj modelToWorld _x;
		_nearBy = nearestObjects [_iPos, ["ReammoBox"], 2];

		if (count _nearBy > 0) then {
			_lootChance = _lootChance + 0.05;
		};

		if (dayz_currentWeaponHolders < dayz_maxMaxWeaponHolders) then {
			if (_rnd <= _lootChance) then {
				if (count _nearBy == 0) then {
					_index = dayzE_CBLSBase find _type;
					_weights = dayzE_CBLSChances select _index;
					_cntWeights = count _weights;
					_index = floor(random _cntWeights);
					_index = _weights select _index;
					_itemType = _itemTypesSmall select _index;
					[_itemType select 0, _itemType select 1 , _iPos, 0.0] call spawn_loot;
	//				diag_log (format["SpawnLoot: Pos: %1, LootType: %2/%3,",_iPos,_itemType select 0,_itemType select 1]);
					dayz_currentWeaponHolders = dayz_currentWeaponHolders +1;
					//loclout system
					_obj setVariable ["looted",diag_tickTime + dayz_tickTimeOffset];
				};
			};
		};
	};
} forEach _positionsSmall;