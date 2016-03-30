//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
private ["_handled"];
//Init
	//[unit, firer, distance, weapon, muzzle, mode, ammo]
	_unit = _this select 0;
	_firer = _this select 1;
	_distance = _this select 2;
	_weapon = _this select 3;
	_ammo = _this select 6;
	//_killerID = _firer getVariable["MemberID",0];

	_handled = false;
	_arc = 60;
	_isBallistic = (getNumber (configfile >> "CfgAmmo" >> _ammo >> "whistleOnFire") > 0);
	_dmgDistance = getNumber (configfile >> "CfgAmmo" >> _ammo >> "whistleDist");
	_isRocket = ((_ammo isKindOf "RocketBase") && (_firer isKindOf "Man"));
	_isPlayer = (_unit == player);
	_inVehicle = (vehicle _unit != _unit);
	//_evType = "";
	//_recordable = false;

	// Both the firer and those nearby (<=8m) go into "combat" to prevent ALT-F4
	//diag_log ("DEBUG: AMMO TYPE: " +str(_ammo));
	_firer setVariable["startcombattimer", 1];
	if (_distance <= 8) then {
		_unit setVariable["startcombattimer", 1];
	};

	if (_inVehicle) exitWith {};
	if (_firer == player) exitWith {};

	//Is in danger angle?
	_turretDir = _firer weaponDirection _weapon;
	_weaponDir = ((_turretDir select 0) atan2 (_turretDir select 1));
	_pos1 = getPosATL _unit;
	_pos2 = getPosATL _firer;
	_facing = ((_pos1 select 0) - (_pos2 select 0)) atan2 ((_pos1 select 1) - (_pos2 select 1));
	_firingArc = (_weaponDir - _facing);
	_firingArc = (-_firingArc) max (_firingArc);

	//In front?
	_isInFront = (_firingArc < _arc);
	_isInRear = (_firingArc > (180 - _arc));

	//Ballistic Handler
	if ((_isBallistic && _isInFront) && (_distance < (_dmgDistance * 2))) then {
		if (_distance < _dmgDistance) then {
			//Will Cause Damage
			1 call fnc_usec_bulletHit;
			[20,45] call fnc_usec_pitchWhine; //Visual , Sound
			if (_distance < ((_dmgDistance / 2) + 1)) then {
					//serious ballistic damage
					if (_isPlayer) then {
						[_unit, "head_hit", 1.51, _firer, _ammo] call fnc_usec_damageHandler;
						// head damage > 1.5 ---> log + death
					};

					[_unit,4] call fnc_usec_damageUnconscious;
			} else {
				//Just Knocked out
				[_unit,0.5] call fnc_usec_damageUnconscious;
			};
		} else {
			//Hit warn zone
			if (_unit == player) then {
				[10,20] call fnc_usec_pitchWhine; //Visual , Sound
				addCamShake [15, 0.8, 25];
			};
		};
	} else {
		if (_isRocket && (_isInFront or _isInRear)) then {
			if ((_distance < 5) && !_handled) then {
				1 call fnc_usec_bulletHit;
				[20,45] call fnc_usec_pitchWhine; //Visual , Sound
				// Dead
				if (_isPlayer) then {
					[_unit, "head_hit", 1.51, _firer, _ammo] call fnc_usec_damageHandler;
					// head damage > 1.5 ---> log + death
				};
				[_unit,2] call fnc_usec_damageUnconscious;
			};
			if ((_distance < 10) && !_handled) then {
				[10,20] call fnc_usec_pitchWhine; //Visual , Sound
				// Unconscious
				[_unit,0.2] call fnc_usec_damageUnconscious;
			};
			if ((_distance < 20) && !_handled && _isPlayer) then {
				// Warn
				[10,20] call fnc_usec_pitchWhine; //Visual , Sound
				addCamShake [15, 0.8, 25];
			};
		};
	};
	//Launcher Handler
