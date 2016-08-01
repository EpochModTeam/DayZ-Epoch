	/* ----------------------------------------------------------------------------
	Examples:
	   _result = [_backpack, ["SmokeShell","M16_AMMO"],["M16","M16","M240"], _vehInfo] call ZUPA_fnc_removeWeaponsAndMagazinesCargo;
	   _result == [[1,0,0,1,1,1,0],[1,0,0,1],[]]; // 1 = success, 0 = fail ->(item was not in cargo)

	Author:
	   Zupa 2014-09-30
	---------------------------------------------------------------------------- */
private ["_vehInfo","_inCargo","_object","_mags","_weaps","_normalMags","_normalWeaps","_returnVar","_returnMag","_returnWeap","_freeSpace"];

_object = _this select 0;
_mags = _this select 1;
_weaps = _this select 2;
_vehInfo = _this select 3;

_freeSpace = [_object,0,0,0,0] call Z_calcFreeSpace;
_normalMags = _freeSpace select 5;
_normalWeaps = _freeSpace select 6;

clearMagazineCargoGlobal _object;
clearWeaponCargoGlobal _object;

_returnVar = [];
_returnMag = [];
_returnWeap = [];

{
	_inCargo = _normalMags find _x;
	if (_inCargo > -1) then {
		_normalMags set [_inCargo, "soldItem"];
		_returnMag set [count(_returnMag),1];
	} else {
		_returnMag set [count(_returnMag),0];
	};
} count _mags;

_normalMags = _normalMags - ["soldItem"];
{
	_object addMagazineCargoGlobal [_x, 1];
} count _normalMags;

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

if (count _vehInfo > 0) then {
	_sell = [_vehInfo, ((_vehInfo select 0) select 4), _object] call DZE_deleteTradedVehicle;
	if (_sell > 0) then {
		_returnVar set [3,[1]];
	};
};

_returnVar set [0,_returnMag];
_returnVar set [1,_returnWeap];
_returnVar set [2,[]];

_returnVar