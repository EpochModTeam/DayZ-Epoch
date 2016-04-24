private ["_id","_unit"];
_unit = (_this select 3) select 0;

_unit setVariable ["USEC_inPain", false, true];

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Gear";
};

if ((_unit == player) or (vehicle player != player)) then {
	//Self Healing
	_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
} else {
	//PVCDZ_plr_Humanity = [player,20];
	[player,20] call player_humanityChange;
};

player removeMagazine "ItemPainkiller";

uiSleep 1;

PVDZ_send = [_unit,"Painkiller",[_unit,player]];
publicVariableServer "PVDZ_send";