#include "\z\addons\dayz_code\loot\Loot.hpp"

private ["_bypass","_position","_unitTypes","_radius","_method","_agent","_maxlocalspawned","_doLoiter","_wildspawns","_maxControlledZombies",
"_cantSee","_isOk","_zPos","__FILE__","_fov","_safeDistance","_farDistance","_xasl","_eye","_ed","_deg","_skipFOV","_wildSpawns","_tooClose",
"_type","_loot","_array","_rnd","_lootType","_index","_weights","_loot_count","_favStance","_lootGroup"];

_position = _this select 0;
_doLoiter = _this select 1; // wonder around
_unitTypes = _this select 2; // class of wanted models
//_wildspawns = _this select 3;
_bypass = _this select 3;

_maxlocalspawned = round(dayz_spawnZombies);
//Lets check if we need to divide the amount of zeds
if (r_player_divideinvehicle > 0) then {
	_maxlocalspawned = round(dayz_spawnZombies / r_player_divideinvehicle);
};

_maxControlledZombies = round(dayz_maxLocalZombies);

_cantSee = {
	private "_isOk";

	_isOk = true;
	_zPos = +(_this select 0);
	if (count _zPos < 3) exitWith {
		diag_log format["%1::_cantSee illegal pos %2", __FILE__, _zPos];
		false
	};
	_zPos = ATLtoASL _zPos;
	_fov = _this select 1; // players half field of view
	_safeDistance = _this select 2; // minimum distance. closer is wrong
	_farDistance = _this select 3; // distance further we won't check
	_zPos set [2, (_zPos select 2) + 1.7];
	{
		_xasl = getPosASL _x;
		if (_xasl distance _zPos < _farDistance) then {
			if (_xasl distance _zPos < _safeDistance) then {
				_isOk = false;
			} else {
				_eye = eyePos _x; // ASL
				_ed = eyeDirection _x;
				_ed = (_ed select 0) atan2 (_ed select 1);
				_deg = [_xasl, _zPos] call BIS_fnc_dirTo;
				_deg = (_deg - _ed + 720) % 360;
				if (_deg > 180) then { _deg = _deg - 360; };
				if ((abs(_deg) < _fov) && {( // in right angle sector?
						(!(terrainIntersectASL [_zPos, _eye]) // no terrain between?
						&& {(!(lineIntersects [_zPos, _eye]))}) // and no object between?
					)}) then {
					_isOk = false;
				};
			};
		};
		if (!_isOk) exitWith {false};
	uiSleep 0.001;
	} forEach playableUnits;

	_isOk
};

_skipFOV = false;

if ((_maxlocalspawned < _maxControlledZombies) && (dayz_CurrentNearByZombies < dayz_maxNearByZombies) && (dayz_currentGlobalZombies < dayz_maxGlobalZeds)) then {
	if (_bypass) then {  
		_skipFOV = true;
		_position = [_position,3,20,1] call fn_selectRandomLocation;
	};

	if (surfaceIsWater _position) exitWith { diag_log "Location is in Water Abort"; };

	if ((_skipFOV) or {([_position, 15, 10, 70] call _cantSee)}) then {
		_tooClose = {isPlayer _x} count (_position nearEntities ["CAManBase",30]) > 0;
		if (_tooClose) exitwith { diag_log "Zombie_Generate: was too close to player."; };
		
		if (count _unitTypes == 0) then {
			_unitTypes = getArray (missionConfigFile >> "CfgLoot" >> "Buildings" >> "Default" >> "zombieClass");
		};
		
		// lets create an agent
		_type = _unitTypes call BIS_fnc_selectRandom;
		_radius = 5;
		//_method = if (_doLoiter) then {"CAN_COLLIDE"} else {"NONE"};
		_agent = createAgent [_type, _position, [], _radius, "CAN_COLLIDE"]; 
		uiSleep 0.03;
		
		//add to global counter 
		dayz_spawnZombies = dayz_spawnZombies + 1;
		dayz_CurrentNearByZombies = dayz_CurrentNearByZombies + 1;
		dayz_currentGlobalZombies = dayz_currentGlobalZombies + 1;
		
		//Add some loot
		if (0.3 > random 1) then {
			_lootGroup = configFile >> "CfgVehicles" >> _type >> "zombieLoot";
			if (isText _lootGroup) then {
				//_lootGroup = dayz_lootGroups find getText (_lootGroup);
				_lootGroup = Loot_GetGroup(getText _lootGroup);
				//[_agent, _lootGroup, 1] call loot_insert;
				Loot_Insert(_agent, _lootGroup, 1);
			};
		};
		
		_agent setVariable["agentObject",_agent];

		if (!isNull _agent) then {
			_agent setDir random 360;
			uiSleep 0.03;
			_position = getPosATL _agent;

			_favStance = (
				switch ceil(random(3^0.5)^2) do {
					//case 3: {"DOWN"}; // prone
					case 2: {"middle"}; // Kneel "middle"
					default {"Up"}; // stand-up
				}
			);
			_agent setUnitPos _favStance;
			_agent setVariable ["stance", _favStance];
			_agent setVariable ["BaseLocation", _position];
			_agent setVariable ["doLoiter", _doLoiter]; // true: Z will be wandering, false: stay still
		};
	};
};
