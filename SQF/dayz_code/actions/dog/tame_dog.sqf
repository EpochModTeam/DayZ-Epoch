/*
	File: tame_dog.sqf 1.1
	Author: Kane "Alby" Stone
	Expanded to allow all meats as input by: [VB]AWOL - DayZ Epoch

	Description: Allows a player to tame/domesticate a dog. Script is applied to object via addAction.
		
	Variables:
	_target = Object that action is attached too.
	_caller = Object that activates the action.
	_id = ID of the action handler.
	_dog = Intended target of the script.
*/

private ["_target","_caller","_id","_dog","_fsmid","_textRemoved","_chanceToFail","_meat","_hasMeat"];
//_target = 	_this select 0;
//_caller = 	_this select 1;
//_id =		_this select 2;
_dog =		_this select 3;

_hasMeat = false;
{
	if (_x in Dayz_meatraw) exitWith {
		_hasMeat = true;
		_meat = _x;
	};
} count (magazines player);

if (_hasMeat) then {
	player removeMagazine _meat;
	_textRemoved = getText(configFile >> "CfgMagazines" >> _meat >> "displayName");

	// add failure rate based on skill level variable (days alive) 
	_chanceToFail = (((random 1) + (dayz_Survived/100)) > 0.5);

	if (!_chanceToFail) then {
		if (!moveToCompleted _dog) then {
			_dog moveTo ([_dog] call FNC_GetPos);
		};
		_dog disableAI "FSM";
		(group _dog) setBehaviour "AWARE";
		_fsmid = [_dog, typeOf _dog] execFSM "\z\addons\dayz_code\system\dog_agent.fsm";
		_fsmid setFSMVariable ["_handle", _fsmid];
		_fsmid setFSMVariable ["_isTamed", true];
		player setVariable ["dogID", _fsmid];
		
		if (DZE_permanentPlot) then {
			_dog setVariable ["ownerPUID", dayz_playerUID, true];
		} else {
			_dog setVariable ["CharacterID", dayz_characterID, true];
		};

		format[localize "str_epoch_player_173",_textRemoved] call dayz_rollingMessages;
	} else {
		format[localize "str_epoch_player_174",_textRemoved] call dayz_rollingMessages;
	};
};