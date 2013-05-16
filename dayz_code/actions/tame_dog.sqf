/*
	File: tame_dog.sqf 1.1
	Author: Kane "Alby" Stone
	Edited by: [VB]AWOL

	Description:
	Allows a player to tame/domesticate a dog.
	Script is applied to object via addAction.
		
	Variables:
	_target = Object that action is attached too.
	_caller = Object that activates the action.
	_id = ID of the action handler.
	_dog = Intended target of the script.
*/

private["_target", "_caller", "_id", "_dog", "_pos", "_fsmid"];
_target = 	_this select 0;
_caller = 	_this select 1;
_id =		_this select 2;
_dog =		_this select 3;

// expanded to allow all meats as input
_removed = 0;
_itemIn = "FoodmeatRaw";
_countIn = 1;
_selected = "";

{					
	if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
		_removed = _removed + ([player,_x] call BIS_fnc_invRemove);
	};
	if(_removed == 1) exitWith { _selected = _x; };	
} forEach magazines player;

// Only proceed if removed count matches
if(_removed == _countIn) then {

	// get name of item removed
	_textRemoved = getText(configFile >> "CfgMagazines" >> _selected >> "displayName");
	
	// add failure rate based on skill level variable (days alive) 
	_chanceToFail = ((random 1 + (dayz_skilllevel/100)) > 0.5);
	
	if(!_chanceToFail) then { 
		
		_animalID = _dog getVariable "fsm_handle";
		_animalID setFSMVariable ["_isTamed", true];
		sleep 1;
		diag_log format["DEBUG: %1, id: %2 [%3]",_dog,_animalID,completedFSM _animalID];
		if (!moveToCompleted _dog) then {
			_dog moveTo (position _dog);
		};
		_dog disableAI "FSM";
		(group _dog) setBehaviour "AWARE";
		_fsmid = [_dog, typeOf _dog] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
		_fsmid setFSMVariable ["_handle", _fsmid];
		player setVariable ["dogID", _fsmid];
		_dog setVariable ["fsm_handle", _fsmid];
		_dog setVariable ["playerUID", dayz_playerUID, true];

		cutText [format["Dog consumed %1, and is now tamed.",_textRemoved], "PLAIN DOWN"];
	} else {
		cutText [format["Dog consumed %1, yet remains untamed.",_textRemoved], "PLAIN DOWN"];
	};
};
