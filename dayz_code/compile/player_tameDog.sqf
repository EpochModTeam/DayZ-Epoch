private["_target", "_caller", "_id", "_params", "_pos"];
_target = 	_this select 0;
_caller = 	_this select 1;
_id =		_this select 2;
_params =	_this select 3;
_pos = 		position _target;

deleteVehicle (_this select 0);
_dog = (group player) createUnit [format["DZ_%1", typeOf _target], _pos, [], 0, "FORM"];
_dog disableAI "FSM";
_fsmid = [_dog, (count units group _caller)] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
_fsmid setFSMVariable ["_handle", _fsmid];
_target removeAction _id;

//handle publicVariables here later.
