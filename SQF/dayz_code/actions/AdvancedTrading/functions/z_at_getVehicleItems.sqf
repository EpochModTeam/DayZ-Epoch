/**
*	call Z_getVehicleItems
*
*	Gets all your items stored in your vehicle and innitiates the selling list.
**/
private ["_vehicle","_pos","_list","_formattedText","_pic","_normalMags","_normalWeaps","_freeSpace"];
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
	_freeSpace = [_vehicle,0,0,0,0] call Z_calcFreeSpace;
	_normalMags = _freeSpace select 5;
	_normalWeaps = _freeSpace select 6;	
	//_normalBags = _freeSpace select 7;
	// Don't allow selling backpacks from vehicles because we can not get backpack contents.
	// We can only remove all backpacks with clearBackpackCargo and then add back new empty backpacks for ones that weren't sold.

	[_normalWeaps,_normalMags,typeOf _vehicle,[]] call Z_checkArrayInConfig;
};
