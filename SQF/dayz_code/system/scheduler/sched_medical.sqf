// (c) facoptere@gmail.com, licensed to DayZMod for the community

#include "scheduler.hpp"

sched_medical_slow = {  // 10 seconds
	if (abs (r_player_blood - (player getVariable["USEC_BloodQty", 12000])) > 120) then {
 	//Do not global send
		player setVariable["USEC_BloodQty", r_player_blood, false];
		player setVariable["medForceUpdate", true, false];
	//Send only to server	
		PVDZ_serverStoreVar = [player, "USEC_BloodQty", r_player_blood];
		publicVariableServer "PVDZ_serverStoreVar";
	};

	objNull
};

sched_medical_init = { [ []spawn{} ] };
sched_medical = { // 1 second
	HIDE_FSM_VARS
	private "_unconHdlr";
	_unconHdlr = _this select 0;

	if (r_player_blood == 12000) then {
		r_player_foodstack = 0;
	};

	//r_player_unconscious = getVariable ["NORRN_unconscious", true];

	if (r_player_blood <= 0) then {
		[dayz_sourceBleeding, "bled"] spawn player_death;
	};

	if (!canStand player) then { // be consistant with player_updateGui.sqf
		if ((player getVariable ["hit_legs", 0] < 1) OR !r_fracture_legs) then {
			 player setVariable ["hit_legs",1,true];
			 r_fracture_legs = true;
		};
	};

	if ((r_player_blood <= 3000) and !r_player_unconscious) then {
		if (random 100 > 99) then {
			[player, ((random 0.1) + 0.2)] call fnc_usec_damageUnconscious;
		};
	};

	//Handle Unconscious player
	if ((r_player_unconscious) and (!r_player_unconsciousInProgress) and (scriptDone _unconHdlr)) then {
		//localize "CLIENT: Start Unconscious Function";
		_unconHdlr = [] spawn fnc_usec_unconscious;
	};

	if (r_player_injured) then {
		if (!r_player_handler) then {
			r_player_handler = true;
			[] spawn fnc_usec_playerHandleBlood;
		};
	} else {
		[] spawn fnc_usec_playerHandleBlood;
	};

	[_unconHdlr]
};

sched_medical_effects_init = { 
	private ["_hndCC", "_hndDB", "_hndRB"];

	_hndCC = ppEffectCreate ["colorCorrections", 3];
	_hndCC ppEffectEnable true;
	_hndDB = ppEffectCreate ["dynamicBlur", 2];
	_hndDB ppEffectEnable true;
	_hndRB = ppEffectCreate ["radialBlur", 1];
	_hndRB ppEffectEnable true;
	_hndRB ppEffectAdjust [0, 0, 0.5, 0.5];
	_hndRB ppEffectCommit 0;	
	
	[ _hndCC, _hndDB, _hndRB ]
};

sched_medical_effects = { 
	// every 2 seconds:
	//	change saturation, blur and vignetting according to blood level
	//	Shivering if character temperature is near the minimum
	
	private ["_hndCC", "_hndDB", "_tmp1", "_tmp2", "_tmp3"];
	_hndCC = _this select 0;
	_hndDB = _this select 1;
	_hndRB = _this select 2;

    if (r_player_infected) then {
        _tmp1 = 0.4 + 0.06 * cos(diag_tickTime * 360 / 12);
        _tmp2 = 0.05 + 0.03 * cos(diag_tickTime * 360 / 4);
        _tmp3 = 0.05 + 0.03 * sin(diag_tickTime * 360 / 4);
   		_hndRB ppEffectAdjust [_tmp2, _tmp3, _tmp1, _tmp1];
	}
	else {
		_hndRB ppEffectAdjust [0, 0, 0.5, 0.5];
	};

    if (r_player_unconscious) then {
        // TODO:  0 fadeSound 0.05;
		_hndCC ppEffectAdjust [1, 0.2, 0, [1, 1, 1, 0], [1, 1, 1, 0], [1, 1, 1, 0]];
		_hndDB ppEffectAdjust [20];
    }
    else {
        _tmp1 = r_player_blood/r_player_bloodTotal;
        _tmp1 = (1 + random 7) * _tmp1;
        _tmp1 = 1 min _tmp1;
        _tmp2 = if (_tmp1 > 0.5) then {1} else {0.3};
		_hndCC ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [_tmp2, _tmp2, _tmp2, _tmp1], [1, 1, 1, 0]];
		_hndDB ppEffectAdjust [0];
	};

	[_hndCC, _hndDB, _hndRB] ppEffectCommit 1.5;

	//Add Shivering
	if (dayz_temperatur <= (0.125 * (dayz_temperaturmax - dayz_temperaturmin) + dayz_temperaturmin) and ((vehicle player == player and speed player < 5) or (vehicle player != player))) then {
		addCamShake [0.6 * (dayz_temperaturmin / dayz_temperatur), 2, 30];
	};

	[ _hndCC, _hndDB, _hndRB ]
};

sched_medical_effectsSlow = {
	// every 10 seconds: diziness using slow shakecam, to handle pain and lack of water
	HIDE_FSM_VARS
	
	r_player_inpain = true;

    if ((r_player_inpain or dayz_thirst >= SleepWater) and !r_player_unconscious and (1 > random 9) and (0 == player getVariable["startcombattimer",0])) then {
        _blurTask = [] spawn {
            _strength = 0.5 + (random 1);
            _duration = 8 + (random 10);
            enableCamShake true;
			
			//[posCoef, vertCoef, horzCoef, bankCoef, interpolation]
            setCamShakeParams [0.02, 0.05, 0.1, 0.3, true];
            addCamShake [_strength, _duration, 0.4];
            playSound "breath_1";
			
			//Lets make sure the spawn ends 1 sec after the _duration timer this should provide a smooth transtion rather then a snap to focus.
            sleep _duration + 1;
        };
    };

	if (r_player_infected and !r_player_unconscious and 1 > random 2 and ((vehicle player == player and speed player < 5) or (vehicle player != player))) then {
		[player,"cough",1,false] call dayz_zombieSpeak;
		addCamShake [2, 1, 25];
	};

	objNull
};
