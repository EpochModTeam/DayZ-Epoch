// medBreakLegs.sqf
private ["_array","_unit","_attacker","_cnt","_index","_hit","_damage","_wound","_isInjured","_lowBlood"];
disableserialization;
_array = _this; //_this select 0;
_unit = _array select 0;
_attacker = _array select 1;

if (_unit == player && player distance _attacker < 5) then {
	
	player setVariable["startcombattimer", 1, false];

	// Make bleed
	if (random 2 < 1) then {
		
		// Find hit
		_cnt = count (DAYZ_woundHit_ok select 1);
		_index = floor (random _cnt);
		_index = (DAYZ_woundHit_ok select 1) select _index;
		_hit = (DAYZ_woundHit_ok select 0) select _index; 

		_damage = 0.1 + random (1.2);

		//Record Damage to Minor parts (legs, arms)
		if (_hit in USEC_MinorWounds) then {
			[_unit,_hit,_damage] call object_processHit;
		};

		player setVariable["medForceUpdate",true,true];
	
		1 call fnc_usec_bulletHit;

		_wound = _hit call fnc_usec_damageGetWound;

		//Create Wound
		_unit setVariable[_wound,true,true];
		[_unit,_wound,_hit] spawn fnc_usec_damageBleed;
		usecBleed = [_unit,_wound,_hit];
		publicVariable "usecBleed";

		//Set Injured if not already
		_isInjured = _unit getVariable["USEC_injured",false];
		if (!_isInjured) then {
			_unit setVariable["USEC_injured",true,true];
			dayz_sourceBleeding = _attacker;
		};
		//Set ability to give blood
		_lowBlood = _unit getVariable["USEC_lowBlood",false];
		if (!_lowBlood) then {
			_unit setVariable["USEC_lowBlood",true,true];
		};
		r_player_injured = true;

		// reduce blood
		r_player_blood = r_player_blood - 50;

		// Make player infected
		if (random 5 < 1) then {
			r_player_infected = true;
			player setVariable["USEC_infected",true,true];
		};
	};

	[_unit,"hit",2,false] call dayz_zombieSpeak;

	

	

	

};