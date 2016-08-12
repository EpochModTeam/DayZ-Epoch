private ["_qty_arrows","_qty_quivers","_control","_qty_quiverarrows","_qty_quiverfreeslots","_qty_arrows2add"];

disableSerialization;
call gear_ui_init;

_qty_arrows = {_x == "1Rnd_Arrow_Wood"} count magazines player;
_qty_quivers = {_x == "12Rnd_Quiver_Wood"} count magazines player;

_control = uiNamespace getVariable 'uiControl';
_qty_quiverarrows = gearSlotAmmoCount _control;
_qty_quiverfreeslots = 12-_qty_quiverarrows;

//if (_qty_quivers > 1) exitWith { localize "str_quiver_reachlimit" call dayz_rollingMessages;};
if (_qty_quiverfreeslots > 0) then {
	_qty_arrows2add = _qty_quiverfreeslots min _qty_arrows;
	player removeMagazine "12Rnd_Quiver_Wood";
	for "_x" from 1 to _qty_arrows2add do {
		player removeMagazine "1Rnd_Arrow_Wood";
	};
	player addMagazine ["12Rnd_Quiver_Wood",_qty_quiverarrows+_qty_arrows2add];
	format[localize "str_quiver_addarrows",_qty_arrows2add] call dayz_rollingMessages;
} else {
	localize "str_quiver_full" call dayz_rollingMessages;
};
