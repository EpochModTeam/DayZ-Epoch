private ["_config","_itemChances","_itemCount","_weighted","_j","_weight","_type","_canZombie","_canLoot","_classname","_itemChancesSmall","_itemCountSmall"];
dayz_CBLChances = [];
dayz_CBLBase = [];

dayzE_CBLSChances = [];
dayzE_CBLSBase = [];

_config = configFile >> "CfgBuildingLoot";
for "_i" from 0 to ((count _config) - 1) do {
	_classname = toLower(configName (_config select _i));
	_itemChances = [] + getArray (_config >> _classname >> "ItemChance");
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
	
	_itemChancesSmall = [] + getArray (_config >> _classname >> "ItemChanceSmall");
	_itemCountSmall = count _itemChancesSmall;
	if (_itemCountSmall > 0) then {
		if (dayzE_CBLSBase find _classname < 0) then {
			_weighted = [];
			_j = 0;
			for "_l" from 0 to ((count _itemChancesSmall) - 1) do {
				_weight = round ((_itemChancesSmall select _l) * 100);
				for "_k" from 0 to _weight - 1 do {
					_weighted set [_j + _k, _l];
				};
				_j = _j + _weight;
			};
			dayzE_CBLSChances set [count dayzE_CBLSChances, _weighted];		
			dayzE_CBLSBase set [count dayzE_CBLSBase, _classname];
		};
	} else {
		dayzE_CBLSChances set [count dayzE_CBLSChances, [0]];
		dayzE_CBLSBase set [count dayzE_CBLSBase, _classname];
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

dayzE_CLSChances = [];
dayzE_CLSBase = [];
_config = configFile >> "cfgLootSmall";
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
	dayzE_CLSBase set [count dayzE_CLSBase, configName (_config select _i)];
	dayzE_CLSChances set [count dayzE_CLSChances, _weighted];		
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
