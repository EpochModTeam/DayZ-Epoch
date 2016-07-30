/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your backpack and innitiates the selling list.
**/
private ["_backpack","_pic","_formattedText","_mags","_weaps","_normalMags","_normalWeaps","_kinds","_kinds2","_amounts","_amounts2"];
#include "defines.hpp"

call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];
_backpack = unitBackpack player;

if (!isNull _backpack) then {
	_pic = getText (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'picture');

	_formattedText = format [
		"<img image='%1'  size='3' align='center'/>"
		, _pic
	];

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

	_mags = getMagazineCargo _backpack;
	_weaps = getWeaponCargo _backpack;
	_normalMags = [];
	_normalWeaps = [];
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

	[_normalMags,_normalWeaps, typeOf _backpack,[]] call Z_checkArrayInConfig;
};
