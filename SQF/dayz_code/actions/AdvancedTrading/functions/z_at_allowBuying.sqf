private ["_selection","_return","_toBuyWeaps","_toBuyTotalMags","_toBuyBags","_toolsToBuy","_sidearmToBuy"
,"_primaryToBuy","_p","_b","_check0","_check1","_check2","_check3","_check4","_allowedMags"
,"_allowedPrimary","_allowedTools","_allowedSidearm","_allowedBackpacks","_toolClasses"
,"_duplicate","_quantity","_tool","_totalBagSlots","_pistolMags","_regularMags","_toBuyPistolMags"
,"_toBuyRegularMags","_type","_freeSpace","_backpack","_totalSpace","_toolAmounts","_allowedBinocular","_message"
];
_selection = Z_SellingFrom;
_return = false;
_toBuyWeaps = _this select 0; // Does not include tools
_toBuyPistolMags = (_this select 1) select 0;
_toBuyRegularMags = (_this select 1) select 1;
_toBuyTotalMags = _toBuyPistolMags + _toBuyRegularMags;
_toBuyBags = _this select 2;
_toolsToBuy = _this select 3;
_sidearmToBuy = _this select 4;
_primaryToBuy = _this select 5;
_vehiclesToBuy = _this select 6;
_toolClasses = _this select 7;
_toolAmounts = _this select 8;
_allowedMags = 0;
_allowedWeapons = 0;
_allowedBackpacks = 0;

if (_vehiclesToBuy > 1) exitWith {systemChat localize "STR_EPOCH_TRADE_ONE_VEHICLE"; false};
if (_vehiclesToBuy > 0) then {
	_toolsToBuy = _toolsToBuy + _vehiclesToBuy;
};

if (_selection == 2) then { //gear
	_pistolMags = 0;
	_regularMags = 0;	
	{
		_type = getNumber (configFile >> "CfgMagazines" >> _x >> "type");
		if (_type == 16) then {_pistolMags = _pistolMags + 1;}; // WeaponSlotHandGunItem (pistol ammo slot)
		if (_type == 256) then {_regularMags = _regularMags + 1;}; // WeaponSlotItem (normal magazine)
	} count (magazines player);
	
	_allowedPistolMags = 8 - _pistolMags;
	_allowedRegularMags = 12 - _regularMags;

	_p = primaryWeapon player;
	_allowedPrimary = if (_p != "") then {0} else {1};
	if (DZE_TwoPrimaries == 2 && dayz_onBack == "") then { _allowedPrimary = _allowedPrimary + 1; };
	
	_b = unitBackpack player;
	_allowedBackpacks = if (isNull _b) then {1} else {0};

	_allowedTools = 12;
	_allowedSidearm = 1;
	_allowedBinocular = 2;
	_duplicate = false;
	{
		switch getNumber (configFile >> "CfgWeapons" >> _x >> "type") do {
			case 2: {_allowedSidearm = 0;}; //Pistol
			case 4: {_allowedBackpacks = 0;}; //Launcher
			case 4096: {_allowedBinocular = _allowedBinocular - 1;}; //Binocular slot
			case 131072: {_allowedTools = _allowedTools - 1;}; //Toolbelt slot
		};
		if (_x in _toolClasses) exitWith {_duplicate = true;}; // Forbid purchasing duplicate tools into gear
	} count (weapons player);
	
	{
		_tool = _x;
		_quantity = {(_tool == _x)} count _toolClasses; // Buying same tool multiple times with 1x quantity
		if (_quantity > 1) exitWith {_duplicate = true;}; // Forbid buying multiples of same tool into gear. Ok to exit since duplicate will cancel buy
		if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 4096) then {
			_allowedBinocular = _allowedBinocular - 1;
			_toolsToBuy = _toolsToBuy - 1; //Not counting binoculars in tool total (12) when buying in gear
		};
	} forEach _toolClasses;
	
	{
		if (_x > 1) exitWith {_duplicate = true;}; // Buying >1x quantity of a tool
	} count _toolAmounts;

	_check1 = false;
	_check2 = false;
	_check3 = false;

	if (_allowedPrimary >= _primaryToBuy && _allowedSidearm >= _sidearmToBuy && _allowedTools >= _toolsToBuy && !_duplicate && _allowedBinocular > -1) then {
		_check1 = true;
	} else {
		_message = switch (true) do {
			case (_duplicate): {localize "STR_EPOCH_TRADE_DUPLICATE_TOOL"};
			case (_allowedBinocular < 0): {localize "STR_EPOCH_TRADE_BINOCULARS_FULL"};
			case (_allowedTools < _toolsToBuy): {localize "STR_EPOCH_PLAYER_107"};
			default {format[localize "STR_EPOCH_TRADE_GEAR_FULL",_allowedPrimary,_allowedSidearm,_allowedTools]};
		};
		systemChat _message;
	};
	if (_allowedPistolMags >= _toBuyPistolMags && _allowedRegularMags >= _toBuyRegularMags) then {
		_check2 = true;
	} else {
		systemChat format[localize "STR_EPOCH_TRADE_MAGS_FULL",_allowedRegularMags,_allowedPistolMags];
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	} else {
		if (_allowedBackpacks == 0) then { 
			systemChat localize "STR_EPOCH_TRADE_HAVE_BACKPACK";
		} else {
			systemChat localize "STR_EPOCH_TRADE_ONE_BACKPACK";
		};
	};
	
	if (_check1 && _check2 && _check3) then { _return = true; };
};

if (_selection == 1) then { //vehicle
	if (!isNull DZE_myVehicle) then {
		_freeSpace = [DZE_myVehicle,0,0,0,0] call Z_calcFreeSpace;
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
		if (_allowedWeapons > 0) then {
			systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_WEPS", _allowedWeapons];
		} else {
			systemChat localize "STR_EPOCH_TRADE_VEHICLE_FULL_GUNS";
		};
	};
	if (_allowedMags >= _toBuyTotalMags) then {
		_check2 = true;
	} else {
		if (_allowedMags > 0) then {
			systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_MAGS", _allowedMags];
		} else {
			systemChat localize "STR_EPOCH_TRADE_VEHICLE_FULL_MAGS";
		};
	};
	if (_allowedBackpacks >= _toBuyBags) then {
		_check3 = true;
	} else {
		if (_allowedBackpacks > 0) then {
			systemChat format[localize "STR_EPOCH_TRADE_VEHICLE_BAGS", _allowedBackpacks];
		} else {
			systemChat localize "STR_EPOCH_TRADE_VEHICLE_FULL_BAGS";
		};
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
		_allowedWeapons = _freeSpace select 2; // needed since some bags have >= 5 slots but transportMaxWeapons = 0;
		_totalBagSlots = _freeSpace select 4;
	} else {
		systemChat localize "STR_EPOCH_TRADE_NO_BACKPACK";
	};

	_check1 = false;
	_check2 = false;
	_check3 = false;
	_check4 = false;

	if (_allowedWeapons >= _toBuyWeaps) then { //_toBuyWeaps does not include tools (which can exceed transportMaxWeapons in backpacks but not vehicles)
		_check1 = true;
	} else {
		if (_allowedWeapons > 0) then {
			systemChat format[localize "STR_EPOCH_TRADE_BAG_WEPS", _allowedWeapons];
		} else {
			systemChat localize "STR_EPOCH_TRADE_BACKPACK_FULL";
		};
	};
	
	if (_allowedMags >= _toBuyTotalMags) then {
		_check2 = true;
	} else {
		if (_allowedMags > 0) then {
			systemChat format[localize "STR_EPOCH_TRADE_BAG_MAGS", _allowedMags];
		} else {
			systemChat localize "STR_EPOCH_TRADE_BACKPACK_FULL";
		};
	};

	if (_toBuyBags < 1) then { // A backpack can not hold any backpacks
		_check3 = true;
	} else {
		systemChat localize "STR_EPOCH_TRADE_BAG_BAGS";
	};

	if (_totalSpace <= _totalBagSlots) then {
		_check4 = true;
	} else {
		if (_check1 && _check2 && _check3) then { systemChat localize "STR_EPOCH_TRADE_BACKPACK_FULL"; }; // Avoids redundant message
	};

	if (_check0 && _check1 && _check2 && _check3 && _check4) then { _return = true; };
};

_return