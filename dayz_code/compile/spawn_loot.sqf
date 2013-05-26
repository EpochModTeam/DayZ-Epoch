private ["_iItem","_iClass","_iPos","_radius","_itemTypes","_index","_item","_qty","_max","_tQty","_canType","_weights","_cntWeights","_dateNow","_mags"];
_iItem = 	_this select 0;
_iClass = 	_this select 1;
_iPos =		_this select 2;
_radius =	_this select 3;

//_iPosZ = _iPos select 2;
//if( _iPosZ < 0 ) then { _iPos = [_iPos select 0,_iPos select 1,0]; };

switch (_iClass) do {
	default {
		//Item is food, add random quantity of cans along with an item (if exists)
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];

		_itemTypes = [] + ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
		_index = dayz_CLBase find _iClass;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
		_qty = 0;

		// If clothing just spawn one bag of clothes
		if(_iClass == "clothes" or _iClass == "militaryclothes" or _iClass == "specialclothes") then {
			_max = 1;
		} else {
            _max = (ceil(random 2)) + 1;
		};
		
		while {_qty < _max} do {
            _tQty = (round(random 1)) + 1;
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_canType = _itemTypes select _index;
			_item addMagazineCargoGlobal [_canType,_tQty];
			_qty = _qty + _tQty;
		};
		if (_iItem != "") then {
			_item addWeaponCargoGlobal [_iItem,1];
		};
	};
	case "weapon": {
		//Item is a weapon, add it and a random quantity of magazines
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
		_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
		if ((count _mags) > 0) then {
			if (_mags select 0 == "Quiver") then { _mags set [0, "WoodenArrow"] }; // Prevent spawning a Quiver
			_item addMagazineCargoGlobal [(_mags select 0), (round(random 2))];
		};
	};
	case "magazine": {
		//Item is one magazine
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addMagazineCargoGlobal [_iItem,1];
	};
	case "object": {
		//Item is one magazine
		_item = createVehicle [_iItem, _iPos, [], _radius, "CAN_COLLIDE"];
	};
};

// timestamp for later clearing
_dateNow = (DateToNumber date);
_item setVariable ["looted",_dateNow,true];

if ((count _iPos) > 2) then {
	_item setPosATL _iPos;
};