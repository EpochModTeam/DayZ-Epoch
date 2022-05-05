//[unit, firer, distance, weapon, muzzle, mode, ammo]	
local _unit = _this select 0;
local _firer = _this select 1;

local _distance = _this select 2;	
local _weapon = _this select 3;
local _ammo = _this select 6;

local _handled = false;
local _arc = 60;
local _isBallistic = (getNumber (configfile >> "CfgAmmo" >> _ammo >> "whistleOnFire") > 0);
local _dmgDistance = getNumber (configfile >> "CfgAmmo" >> _ammo >> "whistleDist");
local _isRocket = ((_ammo isKindOf "RocketBase") && (_firer isKindOf "CAManBase"));
local _isPlayer = (_unit == player);
local _inVehicle = (vehicle _unit != _unit);

// Both the firer and those nearby (<=8m) go into "combat" to prevent ALT-F4
//diag_log ("DEBUG: AMMO TYPE: " +str(_ammo));
if (!(_ammo isKindOf "LitObject") && !(_ammo isKindOf "ThrownObjects")) then {
	// Fired eventhandler handles the combat of the firer
	if (_distance <= 8) then {
		[player,true] call fnc_setCombat;
	};
};

if (_inVehicle) exitWith {};
if (_firer == player) exitWith {};

//Is in danger angle?
local _turretDir = _firer weaponDirection _weapon;
local _weaponDir = ((_turretDir select 0) atan2 (_turretDir select 1));
local _pos1 = getPosATL _unit;
local _pos2 = getPosATL _firer;
local _facing = ((_pos1 select 0) - (_pos2 select 0)) atan2 ((_pos1 select 1) - (_pos2 select 1));
local _firingArc = (_weaponDir - _facing);
local _firingArc = (-_firingArc) max (_firingArc);

//In front?
local _isInFront = (_firingArc < _arc);
local _isInRear = (_firingArc > (180 - _arc));

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