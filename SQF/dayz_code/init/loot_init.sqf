private["_cfgCount","_config","_i","_itemChances","_itemCount","_weighted","_j","_weight","_l","_k","_type","_canZombie","_canLoot"];
dayz_CBLChances = [];
dayz_CBLBase = [];

_config = configFile >> "CfgBuildingLoot";
for "_i" from 0 to ((count _config) - 1) do {
	_classname = toLower(configName (_config select _i));
	_itemChances = [] + getArray (_config >> _classname >> "ItemChance");
	_itemChancesSmall = [] + getArray (_config >> _classname >> "ItemChanceSmall");
	_itemCount = count _itemChances;
	if (_itemCount > 0) then {
		if (dayz_CBLBase find _classname < 0) then {
			_weighted = [];
			_j = 0;
			for "_l" from 0 to ((count _itemChances) - 1) do {
				_weight = round ((_itemChances select _l) * 100);
				for "_k" from 0 to _weight - 1 do {
					_weighted set [_j + _k, _l];
				};
				_j = _j + _weight;
			};
			dayz_CBLChances set [count dayz_CBLChances, _weighted];		
			dayz_CBLBase set [count dayz_CBLBase, _classname];
		};
	} else {
		dayz_CBLChances set [count dayz_CBLChances, [0]];
		dayz_CBLBase set [count dayz_CBLBase, _classname];
	};
};

dayz_CLChances = [];
dayz_CLBase = [];
_config = configFile >> "cfgLoot";
for "_i" from 0 to ((count (_config)) - 1) do {
	_itemChances = (getArray (_config select _i)) select 1;
	_weighted = [];
	_j = 0;
	for "_l" from 0 to ((count _itemChances) - 1) do {
		_weight = round ((_itemChances select _l) * 100);
		for "_k" from 0 to _weight - 1 do {
			_weighted set [_j + _k, _l];
		};
		_j = _j + _weight;
	};
	dayz_CLBase set [count dayz_CLBase, configName (_config select _i)];
	dayz_CLChances set [count dayz_CLChances, _weighted];		
};

private["_i","_type","_config","_canZombie","_canLoot"];
dayz_ZombieBuildings = [];
dayz_LootBuildings = [];
for "_i" from 0 to (count (configFile >> "CfgBuildingLoot") - 1) do {
	_type = (configFile >> "CfgBuildingLoot") select _i;
	_canZombie = 	getNumber (_type >> "zombieChance") > 0;
	_canLoot = 		getNumber (_type >> "lootChance") > 0;
	if(_canZombie) then {
		if(!((configName _type) in dayz_ZombieBuildings)) then {
			dayz_ZombieBuildings set [count dayz_ZombieBuildings, configName _type];
		};
	};
	if(_canLoot) then {
		if(!((configName _type) in dayz_LootBuildings)) then {
			dayz_LootBuildings set [count dayz_LootBuildings, configName _type];
		};
	};
};
