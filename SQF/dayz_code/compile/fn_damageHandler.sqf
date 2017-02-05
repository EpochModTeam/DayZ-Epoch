scriptName "Functions\misc\fn_damageHandler.sqf";

/***********************************************************
    PROCESS DAMAGE TO A UNIT
    - Function
    - [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_HitBy","_end","_unit","_hit","_damage","_unconscious","_source","_ammo","_Viralzed","_isMinor","_isHeadHit","_isPlayer","_isBandit","_punishment","_humanityHit","_myKills","_wpst","_sourceDist","_sourceWeap","_scale","_type","_nrj","_rndPain","_hitPain","_wound","_isHit","_isbleeding","_rndBleed","_hitBleed","_isInjured","_lowBlood","_rndInfection","_hitInfection","_isCardiac","_chance","_falling","_model","_isZombieHit","_sourceType","_sourceVehicleType","_isMan","_isVehicle","_isLocal"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_ammo = _this select 4;
//diag_log format["HandleDamage: Unit:%1 Hit:%2 Damage:%3 Source:%4 Ammo:%5",_unit,_hit,_damage,_source,_ammo];
_unconscious = _unit getVariable ["NORRN_unconscious", false];
_model = typeOf player;
_sourceType = typeOf _source;
_sourceVehicleType = typeOf (vehicle _source);
_Viralzed = _sourceType in DayZ_ViralZeds;
_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
_isZombieHit = _ammo == "zombie";
_isLocal = local _source;

_falling = (((_hit == "legs") AND {(_source==_unit)}) AND {((_ammo=="") AND {(Dayz_freefall select 1 > 3)})});

//Simple hack to help with a few issues from direct damage to physic based damage. ***until 2.0***
	if (isNull dayz_getout) then {
		_vehicleArray = nearestObjects [(getPosATL (vehicle _unit)),["Car","Air","Motorcycle","Ship","Tank"],3];
		{if (typeOf _x == "ParachuteWest") then {_vehicleArray = _vehicleArray - [_x];};} count _vehicleArray;
		{
			if ((speed _x > 10) or (speed _x < -8)) exitwith { dayz_HitBy = _x; };
		} count _vehicleArray;
	};

	//Lets see if the player has been struck by a moving vehicle.
	if (!isNull dayz_HitBy && vehicle player == player) then { _ammo = "RunOver"; };
	if ((_hit == "Legs") AND {(_ammo == "RunOver")}) then { dayz_HitBy = objNull; };

	//If a vehicle is moveing faster then 15 lets register some kind of direct damage rather then relying on indirect/physics damage.
	if (!isNull dayz_getout && diag_tickTime - dayz_getoutTime < 5) then { _ammo = "Dragged"; };
	if ((_hit == "Legs") AND {(_ammo == "Dragged")}) then { dayz_getout = objNull; };

	_end = false;

	if (!_falling) then {
		if (_ammo == "" && _hit == "" && vehicle player != player) then {_ammo = "Crash";};
		//No _ammo type exit, indirect/physics damage.
		if (_ammo == "") exitwith { _end = true; };
		
		//If _source contains no object exit. But lets not exit if the unit returns player. Maybe its his own fault.
		if (isNull _source && !(_ammo in ["Dragged","RunOver"])) then {
			_vehicleArray = nearestObjects [(getPosATL (vehicle _unit)),["Car","Air","Motorcycle","Ship","Tank","TrapTripwireGrenade"],25];
			{if (typeOf _x == "ParachuteWest") then {_vehicleArray = _vehicleArray - [_x];};} count _vehicleArray;
			//Don't exit if a drivable vehicle (or drivable vehicle wreck) is nearby, because vehicle explosions register as a null source
			if (count _vehicleArray == 0) then {
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

if (_unit == player) then {
//Set player in combat
	_unit setVariable["startcombattimer", 1];
	if !(_unit getVariable["inCombat",false]) then {
		_unit setVariable["inCombat",true,true];
	};

    if (_hit == "" && _ammo != "Crash") exitWith //Ignore none part dmg. Exit after processing humanity hit. Don't punish driver for damaging passenger in crash
	{
        if (!_isLocal && _isPlayer && alive player && !_isPZombie) then //Do not punish for shooting a player zombie
		{
			_isBandit = (player getVariable["humanity",0]) <= -5000;
			//_isBandit = (_model in ["Bandit1_DZ","BanditW1_DZ"]);
			
			//if player is not free to shoot at inform server that _source shot at player
			if (!_isBandit && !(player getVariable ["OpenTarget",false])) then
			{
				PVDZ_send = [(effectiveCommander vehicle _source),"OpenTarget",[]];
				publicVariableServer "PVDZ_send";
			};

			// Due to server errors or desync killing someone in a bandit skin with >-2000 humanity CAN occur. 
            // Attacker should not be punished for killing a Bandit skin under any circumstances. 
            // To prevent this we check for Bandit Skin. 

			// - Accidental Murder - \\  When wearing the garb of a non-civilian you are taking your life in your own hands
			// Attackers humanity should not be punished for killing a survivor who has shrouded his identity in military garb.

            _punishment = (_isBandit or {player getVariable ["OpenTarget",false]});
            _humanityHit = 0;

            if (!_punishment && {(dayz_lastHumanityChange + 3) < diag_tickTime}) then {
				dayz_lastHumanityChange = diag_tickTime;
                _myKills =  200 - ((player getVariable ["humanKills",0]) * 3.3);
                // how many non bandit players have I (the shot/damaged player) killed?
                // punish my killer 200 for shooting a surivor
                // but subtract 50 for each survivor I've murdered
                _humanityHit = -(_myKills * _damage);
                    if (_humanityHit < -800) then {
                        _humanityHit = -800;
                    };
                    // In the case of outrageous damage (crashes, explosions, desync repeated headshots); cap the limit on humanity lost. 

                [(effectiveCommander vehicle _source),_humanityHit] spawn {  
                    private ["_source","_humanityHit"];
                    _source = _this select 0;
                    _humanityHit = _this select 1;
                    PVDZ_send = [_source,"Humanity",[_humanityHit,30]];
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
				[_unit,0.01] call fnc_usec_damageUnconscious;
				_unit setVariable ["NORRN_unconscious", true, true];
				r_player_timeout = 20 + round(random 60);
				r_player_unconscious = true;
				player setVariable["medForceUpdate",true,true];
				player setVariable ["unconsciousTime", r_player_timeout, true];
			};
		};
		
		if (_damage > 0.4) then {
			//Melee knockout system
			if ((_isHeadHit) && (_ammo in ["Crowbar_Swing_Ammo","Bat_Swing_Ammo","Sledge_Swing_Ammo"])) then {
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
	
	//(vehicle _source != _source) does not work to detect if source unit is in a vehicle in HandleDamage EH
	_isVehicle = ({_sourceVehicleType isKindOf _x} count ["LandVehicle","Air","Ship"] > 0);

	//Log to server. Useful for detecting damage and ammo cheats.
	if (DZE_ServerLogHits && {!_isLocal} && {!_isZombieHit} && {_isMan or _isVehicle} && {diag_ticktime-(_source getVariable["lastloghit",0]) > 2}) then {
		_wpst = weaponState _source;
		_source setVariable ["lastloghit",diag_ticktime];
		_sourceDist = round(_unit distance _source);
		_sourceWeap = switch (true) do {
			case (_ammo in ["PipeBomb","Mine","MineE"]): { format["with %1",_ammo] };
			case (_isVehicle) : { format ["in %1",getText(configFile >> "CfgVehicles" >> _sourceVehicleType >> "displayName")] };
			case (_ammo in MeleeAmmo) : { format ["with %2%1",_wpst select 0, if (_sourceDist>6) then {"suspicious weapon "} else {""}] };
			case (_wpst select 0 == "Throw") : { format ["with %1 thrown", _wpst select 3] };
			case (["Horn", currentWeapon _source] call fnc_inString) : {"with suspicious vehicle "+str((getposATL _source) nearEntities [["Air", "LandVehicle", "Ship"],5])};
			case ((_wpst select 0 == "") AND {_wpst select 4 == 0}) : { format ["with %1/%2 suspicious", primaryWeapon _source, _ammo] };
			case (_wpst select 0 != "") : { format ["with %1/%2 <ammo left:%3>", _wpst select 0, _ammo, _wpst select 4] };
			default { "with suspicious weapon" };
		};
		
		//Damage values over 999,999 will kick for PV value restriction (e+). These should not be possible for legitimate players.
		PVDZ_sec_atp = [_unit, _source, toArray _sourceWeap, _sourceDist, _hit, str _damage]; //Send arbitrary string as array to allow stricter publicVariableVal.txt filter
		publicVariableServer "PVDZ_sec_atp";
    };
	
	dayz_lastDamageSource = switch (true) do {
		case (_falling): {"fall"};
		case (_isZombieHit): {"zombie"};
		case (_ammo == "Crash"): {"crash"};
		case (_ammo == "RunOver"): {"runover"};
		case (_ammo == "Dragged"): {"eject"};
		case (_ammo in MeleeAmmo): {"melee"};
		case (!_isLocal && {(_isMan && !(currentWeapon _source in ["","Throw"])) or _isVehicle}): {"shot"};
		default {"none"};
	};
	if (dayz_lastDamageSource != "none") then {dayz_lastDamageTime = diag_tickTime;};
};

//Ignore none part dmg. Exit after processing humanity hit
if (_hit == "" && _ammo != "Crash") exitWith { 0 };

//Ammo Type Setup
_type = switch true do {
    case ({_ammo isKindOf _x} count ["Grenade","ShellBase","TimeBombCore","BombCore","MissileCore","RocketCore","FuelExplosion","GrenadeBase"] > 0): { 1 };
	case ((_ammo isKindof "B_127x107_Ball") or (_ammo isKindof "B_127x99_Ball")):  { 2 };
	case (_isZombieHit): { 3 };
	case (_ammo == "RunOver"): { 4 };
	case (_ammo == "Dragged"): { 5 };
	case (_ammo == "Crash"): { 6 };
    default { 0 };
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

//Pure base blood damage
_scale = 200;

if (_damage > 0.4) then {    
	//Scale damage based on headhits.
    if (_isHeadHit) then {
        _scale = _scale * 2; //700 = Normal, 900 = Viral, 500 = wild
    };
    
    //End body part scale
	//???????????
    if (!(player == _source) && (_isPlayer or (_isMan && !_isZombieHit))) then { //Scale shots from AI units the same as shots from players
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
    switch (_type) do {
	//Explosions
        case 1: {_scale = _scale + 300};
	//Bullet types
        case 2: {_scale = _scale + 150};
	//Zombies
		case 3: {_scale = getNumber (configFile >> "CfgVehicles" >> _sourceType >> "damageScale"); if (dayz_DamageMultiplier > 1) then {_scale = _scale * dayz_DamageMultiplier;};};
	//RunOver
		case 4: {_scale = _scale - 50}; //Based on 12k blood for run over with SUV at 70km/h
	//Dragged
		case 5: {_scale = 25};
	//Crash
		case 6: {_scale = 400};
    };
	
	//Display some info in the players log file.
    if (_unit == player) then {
		diag_log format["DAMAGE: player hit by %1 in %2 with %3 for %4 scaled to %5, Conscious %6",_sourceVehicleType,_hit,_ammo,(str(_damage)),(str(_damage * _scale)),(str (!_unconscious))];
        r_player_blood = r_player_blood - (_damage * _scale);
 	
	//Pain and Infection
        _rndPain =      floor(random 10);
        _hitPain =      (_rndPain < _damage);
        
        if ((_isHeadHit) or (_hitPain)) then {
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
    _isScratched = false;
    
	_rndBleed = floor(random 100);
    _rndBleedChance = getNumber (configFile >> "CfgVehicles" >> _sourceType >> "BleedChance");
    _hitBleed = (_rndBleed < _rndBleedChance);

    if (_hitBleed) then {
		_isbleeding = true;
    };

    if (_type == 3) then {
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
                if (_type == 3) then {
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
        if (!_isHit && !_isPZombie) then {
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
		
		//Stop process hit running twice. its set aboue in the if else statement.
		//[_unit,_hit,(_damage / 2)] call object_processHit;
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

