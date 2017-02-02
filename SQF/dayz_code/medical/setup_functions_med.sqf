fnc_usec_damageHandle = {
	/***********************************************************
	ASSIGN DAMAGE HANDLER TO A UNIT
	- Function
	- [unit] call fnc_usec_damageHandle;
	************************************************************/
	//private["_unit","_eh"];
	_unit = _this select 0;
	mydamage_eh1 = _unit addeventhandler ["HandleDamage",{_this call fnc_usec_damageHandler;} ];
	mydamage_eh2 = _unit addEventHandler ["Fired", {_this call player_fired;}];
	mydamage_eh3 = _unit addEventHandler ["Killed", {[_this,"find"] call player_death;}];
};

fnc_usec_pitchWhine = {
	_visual = _this select 0;
	_sound = _this select 1;
	//affect the player
	0 fadeSound 0;
	playMusic ["PitchWhine",0];
	if (!r_player_unconscious) then {
		_visual call fnc_usec_bulletHit;
		if (dayz_soundMuted) then {
			_sound fadeSound 0.25;
		} else {
			_sound fadeSound 1;
		};
	};
	r_pitchWhine = true;
	[] spawn {
		uiSleep 32;
		r_pitchWhine = false;
	};
};

/*
//Old system 1.8.6
fnc_usec_damageUnconscious1 = {
	private["_unit","_damage"];
	_unit = _this select 0;
	_damage = _this select 1;
	
	diag_log format["fnc_usec_damageUnconscious: %1,%2,%3",_unit,_damage, player];
	
	if (_unit == player) then {
		r_player_timeout = 120 min (round((((random 2) max 0.1) * _damage) * 20));
		r_player_unconscious = true;
	};
};
*/
fnc_usec_damageUnconscious = {
	private["_unit","_damage"];
	_unit = _this select 0;
	_damage = _this select 1;
	
	diag_log format["fnc_usec_damageUnconscious: %1,%2,%3",_unit,_damage, player];
	
	_inVehicle = (vehicle _unit != _unit);
	if (_unit == player) then {
		r_player_timeout = 120 min (round((((random 2) max 0.1) * _damage) * 20));
		r_player_unconscious = true;
		
		player setVariable["medForceUpdate",true];
		player setVariable ["unconsciousTime", r_player_timeout, true];
	};
	
	if (_inVehicle) then {
		_unit spawn {
			private["_veh","_unit"];
			_veh = vehicle _this;
			_unit = _this;
			waitUntil{(((getPosATL _veh select 2 < 1) and (speed _veh < 1)) or (!r_player_unconscious))};
			if (r_player_unconscious) then {
				_unit action ["eject", _veh];
				waitUntil{((vehicle _this) != _this)};
				uiSleep 1;
				_unit playActionNow "Die";
			};
		};
	} else {
		_unit playActionNow "Die";
	};
};

//Action Handlers added to init file

fnc_usec_bulletHit = {
	//private["_commit"];
	_commit = _this;
	if (!r_player_unconscious) then {
        "colorCorrections" ppEffectEnable true; "colorCorrections" ppEffectAdjust [1, 1.1, -0.02, [0.4,-0.2,-0.2, .04], [1,1,1,0],  [1,1,1, 0]]; "colorCorrections" ppEffectCommit 0;
        "dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 0;
        setCamShakeParams [0.05, 4, 1, 3, true]; addCamShake [5, 0.5, 25];
        "colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [1, 1, 1, 1],  [1, 1, 1, 1]]; "colorCorrections" ppEffectCommit _commit;
        "dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit _commit;
	};
};

fnc_usec_damageGetWound = {
	//private["_wound"];
	_hit = format["%1",_this];
	_sPoint = USEC_woundHit find _hit;
	_options = USEC_woundPoint select _sPoint;
	_rnd = floor(random(count _options));
	_wound = _options select _rnd;
	_wound
};

fnc_usec_medic_removeActions = {
	_obj = player;
	{
		_obj = _x;
		{
			_obj removeAction _x;
		} forEach r_player_actions;
	} forEach r_action_targets;
	r_player_actions = [];
	r_action_targets = [];
};

fnc_usec_self_removeActions = {
	{
		player removeAction _x;
	} forEach r_self_actions;
	r_self_actions = [];
};

fnc_usec_calculateBloodPerSec = {
	private["_bloodLossPerSec","_bloodGainPerSec","_bloodPerSec"];
	_bloodLossPerSec = 0;
	_bloodGainPerSec = 0;

	if (dayz_thirst >= SleepWater) then {
		_bloodLossPerSec = _bloodLossPerSec + 10;
	};

	if (dayz_hunger >= SleepFood) then {
		_bloodLossPerSec = _bloodLossPerSec + 10;
	};

	if (r_player_injured) then {
		_bloodLossPerSec = 10;

		{
			_wounded = player getVariable["hit_"+_x,false];

			if (_wounded) then {
				_bloodLossPerSec = _bloodLossPerSec + 10;
			};
		} forEach USEC_typeOfWounds;
	};
	
	//Sepsis
	if (!r_player_infected) then {
		if (r_player_Sepsis select 0) then {
			 _time = diag_tickTime - (r_player_Sepsis select 1);
			if (_time > 900) then {
				if (_time < 1800) then {
					_time = ((_time - 900) max 1) min 900;
					_bloodLossPerSec = _bloodLossPerSec + (_time / 450) + 1;
					_bloodLossPerSec = _bloodLossPerSec - (_bloodLossPerSec % 1);
				} else {
					r_player_Sepsis = [false, 0];
					r_player_infected = true;
					player setVariable["USEC_infected",true,true];
				};
			};
			
			if ((_time < 1) and (isNil "sepsisStarted")) then {
			//if (isNil "sepsisStarted") then {
				localize "str_medical_sepsis_warning" call dayz_rollingMessages;
				//systemChat (localize "str_medical_sepsis_warning");
				player setVariable ["sepsisStarted", _time];
			};
		};
	} else {
		_bloodLossPerSec = _bloodLossPerSec + 3;
	};
	
	//_golbalNutrition = 1200 / r_player_Nutrition;

	if (r_player_bloodregen > 0) then {
		_bloodGainPerSec = r_player_bloodregen * 0.1;
/*		
		if ((r_player_bloodregen) < 30) then {
			_bloodGainPerSec = r_player_bloodregen * _golbalNutrition;
		};
		
		if ((r_player_bloodregen)< 60) then {
			_bloodGainPerSec = r_player_bloodregen * _golbalNutrition;
		};
*/

		r_player_bloodregen = (0 max r_player_bloodregen) - (0 max _bloodGainPerSec);
	};

	r_player_bloodlosspersec = _bloodLossPerSec;
	r_player_bloodgainpersec = _bloodGainPerSec;

	_bloodPerSec = _bloodGainPerSec - _bloodLossPerSec;
/*
private [ "_foodVal", "_thirstVal", "_tempVal"];
_foodVal = round(100*(1 - (dayz_hunger / SleepFood)));
_thirstVal = round(100*(1 - (dayz_thirst / SleepWater)));
_tempVal = round(100*(1 - ((dayz_temperatur - dayz_temperaturmin)/(dayz_temperaturmax - dayz_temperaturmin))));

	hintSilent format [ "blood/s: %1\ngain/s: %2\nloss/s: %3\nbloodregen: %4\ninjured: %5\ninfected: %6\nsepsis: %7\ninpain:%15\nblood: %8\nthirst: %9 (%12%%)\nhunger: %10 (%13%%)\ntemp: %11 (%14%%)\nFoodstack: %16\n", 
		_bloodPerSec,
		r_player_bloodgainpersec,
		r_player_bloodlosspersec,
		r_player_bloodregen,
		r_player_injured,
		r_player_infected,
		r_player_Sepsis,
		r_player_blood,
		dayz_thirst,
		dayz_hunger,
		dayz_temperatur,
		_thirstVal,
		_foodVal,
		_tempVal,
		r_player_inpain,
		r_player_foodstack
	];
*/
	dayz_lastMedicalSource = switch (true) do {
		case (dayz_thirst >= SleepWater): {"dehyd"}; //10
		case (dayz_hunger >= SleepFood): {"starve"}; //10
		case (r_player_infected): {"sick"}; //3
		default {"none"}; //reset
	};
	if (_bloodPerSec < 0 && dayz_lastMedicalSource != "none") then {dayz_lastMedicalTime = diag_tickTime;};
	
	r_player_bloodpersec = _bloodPerSec;
	_bloodPerSec
};

fnc_usec_playerHandleBlood = {
	private["_bloodPerSec","_elapsedTime"];
	if (r_player_injured) then { // bleeding
		_bleedTime = (random 500) + 100;
		_elapsedTime = 0;

		while {(r_player_injured) and (r_player_blood > 0)} do {
			_bloodPerSec = [] call fnc_usec_calculateBloodPerSec;
			r_player_blood = r_player_blood + _bloodPerSec;
			_elapsedTime = _elapsedTime + 1;

			if (_elapsedTime > _bleedTime) then {
				r_player_injured = false;
				_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
				dayz_sourceBleeding = objNull;
				call fnc_usec_resetWoundPoints;
			};

			_bloodDiff = r_player_blood - (player getVariable["USEC_BloodQty", 12000]);
			
			if ((_bloodDiff >= 500) or (_bloodDiff <= -500)) then {
				player setVariable["USEC_BloodQty",r_player_blood,true];
				player setVariable["medForceUpdate",true];
			};
			
			
			uiSleep 1;
		};
	} else { // not bleeding
		_bloodPerSec = [] call fnc_usec_calculateBloodPerSec;

		if (_bloodPerSec != 0) then {
			r_player_blood = r_player_blood + _bloodPerSec;
		};

		_bloodDiff = r_player_blood - (player getVariable["USEC_BloodQty", 12000]);


		if ((_bloodDiff >= 500) or (_bloodDiff <= -500)) then {
			player setVariable["USEC_BloodQty",r_player_blood,true];
			player setVariable["medForceUpdate",true];
		};
	};
};

fnc_usec_resetWoundPoints = {
	{
		player setVariable["hit_"+_x,false,true];
	} forEach USEC_typeOfWounds;
	player setVariable ["USEC_injured",false,true];
};

fnc_usec_damageBleed = {
	/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function fnc_usec_damageBleed: Draw a creepy blood stream from a player limb
	- [_unit, _wound, _injury] call fnc_usec_damageBleed;
	************************************************************/
	private["_wound","_modelPos","_point","_source"];
	_unit = _this select 0;
	_wound = _this select 1;
	_point = objNull;
	_source = objNull;
	//_injury = _this select 2; // not used. damage% ???

	if (isServer) exitWith{}; // no graphical effects on server!
		/*
		if ((dayz_bleedingeffect == 1) or (dayz_bleedingeffect == 3)) then {
			[] spawn fnc_blooddrops;
		};*/
		//diag_log format ["%1::fnc_usec_damageBleed %2", __FILE__, _this];

		_modelPos = [0,0,0];

		switch (_wound) do {
			case "Pelvis": {
				_modelPos = [0,0,0.2];
			};
			case "aimpoint": {
				_rndX = (0.1 - random 0.2);
				_modelPos = [_rndX,0,0.2];
			};
			case "RightShoulder": {
				_modelPos = [0,0,0.2];
			};
			case "LeftShoulder": {
				_modelPos = [0,0,0.2];
			};
			//added visual wounds to foots
			case "RightFoot": {
				_modelPos = [0,0,0.2];
			};
			case "LeftFoot": {
				_modelPos = [0,0,0.2];
			};
		};

		while {1 == 1} do {
			scopeName "main";
			waitUntil {(vehicle _unit == _unit)};
			
			if ((dayz_bleedingeffect == 2) or (dayz_bleedingeffect == 3)) then {
				//Blood partical
				_point = "Logic" createVehicleLocal getPosATL _unit;
				_source = "#particlesource" createVehicleLocal getPosATL _unit;
				_source setParticleParams
				/* Sprite */			[["\Ca\Data\ParticleEffects\Universal\Universal", 16, 13, 1],"",	// File,Ntieth,Index,Count,Loop(Bool)
				/* Type */				"Billboard",
				/* TimmerPer */			1,
				/* Lifetime */			0.2,
				/* Position */			[0,0,0],
				/* MoveVelocity */		[0,0,0.5],
				/* Simulation */		1,0.32,0.1,0.05,	//rotationVel,weight,volume,rubbing
				/* Scale */				[0.05,0.25],
				/* Color */				[[0.2,0.01,0.01,1],[0.2,0.01,0.01,0]],
				/* AnimSpeed */			[0.1],
				/* randDirPeriod */		0,
				/* randDirIntesity */	0,
				/* onTimerScript */		"",
				/* DestroyScript */		"",
				/* Follow */			_point];
				_source setParticleRandom [2, [0, 0, 0], [0.0, 0.0, 0.0], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
				_source setDropInterval 0.02;
				_point attachTo [_unit,_modelPos,_wound];
			};

			uiSleep 5;

			while {((_unit getVariable["USEC_injured",true]) and (alive _unit))} do {
				scopeName "loop";
				if (vehicle _unit != _unit) then {
					BreakOut "loop";
				};
				uiSleep 1;
			};
			deleteVehicle _source;
			deleteVehicle _point;

			if (!(_unit getVariable["USEC_injured",false])) then {
				BreakOut "main";
			};
		};

		deleteVehicle _source;
		deleteVehicle _point;
};