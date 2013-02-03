private["_position","_doLoiter","_unitTypes","_isNoone","_loot","_array","_agent","_type","_radius","_method","_nearByPlayer","_attempt","_myDest","_newDest","_lootType"];
_position = 	_this select 0;
_maxZombies = _this select 1;

_totalzeds = dayz_spawnZombies;

diag_log ("totalzeds" +str"_totalzeds");
_unitTypes = 	[]+ getArray (configFile >> "CfgBuildingLoot" >> "Default" >> "zombieClass");
_doLoiter = 	true;

_loot = 	"";
_array = 	[];
_agent = 	objNull;

_type = _unitTypes call BIS_fnc_selectRandom;

diag_log ("Wild Loaded");

//Create the Group and populate it
//diag_log ("Spawned: " + _type);
_radius = 40;
_method = "NONE";

_nearByPlayer = ({isPlayer _x} count (_position nearEntities ["CAManBase",30])) > 0;

if (_nearByPlayer) then { 
	_position = [_position,55,100,10,0,0,0] call BIS_fnc_findSafePos;
};
_agent = createAgent [_type, _position, [], _radius, _method];

if (_doLoiter) then {
	//_agent setPosATL _position;
	//_agent setVariable ["doLoiter",true,true];
	_agent setDir round(random 180);
};


dayz_spawnZombies = dayz_spawnZombies + 1;

if (random 1 > 0.7) then {
	_agent setUnitPos "Middle";
};

//diag_log ("CREATED: "  + str(_agent));


if (isNull _agent) exitWith {
	dayz_spawnZombies = dayz_spawnZombies - 1;
};

_isAlive = alive _agent;

_myDest = getPosATL _agent;
_newDest = getPosATL _agent;
_agent setVariable ["myDest",_myDest];
_agent setVariable ["newDest",_newDest];

//Add some loot
_rnd = random 1;
if (_rnd > 0.3) then {
	_lootType = 		configFile >> "CfgVehicles" >> _type >> "zombieLoot";
	if (isText _lootType) then {
		_array = []+ getArray (configFile >> "cfgLoot" >> getText(_lootType));
		if (count _array > 0) then {
			_loot = _array call BIS_fnc_selectRandomWeighted;
			if(!isNil "_array") then {
				_agent addMagazine _loot;
			};
		};
	};
};

//Start behavior
_id = [_position,_agent] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";

diag_log ("Wild Ended");