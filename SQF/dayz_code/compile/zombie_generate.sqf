#include "\z\addons\dayz_code\loot\Loot.hpp"

private ["_isWreck","_position","_unitTypes","_agent","_doLoiter","_type","_favStance","_lootGroup"];

_position = _this select 0;
_doLoiter = _this select 1; // wander around
_unitTypes = _this select 2; // class of wanted models
_isWreck = _this select 3;

if (surfaceIsWater _position) exitWith { diag_log "Zombie_Generate: Location is in Water Abort"; };

if (([_position, 30, 10, 200] call fnc_fieldOfView) || _isWreck) then {

	if (count _unitTypes == 0) then {
		_unitTypes = getArray (missionConfigFile >> "CfgLoot" >> "Buildings" >> "Default" >> "zombieClass");
	};

	// Create zombie
	_type = _unitTypes call BIS_fnc_selectRandom;
	_agent = createAgent [_type, _position, [], 0, "CAN_COLLIDE"];
	_agent setDir (random 360);
	_agent setPosATL _position;
	_favStance = ["Up","middle"] select (ceil(random 3) == 2);
	_agent setUnitPos _favStance;
	_agent setVariable ["stance", _favStance];
	_agent setVariable ["doLoiter", _doLoiter]; // true: Z will be wandering, false: stay still

	// Add to global counters
	dayz_spawnZombies = dayz_spawnZombies + 1;
	dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;
	dayz_currentGlobalZombies = dayz_currentGlobalZombies + 1;

	//Add some loot
	if (0.3 > random 1) then {
		_lootGroup = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
		if (isText _lootGroup) then {
			_lootGroup = Loot_GetGroup(getText _lootGroup);
			Loot_Insert(_agent, _lootGroup, 1);
		};
	};
};
