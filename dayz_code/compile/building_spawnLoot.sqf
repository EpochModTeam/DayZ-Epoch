private["_obj","_type","_config","_positions","_iPos","_nearBy","_itemType","_itemTypes","_itemChances","_lootChance","_weights","_cntWeights","_index"];

_obj = 			_this select 0;
_type = 		typeOf _obj;
diag_log format["Spawning loot for: %1", _type];
_config = 		configFile >> "CfgBuildingLoot" >> _type;
_positions =	 [] + getArray (_config >> "lootPos");
_itemTypes =	[] + getArray (_config >> "itemType");
_lootChance =	getNumber (_config >> "lootChance");
{
	if ((random 1) < _lootChance) then {
		_iPos = _obj modelToWorld _x;
		_nearBy = nearestObjects [_iPos, ["WeaponHolder","WeaponHolderBase"], 1];
			if (count _nearBy == 0) then {
			_index = dayz_CBLBase find _type;
			diag_log format["Found %2 at index: %1", _index,_type];
			_weights = dayz_CBLChances select _index;
			_cntWeights = count _weights;
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_itemType = _itemTypes select _index;
			[_itemType select 0, _itemType select 1 , _iPos, 0.0]  call spawn_loot;
			_obj setVariable ["created",(DateToNumber date),true];
		};
	};
} forEach _positions;