private ["_bloodAmount","_unit","_blood","_lowBlood","_injured","_inPain","_hasTransfusionKit","_animState","_started","_finished","_timer","_i","_isMedic","_isClose","_duration","_rhVal","_bloodBagArrayNeeded","_BBneeded","_bbselect","_bloodBagNeeded","_badBag","_wholeBag","_bagFound","_bagToRemove","_forceClose","_bloodType","_rh","_bloodBagArray","_bbarray_length","_bloodBagWholeNeeded","_haswholebag","_r","_bloodTestdone","_sentRequest"];// bleed.sqf
//Get receving unit
_unit = (_this select 3) select 0;

//Does the player have a transfusionKit
//_hasTransfusionKit = "transfusionKit" in magazines player;
if (time - dayz_lastTransfusion > 120) then {dayz_bloodBagHumanity = 300;}; //Reset humanity reward to full value after two minutes 

//Get receving units blood value
_blood = _unit getVariable ["USEC_BloodQty", 0];
//Get receving units bloodtype
_bloodType = _unit getVariable ["blood_type", ""];
//Get the receving units RH type
_rh = _unit getVariable ["rh_factor", false];
//Get status of bloodtest of receving unit
_bloodTestdone = _unit getVariable ["blood_testdone", false];
r_interrupt = false;

_badBag = false;
_wholeBag = false;
_bagFound = false;
_forceClose = false;

//End if the player does not have a transfusion kit
//if (!_hasTransfusionKit) exitWith { localize "str_actions_medical_transfusion_failed_transfusionkit" call dayz_rollingMessages; };

//Unconscious timeout for receving unit
_duration = if (_blood <= 4000) then { 3 } else { 2 };
_bloodBagArray = ["bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","bloodBagONEG","bloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"];
_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG"];
if (_bloodTestdone) then { // if the recipient does not know his blood type, only O- can apply
	switch (_bloodType) do {
		case "A" : {
			if (_rh) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagAPOS","bloodBagANEG","bloodBagONEG","bloodBagOPOS"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagANEG","bloodBagONEG"];
			};
		};
		case "B" : {
			if (_rh) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBPOS","bloodBagBNEG","bloodBagONEG","bloodBagOPOS"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagBNEG","bloodBagONEG"];
			};
		};
		case "AB" : {
			if (_rh) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABPOS","bloodBagABNEG","bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagONEG","bloodBagOPOS"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagABNEG","bloodBagANEG","bloodBagBNEG","bloodBagONEG"];
			};
		};
		case "O" : {
			if (_rh) then {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagOPOS","bloodBagONEG"];
			} else {
				_bloodBagArrayNeeded = ["ItemBloodbag","bloodBagONEG"];
			};
		};
	};
};

_BBneeded = false;
{ if (_x in magazines player) exitWith { _BBneeded = true; _bbselect = _x; }; } count _bloodBagArrayNeeded;

//No subs for whole blood :(
_rhVal = if (_rh) then { "POS" } else { "NEG" };
_bloodBagWholeNeeded = "wholeBloodBag" + _bloodType + _rhVal;
_haswholebag = _bloodBagWholeNeeded in magazines player;

if (!_BBneeded and !_haswholebag) then {
	_badBag = true;
};

//use packed/separated bags first
if (_BBneeded) then {
	_wholeBag = false;
} else {
	if (_haswholebag) then {
		_wholeBag = true;
	};
};

if (dayz_classicBloodBagSystem) then {_wholeBag = false; _badBag = false;};

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
_sentRequest = false;
_timer = diag_tickTime;
_i = 0;
_r = 0;
_humanityAwarded = 0;

_bloodAmount = if (!_wholeBag) then { 12000/*Full bloodbag*/ } else { 4000 /*Whole blood only gives 4k*/ };

while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;

	if (_isMedic and !_started) then {
		closeDialog 0;
		diag_log format ["TRANSFUSION: starting blood transfusion (%1 > %2)", name player, name _unit];
		if (_badBag) then {
			for "_r" from 0 to 15 do {
				//select random bloodbag if the player has more then one of the required types
				_bagToRemove = _bloodBagArray select _r;
				//TODO: add separate action menu options so the removed bag isn't random
				if (_bagToRemove in magazines player) exitWith { 
					_bagFound = true;
					if (_r >= 8) then {
						_wholeBag = true;
					};
				};
			};
		} else {
			_bagToRemove = if (_wholeBag) then { _bloodBagWholeNeeded } else { _bbselect };
			if (dayz_classicBloodBagSystem) then {_bagToRemove = "ItemBloodbag";};
			if (_bagToRemove in magazines player) then {
				_bagFound = true;
			};
		};
		if (!_bagFound) then {_forceClose = true;} else { player removeMagazine _bagToRemove;};
		localize "str_actions_medical_transfusion_start" call dayz_rollingMessages;
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_bagToRemove],"PLAIN DOWN"] call RE; 
		_started = true;
	};

	if (_started) then {
		//_sentRequest var stops the pvs running more then once as it's no longer needs too 1.8.4
		if ((!_sentRequest) And (!_badBag)) then { 
			PVDZ_send = [_unit,"Transfuse",[_unit,player,_bloodAmount]];
			publicVariableServer "PVDZ_send";
			_sentRequest = true;
		};
		if ((diag_tickTime - _timer) >= 1) then {
			_timer = diag_tickTime;
			//see Note 1
			//PVCDZ_hlt_Transfuse = [_unit,player,1000];
			//publicVariable "PVCDZ_hlt_Transfuse";
			if (!_wholeBag) then {
				_i = _i + 1; //Full bloodbag
			} else {
				_i = _i + 3;	//Whole blood only gives 4k
			};
			if (!_badBag) then {
				if (!_forceClose) then {
					_bloodAmount = _bloodAmount - 500;
					//see Note 1
					//PVDZ_send = [_unit,"Transfuse",[_unit,player,500]];
					//publicVariableServer "PVDZ_send";
					
					// 25 points to be givin upto a maximum of 300 points if the player stays for the full duration
					//This should be better this way to keep calculus simple and prevent people getting points for giving blood transfusions to healthy players (and less humanity for only very small amounts of blood)
					//Pulled from pullrequest from ILoveBeans
					if (_humanityAwarded < dayz_bloodBagHumanity) then {
						_humanityAwarded = _humanityAwarded + 25; 
					};
				};
			} else {
				if (!_forceClose and (_i >= 12)) then {
					_bloodAmount = 0;
					PVDZ_sendUnconscious = [_unit,_duration];
					publicVariableServer "PVDZ_sendUnconscious";
					
					diag_log ("Transfusion: "+str(PVDZ_sendUnconscious));
				};
			};
			
			//see Note 1
			//[player,_unit,"loc",rTITLETEXT,format["Transfusion of %1 in progress, remain still...",_bagToRemove],"PLAIN DOWN"] call RE;
			
		};
		if (!_isMedic) then {
			player playActionNow "Medic";
		};
	};

	_blood = _unit getVariable ["USEC_BloodQty", 0];

	if (_blood >= r_player_bloodTotal or _bloodAmount == 0) then {
		diag_log format ["TRANSFUSION: completed blood transfusion successfully (_i = %1)", _i];
		localize "str_actions_medical_transfusion_successful" call dayz_rollingMessages;
		dayz_bloodBagHumanity = dayz_bloodBagHumanity / 2; //Diminish humanity reward for subsequent bloodbags. Resets to full reward after two minutes. 
		dayz_lastTransfusion = time;
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_successful","PLAIN DOWN"] call RE;
		if (!_badBag and _bagFound) then { [_humanityAwarded,0] call player_humanityChange; };
		r_doLoop = false;
	};

	_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));

	if (r_interrupt or !_isClose or _forceClose) then {
		diag_log format ["TRANSFUSION: transfusion was interrupted (r_interrupt: %1 | distance: %2 (%3) | _i = %4)", r_interrupt, player distance _unit, _isClose, _i];
		localize "str_actions_medical_transfusion_interrupted" call dayz_rollingMessages;
		//see Note 1
		//[player,_unit,"loc",rTITLETEXT,localize "str_actions_medical_transfusion_interrupted","PLAIN DOWN"] call RE;
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

/*
	Note 1 - 1.8 system sending way too much info upto 12 times to the server on top of each call RE also being sent upto 12 times. System removed

*/
