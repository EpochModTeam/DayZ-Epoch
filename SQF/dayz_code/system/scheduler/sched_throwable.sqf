// (c) facoptere@gmail.com, licensed to DayZMod for the community

// automatically select primary weapon after inactivity on throwable weapon
// (The problem in ArmA is that when a player select a throwable, he still holds the primary weapon in hand, 
//  the throwable appears in his hand only when the player clicks on fire button)

sched_throwable_init = {
	sched_throwable_prevmuzz="";
	sched_throwable_time=0;

	objNull
};

sched_throwable = {
	private ["_stance","_cur_muzz","_type", "_x"];
	
	if ((!isNil "player") and {(!isNull player)}) then {
		_cur_muzz = currentMuzzle player;
		if (((!isNil "_cur_muzz") and {(_cur_muzz != "")}) AND {(0 == getNumber(configFile >> "CfgWeapons" >> _cur_muzz >> "type"))}) then {
			if (sched_throwable_prevmuzz != _cur_muzz) then {
				sched_throwable_prevmuzz = currentMuzzle player;
				sched_throwable_time = diag_tickTime+11;
			};
			if (((player getVariable["combattimeout", diag_tickTime])-diag_tickTime)>27) then {
				sched_throwable_time = diag_tickTime+21;
			};
		};
		if (abs(sched_throwable_time-diag_tickTime)<2) then {
			_stance = toArray (animationState player);
			_stance = if ((!isNil "_stance") and {(count _stance>17)}) then {toString [_stance select 17]} else {""};
			_type = 4096;
			switch _stance do {
				case "p": { _type = 2; };
				case "r": { _type = 1; };
			};
			{
				if (_type == getNumber(configFile >> "CfgWeapons" >> _x >> "type")) exitWith {
					player selectWeapon _x;
				};
			} count (weapons player);
			sched_throwable_time = 0;
		};
	};
	
	objNull
};