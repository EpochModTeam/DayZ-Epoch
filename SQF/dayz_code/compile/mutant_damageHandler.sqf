//[unit, selectionName, damage, source, projectile]
//will only run when local to the created object
//record any key hits to the required selection

local _mutant = _this select 0;
local _selection = _this select 1;
local _damage = _this select 2;
local _hitter = _this select 3;
local _projectile = _this select 4;

if (_projectile in MeleeAmmo) then {
	_damage = _damage * 5;
};

if (local _mutant) then {
	if (_damage > 1 && _projectile != "") then {	
		//diag_log format["0: %1, 1: %2, 2: %3, 3: %4, 4: %5",_mutant,_selection,_damage,_hitter,_projectile];	
		
		if (_projectile isKindOf "Bolt") then {
			local _damageOrg = _hitter getVariable["firedDamage",0]; //_unit getVariable["firedSelection",_selection];
			if (_damageOrg < _damage) then {
				_hitter setVariable["firedHit",[_mutant,_selection],true];
				_hitter setVariable["firedDamage",_damage,true];
			};
		};
	};
};

// all "HandleDamage event" functions should return the effective damage that the engine will record
_damage