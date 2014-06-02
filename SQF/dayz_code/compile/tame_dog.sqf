/*
	File: tame_dog.sqf
	Author: Kane "Alby" Stone

	Description:
	Allows a player to tame/domesticate a dog.
	Script is applied to object via addAction.
		
	Variables:
	_target = Object that action is attached too.
	_caller = Object that activates the action.
	_id = ID of the action handler.
	_dog = Intended target of the script.
*/

private ["_target","_caller","_id","_dog","_fsmid","_animalID"];
_target = 	_this select 0;
_caller = 	_this select 1;
_id =		_this select 2;
_dog =		_this select 3;

player removeMagazine "FoodSteakRaw";
_animalID = _dog getVariable "fsm_handle";
_animalID setFSMVariable ["_isTamed", true];
sleep 1;
// diag_log format["DEBUG: %1, id: %2 [%3]",_dog,_animalID,completedFSM _animalID];
if (!moveToCompleted _dog) then {
	_dog moveTo ([_dog] call FNC_GetPos);
};
_dog disableAI "FSM";
(group _dog) setBehaviour "AWARE";
_fsmid = [_dog, typeOf _dog] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
_fsmid setFSMVariable ["_handle", _fsmid];
player setVariable ["dogID", _fsmid];
_dog setVariable ["fsm_handle", _fsmid];
_dog setVariable ["CharacterID", dayz_characterID, true];