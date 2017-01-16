private ["_position","_doLoiter","_unitTypes","_array","_agent","_type","_radius","_method","_rndx","_rndy","_counter","_amount","_wildsdone"];
_unitTypes = _this select 0;
_amount = _this select 1;
//_doLoiter = true;
_wildsdone = true;
_counter = 0;

while {_counter < _amount} do {
	//_loot = 	"";
	//_array = 	[];
	_agent = 	objNull;
	_type = _unitTypes call BIS_fnc_selectRandom;

	//Create the Group and populate it
	//diag_log ("Spawned: " + _type);
	//_radius = 0;
	_method = "CAN_COLLIDE";
	
	_position = [getMarkerPos "center",1,6500,1] call fn_selectRandomLocation;
	
	//Create Zed
	_agent = createAgent [_type, _position, [], 1, _method];
	//Set Random Direction
	_agent setDir floor(random 360);
	//Loiter State
	_agent setVariable ["doLoiter",true]; //Might not be used.
	//Zed stance
	if (random 1 > 0.7) then {
		_agent setUnitPos "Middle";
	};
	//Set home location to loiter around
	_position = getPosATL _agent;
	_agent setVariable ["homePos",_position,true];
	//Store _agentobject
	_agent setVariable["agentObject",_agent,true];
	
	//add to counter
	_counter = _counter + 1;
	
	//Start behavior
	//_id = [_agent] execFSM "\z\AddOns\dayz_code\system\zombie_wildagent.fsm";
	//_agent setVariable [ "fsmid", _id ];
	
	//Disable all zed systems
	_agent enableSimulation false;

	//diag_log format ["CREATE WILD: Active: %1, Waiting: %2",_counter,(_amount - _counter)]
};

_wildsdone