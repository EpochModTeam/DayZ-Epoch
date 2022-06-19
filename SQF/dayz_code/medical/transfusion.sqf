if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

local _unit = (_this select 3) select 0;
local _bagUsed = (_this select 3) select 1;

call fnc_usec_medic_removeActions;
closeDialog 0;
r_action = false;

if (time - dayz_lastTransfusion > 120) then {dayz_bloodBagHumanity = 300;}; //Reset humanity reward to full value after two minutes

local _badBag = false;
local _wholeBag = false;
local _duration = [2,3] select ((_unit getVariable ["USEC_BloodQty",0]) <= 4000); //Unconscious timeout for receiving unit	

if (!dayz_classicBloodBagSystem) then {
	local _bloodType = _unit getVariable ["blood_type", ""]; //Get receiving units blood type
	local _rh = _unit getVariable ["rh_factor", false]; //Get the receiving units RH type
	local _rhVal = if (_rh) then {"POS"} else {"NEG"}; // Get the RH value.
	local _bloodTestdone = _unit getVariable ["blood_testdone", false]; //Get status of blood test of receiving unit
	local _bloodResult = _bloodType + _rhVal; // Combine strings for convenience
	
	local _bloodBagArrayNeeded = ["bloodBagONEG"];

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

	local _bagFound = (_bagUsed in _bloodBagArrayNeeded);
	local _bloodBagWholeNeeded = "wholeBloodBag" + _bloodResult;
	local _wholeBagFound = (_bagUsed == _bloodBagWholeNeeded);

	call { // Options are listed top to bottom in order of precedence
		if (_bagFound) exitWith {_wholeBag = false; _badBag = false;}; //use packed/separated bags first
		if (_wholeBagFound) exitWith {_wholeBag = true; _badBag = false;};
		_wholeBag = false; 
		_badBag = true; // Default
	};
};

local _humanityAwarded = 0;
local _msg = "";				
local _bloodAmount = [4000 ,r_player_bloodTotal] select (!_wholeBag); /*Whole blood only gives 4k*/
local _isClose = false;
local _finished = false;
local _isOk = true;

//diag_log format ["TRANSFUSION: starting blood transfusion (%1 > %2)", name player, name _unit];

local _count = [player,_bagUsed,1] call BIS_fnc_invRemove;
if (_count != 1) exitwith {dayz_actionInProgress = false;localize "str_actions_medical_transfusion_interrupted" call dayz_rollingMessages;};

if (!_badBag) then {
	PVDZ_send = [_unit,"Transfuse",[_unit,player,_bloodAmount]];
	publicVariableServer "PVDZ_send";
};

localize "str_actions_medical_transfusion_start" call dayz_rollingMessages;

while {1==1} do {
	_finished = ["Medic",1] call fn_loopAction;

	if (_finished) then {
		if (!_badBag) then {
			_bloodAmount = _bloodAmount - 500;

			// 25 points to be given up to a maximum of 300 points if the player stays for the full duration
			//This should be better this way to keep calculus simple and prevent people getting points for giving blood transfusions to healthy players (and less humanity for only very small amounts of blood)
			//Pulled from pull request from ILoveBeans
			if (_humanityAwarded < dayz_bloodBagHumanity) then {
				_humanityAwarded = _humanityAwarded + 25;
			};
		} else {
			// Knock the player out after one loop cyrcle if they get a bad blood bag.
			_isOk = false;
			_msg = "str_actions_medical_transfusion_fail";
		};
	};

	if (_isOk && !_finished) then {
		_msg = "str_actions_medical_transfusion_interrupted";
		_duration = 3;
		_isOk = false;
	};

	if (!_isOk) exitwith {			
		PVDZ_send = [_unit,"Unconscious",[_unit,_duration],[_unit,dayz_authKey,player]];
		publicVariableServer "PVDZ_send";		
	};

	if ((_unit getVariable ["USEC_BloodQty", 0]) >= r_player_bloodTotal || _bloodAmount <= 0) exitwith {
		dayz_bloodBagHumanity = dayz_bloodBagHumanity / 2; //Diminish humanity reward for subsequent transfusions. Resets to full reward after two minutes.
		dayz_lastTransfusion = time;
		_humanityAwarded call player_humanityChange;
		_msg = "str_actions_medical_transfusion_successful";
	};
};

localize _msg call dayz_rollingMessages;
dayz_actionInProgress = false;