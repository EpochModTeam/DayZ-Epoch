private["_cfgCount","_i","_j","_k","_l","_config","_defaultCfg","_itemTypes","_itemChances","_itemCount","_weighted","_weight"];
dayz_CBLChances = [];
dayz_CBLCounts = [];

_cfgCount = count (configFile >> "CfgBuildingLoot");
for "_i" from 0 to ((_cfgCount) - 1) do {
	_config = (configFile >> "CfgBuildingLoot") select _i;
	if ((count (getArray (_config >> "ItemChance"))) > 0) then {
		_itemChances = getArray (_config >> "itemChance");	
		_itemCount = count _itemChances;
		if ((dayz_CBLCounts find _itemCount) < 0) then {
			_weighted = [];
			_j = 0;
			for "_l" from 0 to ((count _itemChances) - 1) do {
				_weight = round ((_itemChances select _l) * 100);
				for "_k" from 0 to _weight - 1 do {
					_weighted set [_j + _k, _l];
				};
				_j = _j + _weight;
			};
			dayz_CBLCounts set [count dayz_CBLCounts, _itemCount];
			dayz_CBLChances set [count dayz_CBLChances, _weighted];		
		};
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
