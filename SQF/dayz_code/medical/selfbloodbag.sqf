private ["_msg","_unit","_bagUsed","_duration","_rhVal","_badBag","_bloodType","_bloodBagWholeNeeded","_wholeBag","_transfusionInfection","_finished","_bloodAmount"];

// Check to see if enough time has passed since the last self-transfusion.
if (time - dayz_lastSelfTransfusion <= DZE_selfTransfuse_Values select 2) exitWith {localize "str_actions_medical_18" call dayz_rollingMessages;};

_unit = _this select 0;
_bagUsed = _this select 1;

call gear_ui_init;
closeDialog 0;

_badBag = false;
_wholeBag = false;
_msg = "";
_finished = false;
_transfusionInfection = if (DZE_selfTransfuse_Values select 1 <= 0) then {false} else {((random 100) < (DZE_selfTransfuse_Values select 1))};
_duration = if ((_unit getVariable ["USEC_BloodQty", 0]) <= 4000) then {3} else {2};

if (!dayz_classicBloodBagSystem) then {
	// A player can only self blood bag with a whole typed bag or the classic ItemBloodbag.
	// If not using dayz_classicBloodBagSystem then the player needs to know his/her blood type or use wholeBloodBagONEG.
	_bloodType = _unit getVariable ["blood_type", ""];
	_rhVal = if (_unit getVariable ["rh_factor", false]) then {"POS"} else {"NEG"};
	_bloodBagWholeNeeded = "wholeBloodBag" + _bloodType + _rhVal;
	_wholeBag = _bagUsed in ["wholeBloodBagONEG",_bloodBagWholeNeeded];
	if (!_wholeBag) then {_badBag = true;};
};

_bloodAmount = if (!_wholeBag) then {(DZE_selfTransfuse_Values select 0)} else {4000};

localize "str_actions_medical_transfusion_start" call dayz_rollingMessages;
_unit removeMagazine _bagUsed;

// Players can self blood bag in a vehicle so we use this simple method.
if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

if (!_finished) then {
	_unit addMagazine _bagUsed;
	_msg = "str_actions_medical_transfusion_interrupted";
} else {
	if (!_badBag) then {
		r_player_blood = (r_player_blood + _bloodAmount) min r_player_bloodTotal;
		_msg = "str_actions_medical_transfusion_successful";
	} else {
		// Player gets knocked unconscious and receives no blood if wrong type is used.
		[_unit, _duration] call fnc_usec_damageUnconscious;
		_msg = "str_actions_medical_transfusion_fail";
	};
	dayz_lastSelfTransfusion = time;
	if (_transfusionInfection) then {
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
	};
};

localize _msg call dayz_rollingMessages;