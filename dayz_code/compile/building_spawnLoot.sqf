private["_serial","_positions","_lootGroup","_iArray","_iItem","_iClass","_iPos","_item","_mags","_qty","_max","_tQty","_canType","_obj","_type","_nearBy","_allItems","_items","_itemType","_itemChance","_lootChance","_weights","_index"];
_obj = 			_this select 0;
_fastRun = 		_this select 1;

_type = 		typeOf _obj;
_config = 		configFile >> "CfgBuildingLoot" >> _type;

_positions =	 [] + getArray (_config >> "lootPos");
//diag_log ("LOOTSPAWN: READ:" + str(_type));
_lootChance =	getNumber (_config >> "lootChance");
_itemType =		 [] + getArray (_config >> "itemType");
//diag_log ("LOOTSPAWN: READ:" + str(_itemType));
_itemChance =	 [] + getArray (_config >> "itemChance");	

//diag_log ("LOOTSPAWN: Type " + str(count _itemType) + " / Chance " + str(count _itemChance));

//diag_log ("I want to spawn loot...");

{
	private["_iPos2"];
	_iPos2 = _obj modelToWorld _x;
	_rnd = random 1;
	//Place something at each position
	if (player distance _iPos2 > 5) then {
		if (_rnd < _lootChance) then {
		//if (true) then {	
			_nearBy = nearestObjects [_iPos2, ["WeaponHolder","WeaponHolderBase"],1];
			if (count _nearBy == 0) then {
				private["_index","_iArray"];
				_weights = [_itemType,_itemChance] call fnc_buildWeightedArray;
				_index = _weights call BIS_fnc_selectRandom;
				//diag_log ("LOOTSPAWN: _itemType:" + str(_itemType));
				//diag_log ("LOOTSPAWN: _index:" + str(_index));
				if (_index >= 0) then {
					_iArray = +(_itemType select _index);
					// diag_log ("LOOTSPAWN: _iArray" + str(_iArray));
					_iArray set [2,_iPos2];
					_iArray set [3,0];
					_iArray call spawn_loot;
					_iArray = [];
				};
				_item setVariable ["created",(DateToNumber date),true];
			};
			if (!_fastRun) then {
				sleep 0.1;
			};
		};
	};
} forEach _positions;