private ["_unit","_move","_damage","_wound","_index","_cnt","_dir","_hpList","_hp","_strH","_dam","_total","_vehicle","_tPos","_zPos","_cantSee","_inAngle","_rnd","_openVehicles","_chance","_attackanimations","_type","_targets"];
_unit = _this select 0;
_type = _this select 1;
_vehicle = (vehicle player);

_targets = _unit getVariable ["targets",[]];

if (!dayz_zedsAttackVehicles and !(_vehicle in _targets)) exitWith { 
	//diag_log ("not attacking vehicle" + str(_vehicle));  
};

if ((speed _vehicle > 10)) exitWith { 
	//diag_log ("too fast abort attack" + str(_vehicle));
};

//Do the attack
if (r_player_unconscious && _vehicle == player && _type == "zombie") then {
    _rnd = (round(random 4)) + 1;
	_move = "ZombieFeed" + str(_rnd);
} else {
	if (_type == "zombie") then {
        _rnd = (round(random 9)) + 1;
		_move = "ZombieStandingAttack" + str(_rnd);
	} else {
		_move = "Dog_Attack";
	};
};
_dir = [_unit,player] call BIS_Fnc_dirTo;
_unit setDir _dir;

// _unit playMove _move;

if (local _unit) then {
	_unit switchMove _move;
} else {
	[objNull,  _unit,  rSwitchMove,  _move] call RE;
};

//Wait
sleep 0.3;

if (_vehicle != player) then {
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
		} forEach _openVehicles;
	};

	//diag_log ("Hitpoints " +str(_wound) + "hit points " + str(_hpList));

	if (_wound in DZE_vehicleZwounds) then {
		
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		
		//diag_log ("Hitpoints " +str(_wound) +str(_total));
		
		//["dayzHitV",[_vehicle, _wound,_total, _unit,"zombie"]] call broadcastRpcCallAll;
		if (_dam >= 1) then {
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
			//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
			[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
			//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
			//publicVariable "dayzHit";
			[_unit,"hit",2,false] call dayz_zombieSpeak;	
		};
	};
} else {
	//Did he hit?
	//_currentAnim = animationState _unit;
	//diag_log ("Animation state: " +(_currentAnim));
	//"amovpercmstpsnonwnondnon",
	_attackanimations = ["zombiestandingattack1","zombiestandingattack2","zombiestandingattack3","zombiestandingattack4","zombiestandingattack5","zombiestandingattack6","zombiestandingattack7","zombiestandingattack8","zombiestandingattack9","zombiestandingattack10","zombiefeed1","zombiefeed2","zombiefeed3","zombiefeed4","zombiefeed5"];
	if (((_unit distance player) <= dayz_areaAffect) and ((animationState _unit) in _attackanimations)) then {
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

				//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
				[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
				//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
				//publicVariable "dayzHit";
				[_unit,"hit",2,false] call dayz_zombieSpeak;
			} else {
				//diag_log ("NO LOS: Player Hit on " + str(_unit) + " for " + str(_vehicle));
				/*
				_isZombieInside = [_unit,_building] call fnc_isInsideBuilding;
				if (_isPlayerInside) then {
					_damage = 0.1 + random (1.2);
					diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
					[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
					//dayzHit =	[player,_wound, _damage, _unit,"zombie"];
					//publicVariable "dayzHit";
					[_unit,"hit",2,false] call dayz_zombieSpeak;	
				};
				*/
			};
		};
	};
};
