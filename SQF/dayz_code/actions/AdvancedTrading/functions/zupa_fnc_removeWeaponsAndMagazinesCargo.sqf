	/* ----------------------------------------------------------------------------
	Examples:
	   _result = [_backpack, ["SmokeShell","M16_AMMO"],["M16","M16","M240"],["backpack1","backpack2"]] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	   _result == [[1,0,0,1,1,1,0],[1,0,0,1],[1,0]]; // 1 = success, 0 = fail ->(item was not in cargo)

	Author:
	   Zupa 2014-09-30
	---------------------------------------------------------------------------- */
private ["_bags","_vehInfo","_inCargo","_object","_items","_weaps","_normalMags","_normalWeaps","_normalBags","_returnVar","_returnMag","_returnWeap","_returnBag","_freeSpace"];

_object = _this select 0;
_items = _this select 1;
_weaps = _this select 2;
_bags = [];
_vehInfo = [];

if (count _this > 3) then {
	if (count (_this select 3) > 0) then {
		if (typeName ((_this select 3) select 0) == "STRING") then {
			_bags = _this select 3;
		} else {
			_vehInfo = _this select 3;
		};
	};
	if (count _this == 5) then {
		_vehInfo = _this select 4;
	};
};

_freeSpace = [_object,0,0,0,0] call Z_calcFreeSpace;
_normalMags = _freeSpace select 5;
_normalWeaps = _freeSpace select 6;
_normalBags = _freeSpace select 7;

clearMagazineCargoGlobal _object;
clearWeaponCargoGlobal _object;

if (count _bags > 0) then { 
	clearBackpackCargoGlobal  _object;
};

_returnVar = [];
_returnMag = [];
_returnWeap = [];
_returnBag = [];
{
	_inCargo = _normalMags find _x;
	if (_inCargo > -1) then {
		_normalMags set [_inCargo, "soldItem"];
		_returnMag set [count(_returnMag),1];
	} else {
		_returnMag set [count(_returnMag),0];
	};
} count _items;
_normalMags = _normalMags - ["soldItem"];
{
	_object addMagazineCargoGlobal [_x, 1];
} count _normalMags;

{
	_inCargo = _normalBags find _x;
	if (_inCargo > -1) then {
		_normalBags set [_inCargo, "soldItem"];
		_returnBag set [count(_returnBag),1];
	} else {
		_returnBag set [count(_returnBag),0];
	};
} count _bags;
{
	_object addBackpackCargoGlobal [_x, 1];
} count _normalBags;

{
	_inCargo = _normalWeaps find _x;
	if (_inCargo > -1) then {
		_normalWeaps set [_inCargo, "soldItem"];
		_returnWeap set [count(_returnWeap),1];
	} else {
		_returnWeap set [count(_returnWeap),0];
	};
} count _weaps;

_normalWeaps = _normalWeaps - ["soldItem"];
{
	_object addWeaponCargoGlobal [_x, 1];
} count _normalWeaps;
_normalWeaps = _normalWeaps - ["soldItem"];

if (count _vehInfo > 0) then {
	_sell = [_vehInfo, ((_vehInfo select 0) select 4), _object] call DZE_deleteTradedVehicle;
	if (_sell > 0) then {
		_returnVar set [3,[1]];
	};
};

_returnVar set [0,_returnMag];
_returnVar set [1,_returnWeap];
_returnVar set [2,_returnBag];

_returnVar