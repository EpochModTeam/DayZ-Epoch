private ["_object","_mags","_weaps","_normalMags","_normalWeaps","_normalBags","_kinds","_kinds2","_kinds3","_amounts","_amounts2","_amounts3",
"_counter","_allowedMags","_allowedWeapons","_allowedBackpacks","_currentPrim","_currentSec","_currentTool",
"_parentClasses","_alreadyInBackpack","_totalNewSpace","_primaryToBuy","_sidearmToBuy","_toolsToBuy",
"_toBuyTotalMags","_totalSpace","_bags","_totalBagSlots","_type","_isBackpack","_notTools"];

_object = _this select 0;
_primaryToBuy = _this select 1; // Only needed if backpack
_sidearmToBuy = _this select 2; // Only needed if backpack
_toolsToBuy = _this select 3; // Only needed if backpack
_toBuyTotalMags = _this select 4; // Only needed if backpack

_type = typeOf _object;
_isBackpack = _type isKindOf "Bag_Base_EP1";
_allowedMags = 0;
_allowedWeapons = 0;
_allowedBackpacks = 0;
_totalSpace = 0;
_totalNewSpace = 0;
_totalBagSlots = 0;
_mags = getMagazineCargo _object;
_weaps = getWeaponCargo _object;
_bags = getBackpackCargo _object;
_normalMags = [];
_normalWeaps = [];
_normalBags = [];
_notTools = [];

_kinds = _mags select 0;
_amounts = _mags select 1;
{
	_counter = 0;
	while {_counter < (_amounts select _forEachIndex)} do {
		_normalMags set [count _normalMags, _x];
		_counter = _counter + 1;
	};
} forEach _kinds;

_kinds2 = _weaps select 0;
_amounts2 = _weaps select 1;
{
	_counter = 0;
	while {_counter < (_amounts2 select _forEachIndex)} do {
		_normalWeaps set [count _normalWeaps, _x];
		if !(getNumber (configFile >> "CfgWeapons" >> _x >> "type") in [4096,131072]) then {_notTools set [count _notTools,_x];};
		_counter = _counter + 1;
	};
} forEach _kinds2;

_kinds3 = _bags select 0;
_amounts3 = _bags select 1;
{
	_counter = 0;
	while {_counter < (_amounts3 select _forEachIndex)} do {
		_normalBags set [count _normalBags, _x];
		_counter = _counter + 1;
	};
} forEach _kinds3;

_allowedBackpacks = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxBackpacks") - count(_normalBags);
_allowedMags = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxMagazines") - count(_normalMags);
_allowedWeapons = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxWeapons");
_allowedWeapons = if (_isBackpack) then {_allowedWeapons - count(_notTools)} else {_allowedWeapons - count(_normalWeaps)}; //tools and binocs can exceed transportMaxWeapons in backpacks but not vehicles

if (_isBackpack) then {
	// Different weapon types take up different amounts of space in backpacks, but not vehicles
	_currentPrim = 0;
	_currentSec = 0;
	_currentTool = 0;
	{
		_parentClasses =  [(configFile >> "CfgWeapons" >> _x),true] call BIS_fnc_returnParents;
		if ("ItemCore" in _parentClasses || "Binocular" in _parentClasses) then {
			_currentTool = _currentTool + 1;
		} else {
			if ("PistolCore" in _parentClasses) then {
				_currentSec = _currentSec + 1;
			} else {
				_currentPrim = _currentPrim + 1;
			};
		};
	} count _normalWeaps;

	//transportMaxMagazines is the same as total number of 1x slots in backpack
	_totalBagSlots = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxMagazines");
	
	_alreadyInBackpack = (10 * _currentPrim) + (5 * _currentSec) + _currentTool + count(_normalMags);
	_totalNewSpace = 10 * _primaryToBuy + 5 * _sidearmToBuy + _toolsToBuy + _toBuyTotalMags;
	_totalSpace = _alreadyInBackpack + _totalNewSpace;
};

[_totalSpace,_allowedMags,_allowedWeapons,_allowedBackpacks,_totalBagSlots,_normalMags,_normalWeaps,_normalBags]
