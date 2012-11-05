// bleed.sqf
_unit = (_this select 3) select 0;
_lowBlood = 	_unit getVariable ["USEC_lowBlood", false];
_injured = 		_unit getVariable ["USEC_injured", false];
_inPain = 		_unit getVariable ["USEC_inPain", false];

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started and !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	sleep 0.1;
};
r_doLoop = false;

if (_finished) then {
	_unit setVariable["USEC_lowBlood",false,true];
	player removeMagazine "ItemBloodbag";	
	usecTransfuse = [_unit,player];
	publicVariable "usecTransfuse";
} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
};

dayzHumanity = [player,250];
_id = dayzHumanity spawn player_humanityChange;