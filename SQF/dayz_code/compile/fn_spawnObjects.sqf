/*
	Spawns objects from compact array format.
	
	Notes for global spawned objects:
	- Recommend running on server machine only.
	- Always present global objects use the most resources. Damage and other updates about them are regularly sent over the network.
	
	Notes for local spawned objects:
	- Always present local objects are more performant than global, but less performant than town generator (spawning locally only when player is nearby)
	- Recommend running on every machine including the server, so all units know about the object and vehicles parked on top are not affected.
	- Recommend running unscheduled before player_monitor.fsm and server_monitor.sqf, so units and vehicles spawned on top do not fall through.
	- Not recommended for destructible or removable objects. Damage and deleted status are not synced across machines.
	- Not recommended for objects with animations (like gates). Anim status is not synced across machines.
	
	Params:
	[
		[
			["ObjectType1", [position], dir],
			["ObjectType2", [position], dir],
			["ObjectType3", [position], dir]
		],
		false, // Block damage
		false, // Use setPosATL instead of setPos
		true // Spawn objects locally
	] call fnc_spawnObjects;
*/

private ["_atl","_blockDamage","_fires","_local","_object","_objects","_type"];

_objects = _this select 0;
_blockDamage = _this select 1;
_atl = _this select 2;
_local = _this select 3;

_fires = [
	"Base_Fire_DZ",
	"flamable_DZ",
	"Land_Camp_Fire_DZ",
	"Land_Campfire",
	"Land_Campfire_burning",
	"Land_Fire",
	"Land_Fire_burning",
	"Land_Fire_DZ",
	"Land_Fire_barrel",
	"Land_Fire_barrel_burning",
	"Misc_TyreHeap"
];

{
	_type = _x select 0;
	
	if (_local) then {
		_object = _type createVehicleLocal [0,0,0];
		_object setVariable ["",true,false]; // stops global setVariable by sched_townGenerator, checked in player_spawnCheck for loot spawn
	} else {
		_object = _type createVehicle [0,0,0];
	};
	
	_object setDir (_x select 2);	
	if (_atl) then {
		_object setPosATL (_x select 1);
	} else {
		_object setPos (_x select 1);
	};
	
	if (_blockDamage) then {
		_object addEventHandler ["HandleDamage",{0}];
		if !(_type in _fires) then {_object enableSimulation false;};
	};
} forEach _objects;