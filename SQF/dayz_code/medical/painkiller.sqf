// bleed.sqf

private ["_id","_unit","_num_removed"];

disableserialization;

_unit = (_this select 3) select 0;

call fnc_usec_medic_removeActions;
r_action = false;

_num_removed = ([player,"ItemPainkiller"] call BIS_fnc_invRemove);
if(_num_removed == 1) then {

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};	

	_unit setVariable ["USEC_inPain", false, true];

	if (vehicle player == player) then {
		//not in a vehicle
		player playActionNow "Gear";
	};

	if ((_unit == player) || (vehicle player != player)) then {
		//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
	} else {
		[player,20] call player_humanityChange;
	};

	sleep 1;
	//clear the healed player's vision
	/* PVS/PVC - Skaronator */
	PVDZE_send = [_unit,"Painkiller",[_unit,player]];
	publicVariableServer "PVDZE_send";
};
