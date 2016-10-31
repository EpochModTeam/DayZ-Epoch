private ["_selection","_returnArray","_allowedMags","_allowedWeapons","_allowedBackpacks","_pic","_backpack","_actualMags","_freeSpace","_allowedPrimary","_allowedSidearm","_p"];
#include "defines.hpp"

_selection = _this select 0;
_returnArray = [0,0,0];

if (_selection == 2) then { //gear
	//_actualMags = {!(_x in MeleeMagazines)} count (magazines player);
	//_allowedMags = 20 - _actualMags; //8 pistol + 12 regular = 20
	// Don't show pistol mag slots as item slots in gear. Player is informed of pistol mag slots count in systemChat.
	_actualMags = {(getNumber (configFile >> "CfgMagazines" >> _x >> "type") == 256)} count (magazines player); // 256 = WeaponSlotItem (normal magazine)
	_allowedMags = 12 - _actualMags;
	
	_p = primaryWeapon player;
	_allowedPrimary = if (_p != "") then {0} else {1};
	if (DZE_TwoPrimaries == 2 && dayz_onBack == "") then { _allowedPrimary = _allowedPrimary + 1; };
	
	_backpack = unitBackpack player;
	_allowedBackpacks = if (isNull _backpack) then {1} else {0};
	_allowedSidearm = 1;
	{
		switch getNumber (configFile >> "CfgWeapons" >> _x >> "type") do {
			case 2: {_allowedSidearm = 0;}; //Pistol
			case 4: {_allowedBackpacks = 0;}; //Launcher
		};
	} count (weapons player);
	
	// 12 toolbelt + 1 Binoculars + 1 NVG + 1 Pistol + 1 Primary = 16 (onBack isn't counted in weapons player)
	//_allowedWeapons = 16 - count(weapons player);
	// Don't show tool slots as weapon slots in gear. Player is informed of tool slots count in systemChat.
	_allowedWeapons = _allowedPrimary + _allowedSidearm;

	_pic = getText (configFile >> "CfgVehicles" >> (typeOf player) >> "portrait");

	(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText format [
		"<img image='%1' size='3' align='center'/>"
		, _pic
	];

	_returnArray = [_allowedMags, _allowedWeapons, _allowedBackpacks];
};

if (_selection == 1) then { //vehicle
	_allowedMags = 0;
	_allowedWeapons = 0;
	_allowedBackpacks = 0;

	if (!isNull DZE_myVehicle) then {
		_freeSpace = [DZE_myVehicle,0,0,0,0] call Z_calcFreeSpace;
		_allowedMags = _freeSpace select 1;
		_allowedWeapons = _freeSpace select 2;
		_allowedBackpacks = _freeSpace select 3;
		
		_pic = getText (configFile >> "CfgVehicles" >> (typeOf DZE_myVehicle) >> "picture");

		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText format [
			"<img image='%1' size='3' align='center'/>"
			, _pic
		];
	};
	_returnArray = [_allowedMags, _allowedWeapons, _allowedBackpacks];
};

if (_selection == 0) then { //backpack
	_totalBagSlots = 0;
	_totalSpace = 0;
	_backpack = unitBackpack player;
	if (!isNull _backpack) then {
		_freeSpace = [_backpack,0,0,0,0] call Z_calcFreeSpace;
		_totalSpace = _freeSpace select 0;
		_totalBagSlots = _freeSpace select 4;
		
		_pic = getText (configFile >> "CfgVehicles" >> (typeOf _backpack) >> "picture");

		(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText format [
			"<img image='%1' size='3' align='center'/>"
			, _pic
		];
	};
	_returnArray = [_totalBagSlots - _totalSpace, floor((_totalBagSlots - _totalSpace) / 10), 0];
};

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_SLOTSDISPLAY) ctrlSetStructuredText parseText format [
	"<img image='%1'/><t> %2 </t>" + //Weapons
	"<img image='%3'/><t> %4 </t>" + //Mags
	"<img image='%5'/><t> %6</t>", //Backpacks
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",_returnArray select 1,
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",_returnArray select 0,
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_backpacks_white.paa",_returnArray select 2
];