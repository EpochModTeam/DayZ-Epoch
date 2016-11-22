/*
	Spawns objects locally for improved performance. 
	- Recommend running on every machine including the server, so all units know about the object.
	- Recommend running early during initialization, so units spawned on top do not fall through.
	- Not recommended for destructible or removable objects. Damage and deleted status are not synced across machines.
	- Not recommended for objects with animations (like gates). Anim status is not synced across machines.
	
	Params:
	[[
		["ObjectType1", [position], dir],
		["ObjectType2", [position], dir],
		["ObjectType3", [position], dir]
	],true] call local_spawnObjects;
*/

private ["_blockDamage","_fires","_object","_objects","_type"];

_objects = _this select 0;
_blockDamage = _this select 1;

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
	_object = _type createVehicleLocal [0,0,0];
	_object setDir (_x select 2);
	_object setPos (_x select 1);
	_object setVariable ["",true,false]; // stops global setVariable by sched_townGenerator, checked in player_spawnCheck for loot spawn
	if (_blockDamage) then {
		_object addEventHandler ["HandleDamage",{0}];
		if !(_type in _fires) then {_object enableSimulation false;};
	};
} forEach _objects;