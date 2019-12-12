private ["_msg","_bagUsed","_bloodResult","_bloodAmount","_unit","_hasTransfusionKit","_timer","_i","_isClose","_duration","_rhVal","_bloodBagArrayNeeded","_bloodBagNeeded","_badBag","_wholeBag","_bagFound","_bloodType","_rh","_bloodBagWholeNeeded","_wholeBagFound","_bloodTestdone"];// bleed.sqf

_unit = (_this select 3) select 0;
_bagUsed = (_this select 3) select 1;

call fnc_usec_medic_removeActions;
r_action = false;

if !(vehicle player == player) exitWith {/* This check is probably not necessary */};

//Does the player have a transfusionKit
//_hasTransfusionKit = "transfusionKit" in magazines player;
if (time - dayz_lastTransfusion > 120) then {dayz_bloodBagHumanity = 300;}; //Reset humanity reward to full value after two minutes 

_badBag = false;
_wholeBag = false;
	
if (!dayz_classicBloodBagSystem) then {
	_bloodType = _unit getVariable ["blood_type", ""]; //Get receiving units blood type
	_rh = _unit getVariable ["rh_factor", false]; //Get the receiving units RH type
	_rhVal = if (_rh) then {"POS"} else {"NEG"}; // Get the RH value.
	_bloodTestdone = _unit getVariable ["blood_testdone", false]; //Get status of blood test of receiving unit
	_bloodResult = _bloodType + _rhVal; // Combine strings for convenience

	//End if the player does not have a transfusion kit
	//if (!_hasTransfusionKit) exitWith { localize "str_actions_medical_transfusion_failed_transfusionkit" call dayz_rollingMessages; };

	//Unconscious timeout for receiving unit
	_duration = if ((_unit getVariable ["USEC_BloodQty", 0]) <= 4000) then { 3 } else { 2 };
	_bloodBagArrayNeeded = ["bloodBagONEG"];

	if (_bloodTestdone) then { // if the recipient does not know his blood type, only O- can apply
		_bloodBagArrayNeeded = call {
			if (_bloodResult == "APOS") exitWith {["bloodBagAPOS","bloodBagANEG","bloodBagONEG","bloodBagOPOS"];};
			if (_bloodResult == "ANEG") exitWith {["bloodBagANEG","bloodBagONEG"];};
			if (_bloodResult == "BPOS") exitWith {["bloodBagBPOS","bloodBagBNEG","bloodBagONEG","bloodBagOPOS"];};
			if (_bloodResult == "BNEG") exitWith {["bloodBagBNEG","bloodBagONEG"];};
			if (_bloodResult == "ABPOS") exitWith {["bloodBagABPOS","bloodBagABNEG","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagONEG","bloodBagOPOS"];};
			if (_bloodResult == "ABNEG") exitWith {["bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG"];};
			if (_bloodResult == "OPOS") exitWith {["bloodBagOPOS","bloodBagONEG"];};
			if (_bloodResult == "ONEG") exitWith {["bloodBagONEG"];};
		};
	};

	_bagFound = (_bagUsed in _bloodBagArrayNeeded);

	//No subs for whole blood :(
	_bloodBagWholeNeeded = "wholeBloodBag" + _bloodResult;
	_wholeBagFound = (_bagUsed == _bloodBagWholeNeeded);

	call { // Options are listed top to bottom in order of precedence
		if (_bagFound) exitWith {_wholeBag = false; _badBag = false;}; //use packed/separated bags first
		if (_wholeBagFound) exitWith {_wholeBag = true; _badBag = false;};
		_wholeBag = false; _badBag = true; // Default
	};
};

r_interrupt = false;
r_doLoop = true;
_timer = diag_tickTime;
_i = 0;
_humanityAwarded = 0;
_msg = "";

_bloodAmount = if (!_wholeBag) then { r_player_bloodTotal/*Full bloodbag*/ } else { 4000 /*Whole blood only gives 4k*/ };

//diag_log format ["TRANSFUSION: starting blood transfusion (%1 > %2)", name player, name _unit];

player removeMagazine _bagUsed;
player playActionNow "Medic";

if (!_badBag) then { 
	PVDZ_send = [_unit,"Transfuse",[_unit,player,_bloodAmount]];
	publicVariableServer "PVDZ_send";
};

localize "str_actions_medical_transfusion_start" call dayz_rollingMessages;

while {r_doLoop} do {
	
	if (!(["medic",animationState player] call fnc_inString)) then {
		player playActionNow "Medic";
	};
	
	if ((diag_tickTime - _timer) >= 1) then {
		_timer = diag_tickTime;
		if (!_wholeBag) then {
			_i = _i + 1; //Full bloodbag
		} else {
			_i = _i + 3;	//Whole blood only gives 4k
		};
		if (!_badBag) then {
			_bloodAmount = _bloodAmount - 500;
			
			// 25 points to be given up to a maximum of 300 points if the player stays for the full duration
			//This should be better this way to keep calculus simple and prevent people getting points for giving blood transfusions to healthy players (and less humanity for only very small amounts of blood)
			//Pulled from pull request from ILoveBeans
			if (_humanityAwarded < dayz_bloodBagHumanity) then {
				_humanityAwarded = _humanityAwarded + 25; 
			};
		} else {
			// This is designed to knock the player out after 12 seconds if they get a bad blood bag.
			if (_i >= 12) then {
				_bloodAmount = 0;
				
				// Send to server with key for security
				PVDZ_send = [_unit,"Unconscious",[_unit,_duration],[_unit,dayz_authKey,player]];
				publicVariableServer "PVDZ_send";
				
				//diag_log ("Transfusion: "+str(PVDZ_send select 2));
				_msg = "str_actions_medical_transfusion_fail";
			};
		};
	};
	
	if ((_unit getVariable ["USEC_BloodQty", 0]) >= r_player_bloodTotal || _bloodAmount == 0) then {
		//diag_log format ["TRANSFUSION: completed blood transfusion successfully (_i = %1)", _i];
		dayz_bloodBagHumanity = dayz_bloodBagHumanity / 2; //Diminish humanity reward for subsequent transfusions. Resets to full reward after two minutes. 
		dayz_lastTransfusion = time;
		if (!_badBag) then {
			[_humanityAwarded,0] call player_humanityChange;
			_msg = "str_actions_medical_transfusion_successful";
		};
		r_doLoop = false;
	};

	_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));

	if (r_interrupt or !_isClose) then {
		//diag_log format ["TRANSFUSION: transfusion was interrupted (r_interrupt: %1 | distance: %2 (%3) | _i = %4)", r_interrupt, player distance _unit, _isClose, _i];
		_msg = "str_actions_medical_transfusion_interrupted";
		r_doLoop = false;
	};

	uiSleep 1;
};

r_doLoop = false;

if (r_interrupt) then {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};

// Wait until the animation stops to display the message.
waitUntil {uiSleep .5; (!(["medic",animationState player] call fnc_inString))};

localize _msg call dayz_rollingMessages;

/*
	Note 1 - 1.8 system sending way too much info upto 12 times to the server on top of each call RE also being sent upto 12 times. System removed

*/
