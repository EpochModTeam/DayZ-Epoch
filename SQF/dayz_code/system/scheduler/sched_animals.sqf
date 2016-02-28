// refactored by facoptere@gmail.com  for DayZ mod.
#include "scheduler.hpp"

sched_animals = {
	HIDE_FSM_VARS
	private ["_min","_count","_global","_obj","_x","_animalssupported","_type","_root","_favouritezones","_angle","_radius","_randrefpoint","_PosList","_Pos","_agent","_pos", "_vehicle", "_speed", "_i"];
	_min = diag_fpsmin;
	_vehicle = vehicle player;
	_count = 0;
	_global = 0;
	{
		_obj = agent _x;
		if (_obj isKindOf "CAAnimalBase") then {
			if (local _obj) then {
				/*if !(_obj setVariable [ "", false ]) then { // animal has been transfered, there is no fsm
					private [ "_stance", "_phase", "_dir", "_posagt" ];
					_stance = animationState _obj;
					_phase = _obj animationPhase _stance;
					_dir = direction _obj;
					_posagt = visiblePosition _obj;
					_obj = createAgent [typeOf _obj, _posagt, [], 0, "CAN_COLLIDE"]; 
					_obj animate [_stance, _phase];
					_obj setDir _dir;
					_obj setPosATL _posagt;
					[_posagt,_obj] execFSM "\z\addons\dayz_code\system\animal_agent.fsm";
					_obj setVariable [ "", true ];					
				};*/
				if ((_vehicle distance _obj > dayz_animalDistance*1.33) AND {(0 == {((isplayer _x) AND {(_x != player)}) AND {((alive _x) AND {((vehicle _x) distance _obj < 150)})}} count playableUnits)}) then {
					// delete animal
					deleteVehicle _obj;
					_global = _global - 1;
//					diag_log format [ "%2: delete %1", _obj, __FILE__ ];
				}
				else {
					_count = _count + 1;
				};
			};
			_global = _global + 1;
		};
	} forEach agents;

	_speed = velocity _vehicle;
	if (_speed distance [0,0,0] > 12) exitWith {objNull};
	if ((_vehicle != player) AND {((count crew _vehicle > 1) AND {(driver _vehicle != player)})}) exitWith {objNull};

	//diag_log [ dayz_maxGlobalAnimals / (1 max count playableUnits), ceil(1.2*(dayz_maxGlobalAnimals - _global) / (1 max count playableUnits)) min (dayz_maxAnimals - _count), _global,dayz_maxAnimals, _count, dayz_maxGlobalAnimals, _global ];
	for "_x" from 0 max (2 min (ceil(1.5*(dayz_maxGlobalAnimals - _global) / (1 max count playableUnits)) min (dayz_maxAnimals - _count))) to 1 step -1 do {
		_animalssupported = ["hen","hen","hen","Cow","Sheep","WildBoar","WildBoar","WildBoar","Goat","Rabbit","Rabbit"];
		_type = _animalssupported select floor random count _animalssupported;
		if (_type == "Cow") then {
			_animalssupported = ["Cow01","Cow02","Cow03","Cow04"];
			_type = _animalssupported select floor random count _animalssupported;
		};
		_root = configFile >> "CfgVehicles" >> _type;
		_favouritezones = getText ( _root >> "favouritezones");
		_angle = (random 120) - 60;
		_radius = 0 max ((dayz_animalDistance - 200)/2); 
		_randrefpoint = (vehicle player) modelToWorld[sin(_angle) * (200 + _radius) , cos(_angle) * (200 + _radius), 0];
		_randrefpoint = [ (_randrefpoint select 0) + 5*(_speed select 0),  (_randrefpoint select 1) + 5*(_speed select 1), 0];
		for "_i" from 1 to 10 do {
			_PosList = selectbestplaces [_randrefpoint, _radius, _favouritezones, 10, 5];
			if (count _PosList > 0) then { 
				_Pos = (_PosList select 0) select 0;
				if ((!surfaceIsWater _Pos) AND {(0 == {alive _x} count (_Pos nearEntities [ AllPlayers, 200 ]))}) then {
					_agent = createAgent [_type, _Pos, [], 0, "FORM"];
					[_pos,_agent] execFSM "\z\addons\dayz_code\system\animal_agent.fsm";
					_agent setVariable [ "", true ];
					_count = _count + 1;
					_global = _global + 1;
//					diag_log format [ "%4: added %1 at %2, %5m from player (favourite level: %3)", _type, _Pos, 
//						(_PosList select 0) select 1, __FILE__, round(_Pos distance player) ];
					_i = 11;//break
				};
			};
		};
	};
//	diag_log format [ "%1: update animals. local: %5, global: %6    fps: %2 -> %3%4",__FILE__, _min, diag_fpsmin,if (diag_fpsmin < 10) then {"!! <<<<<<<<<<<<<<<<<<<"} else {""}, _count, _global ];
	objNull
};