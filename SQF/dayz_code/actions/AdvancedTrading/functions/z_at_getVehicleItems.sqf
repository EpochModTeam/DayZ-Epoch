/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your vehicle and innitiates the selling list.
**/
#include "defines.sqf";
Z_vehicle = objNull;
call Z_clearLists;
Z_SellableArray = [];
Z_SellArray = [];
_vehicle = objNull;

_list = nearestObjects [(getPosATL player), ["AllVehicles"], Z_VehicleDistance];
{
	if (!isNull _x && local _x && !isPlayer _x && alive _x && !(_x isKindOf "zZombie_base")) then {
		systemChat format["Selected %1",typeOf _x];
		_vehicle = _x;
	};
}count _list;

if (!isNull _vehicle) then {
	_pic = getText (configFile >> 'CfgVehicles' >> (typeOf _vehicle) >> 'picture');

	_formattedText = format [
		"<img image='%1'  size='3' align='center'/>"
		, _pic
	];

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;
	Z_vehicle = _vehicle;
	_mags = getMagazineCargo _vehicle;
	_weaps = getWeaponCargo _vehicle;

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

	[_normalWeaps,_normalMags, typeOf _vehicle] call Z_checkArrayInConfig;
}else{
	_ctrltext = format["Get in driver seat first!"];
	ctrlSetText [Z_AT_TRADERLINE2, _ctrltext];

	_ctrltext = format["I do not see any vehicle."];
	ctrlSetText [Z_AT_TRADERLINE1, _ctrltext];
};
