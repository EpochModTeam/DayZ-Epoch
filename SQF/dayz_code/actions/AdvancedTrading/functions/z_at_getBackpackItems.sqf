/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your backpack and innitiates the selling list.
**/
private ["_backpack","_pic","_formattedText","_normalMags","_normalWeaps","_freeSpace"];
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
	
	_freeSpace = [_backpack,0,0,0,0] call Z_calcFreeSpace;
	_normalMags = _freeSpace select 5;
	_normalWeaps = _freeSpace select 6;

	[_normalWeaps, _normalMags, typeOf _backpack,[]] call Z_checkArrayInConfig;
};
