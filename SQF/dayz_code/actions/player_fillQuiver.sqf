disableSerialization;
call gear_ui_init;

local _quiver		= "12Rnd_Quiver_Wood";						// quiver class
local _arrow		= "1Rnd_Arrow_Wood";						// arrow class
local _arrows		= {_x == _arrow} count magazines player;			// qty of single arrows
local _control		= uiNamespace getVariable 'uiControl';				// get item slot
local _qtyArrows	= gearSlotAmmoCount _control;					// ammo count of selected quiver
local _qtyFreeSlots	= 12 - _qtyArrows;						// ammo count remaining

if (_qtyFreeSlots > 0) then {								// quiver is not full
	if (_arrows == 0) exitWith {							// player has no single arrows
		localize "str_quiver_notenougharrows" call dayz_rollingMessages;	// You do not have enough arrows.
	};
	local _qty_arrows2add = _qtyFreeSlots min _arrows;				// max qty of arrows that can be added

	local _dialog	= findDisplay 106;						// gear panel
	local _qArray	= [];								// quiver ammo count array

	for "_i" from 109 to 120 do {							// loop through all primary magazine slots
		local _control	= _dialog displayCtrl _i;				// get magazine slot
		local _mag	= gearSlotData _control;				// get magazine name

		if (_mag == _quiver) then {
			_qArray set [count _qArray, gearSlotAmmoCount _control];	// record ammo count of all quivers
		};
	};
	{
		if (_x == _qtyArrows) exitWith {
			_qArray set [_forEachIndex, _qtyArrows + _qty_arrows2add];	// top up ammo count for the appropriate quiver
		};
	} forEach _qArray;

	player removeMagazines _quiver;							// remove all quivers

	for "_x" from 1 to _qty_arrows2add do {
		player removeMagazine _arrow;						// clear out single arrows
	};
	{
		player addMagazine [_quiver, _x];					// recreate all quivers
	} forEach _qArray;

	reload player;

	format [localize "str_quiver_addarrows", _qty_arrows2add] call dayz_rollingMessages;	// You have added %1 arrows to the quiver.
} else {
	localize "str_quiver_full" call dayz_rollingMessages;					// The quiver is full.
};
