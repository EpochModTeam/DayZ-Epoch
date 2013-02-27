/*
delete object from db with extra waiting by [VB]AWOL
parameters: _obj
*/
private ["_obj","_objectID","_objectUID","_started","_finished","_animState","_isMedic","_isOk","_proceed","_counter","_limit","_id","_objType"];
_obj = _this select 3;
_objectID 	= _obj getVariable ["ObjectID","0"];
_objectUID	= _obj getVariable ["ObjectUID","0"];

_isOk = true;
_proceed = false;
_objType = typeOf _obj;
_limit = 5;

switch(true)do{ 
	case (_objType == "WoodGate_DZ"): { 
		_limit = 5;
	}; 
	case (_objType == "Land_HBarrier1_DZ"): { 
		_limit = 20;
	}; 
	case (_objType == "Sandbag1_DZ"): { 
		_limit = 10;
	}; 
	case (_objType == "Hedgehog_DZ"): { 
		_limit = 10;
	}; 
}; 


cutText [format["Starting de-construction of %1.",_objType], "PLAIN DOWN"];

// Alert zombies once.
_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;

// Start de-construction loop
_counter = 0;
while {_isOk} do {

	player playActionNow "Medic";
	_dis=20;
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;

	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
			_sfx = "repair";
			[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
		
	};

	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};

	if(_finished) then {
		_counter = _counter + 1;
	};

	cutText [format["De-constructing %1 stage %2 of %3 walk away at anytime to cancel.",_objType, _counter,_limit], "PLAIN DOWN"];

	if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};
	
};

// Remove only if player waited
if (_proceed) then {
	cutText [format["De-constructing %1.",_objType], "PLAIN DOWN"];
	
	//["dayzDeleteObj",[_objectID,_objectUID]] call callRpcProcedure;
	dayzDeleteObj = [_objectID,_objectUID];
	publicVariableServer "dayzDeleteObj";

	deleteVehicle _obj;
} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
};