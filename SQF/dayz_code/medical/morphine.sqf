private ["_finished","_id","_unit"];
_unit = (_this select 3) select 0;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine "ItemMorphine";

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

if (_finished) then {
	_unit setVariable ["hit_legs",0];
	_unit setVariable ["hit_hands",0];

	if ((_unit == player) or (vehicle player != player)) then {
		//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	} else {
		[50,0] call player_humanityChange;
	};

	//["PVCDZ_hlt_Morphine",[_unit,player]] call broadcastRpcCallAll;
	//PVCDZ_hlt_Morphine = [_unit,player];
	//publicVariable "PVCDZ_hlt_Morphine";
	PVDZ_send = [_unit,"Morphine",[_unit,player]];
	publicVariableServer "PVDZ_send";
} else {
	player addMagazine "ItemMorphine";
};

dayz_actionInProgress = false;