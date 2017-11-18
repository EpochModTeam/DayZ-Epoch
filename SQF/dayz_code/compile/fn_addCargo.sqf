/*
	Adds cargo to an object
	
	Parameters: 
	_this select 0: array - weapon cargo to add
	_this select 1: array - magazine cargo to add
	_this select 2: array - backpack cargo to add
	_this select 3: object - object to add cargo to
*/

private ["_weapons","_magazines","_backpacks","_holder","_objWpnTypes","_objWpnQty","_counter"];

_weapons = _this select 0;
_magazines = _this select 1;
_backpacks = _this select 2;
_holder = _this select 3;

if (count _weapons > 0) then {
	_objWpnTypes = _weapons select 0;
	_objWpnQty = _weapons select 1;
	_counter = 0;
	{
		_holder addWeaponCargoGlobal [_x,(_objWpnQty select _counter)];
		_counter = _counter + 1;
	} count _objWpnTypes;
};

if (count _magazines > 0) then {
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_counter = 0;
	{
		if (_x != "CSGAS") then {
			_holder addMagazineCargoGlobal [_x,(_objWpnQty select _counter)];
			_counter = _counter + 1;
		};
	} count _objWpnTypes;
};

if (count _backpacks > 0) then {
	_objWpnTypes = _backpacks select 0;
	_objWpnQty = _backpacks select 1;
	_counter = 0;
	{
		_holder addBackpackCargoGlobal [_x,(_objWpnQty select _counter)];
		_counter = _counter + 1;
	} count _objWpnTypes;
};