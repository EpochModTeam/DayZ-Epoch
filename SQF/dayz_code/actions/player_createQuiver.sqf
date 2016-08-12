private ["_qty_arrows","_qty_quivers","_qty_quiverarrows"];
call gear_ui_init;

_qty_arrows = {_x == "1Rnd_Arrow_Wood"} count magazines player;
_qty_quivers = {_x == "12Rnd_Quiver_Wood"} count magazines player;

//if (_qty_quivers > 0) exitWith { localize "str_quiver_reachlimit" call dayz_rollingMessages;};
if (_qty_arrows < 2) exitWith { localize "str_quiver_notenougharrows" call dayz_rollingMessages;}; //Not enough arrows to create 12Rnd_Quiver_Wood

_qty_quiverarrows = _qty_arrows min 6;

for "_x" from 1 to _qty_quiverarrows do {
	player removeMagazine "1Rnd_Arrow_Wood";
};
player addMagazine ["12Rnd_Quiver_Wood",_qty_quiverarrows];
format[localize "str_quiver_createsuccess",_qty_quiverarrows] call dayz_rollingMessages;
