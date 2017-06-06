private ["_finished","_id","_unit","_item"];

_unit = (_this select 3) select 0;
_item = (_this select 3) select 1;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine _item;
closedialog 0;

call fnc_usec_medic_removeActions;
r_action = false;

[player,"bandage",0,false] call dayz_zombieSpeak;

if (vehicle player != player) then {
	uiSleep 3;
	_finished = true;
} else {
	_finished = ["Medic",1] call fn_loopAction;
};

if (_finished) then {
	if ((_unit == player) or (vehicle player != player)) then {
	//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
		if (_item=="ItemSepsisBandage") then {
			r_player_Sepsis = [false, 0];
			player setVariable ["USEC_Sepsis", false, true];
			player setVariable ["sepsisStarted", nil];
		};
	} else {
		PVDZ_send = [_unit,"Bandage",[_unit,player]];
		publicVariableServer "PVDZ_send";
		[20,0] call player_humanityChange;
	};
} else {
	player addMagazine _item;
};

dayz_actionInProgress = false;