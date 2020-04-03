scriptName "Functions\misc\fn_damageHandler.sqf";

/***********************************************************
    PROCESS DAMAGE TO A UNIT
    - Function
    - [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_end","_unit","_hit","_damage","_unconscious","_source","_ammo","_isMinor","_isHeadHit","_isPlayer","_wpst","_sourceDist","_sourceWeap","_scale","_type","_rndPain","_hitPain","_wound","_isHit","_isbleeding","_rndBleed","_hitBleed","_isInjured","_lowBlood","_isCardiac","_chance","_falling","_model","_isZombieHit","_sourceType","_sourceVehicleType","_isMan","_isVehicle","_isLocal","_inVehicle","_vehicleArray","_isPZombie","_rndBleedChance"];

_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_ammo = _this select 4;
//diag_log format["%1 HandleDamage: Unit:%2 Hit:%3 Damage:%4 Source:%5 Ammo:%6",diag_tickTime,_unit,_hit,_damage,_source,_ammo];

_unconscious = _unit getVariable ["NORRN_unconscious", false];
_model = typeOf player;
_sourceType = typeOf _source;
_sourceVehicleType = typeOf (vehicle _source);
_inVehicle = vehicle _unit != _unit;
_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
_isZombieHit = _ammo == "zombie";
_isLocal = local _source;

_falling = (((_hit == "legs") && {(_source==_unit)}) && {((_ammo=="") && {(Dayz_freefall select 1 > 3)})});

//Simple hack to help with a few issues from direct damage to physics based damage. ***until 2.0***
	//If a vehicle is moving faster than 15 lets register some kind of direct damage rather than relying on indirect/physics damage.
	if (diag_tickTime - dayz_getoutTime < 1) then {
		//Player ejected from a moving vehicle
		_ammo = "Dragged";
	} else {
		//Lets see if the player has been struck by a moving vehicle.
		if (!_inVehicle) then {
			if (diag_tickTime - dayz_hitByTime < 1) then {
				_ammo = "RunOver";
			} else {
				{
					if ((speed _x > 10 || (speed _x < -8)) && {typeOf _x != "ParachuteWest"}) exitWith {
						dayz_hitByTime = diag_tickTime;
						_ammo = "RunOver";
					};
				} count (([_unit] call fnc_getPos) nearEntities [["Air","LandVehicle","Ship"],3]);
			};
		};
	};

	_end = false;

	if (!_falling) then {
		if (_ammo == "" && {_hit == ""} && {_inVehicle}) then {_ammo = "Crash";};
		//No _ammo type exit, indirect/physics damage.
		if (_ammo == "") exitwith { _end = true; };

		//If _source contains no object exit. But lets not exit if the unit returns player. Maybe its his own fault.
		if (isNull _source && {!(_ammo in ["Dragged","RunOver"])}) then {
			_vehicleArray = nearestObjects [([vehicle _unit] call fnc_getPos),["Air","LandVehicle","Ship","TrapTripwireGrenade"],25];
			//Don't exit if a drivable vehicle (or drivable vehicle wreck) is nearby, because vehicle explosions register as a null source
			if (({typeOf _x != "ParachuteWest"} count _vehicleArray) == 0) then {
				_end = true;
				/*
					Possible cheat. Record to block any incoming fall damage.
					NOTE: Only vehicle explosions register a null source. Satchel charges, mines, grenades, vehicle missiles
					and other explosives DO NOT register a null source. UNLESS they are spawned manually via script (i.e. tripwire grenade),
					their source is always the player who placed, threw or fired them.
				*/
				dayz_lastDamageSourceNull = true;
				diag_log "Warning: Fn_DamageHandler source isNull with no drivable vehicle (or drivable vehicle wreck) in 25m radius. Exiting with no damage.";
			};
		};
	} else {
		if (dayz_lastDamageSourceNull) then { _end = true; }; // Block incoming fall damage.
	};

	if (_end) exitwith { 0 };
//End Simple hack for damage ***until 2.0***

dayz_lastDamageSourceNull = false;
_isPZombie = _model isKindOf "PZombie_VB";
_isMan = _sourceType isKindOf "CAManBase";
_isPlayer = (isPlayer _source);

if (DZE_PVE_Mode && {_isPlayer} && {!_falling}) exitWith {};

if (_unit == player) then {
//Set player in combat
	_unit setVariable["startcombattimer", 1];
	if !(_unit getVariable["inCombat",false]) then {
		_unit setVariable["inCombat",true,true];
	};

	if (r_player_timeout == 0 && {!_inVehicle}) then {
		if (_ammo == "tranquiliser_bolt") then {
			r_player_timeout = 20 + round(random 60);
			_unit spawn {
				private "_unit";

				_unit = _this;
				localize "str_player_tranquilized" call dayz_rollingMessages;
				[_unit,0.01] call fnc_usec_damageUnconscious;
				_unit setVariable ["NORRN_unconscious", true, true];
			};
		};

		if (_damage > 0.4) then {
			//Melee knockout system
			if ((_isHeadHit) && {_ammo in ["Crowbar_Swing_Ammo","Bat_Swing_Ammo","Sledge_Swing_Ammo"]}) then {
				r_player_timeout = 20 + round(random 60);
				_unit spawn {
					private "_unit";

					_unit = _this;
					localize "str_actions_medical_knocked_out" call dayz_rollingMessages;
					[_unit,0.01] call fnc_usec_damageUnconscious;
					_unit setVariable ["NORRN_unconscious", true, true];
				};
			};
		};
	};

	//(vehicle _source != _source) does not work to detect if source unit is in a vehicle in HandleDamage EH
	_isVehicle = ({_sourceVehicleType isKindOf _x} count ["LandVehicle","Air","Ship"] > 0);

	//Log to server. Useful for detecting damage and ammo cheats.
	if (!_isLocal && {!_isZombieHit} && {_isMan || _isVehicle} && {diag_ticktime-(_source getVariable["lastloghit",0]) > 2}) then {
		_wpst = weaponState _source;
		_source setVariable ["lastloghit",diag_ticktime];
		_sourceDist = round(_unit distance _source);
		_sourceWeap = call {
			if (_ammo in ["PipeBomb","Mine","MineE"]) exitwith { format["with %1",_ammo] };
			if (_isVehicle) exitwith { format ["with %1",_sourceVehicleType] };
			if (_ammo in MeleeAmmo) exitwith { format ["with %2%1",_wpst select 0, if (_sourceDist>6) then {"suspicious weapon "} else {""}] };
			if (_wpst select 0 == "Throw") exitwith { format ["with %1 thrown", _wpst select 3] };
			if (["Horn",currentWeapon _source] call fnc_inString) exitwith { format ["with %1 suspicious", currentWeapon _source]};
			if ((_wpst select 0 == "") AND {_wpst select 4 == 0}) exitwith { format ["with %1/%2 suspicious", primaryWeapon _source, _ammo] };
			if (_wpst select 0 != "") exitwith { format ["with %1/%2 <ammo left:%3>", _wpst select 0, _ammo, _wpst select 4] };
			"with suspicious weapon";
		};

		PVDZ_sec_atp = [_unit, _source, _sourceWeap, _sourceDist, _hit, (_damage min 999999)];
		publicVariableServer "PVDZ_sec_atp";
    };

	dayz_lastDamageSource = call {
		if (_falling) exitwith {"fall"};
		if (_isZombieHit) exitwith {"zombie"};
		if (_ammo == "Crash") exitwith {"crash"};
		if (_ammo == "RunOver") exitwith {"runover"};
		if (_ammo == "Dragged") exitwith {"eject"};
		if (_ammo in MeleeAmmo) exitwith {"melee"};
		if (!_isLocal && {(_isMan && {!(currentWeapon _source in ["","Throw"])}) || _isVehicle}) exitwith {"shot"};
		"none";
	};
	if (dayz_lastDamageSource != "none") then {dayz_lastDamageTime = diag_tickTime;};
};

//Ignore none part dmg. Exit after processing humanity hit
if (_hit == "" && {_ammo != "Crash"}) exitWith { 0 };

//Ammo Type Setup
_type = call {
    if ({_ammo isKindOf _x} count ["Grenade","ShellBase","TimeBombCore","BombCore","MissileCore","RocketCore","FuelExplosion","GrenadeBase"] > 0) exitwith { 1 };
	if ((_ammo isKindof "B_127x107_Ball") || (_ammo isKindof "B_127x99_Ball")) exitwith  { 2 };
	if (_isZombieHit) exitwith { 3 };
	if (_ammo == "RunOver") exitwith { 4 };
	if (_ammo == "Dragged") exitwith { 5 };
	if (_ammo == "Crash") exitwith { 6 };
    0;
};

//Shake the cam, frighten them!
if (_damage > 0.1) then {
    if (_unit == player) then {
        //player sidechat format["Processed bullet hit for %1 (should only be for me!)",_unit];
        1 call fnc_usec_bulletHit;
    };
};

//Pure base blood damage
_scale = 200;

if (_damage > 0.4) then {
	//Scale damage based on headhits.
    if (_isHeadHit) then {
        _scale = _scale * 2; //700 = Normal, 900 = Viral, 500 = wild
    };

    //End body part scale
	//???????????
    if (!(player == _source) && {_isPlayer || (_isMan && {!_isZombieHit})}) then { //Scale shots from AI units the same as shots from players
		dayz_sourceBleeding = _source; //Used in player_death
        _scale = _scale + 800;
        if (_isHeadHit) then {
			if (_ammo in MeleeAmmo) then {
				_scale = _scale + 500;
			} else {
				_scale = _scale + 1180; //Based on 12k blood for DMR headshot at 500m
			};
        };
    };

	//Modify base scale based on the types, Allows us to modify specific types of damage if needed.
    call {
	//Explosions
        if (_type == 1) exitwith {_scale = _scale + 300};
	//Bullet types
        if (_type == 2) exitwith {_scale = _scale + 150};
	//Zombies
		if (_type == 3) exitwith {_scale = getNumber (configFile >> "CfgVehicles" >> _sourceType >> "damageScale");
			if (dayz_DamageMultiplier > 1) then {_scale = _scale * dayz_DamageMultiplier;};
		};
	//RunOver
		if (_type == 4) exitwith {_scale = 10}; //Based on 12k blood for run over with SUV at 70km/h
	//Dragged
		if (_type == 5) exitwith {_scale = 25};
	//Crash
		if (_type == 6) exitwith {_scale = 400};
    };

	//Display some info in the players log file.
    if (_unit == player) then {
		diag_log format["DAMAGE: player hit by %1 in %2 with %3 for %4 scaled to %5, Conscious %6",_sourceVehicleType,_hit,_ammo,(str(_damage)),(str(_damage * _scale)),(str (!_unconscious))];
        r_player_blood = r_player_blood - (_damage * _scale);

	//Pain and Infection
        _rndPain = floor(random 10);
        _hitPain = (_rndPain < _damage);

        if ((_isHeadHit) || {_hitPain}) then {
            _hitPain = true;
        };

        if (_hitPain) then {
            r_player_inpain = true;
            player setVariable["USEC_inPain",true,true];
        };
    };

    //Create wound and cause bleed
    _wound = _hit call fnc_usec_damageGetWound;
    _isHit = _unit getVariable["hit_"+_wound,false];

    _isbleeding = false;

	_rndBleed = floor(random 100);
    _rndBleedChance = getNumber (configFile >> "CfgVehicles" >> _sourceType >> "BleedChance");
    _hitBleed = (_rndBleed < _rndBleedChance);

    if (_hitBleed) then {
		_isbleeding = true;
    };

    if (_type == 3) then {
        if (!_isHit && {_isbleeding} && {!_isPZombie}) then {
            //Create Wound
            _unit setVariable["hit_"+_wound,true,true];

            PVDZ_hlt_Bleed = [_unit,_wound];
            publicVariable "PVDZ_hlt_Bleed";   // draw blood stream on character, on all gameclients

            [_unit,_wound] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally

            //Set Injured if not already
            _isInjured = _unit getVariable["USEC_injured",false];

            if (!_isInjured) then {
                _unit setVariable["USEC_injured",true,true];
                if ((_unit == player) && {!_isZombieHit}) then {
                    dayz_sourceBleeding = _source;
                };
            };

            //Set ability to give blood
            _lowBlood = _unit getVariable["USEC_lowBlood",false];
            if (!_lowBlood) then {
                _unit setVariable["USEC_lowBlood",true,true];
            };
            if (_unit == player) then {
                r_player_injured = true;
            };

            //HitInfection from zombies
            if ((!r_player_infected) && {!(r_player_Sepsis select 0)}) then {
                if (_type == 3) then {
					private ["_rndSepsis", "_sepsisChance"];

                    _rndSepsis = floor(random 100);
                    _sepsisChance = getNumber (configFile >> "CfgVehicles" >> _sourceType >> "sepsisChance");

                    if (_rndSepsis < _sepsisChance) then {
                        r_player_Sepsis = [true, diag_tickTime];
                        player setVariable["USEC_Sepsis",true,true];
                    };
                };
            };
        };
    } else {
        if (!_isHit && {!_isPZombie}) then {
            //Create Wound
            _unit setVariable["hit_"+_wound,true,true];

            PVDZ_hlt_Bleed = [_unit,_wound];
            publicVariable "PVDZ_hlt_Bleed";  // draw blood stream on character, on all gameclients
            [_unit,_wound] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally
            //Set Injured if not already
            _isInjured = _unit getVariable["USEC_injured",false];
            if (!_isInjured) then {
                _unit setVariable["USEC_injured",true,true];
                if ((_unit == player) && {!_isZombieHit}) then {
                    dayz_sourceBleeding = _source;
                };
            };
            //Set ability to give blood
            _lowBlood = _unit getVariable["USEC_lowBlood",false];
            if (!_lowBlood) then {
                _unit setVariable["USEC_lowBlood",true,true];
            };
            if (_unit == player) then {
                r_player_injured = true;
            };
        };
    };
};

//Record Damage to Minor parts (legs, arms)
if (_hit in USEC_MinorWounds) then {
    if (_type == 3) then {
        if (_hit == "legs") then {
            [_unit,_hit,(_damage / 6)] call object_processHit;
        } else {
            [_unit,_hit,(_damage / 4)] call object_processHit;
        };
    } else {
        if (_falling) then {
			private ["_nrj2", "_gravity"];

            _gravity = 9.81 min (2*(Dayz_freefall select 1)/((0.00001 + (Dayz_freefall select 2))^2));
            _nrj2 = _gravity * (Dayz_freefall select 1);
            if (random(_nrj2 / (5 * 9.81)) > 0.5) then { // freefall from 5m => 1/2 chance to get hit legs registered
                diag_log[__FILE__, "Legs damage registered from freefall, damage:",_damage,"gravity:", _gravity,"height:", (Dayz_freefall select 1), "blood loss", (_nrj2 * 25) ];
                [_unit,_hit,_damage] call object_processHit;
            } else {
                [_unit,"arms",(_damage / 6)] call object_processHit; // prevent broken arms due to arma bugs
            };
            if (_nrj2 > 30) then {
                (3 min (_nrj2/100)) call fnc_usec_bulletHit; // red flash
                r_player_blood = 0 max (r_player_blood - (_nrj2 * 25));
            };
        } else {
			[_unit,_hit,(_damage / 2)] call object_processHit;
        };
	};
};

if (_type == 1) then {
    /*
        BALISTIC DAMAGE
    */
    if ((_damage > 0.01) && {_unit == player}) then {
        //affect the player
        [20,45] call fnc_usec_pitchWhine; //Visual , Sound
    };
    if (_damage > 4) then {
        //serious ballistic damage
        if (_unit == player) then {
            [_source,"explosion",_ammo] call player_death;
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
        if (_unit == player) then {
            [_source,"shotheavy"] call player_death;
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

if (_type == 3) then {
    if (!_unconscious && {!_isMinor} && {_isHeadHit}) then {
        _chance = random 1;
        if ((_damage > 0.8) && {_chance < 0.5}) then {
            [_unit,_damage] call fnc_usec_damageUnconscious;
        };
    };
} else {
    if (!_unconscious && {!_isMinor} && {(_damage > 2) || {(_damage > 0.5) && {_isHeadHit}}}) then {
        //set unconsious
        [_unit,_damage] call fnc_usec_damageUnconscious;
    };
};

// all "HandleDamage event" functions should return the effective damage that the engine will record
0
