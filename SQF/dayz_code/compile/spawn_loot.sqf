private ["_iPos","_tQty","_qty","_index","_weights","_cntWeights","_canType","_item","_magQty","_mags","_item2","_itemTypes","_max","_iItem","_iClass","_radius","_uniq","_iPosZ"];
_iItem = _this select 0;
_iClass = _this select 1;
_iPos = _this select 2;
_radius = _this select 3;
_uniq = [];

_iPosZ = _iPos select 2;
if((isNil "_iPosZ") OR {( _iPosZ < 0)}) then { _iPos = [_iPos select 0,_iPos select 1,0]; };
if (isNil "_iClass") exitWith {diag_log "_iClass isNil, exiting loot spawn!";};

switch (_iClass) do {
	default {
		_itemTypes = [];
		if (DZE_MissionLootTable) then {
			_itemTypes = ((getArray (missionConfigFile >> "cfgLoot" >> _iClass)) select 0);
		} else {
			_itemTypes = ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
		};
		_qty = 0;
		_max = ceil(random 2) + 1;
		if (_iClass in ["trash","civilian","office","office2","food","generic","medical","hospital","military","militarypilot","policeman","hunter","worker"]) then {
			_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
			while {_qty < _max} do {
				_index = dayz_CLBase find _iClass;
				_weights = dayz_CLChances select _index;
				_cntWeights = count _weights;
				_index = floor(random _cntWeights);
				_index = _weights select _index;
				_canType = _itemTypes select _index;
				_tQty = round(random 1) + 1;
				if (_canType in _uniq) then {
					if (({_x in _uniq} count magazines _item) == 0) then { _tQty = 1; } else { _tQty = 0;};
					if (_tQty == 0) then {diag_log(format["%1 Prevent any duplicate member %2 from family %3",__FILE__, _canType, _uniq]);};
				};
				if (_tQty > 0) then {
					if (!(_canType in _uniq)) then {
						_item addMagazineCargoGlobal [_canType,1];
						_uniq set [count _uniq, _canType];
						_qty = _qty + 1;
					};
				};
			};
			if ((_iItem != "") && (isClass(configFile >> "CfgWeapons" >> _iItem))) then {
				_item addWeaponCargoGlobal [_iItem,1];
			};
		} else {
			_index = dayz_CLBase find _iClass;
			_weights = dayz_CLChances select _index;
			_cntWeights = count _weights;
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_item2 = _itemTypes select _index;
			if ((_item2 != "") && (isClass(configFile >> "CfgWeapons" >> _item2))) then {
				_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
				_item addWeaponCargoGlobal [_item2,1];
				if ((count _mags) > 0) then {
					if (_mags select 0 == "20Rnd_556x45_Stanag") then { _mags set [0, "30Rnd_556x45_Stanag"] };
					if (_mags select 0 == "30Rnd_556x45_G36") then { _mags set [0, "30Rnd_556x45_Stanag"] };
					if (_mags select 0 == "30Rnd_556x45_G36SD") then { _mags set [0, "30Rnd_556x45_StanagSD"] };
					if (!(_item2 in MeleeWeapons)) then {
						_magQty = round(random 10);
						if (_magQty > 3) then {
							_item addMagazineCargoGlobal [(_mags select 0), (round(random 1) + 1)];
						};
					};
				};
			};
			if ((_item2 != "") && (isClass(configFile >> "CfgMagazines" >> _item2))) then {
				_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
				_item addMagazineCargoGlobal [_item2,1];
			};
			if ((_item2 != "") && (isClass(configFile >> "CfgVehicles" >> _item2))) then {
				_item = createVehicle [_item2, _iPos, [], _radius, "CAN_COLLIDE"];
			};
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
			if (!(_iItem in MeleeWeapons)) then {
				_magQty = round(random 10);
				if (_magQty > 3) then {
					_item addMagazineCargoGlobal [(_mags select 0), (round(random 1) + 1)];
				};
			};
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
	case "object": {
		_item = createVehicle [_iItem, _iPos, [], _radius, "CAN_COLLIDE"];
	};
};
if ((count _iPos) > 2) then {
	_item setPosATL _iPos;
};

_item
