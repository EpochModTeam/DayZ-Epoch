/**
*	call Z_getVehicleItems
*
*	Gets all your items stored in your vehicle and initiates the selling list.
**/
private ["_formattedText","_pic","_normalMags","_normalWeaps","_freeSpace"];
#include "defines.hpp"

call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];

if (!isNull DZE_myVehicle) then {
	_pic = getText (configFile >> 'CfgVehicles' >> (typeOf DZE_myVehicle) >> 'picture');

	_formattedText = format [
		"<img image='%1'  size='3' align='center'/>"
		, _pic
	];

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;
	_freeSpace = [DZE_myVehicle,0,0,0,0] call Z_calcFreeSpace;
	_normalMags = _freeSpace select 5;
	_normalWeaps = _freeSpace select 6;	
	//_normalBags = _freeSpace select 7;
	// Don't allow selling backpacks from vehicles because we can not get backpack contents.
	// We can only remove all backpacks with clearBackpackCargo and then add back new empty backpacks for ones that weren't sold.

	[_normalWeaps,_normalMags,typeOf DZE_myVehicle,[]] call Z_checkArrayInConfig;
};
