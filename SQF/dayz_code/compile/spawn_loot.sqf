private ["_item","_itemTypes","_qty","_tQty","_uniq"];

_iItem = _this select 0;
_iClass = _this select 1;
_iPos = _this select 2;
_radius = _this select 3;

//_uniq = ["ItemWaterbottle", "ItemWaterbottleUnfilled"];
_uniq = [];
//_permaLoot = false;

_iPosZ = _iPos select 2;
if((isNil "_iPosZ") OR {( _iPosZ < 0)}) then { _iPos = [_iPos select 0,_iPos select 1,0]; };

//if(_iClass == "Unknown") exitwith {};

switch (_iClass) do {
	default {
		//Item is food, add random quantity of cans along with an item (if exists)
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];

		_itemTypes = [];
		{
			_itemTypes set [count _itemTypes, _x select 0]
		} foreach getArray (configFile >> "cfgLoot" >> _iClass);

		_qty = 0;
		_max = ceil(random 2) + 1;
		while {_qty < _max} do {
			_index = dayz_CLBase find _iClass;
			_weights = dayz_CLChances select _index;
			_cntWeights = count _weights;
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_canType = _itemTypes select _index;

			//_itemarray = dayz_CLItemNames select _index;
			//_canType = _itemarray call BIS_fnc_selectRandom;

			//diag_log ("CanType: "+str(_canType));
			_tQty = round(random 1) + 1;
			if (_canType in _uniq) then {
				if (({_x in _uniq} count magazines _item) == 0) then { _tQty = 1; } else { _tQty = 0;};
				if (_tQty == 0) then {diag_log(format["%1 Prevent any duplicate member %2 from family %3",__FILE__, _canType, _uniq]);};
				//diag_log(format["%1 %2 DUP? type:%3 mag:%4 _this:%5",__FILE__, __LINE__, _canType, magazines _item, _this]);
			};
			if (_tQty > 0) then {
				if (!(_canType in _uniq)) then {
					_item addMagazineCargoGlobal [_canType,1];
					_uniq set [count _uniq, _canType];
					//diag_log ("uniq: "+str(_uniq));
					_qty = _qty + 1;
				};
			};
		};
		if (_iItem != "") then {
			_item addWeaponCargoGlobal [_iItem,1];
			//diag_log ("Unknown");
		};
	};
	case "weapon": {
		//Item is a weapon, add it and a random quantity of magazines
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addWeaponCargoGlobal [_iItem,1];
		_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
		if ((count _mags) > 0) then {
		//	if (_mags select 0 == "Quiver") then { _mags set [0, "WoodenArrow"] }; // Prevent spawning a Quiver
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
	/*
	case "tools": {
		//Item is one tool
		_item = createVehicle ["WeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		_item addMagazineCargoGlobal [_iItem,1];
	};
	*/
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
if ((count _iPos) > 2) then {
	_item setPosATL _iPos;
};

//if (_permaLoot == true) then { _item setVariable ["permaLoot",true]; };

_item   // used in server_spawnCrashSite
