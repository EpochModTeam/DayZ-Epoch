private ["_target","_id","_pos","_dog","_fsmid","_hasMeat","_hasdog","_meat"];
_target = 	_this select 0;
//_caller = 	_this select 1;
_id =		_this select 2;
//_params =	_this select 3;
_pos = 		[_target] call FNC_GetPos;

_hasMeat = false;
{
	if (_x in Dayz_meatraw) exitWith {
		_hasMeat = true;
		_meat = _x;
	};
} count (magazines player);
_hasdog = player getVariable ["dogid", "false"];

if (_hasMeat && (_hasdog == "false")) then {
	player removeMagazine _meat;
	deleteVehicle (_this select 0);
	_dog = (group player) createUnit [typeOf _target, _pos, [], 0, "FORM"];

	_dog disableAI "FSM";
	_fsmid = [_dog, typeOf _target] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
	_fsmid setFSMVariable ["_handle", _fsmid];
	_target removeAction _id;
    player setVariable ["dogid", _fsmid];
} else {
	localize "str_epoch_player_18" call dayz_rollingMessages;
};

//handle publicVariables here later.
