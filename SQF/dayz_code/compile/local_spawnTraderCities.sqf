private ["_fires","_object","_type"];

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
	_object = _type createVehicleLocal (_x select 1);
	_object setDir (_x select 2);
	_object setPos (_x select 1);
	_object allowDamage false;
	if !(_type in _fires) then {_object enableSimulation false;};
	_object setVariable ["", true]; // stops global setVariable by sched_townGenerator
} count _this;