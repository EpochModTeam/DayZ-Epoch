/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your vehicle and innitiates the selling list.
**/
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
}count _list;

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
	_ammmounts = _mags select 1;
	{
		_counter = 0 ;
		while{	_counter < ( 	_ammmounts select _forEachIndex)}do{
		_normalMags set [count(_normalMags),_x];
				_counter = _counter + 1;
		};
	}forEach _kinds;

	_kinds2 = _weaps select 0;
	_ammmounts2 = _weaps select 1;
	{
		_counter = 0 ;
		while{	_counter < ( 	_ammmounts2 select _forEachIndex)}do{
			_normalWeaps set [count(_normalWeaps),_x];
			_counter = _counter + 1;
		};
	}forEach _kinds2;
	
	// Can't sell backpacks from vehicle because there is currently no command to remove single backpacks from cargo (only clearBackpackCargo which removes all)
	/*
	_kinds3 = _bags select 0;
	_ammmounts3 = _bags select 1;
	{
		_counter = 0 ;
		while{	_counter < ( 	_ammmounts3 select _forEachIndex)}do{
			_normalBags set [count(_normalBags),_x];
			_counter = _counter + 1;
		};
	}forEach _kinds3;
	*/

	[_normalWeaps,_normalMags, typeOf _vehicle,_normalBags] call Z_checkArrayInConfig;
}else{
	_ctrltext = localize "STR_EPOCH_PLAYER_245";
	ctrlSetText [Z_AT_TRADERLINE2, _ctrltext];

	_ctrltext = localize "STR_EPOCH_TRADE_NO_VEHICLE";
	ctrlSetText [Z_AT_TRADERLINE1, _ctrltext];
};
