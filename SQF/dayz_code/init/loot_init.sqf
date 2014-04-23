private ["_config","_classname","_itemChances","_itemCount","_weight","_type","_canZombie","_canLoot","_weighted","_j","_itemChancesSmall","_itemCountSmall"];
dayz_CBLChances = [];
dayz_CBLBase = [];

dayzE_CBLSChances = [];
dayzE_CBLSBase = [];

_config = [];
if (DZE_MissionLootTable) then {
	_config = missionConfigFile >> "CfgBuildingLoot";
} else {
	_config = configFile >> "CfgBuildingLoot";
};

for "_i" from 0 to ((count _config) - 1) do {
	_classname = toLower(configName (_config select _i));
	_itemChances = getArray (_config >> _classname >> "lootType");
	_itemCount = count _itemChances; 
	//diag_log format["Classname: %1, Array: %2, Amount: %3", _classname, _itemChances, _itemCount];

	if (_itemCount > 0) then {
		if ((dayz_CBLBase find _classname) < 0) then {
			_weighted = [];
			_j = 0;
			for "_l" from 0 to (_itemCount - 1) do {
			_weight = round (((_itemChances select _l) select 2) * 100);
				for "_k" from 0 to (_weight - 1) do
				{
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
			for "_l" from 0 to ((count _itemChancesSmall) - 1) do 
			{
				_weight = round (((_itemChancesSmall select _l) select 2) * 100);
				for "_k" from 0 to _weight - 1 do 
				{
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

_config = [];
if (DZE_MissionLootTable) then {
	_config = missionConfigFile >> "cfgLoot";
} else {
	_config = configFile >> "cfgLoot";
};

for "_i" from 0 to ((count (_config)) - 1) do {
	_classname = configName (_config select _i);
	_itemChances = getArray (_config select _i);
	_weighted = [];
	_j = 0;
	for "_l" from 0 to ((count _itemChances) - 1) do 
	{
		_weight = round (((_itemChances select _l) select 1) * 100);
		for "_k" from 0 to (_weight - 1) do
		{
			_weighted set [_j + _k, _l];
			//_items set [count _items, ((_itemChances select _l) select 0)];
		};
		_j = _j + _weight;
	};
	dayz_CLBase set [count dayz_CLBase, _classname];
	dayz_CLChances set [count dayz_CLChances, _weighted];
};

dayzE_CLSChances = [];
dayzE_CLSBase = [];

_config = [];
if (DZE_MissionLootTable) then {
	_config = missionConfigFile >> "cfgLootSmall";
} else {
	_config = configFile >> "cfgLootSmall";
};

for "_i" from 0 to ((count (_config)) - 1) do {
	_classname = configName (_config select _i);
	_itemChances = getArray (_config select _i);
	_weighted = [];
	_j = 0;
	for "_l" from 0 to ((count _itemChances) - 1) do {
		_weight = round (((_itemChances select _l) select 1) * 100);
		for "_k" from 0 to _weight - 1 do {
			_weighted set [_j + _k, _l];
		};
		_j = _j + _weight;
	};
	dayzE_CLSBase set [count dayzE_CLSBase, _classname];
	dayzE_CLSChances set [count dayzE_CLSChances, _weighted];		
};

dayz_ZombieBuildings = [];
dayz_LootBuildings = [];

_config = [];
if (DZE_MissionLootTable) then {
	_config = missionConfigFile >> "CfgBuildingLoot";
} else {
	_config = configFile >> "CfgBuildingLoot";
};

for "_i" from 0 to (count (_config) - 1) do {
	_type = _config select _i;
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