private ["_started","_finished","_animState","_isMedic","_num_removed","_unit","_lastused"];
// bleed.sqf
_unit = (_this select 3) select 0;
//_lowBlood = 	_unit getVariable ["USEC_lowBlood", false];
//_injured = 		_unit getVariable ["USEC_injured", false];
//_inPain = 		_unit getVariable ["USEC_inPain", false];
_lastused = 	_unit getVariable ["LastTransfusion", time];

// if (_lastused - time < 60) exitwith {cutText [format[(localize "str_actions_medical_18"),_text] , "PLAIN DOWN"]};

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
	_unit setVariable["LastTransfusion",time,true];
	_unit setVariable["USEC_lowBlood",false,true];
	_num_removed = ([player,"ItemBloodbag"] call BIS_fnc_invRemove);
	if(_num_removed == 1) then {
		//["usecTransfuse",[_unit,player]] call broadcastRpcCallAll;
		usecTransfuse = [_unit,player];
		publicVariable "usecTransfuse";

		//PVDZE_plr_HumanityChange = [player,100];
		[player,100] call player_humanityChange;
	};
} else {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};