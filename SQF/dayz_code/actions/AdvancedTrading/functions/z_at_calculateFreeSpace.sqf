private["_selection","_returnArray","_allowedMags","_allowedWeapons","_allowedBackpacks","_allowedTools","_allowedPrimary","_allowedSidearm","_formattedText","_pic"
,"_backpack","_vehicleWeapons","_vehicleMagazines","_vehicleBackpacks","_tempWeaponsArray","_tempBackpackArray","_tempMagazinesArray","_actualMags"
,"_normalMags","_normalWeaps","_kinds","_kinds2","_amounts","_amounts2","_counter"];
#include "defines.hpp"

_selection = _this select 0;
_returnArray = [0,0,0];
if(_selection == 2) then{ //gear
	_actualMags = {!(_x in MeleeMagazines)} count (magazines player);
	_allowedMags = 20 - _actualMags;
	// 12 toolbelt + 1 Binoculars + 1 NVG + 1 Pistol + 1 Primary (onBack isn't counted in weapons player)
	_allowedWeapons = 16 - count(weapons player);

	_pic = getText (configFile >> 'CfgVehicles' >> (typeOf player) >> 'portrait');
	_formattedText = format [
		"<img image='%1' size='3' align='center'/>"
		, _pic
	];

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

	_backpack = unitBackpack player;
	_allowedBackpacks = if (isNull _backpack) then {1} else {0};

	_returnArray = [_allowedMags, _allowedWeapons, _allowedBackpacks];
};
if(_selection == 1) then{ //vehicle
	_allowedMags = 0;
	_allowedWeapons = 0;
	_allowedBackpacks = 0;
	_vehicleMagazines = 0;
	_vehicleWeapons = 0;
	_vehicleBackpacks = 0;
	if (!isNull Z_vehicle) then {

		_pic = getText (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'picture');

		_formattedText = format [
			"<img image='%1'  size='3' align='center'/>"
			, _pic
		];

		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

		_tempMagazinesArray = getMagazineCargo Z_vehicle;

		{
			_vehicleMagazines = _vehicleMagazines + _x;
		}count ( _tempMagazinesArray select 1);


		_tempWeaponsArray = getWeaponCargo Z_vehicle;

		{
			_vehicleWeapons = _vehicleWeapons + _x;
		}count ( _tempWeaponsArray select 1);


		_tempBackpackArray = getBackpackCargo Z_vehicle;

		{
			_vehicleBackpacks = _vehicleBackpacks + _x;
		}count ( _tempBackpackArray select 1);

		_allowedWeapons = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxWeapons');
		_allowedMags = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportMaxMagazines');
		_allowedBackpacks = getNumber (configFile >> 'CfgVehicles' >> (typeOf Z_vehicle) >> 'transportmaxbackpacks');
	};
	_returnArray = [_allowedMags - _vehicleMagazines, _allowedWeapons - _vehicleWeapons, _allowedBackpacks - _vehicleBackpacks];
};
if(_selection == 0) then{ //backpack
	_allowedBackpacks = 0;
	_totalBagSlots = 0;
	_alreadyInBackpack = 0;
	_backpack = unitBackpack player;
	if (!isNull _backpack) then {
		_pic = getText (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'picture');

		_formattedText = format [
			"<img image='%1'  size='3' align='center'/>"
			, _pic
		];

		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;
		
		_tempMagazinesArray = getMagazineCargo _backpack;		
		_tempWeaponsArray = getWeaponCargo _backpack;				
		_normalMags = [];
		_normalWeaps = [];

		_kinds = _tempMagazinesArray select 0;
		_amounts = _tempMagazinesArray select 1;
		{
			_counter = 0;
			while {_counter < (_amounts select _forEachIndex)} do {
				_normalMags set [count(_normalMags), _x];
				_counter = _counter + 1;
			};
		} forEach _kinds;

		_kinds2 = _tempWeaponsArray select 0;
		_amounts2 = _tempWeaponsArray select 1;
		{
			_counter = 0;
			while {_counter < (_amounts2 select _forEachIndex)} do {
				_normalWeaps set [count(_normalWeaps), _x];
				_counter = _counter + 1;
			};
		} forEach _kinds2;

		_totalBagSlots = getNumber (configFile >> 'CfgVehicles' >> (typeOf _backpack) >> 'transportMaxMagazines');
		_currentPrim = 0;
		_currentSec = 0;
		_currentTool = 0;
		{
			_parentClasses = [(configFile >> "CfgWeapons" >> _x ),true] call BIS_fnc_returnParents;
			if ('ItemCore' in _parentClasses or 'Binocular' in _parentClasses) then {
				_currentTool = _currentTool + 1;
			} else {
				if ('PistolCore' in _parentClasses) then {
					_currentSec = _currentSec + 1;
				} else {
					_currentPrim = _currentPrim + 1;
				};
			};
		} count _normalWeaps;

		_alreadyInBackpack = (10 * _currentPrim) + (5 * _currentSec) + _currentTool + count(_normalMags);
	};
	_returnArray = [_totalBagSlots - _alreadyInBackpack, floor((_totalBagSlots - _alreadyInBackpack) / 10), _allowedBackpacks];
};
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetText format["%1/%2/%3",_returnArray select 1,_returnArray select 0,_returnArray select 2];
