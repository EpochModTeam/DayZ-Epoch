// bleed.sqf

private ["_started","_finished","_animState","_isMedic","_id","_unit","_display"];

disableserialization;

_unit = (_this select 3) select 0;

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

[1,1] call dayz_HungerThirst;

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
[player,"bandage",0,false] call dayz_zombieSpeak;
while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started && !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	if (vehicle player != player) then {
		sleep 3;
		r_doLoop = false;
		_finished = true;
	};
	sleep 0.1;
};
r_doLoop = false;

if (_finished) then {

	_num_removed = ([player,"ItemBandage"] call BIS_fnc_invRemove);
	if(_num_removed == 1) then {

		if (vehicle player != player) then {
			_display = findDisplay 106;
			_display closeDisplay 0;
		};	

		if ((_unit == player) || (vehicle player != player)) then {
			//Self Healing
			_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
			dayz_sourceBleeding =	objNull;
		} else {
			/* PVS/PVC - Skaronator */
			PVDZE_send = [_unit,"Bandage",[_unit,player]];
			publicVariableServer "PVDZE_send";
			[player,20] call player_humanityChange;
		};

		{_unit setVariable[_x,false,true];} count USEC_woundHit;
		_unit setVariable ["USEC_injured",false,true];

	};
} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
};