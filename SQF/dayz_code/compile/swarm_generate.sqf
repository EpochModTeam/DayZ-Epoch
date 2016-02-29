private["_position","_doLoiter","_unitTypes","_isNoone","_loot","_array","_agent","_type","_radius","_method","_nearByPlayer","_attempt","_myDest","_newDest","_lootType"];
_player = _this select 0;
_amount = _this select 1;

_counter = 0;
_agent = objNull;


while {_counter < _amount} do {

	//Create the Group and populate it
	_type = "swarm_newBase"; //"_unitTypes call BIS_fnc_selectRandom;
	//_type = "Pastor";
	_position = [position _player,50,100,0] call fn_selectRandomLocation;

	_agent = createAgent [_type, _position, [], 0, "NONE"];

	_agent setVariable["agentObjectSwarm",_agent,true];
	_agent setUnitPos "Middle";

	dayz_swarmSpawnZombies = dayz_swarmSpawnZombies + 1;
	dayz_spawnZombies = dayz_spawnZombies + 1;

	if (isNull _agent) exitWith {
		dayz_spawnZombies = dayz_spawnZombies - 1;
		dayz_swarmSpawnZombies = dayz_swarmSpawnZombies - 1;
	};

	_isAlive = alive _agent;

	//counter
	_counter = _counter + 1;

	//debug
	//diag_log (format["Agent: %1, Type: %2,To spawn: %3/%4",_agent,_type,_amount,_counter]);
	
	//Move
	//[_agent, _position] call zombie_loiter;

	//Start behavior
	_id = [_position,_agent,player] execFSM "\z\AddOns\dayz_code\system\fn_swarmagent.fsm";
};