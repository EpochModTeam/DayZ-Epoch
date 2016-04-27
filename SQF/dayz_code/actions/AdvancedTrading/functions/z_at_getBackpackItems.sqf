/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your backpack and innitiates the selling list.
**/
#include "defines.sqf";
private ["_backpack","_pic","_formattedText","_mags","_weaps","_normalMags","_normalWeaps","_kinds","_kinds2","_ammmounts","_ammmounts2","_ctrltext"];
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

	[_normalMags,_normalWeaps, typeOf _backpack] call Z_checkArrayInConfig;
}else{
	_ctrltext = format["I'm not stupid."];
	ctrlSetText [Z_AT_TRADERLINE2, _ctrltext];

	_ctrltext = format["You are not wearing a backpack."];
	ctrlSetText [Z_AT_TRADERLINE1, _ctrltext];
};
