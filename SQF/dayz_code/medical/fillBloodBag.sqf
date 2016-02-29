private ["_victim","_started","_UID","_hasEmptyBag","_bloodDrained","_bloodLevel","_forceExit","_bloodType","_rh","_timer","_i","_complete","_animState","_isMedic","_blood","_bloodAfter","_isClose"];
/* ********************************************************
Used to fill blood bags with whole blood, only 4k per bag.
By icomrade for DayZ Mod
********************************************************* */

call fnc_usec_medic_removeActions;
call gear_ui_init;
closeDialog 0;
r_interrupt = false;
_victim = (_this select 3) select 0;
_hasEmptyBag = "emptyBloodBag" in magazines player;
_bloodLevel = _victim getVariable ["USEC_BloodQty", 0];
_bloodType = _victim getVariable ["blood_type", false];
_rh = _victim getVariable ["rh_factor", false];
r_doLoop = true;
_i = 0;
_started= false;
_timer = diag_tickTime;
_complete = false;
_bloodDrained = false;
_forceExit = false;
_UID = getPlayerUID player;
if ((isNil "_UID") or (_UID == "0")) exitWith {};
if (!_hasEmptyBag) exitWith { cutText [localize "str_actions_medical_bagEmpty", "PLAIN DOWN"]; };

if (_bloodLevel <= 4200) exitWith {cutText [localize "str_actions_medical_bagMissingBlood", "PLAIN DOWN"];};

if (!(alive _victim)) then {
	_bloodDrained = _victim getVariable ["bloodTaken", false];
	if (_bloodDrained) exitWith {_forceExit = true;};
	_victim setVariable ["bloodTaken", true, true];
};

if (_forceExit) exitWith {cutText [localize "str_actions_medical_bagMissingBlood", "PLAIN DOWN"];};

if (vehicle player == player) then {
	//not in a vehicle
	player playActionNow "Medic";
};

while {r_doLoop and (_i < 25)} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;

	if (_isMedic and !_started) then {
		player removeMagazine "emptyBloodBag";
		cutText [localize "str_actions_medical_transfusion_start", "PLAIN DOWN"];
		[player,_victim,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_start","PLAIN DOWN"] call RE;
		_started = true;
	};
	
	if (_started) then {
		if ((diag_tickTime - _timer) >= 1) then {
			_timer = diag_tickTime;
			r_player_blood = r_player_blood - 160;
			//PVDZ_send = [_victim,"Transfuse",[_victim,player,-160,_UID]];
			//publicVariableServer "PVDZ_send";
			_i = _i + 1;
		};

		if (!_isMedic) then {
			player playActionNow "Medic";
		};
	};

	_blood = _victim getVariable ["USEC_BloodQty", 0];
	_bloodAfter = (_blood - 4000);

	if ((_blood <= _bloodAfter) or (_i == 25)) then {
		cutText [localize "str_actions_medical_bagDone", "PLAIN DOWN"];
		[player,_victim,"loc",rTITLETEXT,localize "str_actions_medical_bagDone","PLAIN DOWN"] call RE;
		//_victim setVariable ["USEC_BloodQty", _bloodAfter, true];
		r_doLoop = false;
		_complete = true;
	};

	_isClose = ((player distance _victim) < ((sizeOf typeOf _victim) / 2));

	if (!_isClose) then {
		r_doLoop = false;
		r_interrupt = true;
		cutText [localize "str_actions_medical_bagInterrupted", "PLAIN DOWN"];
		[player,_victim,"loc",rTITLETEXT,localize "str_actions_medical_bagInterrupted","PLAIN DOWN"] call RE;
	};
};

if (r_interrupt) exitWith {
r_interrupt = false;
};

if (_complete) then {
	switch (_bloodType) do {
		case "A" : {
			if (_rh) then {
				player addMagazine "wholeBloodBagAPOS";
			} else {
				player addMagazine "wholeBloodBagANEG";
			};
		};

		case "B" : {
			if (_rh) then {
				player addMagazine "wholeBloodBagBPOS";
			} else {
				player addMagazine "wholeBloodBagBNEG";
			};
		};

		case "AB" : {
			if (_rh) then {
				player addMagazine "wholeBloodBagABPOS";
			} else {
				player addMagazine "wholeBloodBagABNEG";
			};
		};

		case "O" : {
			if (_rh) then {
				player addMagazine "wholeBloodBagOPOS";
			} else {
				player addMagazine "wholeBloodBagONEG";
			};
		};
	};
} else {
	diag_log format ["Fill Bag: Something went wrong and the bloodBag was not added!"];
};