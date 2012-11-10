private["_target", "_caller", "_id", "_params", "_pos"];
_target = 	_this select 0;
_caller = 	_this select 1;
_id =		_this select 2;
_params =	_this select 3;
_pos = 		position _target;
_hasRawMeat = "FoodSteakRaw" in magazines player;
_hasdog = player getVariable ["dogid", "false"];

if ((_hasRawMeat) && (_hasdog == "false")) then {
	player removeMagazine "FoodSteakRaw";
	deleteVehicle (_this select 0);
	_dog = (group player) createUnit [typeOf _target, _pos, [], 0, "FORM"];
	player setvariable ["dogid", _fsmid];
	_dog disableAI "FSM";
	_fsmid = [_dog, typeOf _target] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
	_fsmid setFSMVariable ["_handle", _fsmid];
	_target removeAction _id;
} else {
	cutText ["You must have RawMeat", "PLAIN DOWN"];
};

//handle publicVariables here later.
