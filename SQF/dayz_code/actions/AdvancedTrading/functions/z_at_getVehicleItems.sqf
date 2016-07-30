/**
*	call Z_getVehicleItems
*
*	Gets all your items stored in your vehicle and innitiates the selling list.
**/
private ["_vehicle","_pos","_list","_formattedText","_pic","_mags","_weaps","_bags","_normalMags","_normalWeaps","_normalBags","_kinds","_amounts","_counter","_kinds2","_amounts2"];
#include "defines.hpp"

Z_vehicle = objNull;
call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];
_vehicle = objNull;

_pos = [player] call FNC_GetPos;
_list = nearestObjects [_pos, ["Air","LandVehicle","Ship"], Z_VehicleDistance];
{
	if (!isNull _x && local _x && alive _x) then {
		_vehicle = _x;
	};
} count _list;

if (!isNull _vehicle) then {
	systemChat format[localize "STR_EPOCH_TRADE_SELECTED",typeOf _vehicle];
	_pic = getText (configFile >> 'CfgVehicles' >> (typeOf _vehicle) >> 'picture');

	_formattedText = format [
		"<img image='%1'  size='3' align='center'/>"
		, _pic
	];

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;
	Z_vehicle = _vehicle;
	_mags = getMagazineCargo _vehicle;
	_weaps = getWeaponCargo _vehicle;
	_bags = getBackpackCargo _vehicle;

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
	
	// Can't sell backpacks from vehicle because there is currently no command to remove single backpacks from cargo (only clearBackpackCargo which removes all)
	/*
	_kinds3 = _bags select 0;
	_amounts3 = _bags select 1;
	{
		_counter = 0 ;
		while {_counter < (_amounts3 select _forEachIndex)} do {
			_normalBags set [count(_normalBags),_x];
			_counter = _counter + 1;
		};
	} forEach _kinds3;
	*/

	[_normalWeaps,_normalMags, typeOf _vehicle,_normalBags] call Z_checkArrayInConfig;
};
