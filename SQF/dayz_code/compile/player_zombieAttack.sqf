/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/
private ["_rnd","_move","_wound","_cnt","_index","_damage","_total","_movePlayer","_start","_unit","_type","_vehicle","_speed",
"_nextPlayerPos","_distance","_viralZeds","_isVehicle","_agentPos","_playerDodged","_areaAffect","_dist","_dir","_timeout","_deg",
"_lastDodge","_dodgeAnimations","_tPos","_zPos","_hpList","_hp","_chance","_openVehicles","_strH","_dam","_cantSee","_attackanimations",
"_lastTackle","_knockdown","_vel","_t","_step","_i","_doRE","_stop"];

_unit = _this select 0;
_type = _this select 1;
_vehicle = vehicle player;
_speed = speed player;
//_nextPlayerPos = player call dayz_futurePos;
_distance = [_unit, player] call BIS_fnc_distance2D;
//_viralZeds = typeOf _unit in DayZ_ViralZeds;
_isVehicle = (_vehicle != player);
//_agentPos = getPosATL _unit;
_playerDodged = false;

if (_type != "zombie") exitWith { diag_log ("not a zombie"); }; // we deal only with zombies in this function
if (_unit distance _vehicle > 3) exitWith {}; // distance too far according to any logic dealt here //+str(_unit distance _nextPlayerPos)+"/"+str(_areaAffect)
if (isNull _unit) exitWith {}; // Prevent errors if zombie is deleted suddenly

// compute the animation move
_rnd = 0;
_dist = round(_distance*10);
switch true do {
	case (((toArray(animationState player) select 5) == 112) && (_distance < 2.2)) : {
			_rnd = ceil(random 4); //9
			_move = "ZombieFeed" + str(_rnd);
	};
	case (r_player_unconscious && ((random 3) < 1)) : {
			_rnd = ceil(random 4); //9
			_move = "ZombieFeed" + str(_rnd);
	};
	case ((_isVehicle) && (_distance < 3.6)) : { // enable attack if Z is between 2.2 and 3.5. Other cases are handled in "default"
		_rnd = 8;
		_move = "ZombieStandingAttack" + str(_rnd);
	};
	case (((_speed >= 5) or (_speed <= -5)) && (_distance < 2.3)) : {
		_rnd = 8;
		_move = "ZombieStandingAttack" + str(_rnd);
	};
	default {
		// attack moves depends on the distance between player and Z
		// we compute the distance in 10cm slots.
		switch _dist do {
			case 0 : {_rnd = [ 1, 4, 9, 3, 6 ];};
			case 10 : {_rnd = [ 1, 4, 9, 3, 6 ];};
			case 11 : {_rnd = [ 1, 4, 9, 3, 6 ];};
			case 12 : {_rnd = [ 1, 9, 3, 6 ];};
			case 13 : {_rnd = [ 3, 6 ];};
			case 14 : {_rnd = [ 3, 6, 7 ];};
			case 15 : {_rnd = [ 7, 5, 10 ];};
			case 16 : {_rnd = [ 7, 5, 10 ];};
			case 17 : {_rnd = [ 7, 5, 10 ];};
			case 18 : {_rnd = [ 8, 10 ];};
			case 19 : {_rnd = [ 8, 10 ];};
			case 20 : {_rnd = [ 8 ];}; 
			case 21 : {_rnd = [ 8 ];};
			case 22 : {_rnd = [ 8 ];};
			default { 
				if (_dist < 10) then { _rnd = [ 1, 2, 4, 9 ]; };
				if (_dist > 22) then { _rnd = [ 8 ]; };
			};
		};
		//diag_log ("ZedAttack: : "+str(_rnd));
		_rnd = _rnd call BIS_fnc_selectRandom;
		_move = "ZombieStandingAttack" + str(_rnd);
		//diag_log format ["Distance: %3/%1, Animation: %2", _distance, _rnd, _dist];
	};
};

//Make sure zed is facing the player
_dir = [_unit,player] call BIS_Fnc_dirTo;
_unit setDir _dir;

// let's animate the Z
/*
if (local _unit) then {
	_unit switchMove _move;
} else {
	[objNull,  _unit,  rswitchMove,  _move] call RE;
};
*/
[objNull, _unit, rplaymove, _move] call RE;
uiSleep 0.5;
if (isNull _unit) exitWith {}; // Prevent errors if zombie is deleted suddenly
//slow it down make sure the animation isnt running after the damage
//_timeout = diag_tickTime + 0.3;
//waitUntil { diag_tickTime >= _timeout; };

_deg = [player, _unit] call BIS_fnc_relativeDirTo;
_lastDodge = _unit getVariable ["lastDodge", 0];
//1 in 5 shots
if (((diag_tickTime - _lastDodge) == 0) or ((diag_tickTime - _lastDodge) > 10)) then {
	if (((_deg > 295) && (_deg < 360)) or ((_deg > 0) && (_deg < 65))) then {
		_dodgeAnimations = ["amovpknlmstpsraswrfldnon"];
		if ((animationState _vehicle) in _dodgeAnimations) then { 
			if (dayz_dodge) exitwith { 
				_playerDodged = true; 
				dayz_dodge = false;
			};
		};
	};
};


if (_playerDodged) exitwith { 
	//systemChat ("That was close!");
	_lastDodge = _unit setVariable ["lastDodge", diag_tickTime];
};

_tPos = getPosASL _vehicle;
_zPos = getPosASL _unit;
// compute damage for vehicle and/or the player
if (_isVehicle) then {
	if ((_unit distance player) < (3.3 * 2)) then {
		_hpList = 	_vehicle call vehicle_getHitpoints;
		_hp = 		_hpList call BIS_fnc_selectRandom;
		_wound = 	getText(configFile >> "cfgVehicles" >> (typeOf _vehicle) >> "HitPoints" >> _hp >> "name");
		_damage = 	random 0.08;
		_chance =	round(random 12);
		
		if ((_chance % 4) == 0) then {
			_openVehicles = ["ATV_Base_EP1", "Motorcycle", "Bicycle"];
			{
				if (_vehicle isKindOf _x) exitWith {
					player action ["eject", _vehicle];
				};
			} count _openVehicles;
		};
		
		if (_wound in [ "glass1",  "glass2",  "glass3",  "glass4",  "glass5",  "glass6" ]) then {
			_strH = "hit_" + (_wound);
			_dam = _vehicle getVariable [_strH,0];
			_total = (_dam + _damage);
			
			//handle vehicle dmg
			[_vehicle,  _wound, _total,  _unit,  "zombie", true] call fnc_veh_handleDam;
			//diag_log ("Hitpoints " +str(_wound) +str(_total));

			//handle player dmg
			if (_total >= 1) then {
				if (r_player_blood < (r_player_bloodTotal * 0.8)) then {
					_cnt = count (DAYZ_woundHit select 1);
					_index = floor (random _cnt);
					_index = (DAYZ_woundHit select 1) select _index;
					_wound = (DAYZ_woundHit select 0) select _index; 
				} else {
					_cnt = count (DAYZ_woundHit_ok select 1);
					_index = floor (random _cnt);
					_index = (DAYZ_woundHit_ok select 1) select _index;
					_wound = (DAYZ_woundHit_ok select 0) select _index; 
				};
				_damage = 0.1 + random (1.2);
				//diag_log ("Player_ZombieAttack: START DAM: Player Hit on " + _wound + " for " + str(_damage));
				[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
			};
		};
		
		// broadcast hit noise
		_pos = getPosATL player;
		if ({isPlayer _x} count (_pos nearEntities ["CAManBase",40]) > 1) then {
			[_unit,"hit",0,false] call dayz_zombieSpeak;
		} else {
			[_unit,"hit",0,true] call dayz_zombieSpeak;
		};
	};
} else { 
	// player by foot
	if ((_unit distance player) <= 3) then {
			
		//Make sure sure evrything is processed as we attack.
		_damage = 0.2 + random (1.2);
		
		//LOS check
		//Zed eye to player (opersite way around).
		_cantSee = [_unit,_vehicle] call dayz_losCheck;
		if (!_cantSee) then {
			if (r_player_blood < (r_player_bloodTotal * 0.8)) then {
				_cnt = count (DAYZ_woundHit select 1);
				_index = floor (random _cnt);
				_index = (DAYZ_woundHit select 1) select _index;
				_wound = (DAYZ_woundHit select 0) select _index;
			} else {
				_cnt = count (DAYZ_woundHit_ok select 1);
				_index = floor (random _cnt);
				_index = (DAYZ_woundHit_ok select 1) select _index;
				_wound = (DAYZ_woundHit_ok select 0) select _index;
			};
			
			_unit setVariable ["speedLimit", 0, false]; //Stop the Zed
			//systemChat format["ZA Start Damage Check - %1",(_unit distance player)];
			_attackanimations = ["zombiestandingattack1","zombiestandingattack2","zombiestandingattack3","zombiestandingattack4","zombiestandingattack5","zombiestandingattack6","zombiestandingattack7","zombiestandingattack8","zombiestandingattack9","zombiestandingattack10","zombiefeed1","zombiefeed2","zombiefeed3","zombiefeed4","zombiefeed5"];
			
			if ((animationState _unit) in _attackanimations) then {
				if (alive _unit) then {	
					//Damage the player
					[player,  _wound,  _damage,  _unit, "zombie"] call fnc_usec_damageHandler;
					
					// check Z stance. Stand up Z if it prones/kneels. make sure zed stays standing after its frist attak
					if (unitPos _unit != "UP") then {_unit setUnitPos "UP";};
				
					// broadcast hit noise
					_pos = getPosATL player;
					if ({isPlayer _x} count (_pos nearEntities ["CAManBase",40]) > 1) then {
						[_unit,"hit",0,false] call dayz_zombieSpeak;
					} else {
						[_unit,"hit",0,true] call dayz_zombieSpeak;
					};
				
					// player may fall if hit
					_deg = [player, _unit] call BIS_fnc_relativeDirTo;
					_lastTackle = player getVariable ["lastTackle", 0];
					_movePlayer = "";
					
					//head hit, legs, pushed from back
					_knockdown = ["head_hit","legs"];
					if (_wound in _knockdown) then {
						if (((diag_tickTime - _lastTackle) > 7) && (_speed >= 5.62)) then {
							switch true do {
							/*
								//Removed for now
								// front
								case (((_deg > 315) && (_deg <= 360)) or ((_deg > 0) && (_deg < 45))) : {
									//player setVelocity [(velocity player select 0) + 5 * sin direction _unit, (velocity player select 1) + 5 * cos direction _unit, (velocity player select 2) + 1];
									// stop player
									_vel = velocity player;
									player setVelocity [-(_vel select 0),  -(_vel select 1),  0];
									disableUserInput true;
									
									[diag_tickTime] call {
										_t = _this select 0;
										while {true} do {
											if (diag_tickTime - _t > 1) exitWith {disableUserInput false;};
										};
									};	
								};
							*/	
								// left
								case (((_deg > 225) && (_deg < 315))) : {
									// rotate player 'smoothly'
									[_deg] spawn {
										private["_step","_i"];
										_step = 90 / 5;
										_i = 0;
										while {_i < 5} do {
											player setDir ((getDir player) + _step);
											_i = _i + 1;
											uiSleep 0.01;
										};
									};

									// make player dive
									_movePlayer = switch (toArray(animationState player) select 17) do {
										case 114 : {"ActsPercMrunSlowWrflDf_TumbleOver"}; // rifle
										case 112 : {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon"}; // pistol
										default {"ActsPercMrunSlowWrflDf_TumbleOver"};
									};
								};
								// right
								case (((_deg > 45) && (_deg < 135))) : {
									[_deg] spawn {
										private["_step","_i"];
										_step = 90 / 5;
										_i = 0;
										while {_i < 5} do {
											player setDir ((getDir player) - _step);
											_i = _i + 1;
											uiSleep 0.01;
										};
									};

									// make player dive
									_movePlayer = switch (toArray(animationState player) select 17) do {
										case 114 : {"ActsPercMrunSlowWrflDf_TumbleOver"}; // rifle
										case 112 : {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon"}; // pistol
										default {"ActsPercMrunSlowWrflDf_TumbleOver"};
									};
								};
								// rear
								case (((_deg > 135) && (_deg < 225))) : {
									_movePlayer = switch (toArray(animationState player) select 17) do {
										case 114 : {"ActsPercMrunSlowWrflDf_TumbleOver"}; // rifle
										case 112 : {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon"}; // pistol
										default {"ActsPercMrunSlowWrflDf_TumbleOver"};
									};
								};
							};

							// Make player dive after making sure the zed can see you.
							if (_movePlayer != "") then {
								player setVariable ["lastTackle", diag_tickTime];
								_doRE = ({isPlayer _x} count (player nearEntities ["AllVehicles",100]) > 1);

								if (_doRE) then {
									[nil, player, rSWITCHMOVE, _movePlayer] call RE;
								} else {
									player switchMove _movePlayer;
								};

								if (_movePlayer == "ActsPercMrunSlowWrflDf_TumbleOver") then {
									[_movePlayer, _doRE] spawn {
										private ["_movePlayer","_doRE"];
										_movePlayer = _this select 0;
										_doRE = _this select 1;

										waitUntil {animationState player == _movePlayer}; // just in case

										while {animationState player == _movePlayer} do {
											if (speed player < 4) exitWith { /* break from loop to fix animation lockup */ };
											uiSleep 0.1;
										};

										if (_doRE) then {
											[nil, player, rSWITCHMOVE, ""] call RE;
										} else {
											player switchMove "";
										};
									};
								};
								//diag_log(format["%1 player tackled. Weapons: cur:""%2"" anim.state:%6 (%7)--> move: %3. Angle:%4 Delta-time:%5",  __FILE__, currentWeapon player, _move, _deg, time - _lastTackle, animationState player, toArray(animationState player) select 17 ]);
							};
						};
					};
				};
			};
		};
	}; // fi player by foot
};
//_stop = diag_tickTime;
//diag_log format ["%2 Execution Time: %1",_stop - _start, __FILE__];
