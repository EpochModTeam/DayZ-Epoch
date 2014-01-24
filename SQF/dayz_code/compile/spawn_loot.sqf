private ["_iItem","_iClass","_iPos","_radius","_item","_itemTypes","_index","_weights","_cntWeights","_qty","_max","_tQty","_canType","_mags","_dateNow"];

_iItem = 	_this select 0;
_iClass = 	_this select 1;
//diag_log format["DEBUG spawn loot class: %1", _iClass];
_iPos =		_this select 2;
_radius =	_this select 3;

switch (_iClass) do
{
	default
	{
		//Item is food, add random quantity of cans along with an item (if exists)
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_itemTypes = [];
		if (DZE_MissionLootTable) then {
			_itemTypes = ((getArray (missionConfigFile >> "cfgLoot" >> _iClass)) select 0);
		} else {
			_itemTypes = ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
		};
		_index = dayz_CLBase find _iClass;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
		_qty = 0;
		_max = 1 + round(random 2);
		while {_qty < _max} do
		{
			_tQty = 1 + round(random 1);
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_canType = _itemTypes select _index;
			_item addMagazineCargoGlobal [_canType,_tQty];
			_qty = _qty + _tQty;
		};
		if (_iItem != "") then
		{
			_item addWeaponCargoGlobal [_iItem,1];
		};
	};
	case "single":
	{
		//Item is sigle, add 1 item from cfgloot
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_itemTypes = [];
		if (DZE_MissionLootTable) then {
			_itemTypes = ((getArray (missionConfigFile >> "cfgLoot" >> _iItem)) select 0);
		} else {
			_itemTypes = ((getArray (configFile >> "cfgLoot" >> _iItem)) select 0);
		};
		_index = dayz_CLBase find _iItem;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
			
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_canType = _itemTypes select _index;
		_item addMagazineCargoGlobal [_canType,1];
	};
	case "backpack":
	{
		//Item is single backpack
		if (DZE_MissionLootTable) then {
			_itemTypes = ((getArray (missionConfigFile >> "cfgLoot" >> _iItem)) select 0);
		} else {
			_itemTypes = ((getArray (configFile >> "cfgLoot" >> _iItem)) select 0);
		};
		_index = dayz_CLBase find _iItem;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_iItem = _itemTypes select _index;

		_item = createVehicle [_iItem, _iPos, [], _radius, "CAN_COLLIDE"];
	};
	case "cfglootweapon":
	{
		if (DZE_MissionLootTable) then {
			_itemTypes = ((getArray (missionConfigFile >> "cfgLoot" >> _iItem)) select 0);
		} else {
			_itemTypes = ((getArray (configFile >> "cfgLoot" >> _iItem)) select 0);
		};
		_index = dayz_CLBase find _iItem;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
			
	    _index = floor(random _cntWeights);
		_index = _weights select _index;
		_iItem = _itemTypes select _index;

		if (_iItem == "Chainsaw") then {
			_iItem = ["ChainSaw","ChainSawB","ChainSawG","ChainSawP","ChainSawR"] call BIS_fnc_selectRandom;
		};

		//Item is a weapon, add it and a random quantity of magazines
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
		_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
		if ((count _mags) > 0) then
		{
			if (_mags select 0 == "Quiver") then { _mags set [0, "WoodenArrow"] }; // Prevent spawning a Quiver
			if (_mags select 0 == "20Rnd_556x45_Stanag") then { _mags set [0, "30Rnd_556x45_Stanag"] };
			if (_mags select 0 == "30Rnd_556x45_G36") then { _mags set [0, "30Rnd_556x45_Stanag"] };
			if (_mags select 0 == "30Rnd_556x45_G36SD") then { _mags set [0, "30Rnd_556x45_StanagSD"] };
			_item addMagazineCargoGlobal [(_mags select 0), (round(random 2))];
		};
		
	};
	case "weapon":
	{
		//Item is a weapon, add it and a random quantity of magazines
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
		_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
		if ((count _mags) > 0) then
		{
			if (_mags select 0 == "Quiver") then { _mags set [0, "WoodenArrow"] }; // Prevent spawning a Quiver
			if (_mags select 0 == "20Rnd_556x45_Stanag") then { _mags set [0, "30Rnd_556x45_Stanag"] };
			if (_mags select 0 == "30Rnd_556x45_G36") then { _mags set [0, "30Rnd_556x45_Stanag"] };
			if (_mags select 0 == "30Rnd_556x45_G36SD") then { _mags set [0, "30Rnd_556x45_StanagSD"] };
			_item addMagazineCargoGlobal [(_mags select 0), (round(random 2))];
		};
	};
	case "weaponnomags":
	{
		//Item is a weapon, and spawns no mags
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
	};
	case "magazine":
	{
		//Item is one magazine
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addMagazineCargoGlobal [_iItem,1];
	};
	case "object":
	{
		//Item is one magazine
		_item = createVehicle [_iItem, _iPos, [], _radius, "CAN_COLLIDE"];
	};
};

// timestamp for later clearing
_dateNow = (DateToNumber date);
_item setVariable ["looted",_dateNow,true];

if ((count _iPos) > 2) then 
{
	_item setPosATL _iPos;
};
