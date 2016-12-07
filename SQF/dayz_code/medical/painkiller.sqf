private ["_id","_unit"];
_unit = (_this select 3) select 0;

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
//Send to server its given to someone else.
	PVDZ_send = [_unit,"Painkiller",[_unit,player]];
	publicVariableServer "PVDZ_send";
	
	[20,0] call player_humanityChange;
};

player removeMagazine "ItemPainkiller";
