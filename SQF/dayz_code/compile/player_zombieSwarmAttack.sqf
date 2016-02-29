private["_unit","_targets","_move","_damage","_wound","_sound","_local","_dir","_hpList","_hp","_strH","_dam","_total","_result","_vehicle","_tPos","_zPos","_cantSee","_inAngle"];
_unit = _this select 0;
_wound = _this select 1;
_vehicle = (vehicle player);

//_targets = _unit getVariable ["targets",[]];
//if (!(_vehicle in _targets)) exitWith {};

//Do the attack
_move = "ZombieStandingAttack1";
_rnd = 0;

_rnd = round(random 9) + 1;
_move = "ZombieStandingAttack" + str(_rnd);

_dir = [_unit,player] call BIS_Fnc_dirTo;
_unit setDir _dir;

[objNull,  _unit,  rPlayMove,  _move] call RE;

//Wait
sleep 0.3;

if (_vehicle != player) then {
	_hpList = 	_vehicle call vehicle_getHitpoints;
	_hp = 		_hpList call BIS_fnc_selectRandom;
	_wound = 	getText(configFile >> "cfgVehicles" >> (typeOf _vehicle) >> "HitPoints" >> _hp >> "name");
	_damage = 	random 0.03;
	_chance =	round(random 12);

	if ((_chance % 4) == 0) then {
		_openVehicles = ["ATV_Base_EP1", "Motorcycle", "Bicycle"];
		{
			if (_vehicle isKindOf _x) exitWith {
				player action ["eject", _vehicle];
			};
		} forEach _openVehicles;
	};
	
	[_unit,"hit",0,false] call dayz_zombieSpeak;

	if (_wound IN [ "glass1",  "glass2",  "glass3",  "glass4",  "glass5",  "glass6" ]) then {
		_strH = "hit_" + (_wound);
		_dam = _vehicle getVariable [_strH,0];
		_total = (_dam + _damage);
		
		_woundDamage = _unit getVariable ["hit_"+_wound, 0];
		// we limit how vehicle could be damaged by Z. Above 0.8, the vehicle could explode, which is ridiculous.
		_damage =  (if (_woundDamage < 0.8 OR {(!(_wound IN dayZ_explosiveParts))}) then {0.1} else {0.01});
		// Add damage to vehicle. the "sethit" command will be done by the gameengine for which vehicle is local
		//diag_log(format["%1: Part ""%2"" damaged from vehicle, damage:+%3", __FILE__, _wound, _damage]);
		_total = [_vehicle,  _wound,  _woundDamage + _damage,  _unit,  "zombie", true] call fnc_veh_handleDam;
	};
} else {
	if ((_unit distance player) <= 3) then {
		_tPos = (getPosASL _vehicle);
		_zPos = (getPosASL _unit);
		_inAngle = [_zPos,(getdir _unit),50,_tPos] call fnc_inAngleSector;
		if (_inAngle) then {
			_cantSee = [_unit,_vehicle] call dayz_losCheck;
			if (!_cantSee) then {
				_damage = 0.1 + random (1.2);
				//diag_log ("START DAM: Player Hit on " + _wound + " for " + str(_damage));
				[player, _wound, _damage, _unit,"zombie"] call fnc_usec_damageHandler;
				[_unit,"hit",0,false] call dayz_zombieSpeak;
			};
		};
	};
};
