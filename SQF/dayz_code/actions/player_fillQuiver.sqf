private["_qty_arrows","_qty_quivers","_control","_qty_quiverarrows","_qty_quiverfreeslots","_qty_arrows2add"];

disableSerialization;
call gear_ui_init;

_qty_arrows = {_x == "WoodenArrow"} count magazines player;
_qty_quivers = {_x == "Quiver"} count magazines player;

_control = uiNamespace getVariable 'uiControl';
_qty_quiverarrows = gearSlotAmmoCount _control;
_qty_quiverfreeslots = 12-_qty_quiverarrows;

//if (_qty_quivers > 1) exitWith { cutText [localize "str_quiver_reachlimit", "PLAIN DOWN"];};
if (_qty_quiverfreeslots > 0) then {
	_qty_arrows2add = _qty_quiverfreeslots min _qty_arrows;
	player removeMagazine "Quiver";
	for "_x" from 1 to _qty_arrows2add do {
		player removeMagazine "WoodenArrow";
	};
	player addMagazine ["Quiver",_qty_quiverarrows+_qty_arrows2add];
	cutText [format [localize "str_quiver_addarrows",_qty_arrows2add], "PLAIN DOWN"];
} else {
	cutText [localize "str_quiver_full", "PLAIN DOWN"];
};
