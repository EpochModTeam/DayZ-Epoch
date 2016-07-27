scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************

    Modifyed by Alby

    PROCESS DAMAGE TO A UNIT
    - Function
    - [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_unit","_hit","_damage","_unconscious","_source","_ammo","_Viralzed","_isMinor","_isHeadHit","_isPlayer","_isBandit","_punishment","_humanityHit","_myKills","_wpst","_sourceDist","_sourceWeap","_scale","_type","_nrj","_rndPain","_hitPain","_wound","_isHit","_isbleeding","_rndBleed","_hitBleed","_isInjured","_lowBlood","_rndInfection","_hitInfection","_isCardiac","_chance","_breakaleg","_model","_isZombieHit"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_unconscious = _unit getVariable ["NORRN_unconscious", false];
_source = _this select 3;
_isPZombie = player isKindOf "PZombie_VB";
_ammo = _this select 4;
_isZombieHit = (_ammo == "zombie");
_model = typeOf player;
_Viralzed = typeOf _source in DayZ_ViralZeds;
_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
_isPlayer = (isPlayer _source);

// anti-hack for local explosions (HelicopterExploSmall, HelicopterExploBig, SmallSecondary...) spawned by hackers
//diag_log [ diag_ticktime, __FILE__, _this];
_breakaleg = (((_hit == "legs") AND {(_source==_unit)}) AND {((_ammo=="") AND {(Dayz_freefall select 1 > 3)})}) /*AND {(abs(time - (Dayz_freefall select 0))<1)}*/;
if ( (!_breakaleg) AND {(((isNull _source) OR {(_unit == _source)}) AND {((_ammo == "") OR {({damage _x > 0.9} count((getposATL vehicle _unit) nearEntities [["Air", "LandVehicle", "Ship"],15]) == 0) AND (count nearestObjects [getPosATL vehicle _unit, ["TrapItems"], 30] == 0)})})}) exitWith {0};

if (_unit == player) then
{
    if (_hit == "") then
	{
        if ((_source != player) and _isPlayer && alive player) then
		{
			_isBandit = (player getVariable["humanity",0]) <= -5000;
			//_isBandit = (_model in ["Bandit1_DZ","BanditW1_DZ"]);
			
			//if player is not free to shoot at inform server that _source shot at player
			if (!_isBandit && !(player getVariable ["OpenTarget",false])) then
			{
				PVDZ_send = [_source,"OpenTarget",[]];
				publicVariableServer "PVDZ_send";
			};

			// Due to server errors or desync killing someone in a bandit skin with >-2000 humanity CAN occur. 
            // Attacker should not be punished for killing a Bandit skin under any circumstances. 
            // To prevent this we check for Bandit Skin. 

			// - Accidental Murder - \\  When wearing the garb of a non-civilian you are taking your life in your own hands
			// Attackers humanity should not be punished for killing a survivor who has shrouded his identity in military garb.

            _punishment = 
				((_isBandit || 
				{player getVariable ["OpenTarget",false]}) &&
				{!_isPZombie});
            _humanityHit = 0;

            if (!_punishment && {(DayZ_LastHumanityChange + 3) < diag_tickTime}) then {
				DayZ_LastHumanityChange = diag_tickTime;
                _myKills =  200 - (((player getVariable ["humanKills",0]) / 3) * 150);
                // how many non bandit players have I (the shot/damaged player) killed?
                // punish my killer 200 for shooting a surivor
                // but subtract 50 for each survivor I've murdered
                _humanityHit = -(_myKills * _damage);
                    if (_humanityHit < -800) then {
                        _humanityHit = -800;
                    };
                    // In the case of outrageous damage (crashes, explosions, desync repeated headshots); cap the limit on humanity lost. 

                [_source,_humanityHit] spawn { 
                    private ["_source","_humanityHit"];
                    _source = _this select 0;
                    _humanityHit = _this select 1;
                    PVDZ_send = [_source,"Humanity",[_source,_humanityHit,30]];
                    publicVariableServer "PVDZ_send";
                };
            };
        };
    };
    
	if ((vehicle player == player) and (!_unconscious)) then {
		if (_ammo == "tranquiliser_bolt") then {
			[_unit] spawn {
				private ["_unit"];
				_unit = _this select 0;
				localize "str_player_tranquilized" call dayz_rollingMessages; 
				//systemChat format ["YOU HAVE BEEN TRANQUILISED"];
				//uiSleep 2;
				// 0 fadeSound 0.05;
				//uiSleep 5;
				[_unit,0.01] call fnc_usec_damageUnconscious;
				_unit setVariable ["NORRN_unconscious", true, true];
				r_player_timeout = round(random 60);
				r_player_unconscious = true;
				player setVariable["medForceUpdate",true,true];
				player setVariable ["unconsciousTime", r_player_timeout, true];
			};
		};
		
		if (_damage > 0.4) then {
			//Melee knockout system
			if ((_isHeadHit) and (_ammo in ["Crowbar_Swing_Ammo","Bat_Swing_Ammo","Sledge_Swing_Ammo"])) then {
				[_unit] spawn {
					 _unit = _this select 0;
					localize "str_actions_medical_knocked_out" call dayz_rollingMessages; 
					[_unit,0.01] call fnc_usec_damageUnconscious;
					_unit setVariable ["NORRN_unconscious", true, true];
					r_player_timeout = 20 + round(random 60);
					r_player_unconscious = true;
					player setVariable["medForceUpdate",true,true];
					player setVariable ["unconsciousTime", r_player_timeout, true];
				};
			};
		};
	};
  

    //Log to server :-( OverProcessing really not needed.
    if (((!(isNil {_source})) AND {(!(isNull _source))}) AND {((_source isKindOf "CAManBase") AND {(!local _source )})}) then {
        if (diag_ticktime-(_source getVariable ["lastloghit",0])>2) then {
            private ["_sourceWeap"];
            _source setVariable ["lastloghit",diag_ticktime];
            _wpst = weaponState _source;

            _sourceDist = round(_unit distance _source);
            _sourceWeap = switch (true) do {
                case ((vehicle _source) != _source) : { format ["in %1",getText(configFile >> "CfgVehicles" >> (typeOf (vehicle _source)) >> "displayName")] };
                case (_isZombieHit) : { _ammo };
                case (_wpst select 0 == "Throw") : { format ["with %1 thrown", _wpst select 3] };
                case (["Horn", currentWeapon _source] call fnc_inString) : {"with suspicious vehicle "+str((getposATL _source) nearEntities [["Air", "LandVehicle", "Ship"],5])};
                case (["Melee", _wpst select 0] call fnc_inString) : { format ["with %2%1",_wpst select 0, if (_sourceDist>6) then {"suspicious weapon "} else {""}] }; 
                case ((_wpst select 0 == "") AND {(_wpst select 4 == 0)}) : { format ["with %1/%2 suspicious", primaryWeapon _source, _ammo] };
                case (_wpst select 0 != "") : { format ["with %1/%2 <ammo left:%3>", _wpst select 0, _ammo, _wpst select 4] };
                default { "with suspicious weapon" };
            };
            if (!_isZombieHit) then { // don't log any zombie wounds, even from remote zombies
                PVDZ_sec_atp = [_unit, _source, _sourceWeap, _sourceDist];
                publicVariableServer "PVDZ_sec_atp";
            };
        };
    };
};

//Pure blood damage
_scale = 200;
_type = 0;
if ((_ammo isKindof "Grenade") or (_ammo isKindof "ShellBase") or (_ammo isKindof "TimeBombCore") or (_ammo isKindof "BombCore") or (_ammo isKindof "MissileCore") or (_ammo isKindof "RocketCore") or (_ammo isKindof "FuelExplosion") or (_ammo isKindof "GrenadeBase")) then {
    _type = 1;
};
if ((_ammo isKindof "B_127x107_Ball") or (_ammo isKindof "B_127x99_Ball")) then {
    _type = 2;
};

if (_damage > 0.4) then {
    if (!_isZombieHit) then {
        _scale = _scale + 50; //250
    };
    //Start body part scale
    if (_isZombieHit) then {
        //_scale = _scale * 3; //600 = Normal, 900 = Viral
        _scale = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "damageScale");
		if (dayz_DamageMultiplier > 1) then {
			_scale = _scale * dayz_DamageMultiplier;
		};
        //diag_log format["%1, DamageScale: %2",__FILE__,_scaleNew];
    };
    
    if (_isHeadHit) then {
        _scale = _scale * 2; //700 = Normal, 900 = Viral, 500 = wild
    };
    
    //End body part scale
    if ((isPlayer _source) and !(player == _source)) then {
        _scale = _scale + 800;
        if (_isHeadHit) then {
            _scale = _scale + 500;
        };
    };
    switch (_type) do {
        case 1: {_scale = _scale + 200};
        case 2: {_scale = _scale + 200};
    };
    if (_unit == player) then {
        //diag_log ("DAMAGE: player hit by " + (typeOf _source) + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale) + " Conscious " + str (!_unconscious));
		diag_log format["DAMAGE: player hit by %1 in %2 with %3 for %4 scaled to %5, Conscious %6",(typeOf _source),_hit,if (_ammo == "") then { "" } else { _ammo },(str(_damage)),(str(_damage * _scale)),(str (!_unconscious))];
        r_player_blood = r_player_blood - (_damage * _scale);
    };
};


//Record Damage to Minor parts (legs, arms)
if (_hit in USEC_MinorWounds) then {
    private ["_type"];
    if (_isZombieHit) then {
        if (_hit == "legs") then {
            [_unit,_hit,(_damage / 6)] call object_processHit;
        } else {
            [_unit,_hit,(_damage / 4)] call object_processHit;
        };
    } else {
        if (_breakaleg) then {
            _nrj = ((Dayz_freefall select 1)*20) / 100;
            _gravity = 9.81 min (2*(Dayz_freefall select 1)/((0.00001 + (Dayz_freefall select 2))^2));
            _nrj2 = _gravity * (Dayz_freefall select 1);
            //diag_log [ "handler freefall", _nrj, _nrj2, Dayz_freefall];
            if (random(_nrj2 / (5 * 9.81)) > 0.5) then { // freefall from 5m => 1/2 chance to get hit legs registered
                    diag_log[__FILE__, "Legs damage registered from freefall, damage:",_damage,"gravity:", _gravity, 
                        "height:", (Dayz_freefall select 1), "blood loss", (_nrj2 * 25) ];
                    [_unit,_hit,_damage] call object_processHit;
            } else {
                    [_unit,"arms",(_damage / 6)] call object_processHit; // prevent broken legs due to arma bugs
            };
            if (_nrj2 > 30) then {
                (3 min (_nrj2/100)) call fnc_usec_bulletHit; // red flash
                r_player_blood = 0 max (r_player_blood - (_nrj2 * 25));
            };
        } else {
            [_unit,_hit,(_damage / 2)] call object_processHit;
        };
		[_unit,_hit,(_damage / 2)] call object_processHit;
	};
};

if (_unit == player) then {
//Set player in combat
    _unit setVariable["startcombattimer", 1];
	_unit setVariable["inCombat", 1, true];
};

//Shake the cam, frighten them!
if (_damage > 0.1) then {
    if (_unit == player) then {
        //player sidechat format["Processed bullet hit for %1 (should only be for me!)",_unit];
        1 call fnc_usec_bulletHit;
    };
    if (local _unit) then {
        _unit setVariable["medForceUpdate",true,true];
    };
};

if (_damage > 0.4) then {
    //Pain and Infection
    if (_unit == player) then {
        _rndPain =      floor(random 10);
        _hitPain =      (_rndPain < _damage);
        
        if ((_isHeadHit) or (_damage > 1.2 and _hitPain)) then {
            _hitPain = true;
        };
        
        if (_hitPain) then {
            r_player_inpain = true;
            player setVariable["USEC_inPain",true,true];
        };
        
        if ((_damage > 1.5) and _isHeadHit) then {
            if (_isZombieHit) then {_id = [_source,"shothead",1] spawn player_death;} else {_id = [_source,"shothead"] spawn player_death;};
        };
    };

    //Create wound and cause bleed
    _wound = _hit call fnc_usec_damageGetWound;
    _isHit = _unit getVariable["hit_"+_wound,false];
    
    _isbleeding = false;
    _isScratched = false;
    switch true do {
        default {
            _rndBleed = floor(random 100);
            _rndBleedChance = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "BleedChance");
            _hitBleed = (_rndBleed < _rndBleedChance);

            if (_hitBleed) then {
                _isbleeding = true;
            };
        };
    };

    if (_isZombieHit) then {
    
        if (!_isHit && _isbleeding && !_isPZombie) then {
            //Create Wound
            _unit setVariable["hit_"+_wound,true,true];
            
            PVDZ_hlt_Bleed = [_unit,_wound,_damage];
            publicVariable "PVDZ_hlt_Bleed";   // draw blood stream on character, on all gameclients
            
            [_unit,_wound,_hit] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally
            
            //Set Injured if not already
            _isInjured = _unit getVariable["USEC_injured",false];
            
            if (!_isInjured) then {
                _unit setVariable["USEC_injured",true,true];
                if ((_unit == player) and (!_isZombieHit)) then {
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
            if ((!r_player_infected) and !(r_player_Sepsis select 0)) then {
                if (_isZombieHit) then {
                    _rndSepsis = floor(random 100);
                    _sepsisChance = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "sepsisChance");
                    //_hitInfection = (_rndInfection < _infectionChance);

                    if (_rndSepsis < _sepsisChance) then {
                        r_player_Sepsis = [true, diag_tickTime];
                        player setVariable["USEC_Sepsis",true,true];
                    };
                };
            };
        };
    } else {
        if(!_isHit && !_isPZombie) then {
            //Create Wound
            _unit setVariable["hit_"+_wound,true,true];
            PVDZ_hlt_Bleed = [_unit,_wound,_damage];
            publicVariable "PVDZ_hlt_Bleed";  // draw blood stream on character, on all gameclients
            [_unit,_wound,_hit] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally
            //Set Injured if not already
            _isInjured = _unit getVariable["USEC_injured",false];
            if (!_isInjured) then {
                _unit setVariable["USEC_injured",true,true];
                if ((_unit == player) and (!_isZombieHit)) then {
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

if (_type == 1) then {
    /*
        BALISTIC DAMAGE
    */
    if ((_damage > 0.01) and (_unit == player)) then {
        //affect the player
        [20,45] call fnc_usec_pitchWhine; //Visual , Sound
    };
    if (_damage > 4) then {
        //serious ballistic damage
        if (_unit == player) then {
            _id = [_source,"explosion"] spawn player_death;
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
            _id = [_source,"shotheavy"] spawn player_death;
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

if (_isZombieHit) then {
    if (!_unconscious and !_isMinor and _isHeadHit) then {
        _chance = random 1;
        if ((_damage > 0.8) and (_chance < 0.5)) then {
            [_unit,_damage] call fnc_usec_damageUnconscious;
        };
    };
} else {
    if (!_unconscious and !_isMinor and ((_damage > 2) or ((_damage > 0.5) and _isHeadHit))) then {
        //set unconsious
        [_unit,_damage] call fnc_usec_damageUnconscious;
    };
};

// all "HandleDamage event" functions should return the effective damage that the engine will record
0

