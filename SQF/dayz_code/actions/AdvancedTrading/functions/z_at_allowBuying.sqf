private ["_selection","_return","_toBuyWeaps","_toBuyMags","_toBuyBags","_toolsToBuy","_sidearmToBuy","_primaryToBuy","_currentPrimarys"
,"_currentSec","_currentPrim","_currentTool","_p","_b","_check0","_check1","_check2","_check3","_check4","_mags","_weaps","_bags"
,"_normalBags","_normalMags","_normalWeaps","_allowedMags","_allowedPrimary","_allowedTools","_allowedSidearm","_allowedWeapons","_allowedBackpacks"
,"_totalSpace","_totalNewSpace","_counter","_parentClasses","_alreadyInBackpack","_kinds","_kinds2","_kinds3","_amounts","_amounts2","_amounts3",
"_actualMags","_toolClasses","_duplicate","_quantity","_tool","_totalBagSlots"
];
_selection = Z_SellingFrom;
_return = false;
_toBuyWeaps = _this select 0;
_toBuyMags = _this select 1;
_toBuyBags = _this select 2;
_toolsToBuy = _this select 3;
_sidearmToBuy = _this select 4;
_primaryToBuy = _this select 5;
_vehiclesToBuy = _this select 6;
_toolClasses = _this select 7;

if (_vehiclesToBuy > 1) exitWith {systemChat localize "STR_EPOCH_TRADE_ONE_VEHICLE"; false;};
if (_vehiclesToBuy > 0) then {
	_toolsToBuy = _toolsToBuy + _vehiclesToBuy;
};

if (_selection == 2) then { //gear
	_actualMags = {!(_x in MeleeMagazines)} count (magazines player);
	_allowedMags = 20 - _actualMags;

	_currentPrimarys = 0;

	_p = primaryWeapon player;
	if (!isNil '_p' && _p != "") then {
		_currentPrimarys = 1;
	};

	_allowedPrimary = 1 - _currentPrimarys;

	// (secondaryWeapon player) returns launcher, doesn't work for pistol
	_allowedSidearm = 1;
	{
		if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 2) exitWith { // 2 = WeaponSlotHandGun (occupies pistol slot)
			_allowedSidearm = 0;
		};
	} count (weapons player);

	_currentBackpacks = 0;

	_b = unitBackpack player;
	if (!isNull _b) then {
		_currentBackpacks = 1;
	};

	_allowedBackpacks = 1 - _currentBackpacks;

	_allowedTools = 14; // 12 toolbelt + 1 Binocular + 1 NVG
	_duplicate = false;
	{
		_parentClasses =  [(configFile >> "CfgWeapons" >> _x),true] call BIS_fnc_returnParents;
		if ('ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
			_allowedTools = _allowedTools - 1;
			if (_x in _toolClasses) then {_duplicate = true;}; // Forbid purchasing duplicate tools into gear
		}
	} count (weapons player);
	
	{
		_tool = _x;
		_quantity = {(_tool == _x)} count _toolClasses;
		if (_quantity > 1) exitWith {_duplicate = true;}; // Forbid purchasing multiples of the same tool into gear
	} forEach _toolClasses;

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if (_allowedPrimary >= _primaryToBuy && _allowedSidearm >= _sidearmToBuy && _allowedTools >= _toolsToBuy && !_duplicate) then {
		_check1 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_GEAR_FULL", _allowedPrimary, _allowedSidearm , _allowedTools];
	};
	if (_allowedMags >= _toBuyMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_MAGS_FULL",_allowedMags];
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_BAG_FULL",_allowedBackpacks];
	};

	if (_check1 && _check2 && _check3) then { _return = true; };
};

if (_selection == 1) then { //vehicle
	_allowedMags = 0;
	_allowedWeapons = 0;
	_allowedBackpacks = 0;
	if (!isNull Z_vehicle) then {

		_mags = getMagazineCargo Z_vehicle;
		_weaps = getWeaponCargo Z_vehicle;
		_bags = getBackpackCargo Z_vehicle;

		_normalMags = [];
		_normalWeaps = [];
		_normalBags = [];

		_kinds = _mags select 0;
		_amounts = _mags select 1;
		{
			_counter = 0 ;
			while {_counter < (_amounts select _forEachIndex)} do {
			_normalMags set [count(_normalMags),_x];
					_counter = _counter + 1;
			};
		} forEach _kinds;

		_kinds2 = _weaps select 0;
		_amounts2 = _weaps select 1;
		{
			_counter = 0 ;
			while {_counter < (_amounts2 select _forEachIndex)} do {
				_normalWeaps set [count(_normalWeaps),_x];
				_counter = _counter + 1;
			};
		} forEach _kinds2;

		_kinds3 = _bags select 0;
		_amounts3 = _bags select 1;
		{
			_counter = 0 ;
			while{_counter < (_amounts3 select _forEachIndex)} do {
				_normalBags set [count(_normalBags),_x];
				_counter = _counter + 1;
			};
		} forEach _kinds3;


		_allowedWeapons = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxWeapons') - count(_normalWeaps);
		_allowedMags = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxMagazines') - count(_normalMags);
		_allowedBackpacks = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxBackpacks') - count(_normalBags);
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if (_allowedWeapons >= (_toBuyWeaps + _toolsToBuy)) then {
		_check1 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_WEPS", _allowedWeapons];
	};
	if (_allowedMags >= _toBuyMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_MAGS", _allowedMags];
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_BAGS", _allowedBackpacks];
	};

	if (_check1 && _check2 && _check3) then { _return = true; };
};

if (_selection == 0) then { //backpack
	_allowedWeapons = 0;
	_allowedMags = 0;
	_allowedBackpacks = 0;

	_totalSpace = 0;
	_totalNewSpace = 0;

	_backpack = unitBackpack player;
	_check0 = false;
	if (!isNull _backpack) then {
		_check0 = true;

		_mags = getMagazineCargo _backpack;
		_weaps = getWeaponCargo _backpack;

		_normalMags = [];
		_normalWeaps = [];

		_kinds = _mags select 0;
		_amounts = _mags select 1;
		{
			_counter = 0 ;
			while {_counter < (_amounts select _forEachIndex)} do {
				_normalMags set [count(_normalMags), _x];
				_counter = _counter + 1;
			};
		} forEach _kinds;

		_kinds2 = _weaps select 0;
		_amounts2 = _weaps select 1;
		{
			_counter = 0 ;
			while {_counter < (_amounts2 select _forEachIndex)} do {
				_normalWeaps set [count(_normalWeaps), _x];
				_counter = _counter + 1;
			};
		} forEach _kinds2;

		_allowedWeapons = getNumber (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'transportMaxWeapons') - count(_normalWeaps);
		_totalBagSlots = getNumber (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'transportMaxMagazines');
		_allowedMags = _totalBagSlots - count(_normalMags);

		_currentPrim = 0;
		_currentSec = 0;
		_currentTool = 0;

		{
			_parentClasses =  [(configFile >> "CfgWeapons" >> _x),true] call BIS_fnc_returnParents;
			if ('ItemCore' in _parentClasses || 'Binocular' in _parentClasses) then {
				_currentTool = _currentTool + 1;
			} else {
				if ('PistolCore' in _parentClasses) then {
					_currentSec = _currentSec + 1;
				} else {
					_currentPrim = _currentPrim + 1;
				};
			};
		} count _normalWeaps;

		_alreadyInBackpack = (10 * _currentPrim) + (5 * _currentSec) + _currentTool + count(_normalMags);

		_totalNewSpace = 10 * _primaryToBuy + 5 * _sidearmToBuy + _toolsToBuy + _toBuyMags;

		_totalSpace = _alreadyInBackpack + _totalNewSpace;

	} else {
		systemChat localize "STR_EPOCH_TRADE_NO_BACKPACK";
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;
	_check4 = false;

	if (_allowedWeapons >= _toBuyWeaps) then {
		_check1 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_BAG_WEPS", _allowedWeapons];
	};
	if (_allowedMags >= _toBuyMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_BAG_MAGS", _allowedMags];
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	} else {
		systemChat localize "STR_EPOCH_TRADE_BAG_BAGS";
	};

	if (_totalSpace <= _totalBagSlots) then {
		_check4 = true;
	} else {
		systemChat localize "STR_EPOCH_TRADE_BACKPACK_FULL";
	};

	if (_check0 && _check1 && _check2 && _check3 && _check4) then { _return = true; };
};

_return;
