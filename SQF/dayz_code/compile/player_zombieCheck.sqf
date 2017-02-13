private ["_attacked","_chance","_near","_targeted","_localtargets","_remotetargets","_forcedSpeed","_vehicle","_refObj",
"_multiplier","_isAir","_hearingThreshold","_sightThreshold","_type","_dist","_attackDist",
"_targetedBySight","_targetedBySound","_targets","_last","_entHeight","_pHeight","_delta","_attackResult","_cantSee","_tPos","_zPos",
"_targetAngle","_inAngle","_lowBlood"];

_vehicle = vehicle player;
_refObj = driver _vehicle;
_attacked = false; // at least one Z attacked the player
_near = false;
//_multiplier = 1;
_isAir = _vehicle isKindOf "Air";

{
	_forcedSpeed = getNumber (configFile >> "CfgVehicles" >> (typeOf _x) >> "forcedSpeed");
	//_hearingThreshold = getNumber (configFile >> "CfgVehicles" >> (typeOf _x) >> "hearingThreshold");
	//_sightThreshold = getNumber (configFile >> "CfgVehicles" >> (typeOf _x) >> "sightThreshold");

	if !(typeOf _x == "swarm_newBase") then {
		_type = "zombie";
		if (alive _x) then {
			private ["_dist","_attackDist"];
			_dist = _x distance _refObj;
			_group = _x;
			_chance = 1; //0 / dayz_monitorPeriod; // Z verbosity
			_targetedBySight = false;
			_targetedBySound = false;
			_localtargets = _group getVariable ["localtargets",[]];
			_remotetargets = _group getVariable ["remotetargets",[]];
			_targets = _localtargets + _remotetargets;
			
			if (_x distance player >= (dayz_areaAffect*2)) then {
				if (speed _x < 4) then {
					[_x,"idle",(_chance + 4),true] call dayz_zombieSpeak;
				} else {
					[_x,"chase",(_chance + 3),true] call dayz_zombieSpeak;
				};
			};
			
			if (_x distance _refObj >= 3.3) then {_x setVariable ["speedLimit",_forcedSpeed,false];};
			//if (!local _x) then {		
				if (_refObj in _targets) then {
					_last = _x getVariable ["lastAttack", 0];
					_entHeight = (getPosATL _x) select 2;
					_pHeight = (getPosATL _refObj) select 2;
					_delta = _pHeight - _entHeight;
					_x setVariable ["speedLimit", 0, false];			
 
					if (_x distance _refObj <= 3) then {
					//Force AI to Stand
						_x setUnitPos "UP";
						if !(animationState _x == "ZombieFeed") then {
							if (((diag_tickTime - _last) > 1.5) && ((_delta < 1.5) && (_delta > -1.5))) then {
								_cantSee = [_x,_refObj] call dayz_losCheck;
								if (!_cantSee) then {
									_attackResult = [_x, _type] spawn player_zombieAttack;
									_x setVariable ["lastAttack", diag_tickTime];
								};
							};
						};
					} else {
						_x setVariable ["speedLimit", _forcedSpeed, false];
					};
					_attacked = true;
				} else {
					_x setVariable ["speedLimit", _forcedSpeed, false];
				};
			//};
			
			//Block all target atteps while in a vehicle
			if (!_isAir) then {
				if !(_refObj in _targets) then {
					//Noise Activation (zed is within players audial projection)
					if (_dist < DAYZ_disAudial) then {
						if (DAYZ_disAudial > 80) then {		
							_targetedBySound = true;
						} else {
							//if (DAYZ_disAudial > 6) then {
							_chance = [_x,_dist,DAYZ_disAudial] call dayz_losChance;
							//diag_log ("Visual Detection: " + str([_x,_dist]) + " " + str(_chance));
							if ((random 1) < _chance) then {
								//make sure the player isnt behind a building or wall if target is in the open always target if player is making too much noise
								_cantSee = [_refObj,_x] call dayz_losCheck;
								if (!_cantSee) then {
									_targetedBySound = true;
								} else {
									if (_dist < (DAYZ_disAudial / 2)) then {_targetedBySound = true;};
								};
							};
							//};	
						};
					};
					
					//Sight Activation
					if (_dist < DAYZ_disVisual ) then {
						_chance = [_x,_dist,DAYZ_disVisual] call dayz_losChance;
						if ((random 1) < _chance) then {
							_tPos = getPosASL _vehicle;
							_zPos = getPosASL _x;
							_targetAngle = 30;
							_inAngle = [_zPos,(direction _x),_targetAngle,_tPos] call fnc_inAngleSector;				
							if (_inAngle) then {
								_cantSee = [_refObj,_x] call dayz_losCheck;
								if (!_cantSee) then {_targetedBySight = true;};					
							};
						};	
					};
				};
			};
			
			if (_targetedBySight or _targetedBySound) then {
				[_x, "spotted", 0, false] call dayz_zombieSpeak;
				//diag_log format["Zombie: %1, Distance: %2, Target Reason: Sight-%3,%5/Sound-%4,%6",(typeof _x),_dist,_targetedBySight,_targetedBySound,DAYZ_disVisual,DAYZ_disAudial];
				
				switch (local _x) do {
					case false: {
						_remotetargets set [count _remotetargets,_refObj];
						_x setVariable ["remotetargets",_remotetargets,true];
					};
					case true: {
						_localtargets set [count _localtargets,_refObj];
						_x setVariable ["localtargets",_localtargets,false];
					};
				};
			};
		};
	};
} forEach ((getPosATL _refObj) nearEntities ["Zed_Base",100]);

if (_attacked) then {
	if (r_player_unconscious) then {
		[_refObj, "scream", 6, false] call dayz_zombieSpeak;
	} else {
		_lowBlood = (r_player_blood / r_player_bloodTotal) < 0.5;
		if (diag_ticktime - dayz_panicCooldown > 9 && _lowBlood) then {
			//Prevents overlapping sounds (panic tracks are 4-9s, this script is called every 1s)
			//50% chance every 9s
			dayz_panicCooldown = diag_ticktime;
			[_refObj, "panic", 1, false] call dayz_zombieSpeak;
		};
	};
};
	
// return true if attacked or near. if so,  player_monitor will perform its ridiculous 'while true' loop faster.
(_attacked OR _near)
