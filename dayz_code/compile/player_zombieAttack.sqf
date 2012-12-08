private["_unit","_vehicle","_targets","_move","_rnd","_wound","_dir","_hpList","_hp","_damage","_chance","_strH","_dam","_total","_result","_tPos","_zPos","_inAngle","_cantSee","_isZombieInside","_building","_isPlayerInside"];
_unit = _this;
_vehicle = (vehicle player);

_targets = _unit getVariable ["targets",[]];
//if (!(_vehicle in _targets)) exitWith {};

//Do the attack
_move = "ZombieStandingAttack1";
_rnd = 0;
_wound = "";
if (r_player_unconscious && _vehicle == player) then {
	_unit doMove (getPos player);
	_rnd = round(random 4) + 1;
	_move = "ZombieFeed" + str(_rnd);
} else {
	_unit doMove (getPos player);
	_rnd = round(random 9) + 1;
	_move = "ZombieStandingAttack" + str(_rnd);
};
_dir = [_unit,player] call BIS_Fnc_dirTo;
_unit setDir _dir;
[objNull, _unit, rPlayMove,_move] call RE;

//Wait
sleep 0.3;

if (_vehicle != player) then {
	_hpList = 	_vehicle call vehicle_getHitpoints;
	_hp = 		_hpList call BIS_fnc_selectRandom;
	_wound = 	getText(configFile >> "cfgVehicles" >> (typeOf _vehicle) >> "HitPoints" >> _hp >> "name");
	_damage = 	random 0.03;
	_chance =	round(random 12);

	if ((_wound == "Glass1") or (_wound == "Glass2") or (_wound == "Glass3") or (_wound == "Glass4") or (_wound == "Glass5") or (_wound == "Glass6")) then {
		[_unit,"hit",0,false] call dayz_zombieSpeak;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
		
		//diag_log ("Hitpoints " +str(_wound) +str(_total));
		
		//_result = [_vehicle, _wound,_total, _unit,"zombie"] call fnc_usec_damageVehicle;
		//dayzHitV =	[_vehicle,_wound,_total, _unit,"zombie"];
		//publicVariable "dayzHitV";
		if (_total >= 1) then {
			if ((_chance % 4) == 0) then {
				if ((_vehicle isKindOf "ATV_Base_EP1") or (_vehicle isKindOf "Motorcycle")) then { player action ["eject", _vehicle] };
			};	
			if (r_player_blood < (r_player_bloodTotal * 0.8)) then {
					_wound = DAYZ_woundHit call BIS_fnc_selectRandomWeighted;
				} else {
					_wound = DAYZ_woundHit_ok call BIS_fnc_selectRandomWeighted;
			};
			_damage = 0.1 + random (1.2);
			//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
			[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
			//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
			//publicVariable "dayzHit";
			[_unit,"hit",0,false] call dayz_zombieSpeak;	
		} else {				
			_result = [_vehicle, _wound,_total, _unit,"zombie"] call fnc_usec_damageVehicle;
			dayzHitV =	[_vehicle,_wound,_total, _unit,"zombie"];
			publicVariable "dayzHitV";
		};
	};
} else {
	//Did he hit?
	if ((_unit distance player) <= 3) then {
		//check LOS
		private[];
		_tPos = (getPosASL _vehicle);
		_zPos = (getPosASL _unit);
		_inAngle = [_zPos,(getdir _unit),50,_tPos] call fnc_inAngleSector;
		if (_inAngle) then {
			//LOS check
			_cantSee = [_unit,_vehicle] call dayz_losCheck;
			if (!_cantSee) then {
				if (r_player_blood < (r_player_bloodTotal * 0.8)) then {
					_wound = DAYZ_woundHit call BIS_fnc_selectRandomWeighted;
				} else {
					_wound = DAYZ_woundHit_ok call BIS_fnc_selectRandomWeighted;
				};
				_damage = 0.1 + random (1.2);
				//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
				[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
				//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
				//publicVariable "dayzHit";
				[_unit,"hit",0,false] call dayz_zombieSpeak;
			} else {
				/*
				_isZombieInside = [_unit,_building] call fnc_isInsideBuilding;
				if (_isPlayerInside) then {
					_damage = 0.1 + random (1.2);
					//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
					[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
					//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
					//publicVariable "dayzHit";
					[_unit,"hit",0,false] call dayz_zombieSpeak;	
				};
				*/
			};
		};
	};
};
