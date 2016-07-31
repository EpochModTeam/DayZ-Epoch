private ["_selection","_return","_toBuyWeaps","_toBuyTotalMags","_toBuyBags","_toolsToBuy","_sidearmToBuy"
,"_primaryToBuy","_currentPrimarys","_p","_b","_check0","_check1","_check2","_check3","_check4","_allowedMags"
,"_allowedPrimary","_allowedTools","_allowedSidearm","_allowedBackpacks","_parentClasses","_toolClasses"
,"_duplicate","_quantity","_tool","_totalBagSlots","_pistolMags","_regularMags","_toBuyPistolMags"
,"_toBuyRegularMags","_type","_freeSpace","_backpack","_totalSpace"
];
_selection = Z_SellingFrom;
_return = false;
_toBuyWeaps = _this select 0;
_toBuyPistolMags = (_this select 1) select 0;
_toBuyRegularMags = (_this select 1) select 1;
_toBuyTotalMags = _toBuyPistolMags + _toBuyRegularMags;
_toBuyBags = _this select 2;
_toolsToBuy = _this select 3;
_sidearmToBuy = _this select 4;
_primaryToBuy = _this select 5;
_vehiclesToBuy = _this select 6;
_toolClasses = _this select 7;
_allowedMags = 0;
_allowedWeapons = 0;
_allowedBackpacks = 0;

if (_vehiclesToBuy > 1) exitWith {systemChat localize "STR_EPOCH_TRADE_ONE_VEHICLE"; false;};
if (_vehiclesToBuy > 0) then {
	_toolsToBuy = _toolsToBuy + _vehiclesToBuy;
};

if (_selection == 2) then { //gear
	_pistolMags = 0;
	_regularMags = 0;	
	{
		_type = getNumber (configFile >> "CfgMagazines" >> _x >> "type");
		if (_type == 16) then {_pistolMags = _pistolMags + 1;}; // 16 = WeaponSlotHandGunItem (pistol ammo slot)
		if (_type == 256) then {_regularMags = _regularMags + 1;}; // 256 = WeaponSlotItem (normal magazine)
	} count (magazines player);
	
	_allowedPistolMags = 8 - _pistolMags;
	_allowedRegularMags = 12 - _regularMags;

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
	if (_allowedPistolMags >= _toBuyPistolMags && _allowedRegularMags >= _toBuyRegularMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_MAGS_FULL",_allowedRegularMags,_allowedPistolMags];
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	};

	if (_check1 && _check2 && _check3) then { _return = true; };
};

if (_selection == 1) then { //vehicle
	if (!isNull Z_vehicle) then {
		_freeSpace = [Z_vehicle,0,0,0,0] call Z_calcFreeSpace;
		_allowedMags = _freeSpace select 1;
		_allowedWeapons = _freeSpace select 2;
		_allowedBackpacks = _freeSpace select 3;
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if (_allowedWeapons >= (_toBuyWeaps + _toolsToBuy)) then {
		_check1 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_WEPS", _allowedWeapons];
	};
	if (_allowedMags >= _toBuyTotalMags) then {
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
	_totalSpace = 0;
	_totalBagSlots = 0;

	_backpack = unitBackpack player;
	_check0 = false;
	if (!isNull _backpack) then {
		_check0 = true;
		_freeSpace = [_backpack,_primaryToBuy,_sidearmToBuy,_toolsToBuy,_toBuyTotalMags] call Z_calcFreeSpace;
		_totalSpace = _freeSpace select 0;
		_allowedMags = _freeSpace select 1;
		_allowedWeapons = _freeSpace select 2;
		_totalBagSlots = _freeSpace select 4;
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
	if (_allowedMags >= _toBuyTotalMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_BAG_MAGS", _allowedMags];
	};
	if (_toBuyBags < 1) then { // A backpack can not hold any backpacks
		_check3 = true;
	};

	if (_totalSpace <= _totalBagSlots) then {
		_check4 = true;
	} else {
		systemChat localize "STR_EPOCH_TRADE_BACKPACK_FULL";
	};

	if (_check0 && _check1 && _check2 && _check3 && _check4) then { _return = true; };
};

_return