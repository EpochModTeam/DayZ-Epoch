private["_unit","_targets","_move","_damage","_wound","_sound","_local","_dir","_hpList","_hp","_strH","_dam","_total","_result","_vehicle","_tPos","_zPos","_cantSee","_inAngle"];
_unit = _this;
_vehicle = (vehicle player);

_targets = _unit getVariable ["targets",[]];
if (!(_vehicle in _targets)) exitWith {};

//Do the attack
_move = "ZombieStandingAttack1";
_rnd = 0;
_wound = "";
if (r_player_unconscious) then {
	_rnd = round(random 4) + 1;
	_move = "ZombieFeed" + str(_rnd);
} else {
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
	_total = 0;

	if(["Glass",_hp,false] call fnc_inString) then {
		_damage = 0.5;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
	};
	if(["Wheel",_hp,false] call fnc_inString) then {
		_damage = 0.1;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
	};
	if(["Body",_hp,false] call fnc_inString) then {
		_damage = 0.05;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
	};
	if(["Engine",_hp,false] call fnc_inString) then {
		_damage = 0.03;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
	};
	if(["Fuel",_hp,false] call fnc_inString) then {
		[_unit,"hit",0,false] call dayz_zombieSpeak;
		_damage = 0.03;
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
	};
	if(_total > 0) then {
		[_unit,"hit",0,false] call dayz_zombieSpeak;
		_result = [_vehicle, _wound,_total, _unit,"zombie"] call fnc_usec_damageVehicle;
		dayzHitV =	[_vehicle,_wound,_total, _unit,"zombie"];
		publicVariable "dayzHitV";
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
				dayzHit =	[player,_wound, _damage, _unit,"zombie"];
				publicVariable "dayzHit";
				[_unit,"hit",0,false] call dayz_zombieSpeak;
			} else {
				/*
				_isZombieInside = [_unit,_building] call fnc_isInsideBuilding;
				if (_isPlayerInside) then {
					_damage = 0.1 + random (1.2);
					//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
					[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
					dayzHit =	[player,_wound, _damage, _unit,"zombie"];
					publicVariable "dayzHit";
					[_unit,"hit",0,false] call dayz_zombieSpeak;	
				};
				*/
			};
		};
	};
};
