
scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function
	- [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_unit","_humanityHit","_myKills","_hit","_damage","_isPlayer","_unconscious","_wound","_isHit","_isInjured","_type","_hitPain","_isCardiac","_isHeadHit","_isMinor","_scale","_canHitFree","_rndPain","_rndInfection","_hitInfection","_lowBlood","_isPZombie","_source","_ammo","_unitIsPlayer","_isBandit"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_unconscious = _unit getVariable ["NORRN_unconscious", false];
_isPZombie = player isKindOf "PZombie_VB";
_source = _this select 3;
_ammo = _this select 4;
_type = [_damage,_ammo] call fnc_usec_damageType;

_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
//_evType = "";
//_recordable = false;
_isPlayer = (isPlayer _source);
_humanityHit = 0;
_myKills = 0;
_unitIsPlayer = _unit == player;

if (_unitIsPlayer) then {
	if (_hit == "") then {
		if ((_source != player) && _isPlayer) then {
		//Enable aggressor Actions
			if (_source isKindOf "CAManBase") then {
				_source setVariable["startcombattimer",1];
			};
			_canHitFree = 	player getVariable ["freeTarget",false];
			_isBandit = (player getVariable["humanity",0]) <= -5000;
			_isPZombie = player isKindOf "PZombie_VB";

			if (!_canHitFree && !_isBandit && !_isPZombie) then {
				//Process Morality Hit
				_myKills = 0 max (1 - (player getVariable ["humanKills",0]) / 5);
				_humanityHit = -100 * _myKills * _damage;

				/* PVS/PVC - Skaronator */
				if (_humanityHit != 0) then {
					[_source,_humanityHit] spawn {
						private ["_source","_humanityHit"];
						_source = _this select 0;
						_humanityHit = _this select 1;
						PVDZE_send = [_source,"Humanity",[_source,_humanityHit,30]];
						publicVariableServer "PVDZE_send";
					};
				};
			};
		};
	};
};

//PVP Damage
_scale = 200;
if (_damage > 0.4) then {
	if (_ammo != "zombie") then {
		_scale = _scale + 50;
	};
	if (_isHeadHit) then {
		_scale = _scale + 500;
	};
	if ((isPlayer _source) && !(player == _source)) then {
		_scale = _scale + 800;
		if (_isHeadHit) then {
			_scale = _scale + 500;
		};
	};
	switch (_type) do {
		case 1: {_scale = _scale + 200};
		case 2: {_scale = _scale + 200};
	};
	if (_unitIsPlayer) then {
		//Cause blood loss
		//Log Damage
		/*
		if (DZE_Debug_Damage) then {
			diag_log ("DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale));
		};
		*/
		r_player_blood = r_player_blood - (_damage * _scale);
	};
};

//Record Damage to Minor parts (legs, arms)
if (_hit in USEC_MinorWounds) then {
	if (_ammo == "zombie") then {
		if (_hit == "legs") then {
			[_unit,_hit,(_damage / 6)] call object_processHit;
		} else {
			[_unit,_hit,(_damage / 4)] call object_processHit;
		};
	} else {
		[_unit,_hit,(_damage / 2)] call object_processHit;
	};
	if (_ammo == "") then {
		[_unit,_hit,_damage] call object_processHit;
	};
};


if (_unitIsPlayer) then {
//incombat
	_unit setVariable["startcombattimer", 1];
};

if (_damage > 0.1) then {
	if (_unitIsPlayer) then {
		//shake the cam, frighten them!
		//player sidechat format["Processed bullet hit for %1 (should only be for me!)",_unit];
		1 call fnc_usec_bulletHit;
	};
	if (local _unit) then {
		_unit setVariable["medForceUpdate",true,true];
	};
};
if (_damage > 0.4) then {	//0.25
	/*
		BLEEDING
	*/
	_wound = _hit call fnc_usec_damageGetWound;
	_isHit = _unit getVariable[_wound,false];
	if (_unitIsPlayer) then {
		_rndPain = 		(random 10);
		_rndInfection = (random 500);
		_hitPain = 		(_rndPain < _damage);
		if ((_isHeadHit) || (_damage > 1.2 && _hitPain)) then {
			_hitPain = true;
		};
		_hitInfection = (_rndInfection < 1);
		//player sidechat format["HitPain: %1, HitInfection %2 (Damage: %3)",_rndPain,_rndInfection,_damage]; //r_player_infected
		if (_isHit) then {
			//Make hit worse
			if (_unitIsPlayer) then {
				r_player_blood = r_player_blood - 50;
			};
		};
		if (_hitInfection) then {
			//Set Infection if not already
			if (_unitIsPlayer && !_isPZombie) then {
				r_player_infected = true;
				player setVariable["USEC_infected",true,true];
			};

		};
		if (_hitPain) then {
			//Set Pain if not already
			if (_unitIsPlayer) then {
				r_player_inpain = true;
				player setVariable["USEC_inPain",true,true];
			};
		};
		if ((_damage > 1.5) && _isHeadHit) then {
			[_source,"shothead"] spawn player_death;
		};
	};
	if(!_isHit) then {

		if(!_isPZombie) then {
			//Create Wound
			_unit setVariable[_wound,true,true];

			[_unit,_wound,_hit] spawn fnc_usec_damageBleed;
			/* PVS/PVC - Skaronator */
			_pos = getPosATL _unit;
			_inRange = _pos nearEntities ["CAManBase",1000];
			{
				// only send to other players
				if(isPlayer _x && _x != player) then {
					PVDZE_send = [_x,"Bleed",[_unit,_wound,_hit]];
					publicVariableServer "PVDZE_send";
				};
			} count _inRange;

			//Set Injured if not already
			_isInjured = _unit getVariable["USEC_injured",false];
			if (!_isInjured) then {
				_unit setVariable["USEC_injured",true,true];
			if ((_unitIsPlayer) && (_ammo != "zombie")) then {
					dayz_sourceBleeding = _source;
				};
			};
			//Set ability to give blood
			_lowBlood = _unit getVariable["USEC_lowBlood",false];
			if (!_lowBlood) then {
				_unit setVariable["USEC_lowBlood",true,true];
			};
			if (_unitIsPlayer) then {
				r_player_injured = true;
			};
		};
	};
};
if (_type == 1) then {
	/*
		BALISTIC DAMAGE
	*/
	if ((_damage > 0.01) && (_unitIsPlayer)) then {
		//affect the player
		[20,45] call fnc_usec_pitchWhine; //Visual , Sound
	};
	if (_damage > 4) then {
		//serious ballistic damage
		if (_unitIsPlayer) then {
			[_source,"explosion"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};
if (_type == 2) then {
	/*
		HIGH CALIBRE
	*/
	if (_damage > 4) then {
		//serious ballistic damage
		if (_unitIsPlayer) then {
			[_source,"shotheavy"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};

if (!_unconscious && !_isMinor && ((_damage > 2) || ((_damage > 0.5) && _isHeadHit))) then {
	//set unconsious
	[_unit,_damage] call fnc_usec_damageUnconscious;
};